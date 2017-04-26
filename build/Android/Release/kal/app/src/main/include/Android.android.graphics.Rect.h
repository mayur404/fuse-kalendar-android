// This file was generated based on '/usr/local/share/uno/Packages/Android/0.27.4/Android/android/graphics/$.uno#68'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Android.Base.Wrappers.IJWrapper.h>
#include <Android.java.lang.Object.h>
#include <jni.h>
#include <Uno.IDisposable.h>
namespace g{namespace Android{namespace android{namespace graphics{struct Rect;}}}}
namespace g{namespace Android{namespace java{namespace lang{struct String;}}}}

namespace g{
namespace Android{
namespace android{
namespace graphics{

// public sealed extern class Rect :10443
// {
::g::Android::java::lang::Object_type* Rect_typeof();
void Rect___Init2_fn();
void Rect__hashCode1_fn(Rect* __this, int* __retval);
void Rect__hashCode_IMPL_7163_fn(bool* arg0_, jobject* arg1_, int* __retval);
void Rect__toString_fn(Rect* __this, ::g::Android::java::lang::String** __retval);
void Rect__toString_IMPL_7164_fn(bool* arg0_, jobject* arg1_, uObject** __retval);

struct Rect : ::g::Android::java::lang::Object
{
    static jclass _javaClass2_;
    static jclass& _javaClass2() { return _javaClass2_; }
    static jmethodID hashCode_7163_ID_;
    static jmethodID& hashCode_7163_ID() { return hashCode_7163_ID_; }
    static jmethodID toString_7164_ID_;
    static jmethodID& toString_7164_ID() { return toString_7164_ID_; }

    static void _Init2();
    static int hashCode_IMPL_7163(bool arg0_, jobject arg1_);
    static uObject* toString_IMPL_7164(bool arg0_, jobject arg1_);
};
// }

}}}} // ::g::Android::android::graphics
