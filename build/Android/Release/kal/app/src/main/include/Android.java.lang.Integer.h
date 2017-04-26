// This file was generated based on '/usr/local/share/uno/Packages/Android/0.27.4/Android/java/lang/$.uno#48'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Android.Base.Wrappers.IJWrapper.h>
#include <Android.java.lang.Object.h>
#include <jni.h>
#include <Uno.IDisposable.h>
namespace g{namespace Android{namespace java{namespace lang{struct Integer;}}}}
namespace g{namespace Android{namespace java{namespace lang{struct String;}}}}

namespace g{
namespace Android{
namespace java{
namespace lang{

// public sealed extern class Integer :11592
// {
::g::Android::java::lang::Object_type* Integer_typeof();
void Integer___Init3_fn();
void Integer__hashCode1_fn(Integer* __this, int* __retval);
void Integer__hashCode_IMPL_31132_fn(bool* arg0_, jobject* arg1_, int* __retval);
void Integer__parseInt_fn(::g::Android::java::lang::String* arg0, int* __retval);
void Integer__parseInt_IMPL_31135_fn(uObject* arg0_, int* __retval);
void Integer__toString_fn(Integer* __this, ::g::Android::java::lang::String** __retval);
void Integer__toString_IMPL_31141_fn(bool* arg0_, jobject* arg1_, uObject** __retval);

struct Integer : ::g::Android::java::lang::Object
{
    static jclass _javaClass3_;
    static jclass& _javaClass3() { return _javaClass3_; }
    static jmethodID hashCode_31132_ID_;
    static jmethodID& hashCode_31132_ID() { return hashCode_31132_ID_; }
    static jmethodID parseInt_31135_ID_;
    static jmethodID& parseInt_31135_ID() { return parseInt_31135_ID_; }
    static jmethodID toString_31141_ID_;
    static jmethodID& toString_31141_ID() { return toString_31141_ID_; }

    static void _Init3();
    static int hashCode_IMPL_31132(bool arg0_, jobject arg1_);
    static int parseInt(::g::Android::java::lang::String* arg0);
    static int parseInt_IMPL_31135(uObject* arg0_);
    static uObject* toString_IMPL_31141(bool arg0_, jobject arg1_);
};
// }

}}}} // ::g::Android::java::lang
