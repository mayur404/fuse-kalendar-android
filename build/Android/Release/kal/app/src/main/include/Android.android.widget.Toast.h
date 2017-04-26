// This file was generated based on '/usr/local/share/uno/Packages/Android/0.27.4/Android/android/widget/$.uno#102'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Android.Base.Wrappers.IJWrapper.h>
#include <Android.java.lang.Object.h>
#include <jni.h>
#include <Uno.IDisposable.h>
namespace g{namespace Android{namespace android{namespace content{struct Context;}}}}
namespace g{namespace Android{namespace android{namespace widget{struct Toast;}}}}

namespace g{
namespace Android{
namespace android{
namespace widget{

// public sealed extern class Toast :26542
// {
::g::Android::java::lang::Object_type* Toast_typeof();
void Toast___Init2_fn();
void Toast__get_LENGTH_LONG_fn(int* __retval);
void Toast__makeText_fn(::g::Android::android::content::Context* arg0, uObject* arg1, int* arg2, Toast** __retval);
void Toast__makeText_IMPL_26805_fn(uObject* arg0_, uObject* arg1_, int* arg2_, uObject** __retval);
void Toast__show_fn(Toast* __this);
void Toast__show_IMPL_26792_fn(bool* arg0_, jobject* arg1_);

struct Toast : ::g::Android::java::lang::Object
{
    static jclass _javaClass2_;
    static jclass& _javaClass2() { return _javaClass2_; }
    static jfieldID LENGTH_LONG_26790_ID_;
    static jfieldID& LENGTH_LONG_26790_ID() { return LENGTH_LONG_26790_ID_; }
    static jmethodID makeText_26805_ID_;
    static jmethodID& makeText_26805_ID() { return makeText_26805_ID_; }
    static jmethodID show_26792_ID_;
    static jmethodID& show_26792_ID() { return show_26792_ID_; }

    void show();
    static void _Init2();
    static Toast* makeText(::g::Android::android::content::Context* arg0, uObject* arg1, int arg2);
    static uObject* makeText_IMPL_26805(uObject* arg0_, uObject* arg1_, int arg2_);
    static void show_IMPL_26792(bool arg0_, jobject arg1_);
    static int LENGTH_LONG();
};
// }

}}}} // ::g::Android::android::widget
