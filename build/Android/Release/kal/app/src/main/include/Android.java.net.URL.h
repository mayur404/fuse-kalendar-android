// This file was generated based on '/usr/local/share/uno/Packages/Android/0.27.4/Android/java/net/$.uno#46'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Android.Base.Wrappers.IJWrapper.h>
#include <Android.java.lang.Object.h>
#include <jni.h>
#include <Uno.IDisposable.h>
namespace g{namespace Android{namespace java{namespace lang{struct String;}}}}
namespace g{namespace Android{namespace java{namespace net{struct URL;}}}}

namespace g{
namespace Android{
namespace java{
namespace net{

// public sealed extern class URL :6914
// {
::g::Android::java::lang::Object_type* URL_typeof();
void URL__ctor_6_fn(URL* __this, ::g::Android::java::lang::String* arg0);
void URL___Init2_fn();
void URL__getContent_fn(URL* __this, ::g::Android::java::lang::Object** __retval);
void URL__getContent_IMPL_32569_fn(bool* arg0_, jobject* arg1_, uObject** __retval);
void URL__hashCode1_fn(URL* __this, int* __retval);
void URL__hashCode_IMPL_32568_fn(bool* arg0_, jobject* arg1_, int* __retval);
void URL__New6_fn(::g::Android::java::lang::String* arg0, URL** __retval);
void URL__toString_fn(URL* __this, ::g::Android::java::lang::String** __retval);
void URL__toString_IMPL_32575_fn(bool* arg0_, jobject* arg1_, uObject** __retval);

struct URL : ::g::Android::java::lang::Object
{
    static jclass _javaClass2_;
    static jclass& _javaClass2() { return _javaClass2_; }
    static jmethodID getContent_32569_ID_;
    static jmethodID& getContent_32569_ID() { return getContent_32569_ID_; }
    static jmethodID hashCode_32568_ID_;
    static jmethodID& hashCode_32568_ID() { return hashCode_32568_ID_; }
    static jmethodID toString_32575_ID_;
    static jmethodID& toString_32575_ID() { return toString_32575_ID_; }
    static jmethodID URL_32558_ID_c_;
    static jmethodID& URL_32558_ID_c() { return URL_32558_ID_c_; }

    void ctor_6(::g::Android::java::lang::String* arg0);
    ::g::Android::java::lang::Object* getContent();
    static void _Init2();
    static uObject* getContent_IMPL_32569(bool arg0_, jobject arg1_);
    static int hashCode_IMPL_32568(bool arg0_, jobject arg1_);
    static URL* New6(::g::Android::java::lang::String* arg0);
    static uObject* toString_IMPL_32575(bool arg0_, jobject arg1_);
};
// }

}}}} // ::g::Android::java::net
