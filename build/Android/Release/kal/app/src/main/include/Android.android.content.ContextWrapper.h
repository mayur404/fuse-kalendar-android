// This file was generated based on '/usr/local/share/uno/Packages/Android/0.27.4/Android/android/content/$.uno#1'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Android.android.content.Context.h>
#include <Android.Base.Wrappers.IJWrapper.h>
#include <jni.h>
#include <Uno.IDisposable.h>
namespace g{namespace Android{namespace android{namespace content{namespace res{struct AssetManager;}}}}}
namespace g{namespace Android{namespace android{namespace content{namespace res{struct Resources;}}}}}
namespace g{namespace Android{namespace android{namespace content{struct ContextWrapper;}}}}
namespace g{namespace Android{namespace android{namespace content{struct Intent;}}}}
namespace g{namespace Android{namespace java{namespace lang{struct Object;}}}}
namespace g{namespace Android{namespace java{namespace lang{struct String;}}}}

namespace g{
namespace Android{
namespace android{
namespace content{

// public extern class ContextWrapper :1351
// {
::g::Android::android::content::Context_type* ContextWrapper_typeof();
void ContextWrapper__ctor_8_fn(ContextWrapper* __this, jobject* obj, uType* utype, bool* hasFallbackClass, bool* resolveType);
void ContextWrapper___Init3_fn();
void ContextWrapper__getApplicationContext_fn(ContextWrapper* __this, ::g::Android::android::content::Context** __retval);
void ContextWrapper__getApplicationContext_IMPL_4268_fn(bool* arg0_, jobject* arg1_, uObject** __retval);
void ContextWrapper__getAssets_fn(ContextWrapper* __this, ::g::Android::android::content::res::AssetManager** __retval);
void ContextWrapper__getAssets_IMPL_4263_fn(bool* arg0_, jobject* arg1_, uObject** __retval);
void ContextWrapper__getResources_fn(ContextWrapper* __this, ::g::Android::android::content::res::Resources** __retval);
void ContextWrapper__getResources_IMPL_4264_fn(bool* arg0_, jobject* arg1_, uObject** __retval);
void ContextWrapper__getSystemService_fn(ContextWrapper* __this, ::g::Android::java::lang::String* arg0, ::g::Android::java::lang::Object** __retval);
void ContextWrapper__getSystemService_IMPL_4330_fn(bool* arg0_, jobject* arg1_, uObject* arg2_, uObject** __retval);
void ContextWrapper__startActivity_fn(ContextWrapper* __this, ::g::Android::android::content::Intent* arg0);
void ContextWrapper__startActivity_IMPL_4303_fn(bool* arg0_, jobject* arg1_, uObject* arg2_);

struct ContextWrapper : ::g::Android::android::content::Context
{
    static jclass _javaClass3_;
    static jclass& _javaClass3() { return _javaClass3_; }
    static jmethodID getApplicationContext_4268_ID_;
    static jmethodID& getApplicationContext_4268_ID() { return getApplicationContext_4268_ID_; }
    static jmethodID getAssets_4263_ID_;
    static jmethodID& getAssets_4263_ID() { return getAssets_4263_ID_; }
    static jmethodID getResources_4264_ID_;
    static jmethodID& getResources_4264_ID() { return getResources_4264_ID_; }
    static jmethodID getSystemService_4330_ID_;
    static jmethodID& getSystemService_4330_ID() { return getSystemService_4330_ID_; }
    static jmethodID startActivity_4303_ID_;
    static jmethodID& startActivity_4303_ID() { return startActivity_4303_ID_; }

    void ctor_8(jobject obj, uType* utype, bool hasFallbackClass, bool resolveType);
    ::g::Android::android::content::Context* getApplicationContext();
    ::g::Android::android::content::res::AssetManager* getAssets();
    static void _Init3();
    static uObject* getApplicationContext_IMPL_4268(bool arg0_, jobject arg1_);
    static uObject* getAssets_IMPL_4263(bool arg0_, jobject arg1_);
    static uObject* getResources_IMPL_4264(bool arg0_, jobject arg1_);
    static uObject* getSystemService_IMPL_4330(bool arg0_, jobject arg1_, uObject* arg2_);
    static void startActivity_IMPL_4303(bool arg0_, jobject arg1_, uObject* arg2_);
};
// }

}}}} // ::g::Android::android::content
