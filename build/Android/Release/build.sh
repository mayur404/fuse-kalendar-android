#!/bin/sh
# This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.27.15/Targets/Android/build.sh'.
# WARNING: Changes might be lost if you edit this file directly.
set -e
cd "`dirname "$0"`/kal/app/src/main"

##if #(JDK.Directory:IsSet)
export JAVA_HOME="/Library/Java/JavaVirtualMachines/1.6.0.jdk/Contents/Home"
##endif
export SUPPORT_JAR="/usr/local/share/uno/SDKs/AndroidSDK/extras/android/support/v4/android-support-v4.jar"

##if #(Ant.Directory:IsSet)
PATH="/usr/local/share/uno/SDKs/Ant/bin:$PATH"
##endif

echo "## 1/2: libkal.so"

if [ -f /proc/cpuinfo ]; then
    JOB_COUNT=`grep processor /proc/cpuinfo | wc -l`
else
    JOB_COUNT=`sysctl hw.ncpu | cut -d " " -f 2`
fi

./makew -s -j $JOB_COUNT "$@"

echo ""
echo "## 2/2: kal.apk"

if [ -e "$SUPPORT_JAR" ]
then
    cp "$SUPPORT_JAR" "./libs/android-support-v4.jar"
else
    echo "ERROR: supportv4.jar was not found. Please run 'fuse install android' in your shell and then restart your build"
    echo "ERROR: expected jar at $SUPPORT_JAR"
    exit 1
fi

if ! which ant > /dev/null 2>&1; then
    echo "ERROR: 'ant' was not found." >&2
    exit 1
fi

ant release

cd "`dirname "$0"`"
ln -sf kal/app/src/main/bin/kal-release.apk kal.apk
