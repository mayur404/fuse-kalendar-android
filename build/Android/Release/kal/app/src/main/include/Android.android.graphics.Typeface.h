// This file was generated based on '/usr/local/share/uno/Packages/Android/0.27.4/Android/android/graphics/$.uno#76'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Android.Base.Wrappers.IJWrapper.h>
#include <Android.java.lang.Object.h>
#include <jni.h>
#include <Uno.IDisposable.h>
namespace g{namespace Android{namespace android{namespace graphics{struct Typeface;}}}}

namespace g{
namespace Android{
namespace android{
namespace graphics{

// public sealed extern class Typeface :12170
// {
::g::Android::java::lang::Object_type* Typeface_typeof();
void Typeface___Init2_fn();
void Typeface__get_DEFAULT_fn(Typeface** __retval);
void Typeface__hashCode1_fn(Typeface* __this, int* __retval);
void Typeface__hashCode_IMPL_7333_fn(bool* arg0_, jobject* arg1_, int* __retval);

struct Typeface : ::g::Android::java::lang::Object
{
    static jclass _javaClass2_;
    static jclass& _javaClass2() { return _javaClass2_; }
    static jfieldID DEFAULT_7312_ID_;
    static jfieldID& DEFAULT_7312_ID() { return DEFAULT_7312_ID_; }
    static jmethodID hashCode_7333_ID_;
    static jmethodID& hashCode_7333_ID() { return hashCode_7333_ID_; }

    static void _Init2();
    static int hashCode_IMPL_7333(bool arg0_, jobject arg1_);
    static Typeface* DEFAULT();
};
// }

}}}} // ::g::Android::android::graphics
