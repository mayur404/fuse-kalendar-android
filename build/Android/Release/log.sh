#!/bin/sh
# This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.27.15/Targets/Android/log.sh'.
# WARNING: Changes might be lost if you edit this file directly.
ADB_PATH="/usr/local/share/uno/SDKs/AndroidSDK/platform-tools/adb"
$ADB_PATH devices | head -n 2 | tail -n 1 | cut -sf 1 | xargs -I {} $ADB_PATH -s {} logcat -s "Debug","dalvik","error","Error","XliApp","Xli","DEBUG","System.err","BufferQueue","AndroidRuntime","LogSvc","Adreno-ES20","Adreno-EGL","libEGL","BDWGC","art","OpenGLRenderer","HardwareRenderer","kal"
