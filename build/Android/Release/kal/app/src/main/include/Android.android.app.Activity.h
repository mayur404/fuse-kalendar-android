// This file was generated based on '/usr/local/share/uno/Packages/Android/0.27.4/Android/android/app/$.uno#6'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Android.android.view.ContextThemeWrapper.h>
#include <Android.Base.Wrappers.IJWrapper.h>
#include <jni.h>
#include <Uno.IDisposable.h>
namespace g{namespace Android{namespace android{namespace app{struct Activity;}}}}
namespace g{namespace Android{namespace android{namespace app{struct Application;}}}}
namespace g{namespace Android{namespace android{namespace content{struct Intent;}}}}
namespace g{namespace Android{namespace java{namespace lang{struct Object;}}}}
namespace g{namespace Android{namespace java{namespace lang{struct String;}}}}

namespace g{
namespace Android{
namespace android{
namespace app{

// public sealed extern class Activity :1266
// {
::g::Android::android::content::Context_type* Activity_typeof();
void Activity__ctor_13_fn(Activity* __this, jobject* obj, uType* utype, bool* hasFallbackClass, bool* resolveType);
void Activity___Init5_fn();
void Activity__GetAppActivity_fn(Activity** __retval);
void Activity__getApplication_fn(Activity* __this, ::g::Android::android::app::Application** __retval);
void Activity__getApplication_IMPL_693_fn(bool* arg0_, jobject* arg1_, uObject** __retval);
void Activity__getSystemService_fn(Activity* __this, ::g::Android::java::lang::String* arg0, ::g::Android::java::lang::Object** __retval);
void Activity__getSystemService_IMPL_847_fn(bool* arg0_, jobject* arg1_, uObject* arg2_, uObject** __retval);
void Activity__New11_fn(jobject* obj, uType* utype, bool* hasFallbackClass, bool* resolveType, Activity** __retval);
void Activity__runOnUiThread_fn(Activity* __this, uObject* arg0);
void Activity__runOnUiThread_IMPL_862_fn(bool* arg0_, jobject* arg1_, uObject* arg2_);
void Activity__startActivity_fn(Activity* __this, ::g::Android::android::content::Intent* arg0);
void Activity__startActivity_IMPL_806_fn(bool* arg0_, jobject* arg1_, uObject* arg2_);

struct Activity : ::g::Android::android::view::ContextThemeWrapper
{
    static jclass _javaClass5_;
    static jclass& _javaClass5() { return _javaClass5_; }
    static jmethodID getApplication_693_ID_;
    static jmethodID& getApplication_693_ID() { return getApplication_693_ID_; }
    static jmethodID getSystemService_847_ID_;
    static jmethodID& getSystemService_847_ID() { return getSystemService_847_ID_; }
    static jmethodID runOnUiThread_862_ID_;
    static jmethodID& runOnUiThread_862_ID() { return runOnUiThread_862_ID_; }
    static jmethodID startActivity_806_ID_;
    static jmethodID& startActivity_806_ID() { return startActivity_806_ID_; }

    void ctor_13(jobject obj, uType* utype, bool hasFallbackClass, bool resolveType);
    ::g::Android::android::app::Application* getApplication();
    void runOnUiThread(uObject* arg0);
    static void _Init5();
    static Activity* GetAppActivity();
    static uObject* getApplication_IMPL_693(bool arg0_, jobject arg1_);
    static uObject* getSystemService_IMPL_847(bool arg0_, jobject arg1_, uObject* arg2_);
    static Activity* New11(jobject obj, uType* utype, bool hasFallbackClass, bool resolveType);
    static void runOnUiThread_IMPL_862(bool arg0_, jobject arg1_, uObject* arg2_);
    static void startActivity_IMPL_806(bool arg0_, jobject arg1_, uObject* arg2_);
};
// }

}}}} // ::g::Android::android::app
