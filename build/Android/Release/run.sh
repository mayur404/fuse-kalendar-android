#!/bin/sh
# This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.27.15/Targets/Android/run.sh'.
# WARNING: Changes might be lost if you edit this file directly.
set -e
cd "`dirname "$0"`"

case $1 in
debug)
    echo "Opening Android Studio"
    open -a"Android Studio" "kal"
    exit $?
    ;;
esac

/Applications/Fuse.app/Contents/Mono/bin/mono /Applications/Fuse.app/Contents/Uno/uno.exe launch-apk "kal.apk" \
    --package=com.littleboat.kalendar \
    --activity=kal \
    --sym-dir="kal/src/main/.uno" \
    "$@"
