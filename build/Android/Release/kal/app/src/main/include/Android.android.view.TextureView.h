// This file was generated based on '/usr/local/share/uno/Packages/Android/0.27.4/Android/android/view/$.uno#44'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Android.android.view.View.h>
#include <Android.Base.Wrappers.IJWrapper.h>
#include <jni.h>
#include <Uno.IDisposable.h>
namespace g{namespace Android{namespace android{namespace content{struct Context;}}}}
namespace g{namespace Android{namespace android{namespace graphics{struct Canvas;}}}}
namespace g{namespace Android{namespace android{namespace view{struct TextureView;}}}}

namespace g{
namespace Android{
namespace android{
namespace view{

// public sealed extern class TextureView :21536
// {
::g::Android::android::view::View_type* TextureView_typeof();
void TextureView__ctor_9_fn(TextureView* __this, ::g::Android::android::content::Context* arg0);
void TextureView___Init3_fn();
void TextureView__j_draw_fn(TextureView* __this, ::g::Android::android::graphics::Canvas* arg0);
void TextureView__j_draw_IMPL_22656_fn(bool* arg0_, jobject* arg1_, uObject* arg2_);
void TextureView__New9_fn(::g::Android::android::content::Context* arg0, TextureView** __retval);
void TextureView__setOpaque_fn(TextureView* __this, bool* arg0);
void TextureView__setOpaque_IMPL_22650_fn(bool* arg0_, jobject* arg1_, bool* arg2_);
void TextureView__setSurfaceTextureListener_fn(TextureView* __this, uObject* arg0);
void TextureView__setSurfaceTextureListener_IMPL_22672_fn(bool* arg0_, jobject* arg1_, uObject* arg2_);

struct TextureView : ::g::Android::android::view::View
{
    static jclass _javaClass3_;
    static jclass& _javaClass3() { return _javaClass3_; }
    static jmethodID j_draw_22656_ID_;
    static jmethodID& j_draw_22656_ID() { return j_draw_22656_ID_; }
    static jmethodID setOpaque_22650_ID_;
    static jmethodID& setOpaque_22650_ID() { return setOpaque_22650_ID_; }
    static jmethodID setSurfaceTextureListener_22672_ID_;
    static jmethodID& setSurfaceTextureListener_22672_ID() { return setSurfaceTextureListener_22672_ID_; }
    static jmethodID TextureView_22646_ID_c_;
    static jmethodID& TextureView_22646_ID_c() { return TextureView_22646_ID_c_; }

    void ctor_9(::g::Android::android::content::Context* arg0);
    void setOpaque(bool arg0);
    void setSurfaceTextureListener(uObject* arg0);
    static void _Init3();
    static void j_draw_IMPL_22656(bool arg0_, jobject arg1_, uObject* arg2_);
    static TextureView* New9(::g::Android::android::content::Context* arg0);
    static void setOpaque_IMPL_22650(bool arg0_, jobject arg1_, bool arg2_);
    static void setSurfaceTextureListener_IMPL_22672(bool arg0_, jobject arg1_, uObject* arg2_);
};
// }

}}}} // ::g::Android::android::view
