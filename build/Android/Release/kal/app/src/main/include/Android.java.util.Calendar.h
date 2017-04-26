// This file was generated based on '/usr/local/share/uno/Packages/Android/0.27.4/Android/java/util/$.uno#6'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Android.Base.Wrappers.IJWrapper.h>
#include <Android.java.lang.Object.h>
#include <jni.h>
#include <Uno.IDisposable.h>
namespace g{namespace Android{namespace java{namespace lang{struct String;}}}}
namespace g{namespace Android{namespace java{namespace util{struct Calendar;}}}}

namespace g{
namespace Android{
namespace java{
namespace util{

// public abstract extern class Calendar :856
// {
::g::Android::java::lang::Object_type* Calendar_typeof();
void Calendar___Init2_fn();
void Calendar__getInstance_fn(Calendar** __retval);
void Calendar__getInstance_IMPL_37780_fn(uObject** __retval);
void Calendar__getTimeInMillis_fn(Calendar* __this, int64_t* __retval);
void Calendar__getTimeInMillis_IMPL_37789_fn(bool* arg0_, jobject* arg1_, int64_t* __retval);
void Calendar__hashCode1_fn(Calendar* __this, int* __retval);
void Calendar__hashCode_IMPL_37791_fn(bool* arg0_, jobject* arg1_, int* __retval);
void Calendar__set2_fn(Calendar* __this, int* arg0, int* arg1, int* arg2, int* arg3, int* arg4);
void Calendar__set_IMPL_37799_fn(bool* arg0_, jobject* arg1_, int* arg2_, int* arg3_, int* arg4_, int* arg5_, int* arg6_);
void Calendar__toString_fn(Calendar* __this, ::g::Android::java::lang::String** __retval);
void Calendar__toString_IMPL_37807_fn(bool* arg0_, jobject* arg1_, uObject** __retval);

struct Calendar : ::g::Android::java::lang::Object
{
    static jclass _javaClass2_;
    static jclass& _javaClass2() { return _javaClass2_; }
    static jmethodID getInstance_37780_ID_;
    static jmethodID& getInstance_37780_ID() { return getInstance_37780_ID_; }
    static jmethodID getTimeInMillis_37789_ID_;
    static jmethodID& getTimeInMillis_37789_ID() { return getTimeInMillis_37789_ID_; }
    static jmethodID hashCode_37791_ID_;
    static jmethodID& hashCode_37791_ID() { return hashCode_37791_ID_; }
    static jmethodID set_37799_ID_;
    static jmethodID& set_37799_ID() { return set_37799_ID_; }
    static jmethodID toString_37807_ID_;
    static jmethodID& toString_37807_ID() { return toString_37807_ID_; }

    int64_t getTimeInMillis();
    void set2(int arg0, int arg1, int arg2, int arg3, int arg4);
    static void _Init2();
    static Calendar* getInstance();
    static uObject* getInstance_IMPL_37780();
    static int64_t getTimeInMillis_IMPL_37789(bool arg0_, jobject arg1_);
    static int hashCode_IMPL_37791(bool arg0_, jobject arg1_);
    static void set_IMPL_37799(bool arg0_, jobject arg1_, int arg2_, int arg3_, int arg4_, int arg5_, int arg6_);
    static uObject* toString_IMPL_37807(bool arg0_, jobject arg1_);
};
// }

}}}} // ::g::Android::java::util
