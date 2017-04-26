// This file was generated based on '/usr/local/share/uno/Packages/Android/0.27.4/Android/android/graphics/$.uno#54'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Android.Base.Wrappers.IJWrapper.h>
#include <Android.java.lang.Object.h>
#include <jni.h>
#include <Uno.IDisposable.h>
namespace g{namespace Android{namespace android{namespace graphics{struct Paint;}}}}
namespace g{namespace Android{namespace android{namespace graphics{struct PaintDLRStyle;}}}}

namespace g{
namespace Android{
namespace android{
namespace graphics{

// public sealed extern class Paint :7509
// {
::g::Android::java::lang::Object_type* Paint_typeof();
void Paint___Init2_fn();
void Paint__setARGB_fn(Paint* __this, int* arg0, int* arg1, int* arg2, int* arg3);
void Paint__setARGB_IMPL_6919_fn(bool* arg0_, jobject* arg1_, int* arg2_, int* arg3_, int* arg4_, int* arg5_);
void Paint__setStrokeWidth_fn(Paint* __this, float* arg0);
void Paint__setStrokeWidth_IMPL_6921_fn(bool* arg0_, jobject* arg1_, float* arg2_);
void Paint__setStyle_fn(Paint* __this, ::g::Android::android::graphics::PaintDLRStyle* arg0);
void Paint__setStyle_IMPL_6914_fn(bool* arg0_, jobject* arg1_, uObject* arg2_);

struct Paint : ::g::Android::java::lang::Object
{
    static jclass _javaClass2_;
    static jclass& _javaClass2() { return _javaClass2_; }
    static jmethodID setARGB_6919_ID_;
    static jmethodID& setARGB_6919_ID() { return setARGB_6919_ID_; }
    static jmethodID setStrokeWidth_6921_ID_;
    static jmethodID& setStrokeWidth_6921_ID() { return setStrokeWidth_6921_ID_; }
    static jmethodID setStyle_6914_ID_;
    static jmethodID& setStyle_6914_ID() { return setStyle_6914_ID_; }

    void setARGB(int arg0, int arg1, int arg2, int arg3);
    void setStrokeWidth(float arg0);
    void setStyle(::g::Android::android::graphics::PaintDLRStyle* arg0);
    static void _Init2();
    static void setARGB_IMPL_6919(bool arg0_, jobject arg1_, int arg2_, int arg3_, int arg4_, int arg5_);
    static void setStrokeWidth_IMPL_6921(bool arg0_, jobject arg1_, float arg2_);
    static void setStyle_IMPL_6914(bool arg0_, jobject arg1_, uObject* arg2_);
};
// }

}}}} // ::g::Android::android::graphics
