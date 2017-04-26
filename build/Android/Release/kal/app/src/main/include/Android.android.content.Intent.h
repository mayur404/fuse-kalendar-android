// This file was generated based on '/usr/local/share/uno/Packages/Android/0.27.4/Android/android/content/$.uno#9'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Android.Base.Wrappers.IJWrapper.h>
#include <Android.java.lang.Object.h>
#include <jni.h>
#include <Uno.IDisposable.h>
namespace g{namespace Android{namespace android{namespace content{struct Intent;}}}}
namespace g{namespace Android{namespace android{namespace net{struct Uri;}}}}
namespace g{namespace Android{namespace java{namespace lang{struct String;}}}}

namespace g{
namespace Android{
namespace android{
namespace content{

// public sealed extern class Intent :4242
// {
::g::Android::java::lang::Object_type* Intent_typeof();
void Intent__ctor_9_fn(Intent* __this, ::g::Android::java::lang::String* arg0);
void Intent___Init2_fn();
void Intent__get_ACTION_CALL_fn(::g::Android::java::lang::String** __retval);
void Intent__get_ACTION_EDIT_fn(::g::Android::java::lang::String** __retval);
void Intent__get_ACTION_SENDTO_fn(::g::Android::java::lang::String** __retval);
void Intent__get_ACTION_VIEW_fn(::g::Android::java::lang::String** __retval);
void Intent__addFlags_fn(Intent* __this, int* arg0, Intent** __retval);
void Intent__addFlags_IMPL_4745_fn(bool* arg0_, jobject* arg1_, int* arg2_, uObject** __retval);
void Intent__get_FLAG_ACTIVITY_NEW_TASK_fn(int* __retval);
void Intent__New9_fn(::g::Android::java::lang::String* arg0, Intent** __retval);
void Intent__putExtra4_fn(Intent* __this, ::g::Android::java::lang::String* arg0, ::g::Android::java::lang::String* arg1, Intent** __retval);
void Intent__putExtra16_fn(Intent* __this, ::g::Android::java::lang::String* arg0, bool* arg1, Intent** __retval);
void Intent__putExtra21_fn(Intent* __this, ::g::Android::java::lang::String* arg0, int64_t* arg1, Intent** __retval);
void Intent__putExtra_IMPL_4711_fn(bool* arg0_, jobject* arg1_, uObject* arg2_, bool* arg3_, uObject** __retval);
void Intent__putExtra_IMPL_4716_fn(bool* arg0_, jobject* arg1_, uObject* arg2_, int64_t* arg3_, uObject** __retval);
void Intent__putExtra_IMPL_4719_fn(bool* arg0_, jobject* arg1_, uObject* arg2_, uObject* arg3_, uObject** __retval);
void Intent__setClassName1_fn(Intent* __this, ::g::Android::java::lang::String* arg0, ::g::Android::java::lang::String* arg1, Intent** __retval);
void Intent__setClassName_IMPL_4749_fn(bool* arg0_, jobject* arg1_, uObject* arg2_, uObject* arg3_, uObject** __retval);
void Intent__setData_fn(Intent* __this, ::g::Android::android::net::Uri* arg0, Intent** __retval);
void Intent__setData_IMPL_4701_fn(bool* arg0_, jobject* arg1_, uObject* arg2_, uObject** __retval);
void Intent__setType_fn(Intent* __this, ::g::Android::java::lang::String* arg0, Intent** __retval);
void Intent__setType_IMPL_4703_fn(bool* arg0_, jobject* arg1_, uObject* arg2_, uObject** __retval);
void Intent__toString_fn(Intent* __this, ::g::Android::java::lang::String** __retval);
void Intent__toString_IMPL_4755_fn(bool* arg0_, jobject* arg1_, uObject** __retval);

struct Intent : ::g::Android::java::lang::Object
{
    static jclass _javaClass2_;
    static jclass& _javaClass2() { return _javaClass2_; }
    static jfieldID ACTION_CALL_4422_ID_;
    static jfieldID& ACTION_CALL_4422_ID() { return ACTION_CALL_4422_ID_; }
    static jfieldID ACTION_EDIT_4411_ID_;
    static jfieldID& ACTION_EDIT_4411_ID() { return ACTION_EDIT_4411_ID_; }
    static jfieldID ACTION_SENDTO_4423_ID_;
    static jfieldID& ACTION_SENDTO_4423_ID() { return ACTION_SENDTO_4423_ID_; }
    static jfieldID ACTION_VIEW_4408_ID_;
    static jfieldID& ACTION_VIEW_4408_ID() { return ACTION_VIEW_4408_ID_; }
    static jmethodID addFlags_4745_ID_;
    static jmethodID& addFlags_4745_ID() { return addFlags_4745_ID_; }
    static jfieldID FLAG_ACTIVITY_NEW_TASK_4606_ID_;
    static jfieldID& FLAG_ACTIVITY_NEW_TASK_4606_ID() { return FLAG_ACTIVITY_NEW_TASK_4606_ID_; }
    static jmethodID Intent_4637_ID_c_;
    static jmethodID& Intent_4637_ID_c() { return Intent_4637_ID_c_; }
    static jmethodID putExtra_4711_ID_;
    static jmethodID& putExtra_4711_ID() { return putExtra_4711_ID_; }
    static jmethodID putExtra_4716_ID_;
    static jmethodID& putExtra_4716_ID() { return putExtra_4716_ID_; }
    static jmethodID putExtra_4719_ID_;
    static jmethodID& putExtra_4719_ID() { return putExtra_4719_ID_; }
    static jmethodID setClassName_4749_ID_;
    static jmethodID& setClassName_4749_ID() { return setClassName_4749_ID_; }
    static jmethodID setData_4701_ID_;
    static jmethodID& setData_4701_ID() { return setData_4701_ID_; }
    static jmethodID setType_4703_ID_;
    static jmethodID& setType_4703_ID() { return setType_4703_ID_; }
    static jmethodID toString_4755_ID_;
    static jmethodID& toString_4755_ID() { return toString_4755_ID_; }

