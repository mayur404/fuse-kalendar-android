// This file was generated based on '/usr/local/share/uno/Packages/Android/0.27.4/Android/android/test/mock/$.uno#3'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Android.android.content.Context.h>
#include <Android.Base.Wrappers.IJWrapper.h>
#include <jni.h>
#include <Uno.IDisposable.h>
namespace g{namespace Android{namespace android{namespace content{namespace res{struct Resources;}}}}}
namespace g{namespace Android{namespace android{namespace content{struct Intent;}}}}
namespace g{namespace Android{namespace android{namespace test{namespace mock{struct MockContext;}}}}}
namespace g{namespace Android{namespace java{namespace lang{struct Object;}}}}
namespace g{namespace Android{namespace java{namespace lang{struct String;}}}}

namespace g{
namespace Android{
namespace android{
namespace test{
namespace mock{

// public sealed extern class MockContext :320
// {
::g::Android::android::content::Context_type* MockContext_typeof();
void MockContext___Init3_fn();
void MockContext__getResources_fn(MockContext* __this, ::g::Android::android::content::res::Resources** __retval);
void MockContext__getResources_IMPL_18557_fn(bool* arg0_, jobject* arg1_, uObject** __retval);
void MockContext__getSystemService_fn(MockContext* __this, ::g::Android::java::lang::String* arg0, ::g::Android::java::lang::Object** __retval);
void MockContext__getSystemService_IMPL_18620_fn(bool* arg0_, jobject* arg1_, uObject* arg2_, uObject** __retval);
void MockContext__startActivity_fn(MockContext* __this, ::g::Android::android::content::Intent* arg0);
void MockContext__startActivity_IMPL_18593_fn(bool* arg0_, jobject* arg1_, uObject* arg2_);

struct MockContext : ::g::Android::android::content::Context
{
    static jclass _javaClass3_;
    static jclass& _javaClass3() { return _javaClass3_; }
    static jmethodID getResources_18557_ID_;
    static jmethodID& getResources_18557_ID() { return getResources_18557_ID_; }
    static jmethodID getSystemService_18620_ID_;
    static jmethodID& getSystemService_18620_ID() { return getSystemService_18620_ID_; }
    static jmethodID startActivity_18593_ID_;
    static jmethodID& startActivity_18593_ID() { return startActivity_18593_ID_; }

    static void _Init3();
    static uObject* getResources_IMPL_18557(bool arg0_, jobject arg1_);
    static uObject* getSystemService_IMPL_18620(bool arg0_, jobject arg1_, uObject* arg2_);
    static void startActivity_IMPL_18593(bool arg0_, jobject arg1_, uObject* arg2_);
};
// }

}}}}} // ::g::Android::android::test::mock
