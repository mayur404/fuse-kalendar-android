// This file was generated based on '/usr/local/share/uno/Packages/Android/0.27.4/Android/android/widget/$.uno#31'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Android.android.view.ViewGroup.h>
#include <Android.Base.Wrappers.IJWrapper.h>
#include <jni.h>
#include <Uno.IDisposable.h>
namespace g{namespace Android{namespace android{namespace content{struct Context;}}}}
namespace g{namespace Android{namespace android{namespace graphics{struct Canvas;}}}}
namespace g{namespace Android{namespace android{namespace widget{struct FrameLayout;}}}}

namespace g{
namespace Android{
namespace android{
namespace widget{

// public extern class FrameLayout :9268
// {
::g::Android::android::view::ViewGroup_type* FrameLayout_typeof();
void FrameLayout__ctor_13_fn(FrameLayout* __this, ::g::Android::android::content::Context* arg0);
void FrameLayout__ctor_16_fn(FrameLayout* __this, jobject* obj, uType* utype, bool* hasFallbackClass, bool* resolveType);
void FrameLayout___Init4_fn();
void FrameLayout__j_draw_fn(FrameLayout* __this, ::g::Android::android::graphics::Canvas* arg0);
void FrameLayout__j_draw_IMPL_25185_fn(bool* arg0_, jobject* arg1_, uObject* arg2_);
void FrameLayout__New9_fn(::g::Android::android::content::Context* arg0, FrameLayout** __retval);

struct FrameLayout : ::g::Android::android::view::ViewGroup
{
    static jclass _javaClass4_;
    static jclass& _javaClass4() { return _javaClass4_; }
    static jmethodID FrameLayout_25171_ID_c_;
    static jmethodID& FrameLayout_25171_ID_c() { return FrameLayout_25171_ID_c_; }
    static jmethodID j_draw_25185_ID_;
    static jmethodID& j_draw_25185_ID() { return j_draw_25185_ID_; }

    void ctor_13(::g::Android::android::content::Context* arg0);
    void ctor_16(jobject obj, uType* utype, bool hasFallbackClass, bool resolveType);
    static void _Init4();
    static void j_draw_IMPL_25185(bool arg0_, jobject arg1_, uObject* arg2_);
    static FrameLayout* New9(::g::Android::android::content::Context* arg0);
};
// }

}}}} // ::g::Android::android::widget
