// This file was generated based on '/usr/local/share/uno/Packages/Android/0.27.4/Android/android/content/res/$.uno#4'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Android.Base.Wrappers.IJWrapper.h>
#include <Android.java.lang.Object.h>
#include <jni.h>
#include <Uno.IDisposable.h>
namespace g{namespace Android{namespace android{namespace content{namespace res{struct AssetManager;}}}}}
namespace g{namespace Android{namespace java{namespace io{struct InputStream;}}}}
namespace g{namespace Android{namespace java{namespace lang{struct String;}}}}

namespace g{
namespace Android{
namespace android{
namespace content{
namespace res{

// public sealed extern class AssetManager :505
// {
::g::Android::java::lang::Object_type* AssetManager_typeof();
void AssetManager___Init2_fn();
void AssetManager__open_fn(AssetManager* __this, ::g::Android::java::lang::String* arg0, ::g::Android::java::io::InputStream** __retval);
void AssetManager__open_IMPL_3508_fn(bool* arg0_, jobject* arg1_, uObject* arg2_, uObject** __retval);

struct AssetManager : ::g::Android::java::lang::Object
{
    static jclass _javaClass2_;
    static jclass& _javaClass2() { return _javaClass2_; }
    static jmethodID open_3508_ID_;
    static jmethodID& open_3508_ID() { return open_3508_ID_; }

    ::g::Android::java::io::InputStream* open(::g::Android::java::lang::String* arg0);
    static void _Init2();
    static uObject* open_IMPL_3508(bool arg0_, jobject arg1_, uObject* arg2_);
};
// }

}}}}} // ::g::Android::android::content::res
