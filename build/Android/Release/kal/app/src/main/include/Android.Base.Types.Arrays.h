// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.27.15/Targets/Android/Uno/Base/$.uno#4'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Android.Base.JNI.h>
#include <android/log.h>
#include <jni.h>
#include <Uno.h>
#include <XliPlatform/PlatformSpecific/Android.h>
namespace g{namespace Android{namespace Base{namespace Types{struct Arrays;}}}}

namespace g{
namespace Android{
namespace Base{
namespace Types{

// public static extern class Arrays :2489
// {
uClassType* Arrays_typeof();
void Arrays__JavaToUnoByteArray_fn(jobject* arr_, int64_t* len_, uArray** __retval);

struct Arrays : uObject
{
    static uArray* JavaToUnoByteArray(jobject arr_, int64_t len_);
};
// }

}}}} // ::g::Android::Base::Types