    void ctor_9(::g::Android::java::lang::String* arg0);
    Intent* addFlags(int arg0);
    Intent* putExtra4(::g::Android::java::lang::String* arg0, ::g::Android::java::lang::String* arg1);
    Intent* putExtra16(::g::Android::java::lang::String* arg0, bool arg1);
    Intent* putExtra21(::g::Android::java::lang::String* arg0, int64_t arg1);
    Intent* setClassName1(::g::Android::java::lang::String* arg0, ::g::Android::java::lang::String* arg1);
    Intent* setData(::g::Android::android::net::Uri* arg0);
    Intent* setType(::g::Android::java::lang::String* arg0);
    static void _Init2();
    static uObject* addFlags_IMPL_4745(bool arg0_, jobject arg1_, int arg2_);
    static Intent* New9(::g::Android::java::lang::String* arg0);
    static uObject* putExtra_IMPL_4711(bool arg0_, jobject arg1_, uObject* arg2_, bool arg3_);
    static uObject* putExtra_IMPL_4716(bool arg0_, jobject arg1_, uObject* arg2_, int64_t arg3_);
    static uObject* putExtra_IMPL_4719(bool arg0_, jobject arg1_, uObject* arg2_, uObject* arg3_);
    static uObject* setClassName_IMPL_4749(bool arg0_, jobject arg1_, uObject* arg2_, uObject* arg3_);
    static uObject* setData_IMPL_4701(bool arg0_, jobject arg1_, uObject* arg2_);
    static uObject* setType_IMPL_4703(bool arg0_, jobject arg1_, uObject* arg2_);
    static uObject* toString_IMPL_4755(bool arg0_, jobject arg1_);
    static ::g::Android::java::lang::String* ACTION_CALL();
    static ::g::Android::java::lang::String* ACTION_EDIT();
    static ::g::Android::java::lang::String* ACTION_SENDTO();
    static ::g::Android::java::lang::String* ACTION_VIEW();
    static int FLAG_ACTIVITY_NEW_TASK();
};
// }

}}}} // ::g::Android::android::content
