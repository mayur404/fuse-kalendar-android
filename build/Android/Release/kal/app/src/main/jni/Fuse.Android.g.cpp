// This file was generated based on '(multiple files)'.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.FuseAndroid_bundle.h>
#include <Android.android.app.Activity.h>
#include <Android.android.content.Context.h>
#include <Android.android.os.BuildDLRVERSION.h>
#include <Android.android.view.MotionEvent.h>
#include <Android.android.view.View.h>
#include <Android.android.view.ViewDLROnTouchListener.h>
#include <Android.android.view.ViewGroup.h>
#include <Android.android.view.ViewGroupDLRLayoutParams.h>
#include <Android.android.widget.RelativeLayout.h>
#include <Android.android.widget.RelativeLayoutDLRLayoutParams.h>
#include <Android.Base.JNI.h>
#include <Android.Base.Primitives.jmethodID.h>
#include <Android.Base.Primitives.ujclass.h>
#include <Android.Base.Primitives.ujlong.h>
#include <Android.Base.Primitives.ujobject.h>
#include <Android.Base.Primitives.ujvalue.h>
#include <Android.Base.Wrappers.JWrapper.h>
#include <Android.java.lang.Object.h>
#include <Android.Runtime.IntArray.h>
#include <Fuse.Android.BindingView.h>
#include <Fuse.Android.Blitter.h>
#include <Fuse.Android.Controls.Button.h>
#include <Fuse.Android.Controls.Circle.h>
#include <Fuse.Android.Controls.Image.h>
#include <Fuse.Android.Controls.PlainTextEdit.h>
#include <Fuse.Android.Controls.Rectangle.h>
#include <Fuse.Android.Controls.SeekBar.h>
#include <Fuse.Android.Controls.Switch.h>
#include <Fuse.Android.Controls.TextEdit.h>
#include <Fuse.Android.Controls.TextView.h>
#include <Fuse.Android.Controls.WebView.h>
#include <Fuse.Android.FocusChangedHandler.h>
#include <Fuse.Android.FocusChangedListener.h>
#include <Fuse.Android.Helpers.h>
#include <Fuse.Android.InputDispatch.h>
#include <Fuse.Android.InputDispatch.TouchListener.h>
#include <Fuse.Android.Internal.Bitmap.h>
#include <Fuse.Android.Internal.Canvas.h>
#include <Fuse.Android.Internal.GLUtils.h>
#include <Fuse.Android.Internal.StaticLayout.Alignment.h>
#include <Fuse.Android.Internal.StaticLayout.h>
#include <Fuse.Android.Internal.TextPaint.h>
#include <Fuse.Android.Internal.TextUtils.TruncateAt.h>
#include <Fuse.Android.NativeEditFactory.h>
#include <Fuse.Android.NativeStyle.h>
#include <Fuse.Android.NativeTemplate.h>
#include <Fuse.Android.NativeViews.ContentControl.h>
#include <Fuse.Android.NativeViews.NativeView.h>
#include <Fuse.Android.NativeViews.NativeViewHost.h>
#include <Fuse.Android.NativeViews.ParentControl.h>
#include <Fuse.Android.NativeViews.ScrollView.h>
#include <Fuse.Android.NativeViews.SurfaceView.h>
#include <Fuse.Android.NativeViews.TextureView.h>
#include <Fuse.Android.RootView.h>
#include <Fuse.Android.RootViewContainer.h>
#include <Fuse.Android.TextControlLayout.h>
#include <Fuse.Android.TextRenderer.BackgroundRender.h>
#include <Fuse.Android.TextRenderer.h>
#include <Fuse.Android.Typeface.h>
#include <Fuse.Android.TypefaceCache.h>
#include <Fuse.AppBase.h>
#include <Fuse.Behavior.h>
#include <Fuse.Controls.Button.h>
#include <Fuse.Controls.Circle.h>
#include <Fuse.Controls.ContentControl.h>
#include <Fuse.Controls.Graphics.TextVisual.Factory.h>
#include <Fuse.Controls.GraphicsView.h>
#include <Fuse.Controls.Image.h>
#include <Fuse.Controls.MapView.h>
#include <Fuse.Controls.NativeViewHost.h>
#include <Fuse.Controls.ParentControl.h>
#include <Fuse.Controls.PlainTextEdit.h>
#include <Fuse.Controls.Rectangle.h>
#include <Fuse.Controls.ScrollView.h>
#include <Fuse.Controls.Slider.h>
#include <Fuse.Controls.Switch.h>
#include <Fuse.Controls.TextBlock.h>
#include <Fuse.Controls.TextControl.h>
#include <Fuse.Controls.TextEdit.h>
#include <Fuse.Controls.TextTruncation.h>
#include <Fuse.Controls.WebView.h>
#include <Fuse.Diagnostics.h>
#include <Fuse.DrawContext.h>
#include <Fuse.Elements.TextAlignment.h>
#include <Fuse.Elements.TextWrapping.h>
#include <Fuse.Font.h>
#include <Fuse.GraphicsWorker.h>
#include <Fuse.Input.Pointer.h>
#include <Fuse.Input.PointerEventData.h>
#include <Fuse.Input.PointerMovedArgs.h>
#include <Fuse.Input.PointerPressedArgs.h>
#include <Fuse.Input.PointerReleasedArgs.h>
#include <Fuse.IViewport.h>
#include <Fuse.LayoutParams.h>
#include <Fuse.Node.h>
#include <Fuse.Style.h>
#include <Fuse.StyleProperty-2.h>
#include <Fuse.Themes.GraphicsStyle.h>
#include <Fuse.Time.h>
#include <Fuse.UpdateManager.h>
#include <Fuse.UpdateStage.h>
#include <Java.Object.h>
#include <jni.h>
#include <OpenGL.GL.h>
#include <OpenGL.GLTextureHandle.h>
#include <OpenGL.GLTextureTarget.h>
#include <Uno.Action.h>
#include <Uno.Application.h>
#include <Uno.ArgumentOutOfRangeException.h>
#include <Uno.Bool.h>
#include <Uno.Buffer.h>
#include <Uno.Byte.h>
#include <Uno.Collections.Dictionary-2.h>
#include <Uno.Collections.HashSet-1.h>
#include <Uno.Collections.ICollection-1.h>
#include <Uno.Collections.IList-1.h>
#include <Uno.Compiler.ExportTargetInterop.Foreign.Android.JavaUnoObject.h>
#include <Uno.Double.h>
#include <Uno.Exception.h>
#include <Uno.Float.h>
#include <Uno.Float2.h>
#include <Uno.Float4.h>
#include <Uno.Float4x4.h>
#include <Uno.Graphics.BlendOperand.h>
#include <Uno.Graphics.BufferUsage.h>
#include <Uno.Graphics.Format.h>
#include <Uno.Graphics.PolygonFace.h>
#include <Uno.Graphics.Texture2D.h>
#include <Uno.Graphics.VertexAttributeType.h>
#include <Uno.Graphics.VertexBuffer.h>
#include <Uno.Int.h>
#include <Uno.Int2.h>
#include <Uno.IO.BundleFile.h>
#include <Uno.IO.Directory.h>
#include <Uno.IO.File.h>
#include <Uno.IO.UserDirectory.h>
#include <Uno.Long.h>
#include <Uno.Math.h>
#include <Uno.Object.h>
#include <Uno.Platform.PointerType.h>
#include <Uno.Platform.ViewNativeHandle.h>
#include <Uno.Platform2.Application.h>
#include <Uno.Rect.h>
#include <Uno.Recti.h>
#include <Uno.Runtime.Implementation.Internal.BufferConverters.h>
#include <Uno.Runtime.Implementation.ShaderBackends.OpenGL.GLProgram.h>
#include <Uno.String.h>
#include <Uno.Type.h>
#include <Uno.ULong.h>
#include <Uno.UX.BundleFileSource.h>
#include <Uno.UX.Factory.h>
#include <Uno.UX.FileSource.h>
#include <Uno/JNIHelper.h>
//~
JNFUN(jboolean,Binding_Fuse_Android_InputDispatch_TouchListener__onTouch22729,jlong ujPtr, jobject arg0, jobject arg1, jlong arg2, jlong arg3) {
    INITCALLBACK(uPtr,uObject*);
    JARG_TO_UNO(arg2,::g::Android::android::view::View*,((::g::Android::android::view::View*)::g::Android::Base::Wrappers::JWrapper::New2(arg0, (uType*)::g::Android::android::view::View_typeof(), false, true, true)));
    JARG_TO_UNO(arg3,::g::Android::android::view::MotionEvent*,((::g::Android::android::view::MotionEvent*)::g::Android::Base::Wrappers::JWrapper::New2(arg1, (uType*)::g::Android::android::view::MotionEvent_typeof(), false, true, true)));
    JTRY
    return (jboolean)::g::Android::android::view::ViewDLROnTouchListener::onTouch(uInterface(uPtr, ::g::Android::android::view::ViewDLROnTouchListener_typeof()), tmparg2, tmparg3);
    JCATCH
}
JNFUN(jboolean,Binding_Fuse_Android_RootViewContainer__onInterceptTouchEvent23409,jlong ujPtr, jobject arg0, jlong arg1) {
    INITCALLBACK(uPtr,::g::Android::android::view::ViewGroup*);
    JARG_TO_UNO(arg1,::g::Android::android::view::MotionEvent*,((::g::Android::android::view::MotionEvent*)::g::Android::Base::Wrappers::JWrapper::New2(arg0, (uType*)::g::Android::android::view::MotionEvent_typeof(), false, true, true)));
    JTRY
    return (jboolean)uPtr->onInterceptTouchEvent(tmparg1);
    JCATCH
}
JNFUN(jboolean,Binding_Fuse_Android_RootViewContainer__onTouchEvent22991,jlong ujPtr, jobject arg0, jlong arg1) {
    INITCALLBACK(uPtr,::g::Android::android::view::View*);
    JARG_TO_UNO(arg1,::g::Android::android::view::MotionEvent*,((::g::Android::android::view::MotionEvent*)::g::Android::Base::Wrappers::JWrapper::New2(arg0, (uType*)::g::Android::android::view::MotionEvent_typeof(), false, true, true)));
    JTRY
    return (jboolean)uPtr->onTouchEvent(tmparg1);
    JCATCH
}
JNFUN(void,Binding_Fuse_Android_FocusChangedListener__onFocusChange22722,jlong ujPtr, jobject arg0, jboolean arg1, jlong arg2, jlong arg3) {
    INITCALLBACK(uPtr,uObject*);
    JARG_TO_UNO(arg2,::g::Android::android::view::View*,((::g::Android::android::view::View*)::g::Android::Base::Wrappers::JWrapper::New2(arg0, (uType*)::g::Android::android::view::View_typeof(), false, true, true)));
    JTRY
    ::g::Android::android::view::ViewDLROnFocusChangeListener::onFocusChange(uInterface(uPtr, ::g::Android::android::view::ViewDLROnFocusChangeListener_typeof()), tmparg2, ((bool)arg1));
    JCATCH
}
static uString* STRINGS[12];
static uType* TYPES[77];

namespace g{
namespace Fuse{
namespace Android{

// /usr/local/share/uno/Packages/Fuse.Android/0.27.10/$.uno#8
// ----------------------------------------------------------

// private sealed class TextRenderer.BackgroundRender :1210
// {
uType* TextRenderer__BackgroundRender_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 6;
    options.ObjectSize = sizeof(TextRenderer__BackgroundRender);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Android.TextRenderer.BackgroundRender", options);
    ::TYPES[0] = ::g::Fuse::Android::TextRenderer_typeof();
    ::TYPES[1] = ::g::Uno::Action_typeof();
    type->SetFields(0,
        ::g::Fuse::Android::Internal::StaticLayout_typeof(), offsetof(::g::Fuse::Android::TextRenderer__BackgroundRender, _layout), 0,
        ::g::Uno::Recti_typeof(), offsetof(::g::Fuse::Android::TextRenderer__BackgroundRender, _pixelBounds), 0,
        ::g::Uno::Float4_typeof(), offsetof(::g::Fuse::Android::TextRenderer__BackgroundRender, _renderColor), 0,
        ::g::OpenGL::GLTextureHandle_typeof(), offsetof(::g::Fuse::Android::TextRenderer__BackgroundRender, _result), 0,
        ::g::Fuse::Android::TextRenderer_typeof(), offsetof(::g::Fuse::Android::TextRenderer__BackgroundRender, _textRenderer), 0,
        ::g::Uno::ULong_typeof(), offsetof(::g::Fuse::Android::TextRenderer__BackgroundRender, _textureVersion), 0);
    return type;
}

// public BackgroundRender(Fuse.Android.TextRenderer textRenderer, ulong textureVersion, Fuse.Android.Internal.StaticLayout layout, float4 renderColor, Uno.Recti pixelBounds) :1219
void TextRenderer__BackgroundRender__ctor__fn(TextRenderer__BackgroundRender* __this, ::g::Fuse::Android::TextRenderer* textRenderer, uint64_t* textureVersion, ::g::Fuse::Android::Internal::StaticLayout* layout, ::g::Uno::Float4* renderColor, ::g::Uno::Recti* pixelBounds)
{
    __this->ctor_(textRenderer, *textureVersion, layout, *renderColor, *pixelBounds);
}

// private void DoneCallback() :1234
void TextRenderer__BackgroundRender__DoneCallback_fn(TextRenderer__BackgroundRender* __this)
{
    __this->DoneCallback();
}

// public BackgroundRender New(Fuse.Android.TextRenderer textRenderer, ulong textureVersion, Fuse.Android.Internal.StaticLayout layout, float4 renderColor, Uno.Recti pixelBounds) :1219
void TextRenderer__BackgroundRender__New1_fn(::g::Fuse::Android::TextRenderer* textRenderer, uint64_t* textureVersion, ::g::Fuse::Android::Internal::StaticLayout* layout, ::g::Uno::Float4* renderColor, ::g::Uno::Recti* pixelBounds, TextRenderer__BackgroundRender** __retval)
{
    *__retval = TextRenderer__BackgroundRender::New1(textRenderer, *textureVersion, layout, *renderColor, *pixelBounds);
}

// public void UpdateTextureAsync() :1228
void TextRenderer__BackgroundRender__UpdateTextureAsync_fn(TextRenderer__BackgroundRender* __this)
{
    __this->UpdateTextureAsync();
}

// public BackgroundRender(Fuse.Android.TextRenderer textRenderer, ulong textureVersion, Fuse.Android.Internal.StaticLayout layout, float4 renderColor, Uno.Recti pixelBounds) [instance] :1219
void TextRenderer__BackgroundRender::ctor_(::g::Fuse::Android::TextRenderer* textRenderer, uint64_t textureVersion, ::g::Fuse::Android::Internal::StaticLayout* layout, ::g::Uno::Float4 renderColor, ::g::Uno::Recti pixelBounds)
{
    _textRenderer = textRenderer;
    _textureVersion = textureVersion;
    _layout = layout;
    _renderColor = renderColor;
    _pixelBounds = pixelBounds;
}

// private void DoneCallback() [instance] :1234
void TextRenderer__BackgroundRender::DoneCallback()
{
    GLHelper::SwapBackToBackgroundSurface();

    if (_textureVersion == uPtr(_textRenderer)->_wantedVersion)
    {
        uPtr(_textRenderer)->SetTexture(_result);
        uPtr(_textRenderer)->_textureVersion = _textureVersion;
    }
    else
        ::g::OpenGL::GL::DeleteTexture(_result);
}

// public void UpdateTextureAsync() [instance] :1228
void TextRenderer__BackgroundRender::UpdateTextureAsync()
{
    _result = uPtr(_textRenderer)->UpdateTexture(_layout, _renderColor, _pixelBounds);
    ::g::Fuse::UpdateManager::AddOnceAction(uDelegate::New(::TYPES[1/*Uno.Action*/], (void*)TextRenderer__BackgroundRender__DoneCallback_fn, this), 0);
}

// public BackgroundRender New(Fuse.Android.TextRenderer textRenderer, ulong textureVersion, Fuse.Android.Internal.StaticLayout layout, float4 renderColor, Uno.Recti pixelBounds) [static] :1219
TextRenderer__BackgroundRender* TextRenderer__BackgroundRender::New1(::g::Fuse::Android::TextRenderer* textRenderer, uint64_t textureVersion, ::g::Fuse::Android::Internal::StaticLayout* layout, ::g::Uno::Float4 renderColor, ::g::Uno::Recti pixelBounds)
{
    TextRenderer__BackgroundRender* obj1 = (TextRenderer__BackgroundRender*)uNew(TextRenderer__BackgroundRender_typeof());
    obj1->ctor_(textRenderer, textureVersion, layout, renderColor, pixelBounds);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Android/0.27.10/$.uno#1
// ----------------------------------------------------------

// internal static extern class BindingView :180
// {
uClassType* BindingView_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Fuse.Android.BindingView", options);
    return type;
}

// public static Uno.Platform.ViewNativeHandle GetNativeViewHandle(Android.android.view.View view) :182
void BindingView__GetNativeViewHandle_fn(::g::Android::android::view::View* view, uPlatform2::ViewNativeHandle* __retval)
{
    *__retval = BindingView::GetNativeViewHandle(view);
}

// public static Uno.Platform.ViewNativeHandle GetNativeViewHandle(Android.android.view.View view) [static] :182
uPlatform2::ViewNativeHandle BindingView::GetNativeViewHandle(::g::Android::android::view::View* view)
{
    return (uPlatform2::ViewNativeHandle)uPtr(view)->_GetJavaObject();
}
// }

// /usr/local/share/uno/Packages/Fuse.Android/0.27.10/$.uno#8
// ----------------------------------------------------------

// internal sealed class Blitter :1283
// {
// static Blitter() :1283
static void Blitter__cctor__fn(uType* __type)
{
    Blitter::Singleton_ = Blitter::New1();
}

uType* Blitter_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 4;
    options.ObjectSize = sizeof(Blitter);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Android.Blitter", options);
    type->fp_ctor_ = (void*)Blitter__New1_fn;
    type->fp_cctor_ = Blitter__cctor__fn;
    ::TYPES[2] = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall_typeof();
    ::TYPES[3] = ::g::Uno::Float2_typeof()->Array();
    ::TYPES[4] = ::g::FuseAndroid_bundle_typeof();
    type->SetFields(0,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall_typeof(), offsetof(::g::Fuse::Android::Blitter, _draw_3ffdfb2d), 0,
        ::g::Uno::Graphics::VertexBuffer_typeof(), offsetof(::g::Fuse::Android::Blitter, Blit_v_3ffdfb2d_1_7_1), 0,
        ::g::Uno::Float2_typeof()->Array(), offsetof(::g::Fuse::Android::Blitter, Blit_verts_3ffdfb2d_1_6_5), 0,
        Blitter_typeof(), (uintptr_t)&::g::Fuse::Android::Blitter::Singleton_, uFieldFlagsStatic);
    return type;
}

// public generated Blitter() :1283
void Blitter__ctor__fn(Blitter* __this)
{
    __this->ctor_();
}

// public void Blit(texture2D vt, float2 pos, float2 size, float4x4 localToClipTransform) :1287
void Blitter__Blit_fn(Blitter* __this, ::g::Uno::Graphics::Texture2D* vt, ::g::Uno::Float2* pos, ::g::Uno::Float2* size, ::g::Uno::Float4x4* localToClipTransform)
{
    __this->Blit(vt, *pos, *size, *localToClipTransform);
}

// private generated void init_DrawCalls() :1283
void Blitter__init_DrawCalls_fn(Blitter* __this)
{
    __this->init_DrawCalls();
}

// public generated Blitter New() :1283
void Blitter__New1_fn(Blitter** __retval)
{
    *__retval = Blitter::New1();
}

uSStrong<Blitter*> Blitter::Singleton_;

// public generated Blitter() [instance] :1283
void Blitter::ctor_()
{
    init_DrawCalls();
}

// public void Blit(texture2D vt, float2 pos, float2 size, float4x4 localToClipTransform) [instance] :1287
void Blitter::Blit(::g::Uno::Graphics::Texture2D* vt, ::g::Uno::Float2 pos, ::g::Uno::Float2 size, ::g::Uno::Float4x4 localToClipTransform)
{
    _draw_3ffdfb2d.BlendEnabled(true);
    _draw_3ffdfb2d.CullFace(0);
    _draw_3ffdfb2d.BlendSrcAlpha(7);
    _draw_3ffdfb2d.BlendDstRgb(3);
    _draw_3ffdfb2d.Use();
    _draw_3ffdfb2d.Attrib1(0, 2, Blit_v_3ffdfb2d_1_7_1, 8, 0);
    _draw_3ffdfb2d.Uniform2(1, size);
    _draw_3ffdfb2d.Uniform2(2, pos);
    _draw_3ffdfb2d.Uniform12(3, localToClipTransform);
    _draw_3ffdfb2d.Sampler2(4, vt);
    _draw_3ffdfb2d.DrawArrays(uPtr(Blit_verts_3ffdfb2d_1_6_5)->Length());
}

// private generated void init_DrawCalls() [instance] :1283
void Blitter::init_DrawCalls()
{
    uArray* verts_3ffdfb2d_1_6_0 = uArray::Init< ::g::Uno::Float2>(::TYPES[3/*float2[]*/], 6, ::g::Uno::Float2__New2(0.0f, 0.0f), ::g::Uno::Float2__New2(1.0f, 0.0f), ::g::Uno::Float2__New2(1.0f, 1.0f), ::g::Uno::Float2__New2(0.0f, 0.0f), ::g::Uno::Float2__New2(1.0f, 1.0f), ::g::Uno::Float2__New2(0.0f, 1.0f));
    Blit_v_3ffdfb2d_1_7_1 = ::g::Uno::Graphics::VertexBuffer::New2(::g::Uno::Runtime::Implementation::Internal::BufferConverters::ToBuffer3(verts_3ffdfb2d_1_6_0), 0);
    Blit_verts_3ffdfb2d_1_6_5 = verts_3ffdfb2d_1_6_0;
    _draw_3ffdfb2d = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall__New1(::g::FuseAndroid_bundle::Blitter4fbe5e04());
}

// public generated Blitter New() [static] :1283
Blitter* Blitter::New1()
{
    Blitter* obj1 = (Blitter*)uNew(Blitter_typeof());
    obj1->ctor_();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Android/0.27.10/$.uno#2
// ----------------------------------------------------------

// internal extern delegate void FocusChangedHandler(object sender, bool hasFocus) :198
uDelegateType* FocusChangedHandler_typeof()
{
    static uSStrong<uDelegateType*> type;
    if (type != NULL) return type;

    type = uDelegateType::New("Fuse.Android.FocusChangedHandler", 2, 0);
    type->SetSignature(uVoid_typeof(),
        uObject_typeof(),
        ::g::Uno::Bool_typeof());
    return type;
}

// /usr/local/share/uno/Packages/Fuse.Android/0.27.10/$.uno#2
// ----------------------------------------------------------

// internal sealed extern class FocusChangedListener :200
// {
FocusChangedListener_type* FocusChangedListener_typeof()
{
    static uSStrong<FocusChangedListener_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 8;
    options.InterfaceCount = 3;
    options.ObjectSize = sizeof(FocusChangedListener);
    options.TypeSize = sizeof(FocusChangedListener_type);
    type = (FocusChangedListener_type*)uClassType::New("Fuse.Android.FocusChangedListener", options);
    type->SetBase(::g::Android::java::lang::Object_typeof());
    type->interface1.fp_Dispose = (void(*)(uObject*))FocusChangedListener__UnoIDisposableDispose1_fn;
    type->interface2.fp_onFocusChange = (void(*)(uObject*, ::g::Android::android::view::View*, bool*))FocusChangedListener__AndroidandroidviewViewDLROnFocusChangeListeneronFocusChange_fn;
    type->interface0.fp__GetJavaObject = (void(*)(uObject*, jobject*))::g::Android::Base::Wrappers::JWrapper___GetJavaObject_fn;
    type->interface0.fp__IsSubclassed = (void(*)(uObject*, bool*))::g::Android::Base::Wrappers::JWrapper___IsSubclassed_fn;
    ::STRINGS[0] = uString::Const("com.Bindings.Binding_Fuse_Android_FocusChangedListener");
    ::STRINGS[1] = uString::Const("<init>");
    ::STRINGS[2] = uString::Const("(J)V");
    ::TYPES[5] = ::g::Uno::Bool_typeof();
    ::TYPES[6] = ::g::Android::Base::Wrappers::JWrapper_typeof();
    ::TYPES[7] = ::g::Android::Base::Primitives::ujclass_typeof();
    ::TYPES[8] = ::g::Android::android::view::ViewDLROnFocusChangeListener_typeof();
    ::TYPES[9] = ::g::Uno::IDisposable_typeof();
    ::TYPES[10] = ::g::Fuse::Android::FocusChangedHandler_typeof();
    ::TYPES[11] = uObject_typeof();
    type->SetInterfaces(
        ::g::Android::Base::Wrappers::IJWrapper_typeof(), offsetof(FocusChangedListener_type, interface0),
        ::g::Uno::IDisposable_typeof(), offsetof(FocusChangedListener_type, interface1),
        ::g::Android::android::view::ViewDLROnFocusChangeListener_typeof(), offsetof(FocusChangedListener_type, interface2));
    type->SetFields(5,
        ::g::Fuse::Android::FocusChangedHandler_typeof(), offsetof(::g::Fuse::Android::FocusChangedListener, _handler), 0,
        ::g::Android::android::view::View_typeof(), offsetof(::g::Fuse::Android::FocusChangedListener, _view), 0,
        ::g::Android::Base::Primitives::ujclass_typeof(), (uintptr_t)&::g::Fuse::Android::FocusChangedListener::_javaClass2_, uFieldFlagsStatic);
    return type;
}

// private FocusChangedListener(Android.android.view.View view, Fuse.Android.FocusChangedHandler handler) :215
void FocusChangedListener__ctor_5_fn(FocusChangedListener* __this, ::g::Android::android::view::View* view, uDelegate* handler)
{
    __this->ctor_5(view, handler);
}

// public static Uno.IDisposable AddHandler(Android.android.view.View view, Fuse.Android.FocusChangedHandler handler) :205
void FocusChangedListener__AddHandler_fn(::g::Android::android::view::View* view, uDelegate* handler, uObject** __retval)
{
    *__retval = FocusChangedListener::AddHandler(view, handler);
}

// private void Android.android.view.ViewDLROnFocusChangeListener.onFocusChange(Android.android.view.View v, bool hasFocus) :229
void FocusChangedListener__AndroidandroidviewViewDLROnFocusChangeListeneronFocusChange_fn(FocusChangedListener* __this, ::g::Android::android::view::View* v, bool* hasFocus)
{
    bool hasFocus_ = *hasFocus;
    uPtr(__this->_handler)->Invoke(2, v, uCRef(hasFocus_));
}

// private FocusChangedListener New(Android.android.view.View view, Fuse.Android.FocusChangedHandler handler) :215
void FocusChangedListener__New5_fn(::g::Android::android::view::View* view, uDelegate* handler, FocusChangedListener** __retval)
{
    *__retval = FocusChangedListener::New5(view, handler);
}

// private void Uno.IDisposable.Dispose() :224
void FocusChangedListener__UnoIDisposableDispose1_fn(FocusChangedListener* __this)
{
    uPtr(__this->_view)->setOnFocusChangeListener(NULL);
}

jclass FocusChangedListener::_javaClass2_;

// private FocusChangedListener(Android.android.view.View view, Fuse.Android.FocusChangedHandler handler) [instance] :215
void FocusChangedListener::ctor_5(::g::Android::android::view::View* view, uDelegate* handler)
{
    if (!_subclassed)
    {
        _subclassed = true;
        _javaClassName = ::STRINGS[0/*"com.Binding...*/];
    }

    ctor_4(::g::Android::Base::JNI::GetDefaultObject(), ::g::Android::Base::JNI::GetDefaultType(), false, false);

    if (::g::Android::Base::Primitives::ujclass::op_Equality(FocusChangedListener::_javaClass2(), ::g::Android::Base::Primitives::ujclass::Null()))
    {
        FocusChangedListener::_javaClass2() = ::g::Android::Base::JNI::LocalToGlobalRef(::g::Android::Base::JNI::LoadClass3(::STRINGS[0/*"com.Binding...*/], false));
        JniHelper jni;
        BEGIN_REG_MTD(1);
        REG_MTD(0,"__n_onFocusChange","(JLandroid/view/View;ZJJ)V",Binding_Fuse_Android_FocusChangedListener__onFocusChange22722);
        COMMIT_REG_MTD(FocusChangedListener::_javaClass2());
    }

    jclass tmpCls = ::g::Android::Base::JNI::LoadClass3(_javaClassName, false);
    jmethodID mtd = ::g::Android::Base::JNI::GetMethodID(tmpCls, ::STRINGS[1/*"<init>"*/], ::STRINGS[2/*"(J)V"*/]);
    jobject tmp = ::g::Android::Base::JNI::NewObject1(tmpCls, mtd, ::g::Android::Base::Primitives::ujvalue::op_Implicit7((jlong)this->__weakptr));
    ::g::Android::Base::JNI::CheckException();
    _javaObject = ::g::Android::Base::JNI::LocalToGlobalRef1(tmp);
    ::g::Android::Base::JNI::DeleteLocalRef(tmpCls);
    _view = view;
    _handler = handler;
    uPtr(_view)->setOnFocusChangeListener((uObject*)this);
}

// public static Uno.IDisposable AddHandler(Android.android.view.View view, Fuse.Android.FocusChangedHandler handler) [static] :205
uObject* FocusChangedListener::AddHandler(::g::Android::android::view::View* view, uDelegate* handler)
{
    return (uObject*)FocusChangedListener::New5(view, handler);
}

// private FocusChangedListener New(Android.android.view.View view, Fuse.Android.FocusChangedHandler handler) [static] :215
FocusChangedListener* FocusChangedListener::New5(::g::Android::android::view::View* view, uDelegate* handler)
{
    FocusChangedListener* obj1 = (FocusChangedListener*)uNew(FocusChangedListener_typeof());
    obj1->ctor_5(view, handler);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Android/0.27.10/$.uno#3
// ----------------------------------------------------------

// internal static class Helpers :243
// {
uClassType* Helpers_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Fuse.Android.Helpers", options);
    ::TYPES[12] = ::g::Uno::Int_typeof();
    ::TYPES[13] = ::g::Uno::Float4_typeof();
    return type;
}

// public static int EncodeColor(float4 c) :245
void Helpers__EncodeColor_fn(::g::Uno::Float4* c, int* __retval)
{
    *__retval = Helpers::EncodeColor(*c);
}

// public static int EncodeColor(float4 c) [static] :245
int Helpers::EncodeColor(::g::Uno::Float4 c)
{
    int r = ::g::Uno::Math::Clamp8((int)(c.X * 255.0f), 0, 255);
    int g = ::g::Uno::Math::Clamp8((int)(c.Y * 255.0f), 0, 255);
    int b = ::g::Uno::Math::Clamp8((int)(c.Z * 255.0f), 0, 255);
    int a = ::g::Uno::Math::Clamp8((int)(c.W * 255.0f), 0, 255);
    return (((a << 24) | (r << 16)) | (g << 8)) | b;
}
// }

// /usr/local/share/uno/Packages/Fuse.Android/0.27.10/$.uno#4
// ----------------------------------------------------------

// internal static extern class InputDispatch :290
// {
// static InputDispatch() :290
static void InputDispatch__cctor__fn(uType* __type)
{
    InputDispatch::_listeners_ = ((::g::Uno::Collections::Dictionary*)::g::Uno::Collections::Dictionary::New1(::TYPES[14/*Uno.Collections.Dictionary<Android.android.view.View, Fuse.Node>*/]));
    InputDispatch::_activePointers_ = ((::g::Uno::Collections::HashSet*)::g::Uno::Collections::HashSet::New1(::TYPES[15/*Uno.Collections.HashSet<int>*/]));
    InputDispatch::_captureIdentiy_ = ::g::Uno::Object::New();
}

uClassType* InputDispatch_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 4;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Fuse.Android.InputDispatch", options);
    type->fp_cctor_ = InputDispatch__cctor__fn;
    ::TYPES[14] = ::g::Uno::Collections::Dictionary_typeof()->MakeType(::g::Android::android::view::View_typeof(), ::g::Fuse::Node_typeof());
    ::TYPES[15] = ::g::Uno::Collections::HashSet_typeof()->MakeType(::g::Uno::Int_typeof());
    ::TYPES[16] = ::g::Android::java::lang::Object_typeof();
    ::TYPES[17] = ::g::Fuse::Android::NativeViews::NativeView_typeof();
    ::TYPES[18] = ::g::Android::android::view::ViewDLROnTouchListener_typeof();
    ::TYPES[19] = ::g::Fuse::Node_typeof();
    ::TYPES[20] = ::g::Fuse::Input::PointerEventData_typeof()->Array();
    ::TYPES[21] = ::g::Uno::Float_typeof();
    ::TYPES[22] = ::g::Android::Runtime::IntArray_typeof();
    ::TYPES[23] = ::g::Fuse::IViewport_typeof();
    ::TYPES[24] = ::g::Fuse::Input::PointerEventData_typeof();
    ::TYPES[25] = ::g::Uno::Double_typeof();
    ::TYPES[26] = ::g::Fuse::Time_typeof();
    ::TYPES[27] = ::g::Android::android::view::MotionEvent_typeof();
    ::TYPES[5] = ::g::Uno::Bool_typeof();
    ::TYPES[1] = ::g::Uno::Action_typeof();
    type->SetFields(0,
        ::g::Uno::Collections::HashSet_typeof()->MakeType(::g::Uno::Int_typeof()), (uintptr_t)&::g::Fuse::Android::InputDispatch::_activePointers_, uFieldFlagsStatic,
        uObject_typeof(), (uintptr_t)&::g::Fuse::Android::InputDispatch::_captureIdentiy_, uFieldFlagsStatic,
        ::g::Uno::Collections::Dictionary_typeof()->MakeType(::g::Android::android::view::View_typeof(), ::g::Fuse::Node_typeof()), (uintptr_t)&::g::Fuse::Android::InputDispatch::_listeners_, uFieldFlagsStatic,
        InputDispatch__TouchListener_typeof(), (uintptr_t)&::g::Fuse::Android::InputDispatch::_touchListener_, uFieldFlagsStatic);
    return type;
}

// public static void AddListener(Fuse.Android.NativeViews.NativeView nativeView) :318
void InputDispatch__AddListener_fn(::g::Fuse::Android::NativeViews::NativeView* nativeView)
{
    InputDispatch::AddListener(nativeView);
}

// private static Fuse.Node FindRoot(Fuse.Node n) :428
void InputDispatch__FindRoot_fn(::g::Fuse::Node* n, ::g::Fuse::Node** __retval)
{
    *__retval = InputDispatch::FindRoot(n);
}

// private static Fuse.Node GetNode(Android.android.view.View handle) :336
void InputDispatch__GetNode_fn(::g::Android::android::view::View* handle, ::g::Fuse::Node** __retval)
{
    *__retval = InputDispatch::GetNode(handle);
}

// private static void LostCallback() :496
void InputDispatch__LostCallback_fn()
{
    InputDispatch::LostCallback();
}

// private static Fuse.Input.PointerEventData[] MakePointerEventData(Fuse.Node node, Android.android.view.View view, Android.android.view.MotionEvent motionEvent) :362
void InputDispatch__MakePointerEventData_fn(::g::Fuse::Node* node, ::g::Android::android::view::View* view, ::g::Android::android::view::MotionEvent* motionEvent, uArray** __retval)
{
    *__retval = InputDispatch::MakePointerEventData(node, view, motionEvent);
}

// private static void RaiseCancel(Fuse.Node node, Fuse.Input.PointerEventData data) :490
void InputDispatch__RaiseCancel_fn(::g::Fuse::Node* node, ::g::Fuse::Input::PointerEventData* data)
{
    InputDispatch::RaiseCancel(node, data);
}

// public static void RaiseEvent(Fuse.Node node, Android.android.view.View view, Android.android.view.MotionEvent motionEvent) :393
void InputDispatch__RaiseEvent_fn(::g::Fuse::Node* node, ::g::Android::android::view::View* view, ::g::Android::android::view::MotionEvent* motionEvent)
{
    InputDispatch::RaiseEvent(node, view, motionEvent);
}

// private static void RaiseMoved(Fuse.Node node, Fuse.Input.PointerEventData data) :450
void InputDispatch__RaiseMoved_fn(::g::Fuse::Node* node, ::g::Fuse::Input::PointerEventData* data)
{
    InputDispatch::RaiseMoved(node, data);
}

// private static void RaisePressed(Fuse.Node node, Fuse.Input.PointerEventData data) :434
void InputDispatch__RaisePressed_fn(::g::Fuse::Node* node, ::g::Fuse::Input::PointerEventData* data)
{
    InputDispatch::RaisePressed(node, data);
}

// private static void RaiseReleased(Fuse.Node node, Fuse.Input.PointerEventData data) :463
void InputDispatch__RaiseReleased_fn(::g::Fuse::Node* node, ::g::Fuse::Input::PointerEventData* data)
{
    InputDispatch::RaiseReleased(node, data);
}

// private static bool RegisterPointer(int pointerId) :346
void InputDispatch__RegisterPointer_fn(int* pointerId, bool* __retval)
{
    *__retval = InputDispatch::RegisterPointer(*pointerId);
}

// private static void ReleaseHardCapture(Fuse.Node node, Fuse.Input.PointerEventData data) :477
void InputDispatch__ReleaseHardCapture_fn(::g::Fuse::Node* node, ::g::Fuse::Input::PointerEventData* data)
{
    InputDispatch::ReleaseHardCapture(node, data);
}

// public static void RemoveListener(Fuse.Android.NativeViews.NativeView nativeView) :330
void InputDispatch__RemoveListener_fn(::g::Fuse::Android::NativeViews::NativeView* nativeView)
{
    InputDispatch::RemoveListener(nativeView);
}

// private static void UnregisterPointer(int pointerId) :356
void InputDispatch__UnregisterPointer_fn(int* pointerId)
{
    InputDispatch::UnregisterPointer(*pointerId);
}

uSStrong< ::g::Uno::Collections::HashSet*> InputDispatch::_activePointers_;
uSStrong<uObject*> InputDispatch::_captureIdentiy_;
uSStrong< ::g::Uno::Collections::Dictionary*> InputDispatch::_listeners_;
uSStrong<InputDispatch__TouchListener*> InputDispatch::_touchListener_;

// public static void AddListener(Fuse.Android.NativeViews.NativeView nativeView) [static] :318
void InputDispatch::AddListener(::g::Fuse::Android::NativeViews::NativeView* nativeView)
{
    InputDispatch_typeof()->Init();

    if (::g::Android::java::lang::Object::op_Equality1(InputDispatch::_touchListener(), NULL))
        InputDispatch::_touchListener() = InputDispatch__TouchListener::New5();

    ::g::Uno::Collections::Dictionary__Add_fn(uPtr(InputDispatch::_listeners()), uPtr(nativeView)->Handle(), uPtr(nativeView)->Node());
    uPtr(nativeView->Handle())->setOnTouchListener((uObject*)InputDispatch::_touchListener());
}

// private static Fuse.Node FindRoot(Fuse.Node n) [static] :428
::g::Fuse::Node* InputDispatch::FindRoot(::g::Fuse::Node* n)
{
    InputDispatch_typeof()->Init();

    if (uPtr(n)->Parent() == NULL)
        return n;

    return InputDispatch::FindRoot(uPtr(n)->Parent());
}

// private static Fuse.Node GetNode(Android.android.view.View handle) [static] :336
::g::Fuse::Node* InputDispatch::GetNode(::g::Android::android::view::View* handle)
{
    InputDispatch_typeof()->Init();
    bool ret2;
    ::g::Fuse::Node* ret3;

    if ((::g::Uno::Collections::Dictionary__ContainsKey_fn(uPtr(InputDispatch::_listeners()), handle, &ret2), ret2))
        return (::g::Uno::Collections::Dictionary__get_Item_fn(uPtr(InputDispatch::_listeners()), handle, &ret3), ret3);

    return NULL;
}

// private static void LostCallback() [static] :496
void InputDispatch::LostCallback()
{
    InputDispatch_typeof()->Init();
}

// private static Fuse.Input.PointerEventData[] MakePointerEventData(Fuse.Node node, Android.android.view.View view, Android.android.view.MotionEvent motionEvent) [static] :362
uArray* InputDispatch::MakePointerEventData(::g::Fuse::Node* node, ::g::Android::android::view::View* view, ::g::Android::android::view::MotionEvent* motionEvent)
{
    InputDispatch_typeof()->Init();
    ::g::Fuse::Input::PointerEventData* collection1;
    uArray* pointerEventData = uArray::New(::TYPES[20/*Fuse.Input.PointerEventData[]*/], uPtr(motionEvent)->getPointerCount());
    ::g::Android::Runtime::IntArray* intArray = ::g::Android::Runtime::IntArray::New6(2);
    uPtr(view)->getLocationOnScreen(intArray);
    ::g::Uno::Float2 offset = ::g::Uno::Float2__New2((float)intArray->Item(0), (float)intArray->Item(1));
    float density = ::g::Fuse::IViewport::PixelsPerPoint(uInterface(uPtr(uPtr(node)->Viewport()), ::TYPES[23/*Fuse.IViewport*/]));

    for (int i = 0; i < pointerEventData->Length(); i++)
    {
        ::g::Uno::Float2 windowPoint = ::g::Uno::Float2__op_Division1(::g::Uno::Float2__op_Addition2(offset, ::g::Uno::Float2__New2(uPtr(motionEvent)->getX1(i), uPtr(motionEvent)->getY1(i))), density);
        int pointerId = motionEvent->getPointerId(i);
        uPtr(pointerEventData)->Strong< ::g::Fuse::Input::PointerEventData*>(i) = (collection1 = ::g::Fuse::Input::PointerEventData::New1(), uPtr(collection1)->PointIndex = pointerId, uPtr(collection1)->WindowPoint = windowPoint, uPtr(collection1)->Timestamp = (((double)motionEvent->getEventTime() / 1000.0) - ::g::Fuse::Time::FrameTimeBase()), uPtr(collection1)->PointerType = 2, uPtr(collection1)->IsPrimary = (pointerId == 0), collection1);
    }

    return pointerEventData;
}

// private static void RaiseCancel(Fuse.Node node, Fuse.Input.PointerEventData data) [static] :490
void InputDispatch::RaiseCancel(::g::Fuse::Node* node, ::g::Fuse::Input::PointerEventData* data)
{
    InputDispatch_typeof()->Init();
    InputDispatch::UnregisterPointer(uPtr(data)->PointIndex);
    InputDispatch::ReleaseHardCapture(node, data);
}

// public static void RaiseEvent(Fuse.Node node, Android.android.view.View view, Android.android.view.MotionEvent motionEvent) [static] :393
void InputDispatch::RaiseEvent(::g::Fuse::Node* node, ::g::Android::android::view::View* view, ::g::Android::android::view::MotionEvent* motionEvent)
{
    InputDispatch_typeof()->Init();
    int action = uPtr(motionEvent)->getActionMasked();
    uArray* data = InputDispatch::MakePointerEventData(node, view, motionEvent);

    switch (action)
    {
        case 3:
        {
            for (int i = 0; i < uPtr(data)->Length(); i++)
                InputDispatch::RaiseCancel(node, uPtr(data)->Strong< ::g::Fuse::Input::PointerEventData*>(i));

            break;
        }
        case 0:
        case 5:
        {
            for (int i1 = 0; i1 < uPtr(data)->Length(); i1++)
                InputDispatch::RaisePressed(node, uPtr(data)->Strong< ::g::Fuse::Input::PointerEventData*>(i1));

            break;
        }
        case 2:
        {
            for (int i2 = 0; i2 < uPtr(data)->Length(); i2++)
                InputDispatch::RaiseMoved(node, uPtr(data)->Strong< ::g::Fuse::Input::PointerEventData*>(i2));

            break;
        }
        case 1:
        case 6:
        {
            int pointerMask = ::g::Android::android::view::MotionEvent::ACTION_POINTER_INDEX_MASK();
            int pointerShit = ::g::Android::android::view::MotionEvent::ACTION_POINTER_INDEX_SHIFT();
            int pointerIndex = (uPtr(motionEvent)->getAction() & pointerMask) >> pointerShit;
            InputDispatch::RaiseReleased(node, uPtr(data)->Strong< ::g::Fuse::Input::PointerEventData*>(pointerIndex));
            break;
        }
    }
}

// private static void RaiseMoved(Fuse.Node node, Fuse.Input.PointerEventData data) [static] :450
void InputDispatch::RaiseMoved(::g::Fuse::Node* node, ::g::Fuse::Input::PointerEventData* data)
{
    InputDispatch_typeof()->Init();

    try
    {
        ::g::Fuse::Input::Pointer::RaiseMoved(InputDispatch::FindRoot(node), data);
    }
    catch (const uThrowable& __t)
    {
        ::g::Uno::Exception* e = __t.Exception;
        InputDispatch::ReleaseHardCapture(node, data);
        ::g::Fuse::AppBase::OnUnhandledExceptionInternal(e);
    }
}

// private static void RaisePressed(Fuse.Node node, Fuse.Input.PointerEventData data) [static] :434
void InputDispatch::RaisePressed(::g::Fuse::Node* node, ::g::Fuse::Input::PointerEventData* data)
{
    InputDispatch_typeof()->Init();

    if (!InputDispatch::RegisterPointer(uPtr(data)->PointIndex))
        return;

    try
    {
        ::g::Fuse::Input::Pointer::RaisePressed(InputDispatch::FindRoot(node), data);
    }
    catch (const uThrowable& __t)
    {
        ::g::Uno::Exception* e = __t.Exception;
        InputDispatch::ReleaseHardCapture(node, data);
        ::g::Fuse::AppBase::OnUnhandledExceptionInternal(e);
    }
}

// private static void RaiseReleased(Fuse.Node node, Fuse.Input.PointerEventData data) [static] :463
void InputDispatch::RaiseReleased(::g::Fuse::Node* node, ::g::Fuse::Input::PointerEventData* data)
{
    InputDispatch_typeof()->Init();
    InputDispatch::UnregisterPointer(uPtr(data)->PointIndex);

    try
    {
        ::g::Fuse::Input::Pointer::RaiseReleased(InputDispatch::FindRoot(node), data);
    }
    catch (const uThrowable& __t)
    {
        ::g::Uno::Exception* e = __t.Exception;
        InputDispatch::ReleaseHardCapture(node, data);
        ::g::Fuse::AppBase::OnUnhandledExceptionInternal(e);
    }
}

// private static bool RegisterPointer(int pointerId) [static] :346
bool InputDispatch::RegisterPointer(int pointerId)
{
    InputDispatch_typeof()->Init();
    bool ret4;
    bool ret5;

    if (!(::g::Uno::Collections::HashSet__Contains_fn(uPtr(InputDispatch::_activePointers()), uCRef<int>(pointerId), &ret4), ret4))
    {
        ::g::Uno::Collections::HashSet__Add_fn(uPtr(InputDispatch::_activePointers()), uCRef<int>(pointerId), &ret5);
        return true;
    }

    return false;
}

// private static void ReleaseHardCapture(Fuse.Node node, Fuse.Input.PointerEventData data) [static] :477
void InputDispatch::ReleaseHardCapture(::g::Fuse::Node* node, ::g::Fuse::Input::PointerEventData* data)
{
    InputDispatch_typeof()->Init();

    try
    {
        if (::g::Fuse::Input::Pointer::HardCapture(uPtr(data)->PointIndex, node, InputDispatch::_captureIdentiy(), uDelegate::New(::TYPES[1/*Uno.Action*/], (void*)InputDispatch__LostCallback_fn)))
            ::g::Fuse::Input::Pointer::ReleaseHardCapture(uPtr(data)->PointIndex);
    }
    catch (const uThrowable& __t)
    {
        ::g::Uno::Exception* e = __t.Exception;
    }
}

// public static void RemoveListener(Fuse.Android.NativeViews.NativeView nativeView) [static] :330
void InputDispatch::RemoveListener(::g::Fuse::Android::NativeViews::NativeView* nativeView)
{
    InputDispatch_typeof()->Init();
    bool ret6;
    uPtr(uPtr(nativeView)->Handle())->setOnTouchListener(NULL);
    ::g::Uno::Collections::Dictionary__Remove_fn(uPtr(InputDispatch::_listeners()), nativeView->Handle(), &ret6);
}

// private static void UnregisterPointer(int pointerId) [static] :356
void InputDispatch::UnregisterPointer(int pointerId)
{
    InputDispatch_typeof()->Init();
    bool ret7;
    bool ret8;

    if ((::g::Uno::Collections::HashSet__Contains_fn(uPtr(InputDispatch::_activePointers()), uCRef<int>(pointerId), &ret7), ret7))
        ::g::Uno::Collections::HashSet__Remove_fn(uPtr(InputDispatch::_activePointers()), uCRef<int>(pointerId), &ret8);
}
// }

// /usr/local/share/uno/Packages/Fuse.Android/0.27.10/$.uno#5
// ----------------------------------------------------------

// public partial sealed class NativeEditFactory :509
// {
::g::Uno::UX::Factory_type* NativeEditFactory_typeof()
{
    static uSStrong< ::g::Uno::UX::Factory_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.ObjectSize = sizeof(NativeEditFactory);
    options.TypeSize = sizeof(::g::Uno::UX::Factory_type);
    type = (::g::Uno::UX::Factory_type*)uClassType::New("Fuse.Android.NativeEditFactory", options);
    type->SetBase(::g::Uno::UX::Factory_typeof());
    type->fp_ctor_ = (void*)NativeEditFactory__New2_fn;
    type->fp_New1 = (void(*)(::g::Uno::UX::Factory*, uObject**))NativeEditFactory__New1_fn;
    ::TYPES[11] = uObject_typeof();
    type->SetFields(2,
        NativeEditFactory_typeof(), (uintptr_t)&::g::Fuse::Android::NativeEditFactory::_instance_, uFieldFlagsStatic);
    return type;
}

// private NativeEditFactory() :523
void NativeEditFactory__ctor_1_fn(NativeEditFactory* __this)
{
    __this->ctor_1();
}

// public static Fuse.Android.NativeEditFactory get_Instance() :514
void NativeEditFactory__get_Instance_fn(NativeEditFactory** __retval)
{
    *__retval = NativeEditFactory::Instance();
}

// public override sealed object New() :524
void NativeEditFactory__New1_fn(NativeEditFactory* __this, uObject** __retval)
{
    return *__retval = ::g::Fuse::Android::Controls::PlainTextEdit::New2(), void();
}

// private NativeEditFactory New() :523
void NativeEditFactory__New2_fn(NativeEditFactory** __retval)
{
    *__retval = NativeEditFactory::New2();
}

uSStrong<NativeEditFactory*> NativeEditFactory::_instance_;

// private NativeEditFactory() [instance] :523
void NativeEditFactory::ctor_1()
{
    ctor_(NULL, false);
}

// private NativeEditFactory New() [static] :523
NativeEditFactory* NativeEditFactory::New2()
{
    NativeEditFactory* obj1 = (NativeEditFactory*)uNew(NativeEditFactory_typeof());
    obj1->ctor_1();
    return obj1;
}

// public static Fuse.Android.NativeEditFactory get_Instance() [static] :514
NativeEditFactory* NativeEditFactory::Instance()
{
    if (NativeEditFactory::_instance() == NULL)
        NativeEditFactory::_instance() = NativeEditFactory::New2();

    return NativeEditFactory::_instance();
}
// }

// /usr/local/share/uno/Packages/Fuse.Android/0.27.10/.uno/$.uno
// -------------------------------------------------------------

// public partial sealed class NativeStyle :5
// {
// static NativeStyle() :7
static void NativeStyle__cctor__fn(uType* __type)
{
}

::g::Fuse::Style_type* NativeStyle_typeof()
{
    static uSStrong< ::g::Fuse::Style_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 5;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(NativeStyle);
    options.TypeSize = sizeof(::g::Fuse::Style_type);
    type = (::g::Fuse::Style_type*)uClassType::New("Fuse.Android.NativeStyle", options);
    type->SetBase(::g::Fuse::Style_typeof());
    type->fp_ctor_ = (void*)NativeStyle__New2_fn;
    type->fp_cctor_ = NativeStyle__cctor__fn;
    type->interface0.fp_Apply = (void(*)(uObject*, uObject*, bool*))::g::Fuse::Style__Apply_fn;
    ::TYPES[28] = ::g::Fuse::Style_typeof();
    ::TYPES[29] = ::g::Uno::UX::ITemplate_typeof();
    type->SetInterfaces(
        ::g::Uno::UX::ITemplate_typeof(), offsetof(::g::Fuse::Style_type, interface0));
    type->SetFields(5);
    return type;
}

// public NativeStyle() :10
void NativeStyle__ctor_1_fn(NativeStyle* __this)
{
    __this->ctor_1();
}

// private void InitializeUX() :14
void NativeStyle__InitializeUX_fn(NativeStyle* __this)
{
    __this->InitializeUX();
}

// public NativeStyle New() :10
void NativeStyle__New2_fn(NativeStyle** __retval)
{
    *__retval = NativeStyle::New2();
}

// public NativeStyle() [instance] :10
void NativeStyle::ctor_1()
{
    ctor_();
    InitializeUX();
}

// private void InitializeUX() [instance] :14
void NativeStyle::InitializeUX()
{
    ::g::Fuse::Android::NativeTemplate* temp = ::g::Fuse::Android::NativeTemplate::New1();
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Templates()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[29/*Uno.UX.ITemplate*/])), (uObject*)temp);
}

// public NativeStyle New() [static] :10
NativeStyle* NativeStyle::New2()
{
    NativeStyle* obj1 = (NativeStyle*)uNew(NativeStyle_typeof());
    obj1->ctor_1();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Android/0.27.10/$.uno#5
// ----------------------------------------------------------

// internal sealed class NativeTemplate :530
// {
NativeTemplate_type* NativeTemplate_typeof()
{
    static uSStrong<NativeTemplate_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(NativeTemplate);
    options.TypeSize = sizeof(NativeTemplate_type);
    type = (NativeTemplate_type*)uClassType::New("Fuse.Android.NativeTemplate", options);
    type->fp_ctor_ = (void*)NativeTemplate__New1_fn;
    type->interface0.fp_Apply = (void(*)(uObject*, uObject*, bool*))NativeTemplate__Apply2_fn;
    ::STRINGS[3] = uString::Const("GraphicsView inside a native application on Android API < 14 is not properly supported and will result in visual anomalies.");
    ::STRINGS[4] = uString::Const("/usr/local/share/uno/Packages/Fuse.Android/0.27.10/$.uno#5");
    ::STRINGS[5] = uString::Const("Apply");
    ::TYPES[5] = ::g::Uno::Bool_typeof();
    ::TYPES[19] = ::g::Fuse::Node_typeof();
    ::TYPES[30] = ::g::Fuse::Controls::GraphicsView_typeof();
    ::TYPES[28] = ::g::Fuse::Style_typeof();
    ::TYPES[31] = ::g::Fuse::Behavior_typeof();
    ::TYPES[32] = ::g::Android::android::os::BuildDLRVERSION_typeof();
    ::TYPES[33] = ::g::Fuse::Controls::ScrollView_typeof();
    ::TYPES[34] = ::g::Fuse::Controls::NativeViewHost_typeof();
    ::TYPES[35] = ::g::Fuse::Controls::PlainTextEdit_typeof();
    ::TYPES[36] = ::g::Uno::UX::Factory_typeof();
    ::TYPES[37] = ::g::Fuse::Android::NativeEditFactory_typeof();
    ::TYPES[38] = ::g::Fuse::Controls::Button_typeof();
    ::TYPES[39] = ::g::Fuse::Controls::Switch_typeof();
    ::TYPES[40] = ::g::Fuse::Controls::TextEdit_typeof();
    ::TYPES[41] = ::g::Fuse::Controls::TextBlock_typeof();
    ::TYPES[42] = ::g::Fuse::Controls::Slider_typeof();
    ::TYPES[43] = ::g::Fuse::Controls::Image_typeof();
    ::TYPES[44] = ::g::Fuse::Controls::Rectangle_typeof();
    ::TYPES[45] = ::g::Fuse::Controls::Circle_typeof();
    ::TYPES[46] = ::g::Fuse::Controls::WebView_typeof();
    ::TYPES[47] = ::g::Fuse::Controls::MapView_typeof();
    ::TYPES[48] = ::g::Fuse::Controls::ParentControl_typeof();
    ::TYPES[49] = ::g::Fuse::Controls::ContentControl_typeof();
    type->SetInterfaces(
        ::g::Uno::UX::ITemplate_typeof(), offsetof(NativeTemplate_type, interface0));
    return type;
}

// public generated NativeTemplate() :530
void NativeTemplate__ctor__fn(NativeTemplate* __this)
{
    __this->ctor_();
}

// public extern bool Apply(Fuse.Controls.ContentControl contentControl) :610
void NativeTemplate__Apply_fn(NativeTemplate* __this, ::g::Fuse::Controls::ContentControl* contentControl, bool* __retval)
{
    *__retval = __this->Apply(contentControl);
}

// public extern bool Apply(Fuse.Controls.ParentControl parentControl) :558
void NativeTemplate__Apply1_fn(NativeTemplate* __this, ::g::Fuse::Controls::ParentControl* parentControl, bool* __retval)
{
    *__retval = __this->Apply1(parentControl);
}

// public extern bool Apply(object obj) :644
void NativeTemplate__Apply2_fn(NativeTemplate* __this, uObject* obj, bool* __retval)
{
    *__retval = __this->Apply2(obj);
}

// private bool HaveGraphicsViewAncestor(Fuse.Node node) :532
void NativeTemplate__HaveGraphicsViewAncestor_fn(NativeTemplate* __this, ::g::Fuse::Node* node, bool* __retval)
{
    *__retval = __this->HaveGraphicsViewAncestor(node);
}

// public generated NativeTemplate New() :530
void NativeTemplate__New1_fn(NativeTemplate** __retval)
{
    *__retval = NativeTemplate::New1();
}

// public generated NativeTemplate() [instance] :530
void NativeTemplate::ctor_()
{
}

// public extern bool Apply(Fuse.Controls.ContentControl contentControl) [instance] :610
bool NativeTemplate::Apply(::g::Fuse::Controls::ContentControl* contentControl)
{
    if (!HaveGraphicsViewAncestor(contentControl))
    {
        ::g::Fuse::Controls::GraphicsView* graphicsView = uAs< ::g::Fuse::Controls::GraphicsView*>(contentControl, ::TYPES[30/*Fuse.Controls.GraphicsView*/]);

        if (graphicsView != NULL)
        {
            uPtr(contentControl)->AddStyleStyle(::g::Fuse::Themes::GraphicsStyle::New2());

            if (uPtr(graphicsView)->IsFullScreen)
                contentControl->AddStyleBehavior(::g::Fuse::Android::NativeViews::SurfaceView::New1());
            else
            {
                int api = ::g::Android::android::os::BuildDLRVERSION::SDK_INT();

                if (api < 14)
                {
                    ::g::Fuse::Diagnostics::Error(::STRINGS[3/*"GraphicsVie...*/], NULL, ::STRINGS[4/*"/usr/local/...*/], 628, ::STRINGS[5/*"Apply"*/]);
                    uPtr(contentControl)->AddStyleBehavior(::g::Fuse::Android::NativeViews::SurfaceView::New1());
                }
                else
                    uPtr(contentControl)->AddStyleBehavior(::g::Fuse::Android::NativeViews::TextureView::New1());
            }
        }
        else if (uIs(contentControl, ::TYPES[33/*Fuse.Controls.ScrollView*/]))
            uPtr(contentControl)->AddStyleBehavior(::g::Fuse::Android::NativeViews::ScrollView::New1());
        else
            contentControl->AddStyleBehavior(::g::Fuse::Android::NativeViews::ContentControl::New1());
    }

    return true;
}

// public extern bool Apply(Fuse.Controls.ParentControl parentControl) [instance] :558
bool NativeTemplate::Apply1(::g::Fuse::Controls::ParentControl* parentControl)
{
    bool ret2;
    bool ret3;

    if (uIs(parentControl, ::TYPES[34/*Fuse.Controls.NativeViewHost*/]))
    {
        uPtr(parentControl)->AddStyleBehavior(::g::Fuse::Android::NativeViews::NativeViewHost::New1());
        return true;
    }

    if (HaveGraphicsViewAncestor(parentControl))
    {
        ::g::Fuse::Controls::PlainTextEdit* planTextEdit = uAs< ::g::Fuse::Controls::PlainTextEdit*>(parentControl, ::TYPES[35/*Fuse.Controls.PlainTextEdit*/]);

        if (planTextEdit != NULL)
        {
            ::g::Fuse::StyleProperty1__SetStyle_fn(uPtr(::g::Fuse::Controls::PlainTextEdit::NativeEditProperty()), planTextEdit, ::g::Fuse::Android::NativeEditFactory::Instance(), &ret2);
            ::g::Fuse::StyleProperty1__SetStyle_fn(uPtr(::g::Fuse::Controls::PlainTextEdit::NativeTextProperty()), planTextEdit, ::g::Fuse::Controls::Graphics::TextVisual__Factory::New2(), &ret3);
        }
    }
    else
    {
        uPtr(parentControl)->AddStyleBehavior(::g::Fuse::Android::NativeViews::ParentControl::New1());

        if (uIs(parentControl, ::TYPES[38/*Fuse.Controls.Button*/]))
            parentControl->AddStyleChild(::g::Fuse::Android::Controls::Button::New1());
        else if (uIs(parentControl, ::TYPES[39/*Fuse.Controls.Switch*/]))
            parentControl->AddStyleChild(::g::Fuse::Android::Controls::Switch::New1());
        else if (uIs(parentControl, ::TYPES[40/*Fuse.Controls.TextEdit*/]))
            parentControl->AddStyleChild(::g::Fuse::Android::Controls::TextEdit::New1());
        else if (uIs(parentControl, ::TYPES[41/*Fuse.Controls.TextBlock*/]))
            parentControl->AddStyleChild(::g::Fuse::Android::Controls::TextView::New1());
        else if (uIs(parentControl, ::TYPES[42/*Fuse.Controls.Slider*/]))
            parentControl->AddStyleChild(::g::Fuse::Android::Controls::SeekBar::New1());
        else if (uIs(parentControl, ::TYPES[43/*Fuse.Controls.Image*/]))
            parentControl->AddStyleChild(::g::Fuse::Android::Controls::Image::New1());
        else if (uIs(parentControl, ::TYPES[44/*Fuse.Controls.Rectangle*/]))
            parentControl->AddStyleChild(::g::Fuse::Android::Controls::Rectangle::New1());
        else if (uIs(parentControl, ::TYPES[45/*Fuse.Controls.Circle*/]))
            parentControl->AddStyleChild(::g::Fuse::Android::Controls::Circle::New1());
        else if (uIs(parentControl, ::TYPES[46/*Fuse.Controls.WebView*/]))
            parentControl->AddStyleChild(::g::Fuse::Android::Controls::WebView::New1());
        else if (uIs(parentControl, ::TYPES[47/*Fuse.Controls.MapView*/]))
            ;
    }

    return true;
}

// public extern bool Apply(object obj) [instance] :644
bool NativeTemplate::Apply2(uObject* obj)
{
    ::g::Fuse::Controls::ParentControl* parentControl = uAs< ::g::Fuse::Controls::ParentControl*>(obj, ::TYPES[48/*Fuse.Controls.ParentControl*/]);

    if (parentControl != NULL)
        return Apply1(parentControl);

    ::g::Fuse::Controls::ContentControl* contentControl = uAs< ::g::Fuse::Controls::ContentControl*>(obj, ::TYPES[49/*Fuse.Controls.ContentControl*/]);

    if (contentControl != NULL)
        return Apply(contentControl);

    return true;
}

// private bool HaveGraphicsViewAncestor(Fuse.Node node) [instance] :532
bool NativeTemplate::HaveGraphicsViewAncestor(::g::Fuse::Node* node)
{
    if (uPtr(node)->Parent() == NULL)
        return false;

    if (uIs(node, ::TYPES[34/*Fuse.Controls.NativeViewHost*/]))
        return false;

    if (uIs(uPtr(node)->Parent(), ::TYPES[30/*Fuse.Controls.GraphicsView*/]))
        return true;

    return HaveGraphicsViewAncestor(uPtr(node)->Parent());
}

// public generated NativeTemplate New() [static] :530
NativeTemplate* NativeTemplate::New1()
{
    NativeTemplate* obj1 = (NativeTemplate*)uNew(NativeTemplate_typeof());
    obj1->ctor_();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Android/0.27.10/$.uno#6
// ----------------------------------------------------------

// internal sealed extern class RootView :732
// {
uType* RootView_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.ObjectSize = sizeof(RootView);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Android.RootView", options);
    type->fp_ctor_ = (void*)RootView__New1_fn;
    ::STRINGS[6] = uString::Const("A rootview is already set");
    ::TYPES[50] = ::g::Android::android::widget::RelativeLayout_typeof();
    ::TYPES[51] = ::g::Android::android::content::Context_typeof();
    ::TYPES[52] = ::g::Android::android::view::ViewGroupDLRLayoutParams_typeof();
    ::TYPES[53] = ::g::Uno::Platform2::Application_typeof();
    ::TYPES[54] = ::g::Android::android::view::View_typeof();
    ::TYPES[17] = ::g::Fuse::Android::NativeViews::NativeView_typeof();
    ::TYPES[12] = ::g::Uno::Int_typeof();
    ::TYPES[55] = ::g::Uno::Float2_typeof();
    type->SetFields(0,
        ::g::Android::android::widget::RelativeLayout_typeof(), offsetof(::g::Fuse::Android::RootView, _relativeLayout), 0,
        ::g::Fuse::Android::NativeViews::NativeView_typeof(), offsetof(::g::Fuse::Android::RootView, _root), 0,
        RootView_typeof(), (uintptr_t)&::g::Fuse::Android::RootView::_singleton_, uFieldFlagsStatic);
    return type;
}

// private RootView() :737
void RootView__ctor__fn(RootView* __this)
{
    __this->ctor_();
}

// public static void ClearRoot() :800
void RootView__ClearRoot_fn()
{
    RootView::ClearRoot();
}

// private void Invalidate() :778
void RootView__Invalidate_fn(RootView* __this)
{
    __this->Invalidate();
}

// private RootView New() :737
void RootView__New1_fn(RootView** __retval)
{
    *__retval = RootView::New1();
}

// private Fuse.Android.NativeViews.NativeView get_Root() :754
void RootView__get_Root_fn(RootView* __this, ::g::Fuse::Android::NativeViews::NativeView** __retval)
{
    *__retval = __this->Root();
}

// private void set_Root(Fuse.Android.NativeViews.NativeView value) :755
void RootView__set_Root_fn(RootView* __this, ::g::Fuse::Android::NativeViews::NativeView* value)
{
    __this->Root(value);
}

// public static void SetRoot(Fuse.Android.NativeViews.NativeView view) :792
void RootView__SetRoot_fn(::g::Fuse::Android::NativeViews::NativeView* view)
{
    RootView::SetRoot(view);
}

// private static Fuse.Android.RootView get_Singleton() :789
void RootView__get_Singleton_fn(RootView** __retval)
{
    *__retval = RootView::Singleton();
}

// private void UpdateRootSize(float2 size) :770
void RootView__UpdateRootSize_fn(RootView* __this, ::g::Uno::Float2* size)
{
    __this->UpdateRootSize(*size);
}

// public static void UpdateSize(float2 size) :810
void RootView__UpdateSize_fn(::g::Uno::Float2* size)
{
    RootView::UpdateSize(*size);
}

uSStrong<RootView*> RootView::_singleton_;

// private RootView() [instance] :737
void RootView::ctor_()
{
    _relativeLayout = ::g::Fuse::Android::RootViewContainer::New13(::g::Android::android::app::Activity::GetAppActivity());
    uPtr(_relativeLayout)->setLayoutParams(::g::Android::android::widget::RelativeLayoutDLRLayoutParams::New19(::g::Android::android::view::ViewGroupDLRLayoutParams::FILL_PARENT(), ::g::Android::android::view::ViewGroupDLRLayoutParams::FILL_PARENT()));
    uPtr(_relativeLayout)->setFocusable(true);
    uPtr(_relativeLayout)->setFocusableInTouchMode(true);
    ::g::Uno::Platform2::Application::RootView(::g::Fuse::Android::BindingView::GetNativeViewHandle(_relativeLayout));
}

// private void Invalidate() [instance] :778
void RootView::Invalidate()
{
    if (Root() != NULL)
        uPtr(uPtr(Root())->Handle())->invalidate();

    uPtr(_relativeLayout)->invalidate();
}

// private Fuse.Android.NativeViews.NativeView get_Root() [instance] :754
::g::Fuse::Android::NativeViews::NativeView* RootView::Root()
{
    return _root;
}

// private void set_Root(Fuse.Android.NativeViews.NativeView value) [instance] :755
void RootView::Root(::g::Fuse::Android::NativeViews::NativeView* value)
{
    if (_root != NULL)
        uPtr(_relativeLayout)->removeView(uPtr(_root)->Handle());

    _root = value;

    if (_root != NULL)
    {
        uPtr(_relativeLayout)->addView(uPtr(_root)->Handle());
        Invalidate();
    }
}

// private void UpdateRootSize(float2 size) [instance] :770
void RootView::UpdateRootSize(::g::Uno::Float2 size)
{
    if (Root() != NULL)
        uPtr(uPtr(Root())->Handle())->setLayoutParams(::g::Android::android::widget::RelativeLayoutDLRLayoutParams::New19((int)size.X, (int)size.Y));
}

// public static void ClearRoot() [static] :800
void RootView::ClearRoot()
{
    uPtr(RootView::Singleton())->Root(NULL);
}

// private RootView New() [static] :737
RootView* RootView::New1()
{
    RootView* obj2 = (RootView*)uNew(RootView_typeof());
    obj2->ctor_();
    return obj2;
}

// public static void SetRoot(Fuse.Android.NativeViews.NativeView view) [static] :792
void RootView::SetRoot(::g::Fuse::Android::NativeViews::NativeView* view)
{
    if (uPtr(RootView::Singleton())->Root() != NULL)
        U_THROW(::g::Uno::Exception::New2(::STRINGS[6/*"A rootview ...*/]));

    uPtr(RootView::Singleton())->Root(view);
}

// public static void UpdateSize(float2 size) [static] :810
void RootView::UpdateSize(::g::Uno::Float2 size)
{
    uPtr(RootView::Singleton())->UpdateRootSize(size);
    uPtr(RootView::Singleton())->Invalidate();
}

// private static Fuse.Android.RootView get_Singleton() [static] :789
RootView* RootView::Singleton()
{
    RootView* ind1 = RootView::_singleton();
    return (ind1 != NULL) ? ind1 : (RootView*)(RootView::_singleton() = RootView::New1());
}
// }

// /usr/local/share/uno/Packages/Fuse.Android/0.27.10/$.uno#6
// ----------------------------------------------------------

// internal sealed extern class RootViewContainer :686
// {
::g::Android::android::view::ViewGroup_type* RootViewContainer_typeof()
{
    static uSStrong< ::g::Android::android::view::ViewGroup_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 7;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(RootViewContainer);
    options.TypeSize = sizeof(::g::Android::android::view::ViewGroup_type);
    type = (::g::Android::android::view::ViewGroup_type*)uClassType::New("Fuse.Android.RootViewContainer", options);
    type->SetBase(::g::Android::android::widget::RelativeLayout_typeof());
    type->fp_onInterceptTouchEvent = (void(*)(::g::Android::android::view::ViewGroup*, ::g::Android::android::view::MotionEvent*, bool*))RootViewContainer__onInterceptTouchEvent_fn;
    type->fp_onTouchEvent = (void(*)(::g::Android::android::view::View*, ::g::Android::android::view::MotionEvent*, bool*))RootViewContainer__onTouchEvent_fn;
    type->interface0.fp__GetJavaObject = (void(*)(uObject*, jobject*))::g::Android::Base::Wrappers::JWrapper___GetJavaObject_fn;
    type->interface0.fp__IsSubclassed = (void(*)(uObject*, bool*))::g::Android::Base::Wrappers::JWrapper___IsSubclassed_fn;
    type->interface1.fp_Dispose = (void(*)(uObject*))::g::Android::Base::Wrappers::JWrapper__UnoIDisposableDispose_fn;
    ::STRINGS[7] = uString::Const("com.Bindings.Binding_Fuse_Android_RootViewContainer");
    ::STRINGS[1] = uString::Const("<init>");
    ::STRINGS[8] = uString::Const("(JLandroid/content/Context;)V");
    ::TYPES[5] = ::g::Uno::Bool_typeof();
    ::TYPES[6] = ::g::Android::Base::Wrappers::JWrapper_typeof();
    ::TYPES[7] = ::g::Android::Base::Primitives::ujclass_typeof();
    ::TYPES[16] = ::g::Android::java::lang::Object_typeof();
    ::TYPES[19] = ::g::Fuse::Node_typeof();
    ::TYPES[54] = ::g::Android::android::view::View_typeof();
    ::TYPES[56] = ::g::Fuse::AppBase_typeof();
    ::TYPES[57] = ::g::Uno::Application_typeof();
    type->SetInterfaces(
        ::g::Android::Base::Wrappers::IJWrapper_typeof(), offsetof(::g::Android::android::view::ViewGroup_type, interface0),
        ::g::Uno::IDisposable_typeof(), offsetof(::g::Android::android::view::ViewGroup_type, interface1));
    type->SetFields(5,
        ::g::Android::android::view::MotionEvent_typeof(), offsetof(::g::Fuse::Android::RootViewContainer, _currentEvent), 0,
        ::g::Android::Base::Primitives::ujclass_typeof(), (uintptr_t)&::g::Fuse::Android::RootViewContainer::_javaClass5_, uFieldFlagsStatic);
    return type;
}

// public RootViewContainer(Android.android.content.Context context) :690
void RootViewContainer__ctor_17_fn(RootViewContainer* __this, ::g::Android::android::content::Context* context)
{
    __this->ctor_17(context);
}

// public RootViewContainer New(Android.android.content.Context context) :690
void RootViewContainer__New13_fn(::g::Android::android::content::Context* context, RootViewContainer** __retval)
{
    *__retval = RootViewContainer::New13(context);
}

// public override sealed bool onInterceptTouchEvent(Android.android.view.MotionEvent motionEvent) :694
void RootViewContainer__onInterceptTouchEvent_fn(RootViewContainer* __this, ::g::Android::android::view::MotionEvent* motionEvent, bool* __retval)
{
    bool ret2;
    __this->_currentEvent = motionEvent;
    return *__retval = (::g::Android::android::view::ViewGroup__onInterceptTouchEvent_fn(__this, motionEvent, &ret2), ret2), void();
}

// public override sealed bool onTouchEvent(Android.android.view.MotionEvent motionEvent) :700
void RootViewContainer__onTouchEvent_fn(RootViewContainer* __this, ::g::Android::android::view::MotionEvent* motionEvent, bool* __retval)
{
    bool ret3;

    if (::g::Android::java::lang::Object::op_Inequality1(__this->_currentEvent, motionEvent))
        return *__retval = false, void();

    bool result = (::g::Android::android::view::View__onTouchEvent_fn(__this, motionEvent, &ret3), ret3);
    ::g::Fuse::Node* node = __this->RootNode();

    if ((node == NULL) || !uPtr(node)->IsRooted())
        return *__retval = false, void();

    ::g::Fuse::Android::InputDispatch::RaiseEvent(node, __this, motionEvent);
    return *__retval = ::g::Android::java::lang::Object::op_Equality1(__this->_currentEvent, motionEvent), void();
}

// private Fuse.Node get_RootNode() :720
void RootViewContainer__get_RootNode_fn(RootViewContainer* __this, ::g::Fuse::Node** __retval)
{
    *__retval = __this->RootNode();
}

jclass RootViewContainer::_javaClass5_;

// public RootViewContainer(Android.android.content.Context context) [instance] :690
void RootViewContainer::ctor_17(::g::Android::android::content::Context* context)
{
    if (!_subclassed)
    {
        _subclassed = true;
        _javaClassName = ::STRINGS[7/*"com.Binding...*/];
    }

    ctor_16(::g::Android::Base::JNI::GetDefaultObject(), ::g::Android::Base::JNI::GetDefaultType(), false, false);

    if (::g::Android::Base::Primitives::ujclass::op_Equality(RootViewContainer::_javaClass5(), ::g::Android::Base::Primitives::ujclass::Null()))
    {
        RootViewContainer::_javaClass5() = ::g::Android::Base::JNI::LocalToGlobalRef(::g::Android::Base::JNI::LoadClass3(::STRINGS[7/*"com.Binding...*/], false));
        JniHelper jni;
        BEGIN_REG_MTD(2);
        REG_MTD(0,"__n_onInterceptTouchEvent","(JLandroid/view/MotionEvent;J)Z",Binding_Fuse_Android_RootViewContainer__onInterceptTouchEvent23409);
        REG_MTD(1,"__n_onTouchEvent","(JLandroid/view/MotionEvent;J)Z",Binding_Fuse_Android_RootViewContainer__onTouchEvent22991);
        COMMIT_REG_MTD(RootViewContainer::_javaClass5());
    }

    jclass tmpCls = ::g::Android::Base::JNI::LoadClass3(_javaClassName, false);
    jmethodID mtd = ::g::Android::Base::JNI::GetMethodID(tmpCls, ::STRINGS[1/*"<init>"*/], ::STRINGS[8/*"(JLandroid/...*/]);
    jobject tmp = ::g::Android::Base::JNI::NewObject2(tmpCls, mtd, ::g::Android::Base::Primitives::ujvalue::op_Implicit7((jlong)this->__weakptr), ::g::Android::Base::Primitives::ujvalue::op_Implicit8(uPtr(context)->_GetJavaObject()));
    ::g::Android::Base::JNI::CheckException();
    _javaObject = ::g::Android::Base::JNI::LocalToGlobalRef1(tmp);
    ::g::Android::Base::JNI::DeleteLocalRef(tmpCls);
}

// private Fuse.Node get_RootNode() [instance] :720
::g::Fuse::Node* RootViewContainer::RootNode()
{
    ::g::Fuse::AppBase* app = uAs< ::g::Fuse::AppBase*>(::g::Uno::Application::Current(), ::TYPES[56/*Fuse.AppBase*/]);

    if (app == NULL)
        return NULL;

    return uPtr(app)->RootNode();
}

// public RootViewContainer New(Android.android.content.Context context) [static] :690
RootViewContainer* RootViewContainer::New13(::g::Android::android::content::Context* context)
{
    RootViewContainer* obj1 = (RootViewContainer*)uNew(RootViewContainer_typeof());
    obj1->ctor_17(context);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Android/0.27.10/$.uno#8
// ----------------------------------------------------------

// internal sealed extern class TextControlLayout :954
// {
uType* TextControlLayout_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 5;
    options.ObjectSize = sizeof(TextControlLayout);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Android.TextControlLayout", options);
    type->fp_ctor_ = (void*)TextControlLayout__New1_fn;
    ::STRINGS[9] = uString::Const("wrapWidth");
    ::TYPES[23] = ::g::Fuse::IViewport_typeof();
    ::TYPES[19] = ::g::Fuse::Node_typeof();
    ::TYPES[58] = ::g::Fuse::Controls::TextControl_typeof();
    ::TYPES[12] = ::g::Uno::Int_typeof();
    ::TYPES[59] = ::g::Uno::String_typeof();
    ::TYPES[60] = ::g::Fuse::Android::Internal::StaticLayout_typeof();
    ::TYPES[21] = ::g::Uno::Float_typeof();
    ::TYPES[61] = ::g::Uno::Rect_typeof();
    ::TYPES[62] = ::g::Uno::Int2_typeof();
    ::TYPES[63] = ::g::Fuse::Android::Internal::TextPaint_typeof();
    ::TYPES[64] = ::g::Fuse::Android::Typeface_typeof();
    type->SetFields(0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Android::TextControlLayout, _cacheMin), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Android::TextControlLayout, _cacheValid), 0,
        ::g::Uno::Float_typeof(), offsetof(::g::Fuse::Android::TextControlLayout, _cacheWrapWidthPoints), 0,
        ::g::Fuse::Android::Internal::StaticLayout_typeof(), offsetof(::g::Fuse::Android::TextControlLayout, _Layout), 0,
        ::g::Uno::Recti_typeof(), offsetof(::g::Fuse::Android::TextControlLayout, _PixelBounds), 0);
    return type;
}

// public generated TextControlLayout() :954
void TextControlLayout__ctor__fn(TextControlLayout* __this)
{
    __this->ctor_();
}

// public void Dispose() :959
void TextControlLayout__Dispose_fn(TextControlLayout* __this)
{
    __this->Dispose();
}

// public void Invalidate() :968
void TextControlLayout__Invalidate_fn(TextControlLayout* __this)
{
    __this->Invalidate();
}

// public generated Fuse.Android.Internal.StaticLayout get_Layout() :956
void TextControlLayout__get_Layout_fn(TextControlLayout* __this, ::g::Fuse::Android::Internal::StaticLayout** __retval)
{
    *__retval = __this->Layout();
}

// private generated void set_Layout(Fuse.Android.Internal.StaticLayout value) :956
void TextControlLayout__set_Layout_fn(TextControlLayout* __this, ::g::Fuse::Android::Internal::StaticLayout* value)
{
    __this->Layout(value);
}

// public bool Measure(Fuse.Controls.TextControl Control, Fuse.Android.Internal.TextPaint Paint, float wrapWidthPoints, bool useMin) :973
void TextControlLayout__Measure_fn(TextControlLayout* __this, ::g::Fuse::Controls::TextControl* Control, ::g::Fuse::Android::Internal::TextPaint* Paint, float* wrapWidthPoints, bool* useMin, bool* __retval)
{
    *__retval = __this->Measure(Control, Paint, *wrapWidthPoints, *useMin);
}

// public generated TextControlLayout New() :954
void TextControlLayout__New1_fn(TextControlLayout** __retval)
{
    *__retval = TextControlLayout::New1();
}

// public generated Uno.Recti get_PixelBounds() :957
void TextControlLayout__get_PixelBounds_fn(TextControlLayout* __this, ::g::Uno::Recti* __retval)
{
    *__retval = __this->PixelBounds();
}

// private generated void set_PixelBounds(Uno.Recti value) :957
void TextControlLayout__set_PixelBounds_fn(TextControlLayout* __this, ::g::Uno::Recti* value)
{
    __this->PixelBounds(*value);
}

// private Fuse.Android.Internal.StaticLayout.Alignment TextAlignmentToAndroidLayoutAlignment(Fuse.Elements.TextAlignment textAlignment) :1027
void TextControlLayout__TextAlignmentToAndroidLayoutAlignment_fn(TextControlLayout* __this, int* textAlignment, int* __retval)
{
    *__retval = __this->TextAlignmentToAndroidLayoutAlignment(*textAlignment);
}

// public void UpdatePaint(Fuse.Controls.TextControl Control, Fuse.Android.Internal.TextPaint paint) :1039
void TextControlLayout__UpdatePaint_fn(TextControlLayout* __this, ::g::Fuse::Controls::TextControl* Control, ::g::Fuse::Android::Internal::TextPaint* paint)
{
    __this->UpdatePaint(Control, paint);
}

// public generated TextControlLayout() [instance] :954
void TextControlLayout::ctor_()
{
}

// public void Dispose() [instance] :959
void TextControlLayout::Dispose()
{
    Layout(NULL);
}

// public void Invalidate() [instance] :968
void TextControlLayout::Invalidate()
{
    _cacheValid = false;
}

// public generated Fuse.Android.Internal.StaticLayout get_Layout() [instance] :956
::g::Fuse::Android::Internal::StaticLayout* TextControlLayout::Layout()
{
    return _Layout;
}

// private generated void set_Layout(Fuse.Android.Internal.StaticLayout value) [instance] :956
void TextControlLayout::Layout(::g::Fuse::Android::Internal::StaticLayout* value)
{
    _Layout = value;
}

// public bool Measure(Fuse.Controls.TextControl Control, Fuse.Android.Internal.TextPaint Paint, float wrapWidthPoints, bool useMin) [instance] :973
bool TextControlLayout::Measure(::g::Fuse::Controls::TextControl* Control, ::g::Fuse::Android::Internal::TextPaint* Paint, float wrapWidthPoints, bool useMin)
{
    if ((((Layout() != NULL) && _cacheValid) && (_cacheWrapWidthPoints == wrapWidthPoints)) && (_cacheMin == useMin))
        return false;

    if (wrapWidthPoints < 0.0f)
        U_THROW(::g::Uno::ArgumentOutOfRangeException::New6(::STRINGS[9/*"wrapWidth"*/]));

    float wrapWidthPixels = wrapWidthPoints * ::g::Fuse::IViewport::PixelsPerPoint(uInterface(uPtr(uPtr(Control)->Viewport()), ::TYPES[23/*Fuse.IViewport*/]));
    int align = TextAlignmentToAndroidLayoutAlignment(Control->TextAlignment());
    uString* text = Control->RenderValue();
    float lineSpacing = Control->LineSpacing() * ::g::Fuse::IViewport::PixelsPerPoint(uInterface(uPtr(Control->Viewport()), ::TYPES[23/*Fuse.IViewport*/]));
    float desiredWidth = ::g::Fuse::Android::Internal::StaticLayout::GetDesiredWidth(text, Paint);

    if (useMin)
        wrapWidthPixels = ::g::Uno::Math::Min1(wrapWidthPixels, desiredWidth);

    int width = (int)::g::Uno::Math::Min1(::g::Uno::Math::Ceil1(wrapWidthPixels), 2.14748365e+09f);

    if (Control->TextWrapping() == 0)
    {
        int layoutWidth = (int)::g::Uno::Math::Ceil1(::g::Uno::Math::Max1(wrapWidthPixels, desiredWidth));
        Layout((uPtr(Control)->TextTruncation() == 0) ? (::g::Fuse::Android::Internal::StaticLayout*)::g::Fuse::Android::Internal::StaticLayout::New3(text, 0, uPtr(uPtr(Control)->RenderValue())->Length(), Paint, layoutWidth, align, 1.0f, lineSpacing, false, 0, width) : (::g::Fuse::Android::Internal::StaticLayout*)::g::Fuse::Android::Internal::StaticLayout::New2(text, Paint, layoutWidth, align, 1.0f, lineSpacing, false));
    }
    else
        Layout(::g::Fuse::Android::Internal::StaticLayout::New2(text, Paint, width, align, 1.0f, lineSpacing, false));

    ::g::Uno::Rect bounds = ::g::Uno::Rect__New1(0.0f, 0.0f, 0.0f, 0.0f);

    for (int i = 0; i < uPtr(Layout())->LineCount(); ++i)
    {
        ::g::Uno::Rect rLineBounds = uPtr(Paint)->GetTextBounds1(text, uPtr(Layout())->GetLineStart(i), uPtr(Layout())->GetLineEnd(i));
        ::g::Uno::Rect lineBounds = ::g::Uno::Rect__Translate(rLineBounds, ::g::Uno::Float2__New2(uPtr(Layout())->GetLineLeft(i), (float)uPtr(Layout())->GetLineBaseline(i)));
        bounds = (i == 0) ? lineBounds : ::g::Uno::Rect__Union(bounds, lineBounds);
    }

    ::g::Uno::Int2 min = ::g::Uno::Int2__op_Explicit(::g::Uno::Math::Floor2(bounds.Minimum()));
    ::g::Uno::Int2 max = ::g::Uno::Int2__op_Explicit(::g::Uno::Math::Ceil2(bounds.Maximum()));
    PixelBounds(::g::Uno::Recti__Inflate(::g::Uno::Recti__New1(min.X, min.Y, max.X, max.Y), 1));
    _cacheValid = true;
    _cacheWrapWidthPoints = wrapWidthPoints;
    _cacheMin = useMin;
    return true;
}

// public generated Uno.Recti get_PixelBounds() [instance] :957
::g::Uno::Recti TextControlLayout::PixelBounds()
{
    return _PixelBounds;
}

// private generated void set_PixelBounds(Uno.Recti value) [instance] :957
void TextControlLayout::PixelBounds(::g::Uno::Recti value)
{
    _PixelBounds = value;
}

// private Fuse.Android.Internal.StaticLayout.Alignment TextAlignmentToAndroidLayoutAlignment(Fuse.Elements.TextAlignment textAlignment) [instance] :1027
int TextControlLayout::TextAlignmentToAndroidLayoutAlignment(int textAlignment)
{
    switch (textAlignment)
    {
        case 0:
            return 1;
        case 1:
            return 0;
        case 2:
            return 2;
    }

    return 1;
}

// public void UpdatePaint(Fuse.Controls.TextControl Control, Fuse.Android.Internal.TextPaint paint) [instance] :1039
void TextControlLayout::UpdatePaint(::g::Fuse::Controls::TextControl* Control, ::g::Fuse::Android::Internal::TextPaint* paint)
{
    bool ret2;
    uPtr(paint)->AntiAlias(true);
    paint->Typeface((::g::Fuse::StyleProperty1__HasValue_fn(uPtr(::g::Fuse::Controls::TextControl::FontProperty()), Control, &ret2), ret2) ? (::g::Fuse::Android::Typeface*)::g::Fuse::Android::TypefaceCache::GetTypeface(uPtr(Control)->Font()) : (::g::Fuse::Android::Typeface*)::g::Fuse::Android::Typeface::Default());
    paint->TextSize(Control->FontSize() * ::g::Fuse::IViewport::PixelsPerPoint(uInterface(uPtr(Control->Viewport()), ::TYPES[23/*Fuse.IViewport*/])));
}

// public generated TextControlLayout New() [static] :954
TextControlLayout* TextControlLayout::New1()
{
    TextControlLayout* obj1 = (TextControlLayout*)uNew(TextControlLayout_typeof());
    obj1->ctor_();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Android/0.27.10/$.uno#8
// ----------------------------------------------------------

// internal sealed extern class TextRenderer :1049
// {
TextRenderer_type* TextRenderer_typeof()
{
    static uSStrong<TextRenderer_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 11;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(TextRenderer);
    options.TypeSize = sizeof(TextRenderer_type);
    type = (TextRenderer_type*)uClassType::New("Fuse.Android.TextRenderer", options);
    type->interface0.fp_GetContentSize = (void(*)(uObject*, ::g::Fuse::LayoutParams*, ::g::Uno::Float2*))TextRenderer__GetContentSize_fn;
    type->interface0.fp_Draw = (void(*)(uObject*, ::g::Fuse::DrawContext*, ::g::Fuse::Node*))TextRenderer__Draw_fn;
    type->interface0.fp_Arrange = (void(*)(uObject*, ::g::Uno::Float2*, ::g::Uno::Float2*))TextRenderer__Arrange_fn;
    type->interface0.fp_Invalidate = (void(*)(uObject*))TextRenderer__Invalidate_fn;
    type->interface0.fp_GetRenderBounds = (void(*)(uObject*, ::g::Uno::Rect*))TextRenderer__GetRenderBounds_fn;
    type->interface0.fp_SoftDispose = (void(*)(uObject*))TextRenderer__SoftDispose_fn;
    ::TYPES[65] = ::g::OpenGL::GLTextureHandle_typeof();
    ::TYPES[66] = ::g::Fuse::Controls::Graphics::ITextRenderer_typeof();
    ::TYPES[67] = ::g::Fuse::LayoutParams_typeof();
    ::TYPES[21] = ::g::Uno::Float_typeof();
    ::TYPES[60] = ::g::Fuse::Android::Internal::StaticLayout_typeof();
    ::TYPES[68] = ::g::Fuse::Android::TextControlLayout_typeof();
    ::TYPES[23] = ::g::Fuse::IViewport_typeof();
    ::TYPES[19] = ::g::Fuse::Node_typeof();
    ::TYPES[69] = ::g::Uno::Recti_typeof();
    ::TYPES[70] = ::g::Fuse::Android::Blitter_typeof();
    ::TYPES[5] = ::g::Uno::Bool_typeof();
    ::TYPES[62] = ::g::Uno::Int2_typeof();
    ::TYPES[58] = ::g::Fuse::Controls::TextControl_typeof();
    ::TYPES[1] = ::g::Uno::Action_typeof();
    ::TYPES[55] = ::g::Uno::Float2_typeof();
    ::TYPES[59] = ::g::Uno::String_typeof();
    ::TYPES[12] = ::g::Uno::Int_typeof();
    ::TYPES[63] = ::g::Fuse::Android::Internal::TextPaint_typeof();
    type->SetInterfaces(
        ::g::Fuse::Controls::Graphics::ITextRenderer_typeof(), offsetof(TextRenderer_type, interface0));
    type->SetFields(0,
        ::g::Uno::Float2_typeof(), offsetof(::g::Fuse::Android::TextRenderer, _arrangePosition), 0,
        ::g::Uno::Float2_typeof(), offsetof(::g::Fuse::Android::TextRenderer, _arrangeSize), 0,
        ::g::Fuse::Controls::TextControl_typeof(), offsetof(::g::Fuse::Android::TextRenderer, _control), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Android::TextRenderer, _emitNewTexture), 0,
        ::g::Fuse::Android::TextControlLayout_typeof(), offsetof(::g::Fuse::Android::TextRenderer, _measureLayout), 0,
        ::g::Fuse::Android::Internal::TextPaint_typeof(), offsetof(::g::Fuse::Android::TextRenderer, _paint), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Android::TextRenderer, _renderThreaded), 0,
        ::g::Fuse::Android::TextControlLayout_typeof(), offsetof(::g::Fuse::Android::TextRenderer, _textLayout), 0,
        ::g::OpenGL::GLTextureHandle_typeof(), offsetof(::g::Fuse::Android::TextRenderer, _texture), 0,
        ::g::Uno::ULong_typeof(), offsetof(::g::Fuse::Android::TextRenderer, _textureVersion), 0,
        ::g::Uno::ULong_typeof(), offsetof(::g::Fuse::Android::TextRenderer, _wantedVersion), 0);
    return type;
}

// private TextRenderer(Fuse.Controls.TextControl Control) :1057
void TextRenderer__ctor__fn(TextRenderer* __this, ::g::Fuse::Controls::TextControl* Control)
{
    __this->ctor_(Control);
}

// public void Arrange(float2 position, float2 size) :1076
void TextRenderer__Arrange_fn(TextRenderer* __this, ::g::Uno::Float2* position, ::g::Uno::Float2* size)
{
    __this->Arrange(*position, *size);
}

// public static Fuse.Controls.Graphics.ITextRenderer Create(Fuse.Controls.TextControl control) :1051
void TextRenderer__Create_fn(::g::Fuse::Controls::TextControl* control, uObject** __retval)
{
    *__retval = TextRenderer::Create(control);
}

// private void DisposeTexture() :1146
void TextRenderer__DisposeTexture_fn(TextRenderer* __this)
{
    __this->DisposeTexture();
}

// public void Draw(Fuse.DrawContext dc, Fuse.Node where) :1276
void TextRenderer__Draw_fn(TextRenderer* __this, ::g::Fuse::DrawContext* dc, ::g::Fuse::Node* where)
{
    __this->Draw(dc, where);
}

// public float2 GetContentSize(Fuse.LayoutParams lp) :1106
void TextRenderer__GetContentSize_fn(TextRenderer* __this, ::g::Fuse::LayoutParams* lp, ::g::Uno::Float2* __retval)
{
    *__retval = __this->GetContentSize(*lp);
}

// public Uno.Rect GetRenderBounds() :1123
void TextRenderer__GetRenderBounds_fn(TextRenderer* __this, ::g::Uno::Rect* __retval)
{
    *__retval = __this->GetRenderBounds();
}

// public void Invalidate() :1093
void TextRenderer__Invalidate_fn(TextRenderer* __this)
{
    __this->Invalidate();
}

// private TextRenderer New(Fuse.Controls.TextControl Control) :1057
void TextRenderer__New1_fn(::g::Fuse::Controls::TextControl* Control, TextRenderer** __retval)
{
    *__retval = TextRenderer::New1(Control);
}

// private void OnBitmapDraw(Fuse.DrawContext dc, Fuse.Node where, float2 dposition, float2 size) :1248
void TextRenderer__OnBitmapDraw_fn(TextRenderer* __this, ::g::Fuse::DrawContext* dc, ::g::Fuse::Node* where, ::g::Uno::Float2* dposition, ::g::Uno::Float2* size)
{
    __this->OnBitmapDraw(dc, where, *dposition, *size);
}

// private void PrepareDraw() :1154
void TextRenderer__PrepareDraw_fn(TextRenderer* __this)
{
    __this->PrepareDraw();
}

// private void SetTexture(OpenGL.GLTextureHandle newTexture) :1137
void TextRenderer__SetTexture_fn(TextRenderer* __this, uint32_t* newTexture)
{
    __this->SetTexture(*newTexture);
}

// public void SoftDispose() :1100
void TextRenderer__SoftDispose_fn(TextRenderer* __this)
{
    __this->SoftDispose();
}

// private void UpdateLayout() :1083
void TextRenderer__UpdateLayout_fn(TextRenderer* __this)
{
    __this->UpdateLayout();
}

// private void UpdatePaint() :1063
void TextRenderer__UpdatePaint_fn(TextRenderer* __this)
{
    __this->UpdatePaint();
}

// private OpenGL.GLTextureHandle UpdateTexture(Fuse.Android.Internal.StaticLayout layout, float4 renderColor, Uno.Recti pixelBounds) :1189
void TextRenderer__UpdateTexture_fn(TextRenderer* __this, ::g::Fuse::Android::Internal::StaticLayout* layout, ::g::Uno::Float4* renderColor, ::g::Uno::Recti* pixelBounds, uint32_t* __retval)
{
    *__retval = __this->UpdateTexture(layout, *renderColor, *pixelBounds);
}

// private TextRenderer(Fuse.Controls.TextControl Control) [instance] :1057
void TextRenderer::ctor_(::g::Fuse::Controls::TextControl* Control)
{
    _textLayout = ::g::Fuse::Android::TextControlLayout::New1();
    _emitNewTexture = true;
    _texture = ::g::OpenGL::GLTextureHandle::Zero();
    _control = Control;
}

// public void Arrange(float2 position, float2 size) [instance] :1076
void TextRenderer::Arrange(::g::Uno::Float2 position, ::g::Uno::Float2 size)
{
    _arrangePosition = position;
    _arrangeSize = size;
    UpdateLayout();
}

// private void DisposeTexture() [instance] :1146
void TextRenderer::DisposeTexture()
{
    SetTexture(::g::OpenGL::GLTextureHandle::Zero());
    _textureVersion = 0ULL;
    _wantedVersion = 0ULL;
    _emitNewTexture = true;
}

// public void Draw(Fuse.DrawContext dc, Fuse.Node where) [instance] :1276
void TextRenderer::Draw(::g::Fuse::DrawContext* dc, ::g::Fuse::Node* where)
{
    PrepareDraw();
    OnBitmapDraw(dc, where, _arrangePosition, _arrangeSize);
}

// public float2 GetContentSize(Fuse.LayoutParams lp) [instance] :1106
::g::Uno::Float2 TextRenderer::GetContentSize(::g::Fuse::LayoutParams lp)
{
    if (_measureLayout == NULL)
        _measureLayout = ::g::Fuse::Android::TextControlLayout::New1();

    float wrapWidth = lp.HasX() ? lp.X() : FLT_INF;

    if (lp.HasMaxX())
        wrapWidth = ::g::Uno::Math::Min1(wrapWidth, lp.MaxX());

    UpdatePaint();
    uPtr(_measureLayout)->Measure(_control, _paint, wrapWidth, true);
    ::g::Uno::Float2 q = ::g::Uno::Float2__op_Division1(::g::Uno::Float2__New2((float)uPtr(uPtr(_measureLayout)->Layout())->EllipsizedWidth(), (float)uPtr(uPtr(_measureLayout)->Layout())->Height()), ::g::Fuse::IViewport::PixelsPerPoint(uInterface(uPtr(uPtr(_control)->Viewport()), ::TYPES[23/*Fuse.IViewport*/])));
    return q;
}

// public Uno.Rect GetRenderBounds() [instance] :1123
::g::Uno::Rect TextRenderer::GetRenderBounds()
{
    UpdateLayout();
    return ::g::Uno::Rect__Translate(::g::Uno::Rect__New2(::g::Uno::Float2__op_Division1(::g::Uno::Float2__op_Implicit1(uPtr(_textLayout)->PixelBounds().Position()), ::g::Fuse::IViewport::PixelsPerPoint(uInterface(uPtr(uPtr(_control)->Viewport()), ::TYPES[23/*Fuse.IViewport*/]))), ::g::Uno::Float2__op_Division1(::g::Uno::Float2__op_Implicit1(uPtr(_textLayout)->PixelBounds().Size()), ::g::Fuse::IViewport::PixelsPerPoint(uInterface(uPtr(uPtr(_control)->Viewport()), ::TYPES[23/*Fuse.IViewport*/])))), _arrangePosition);
}

// public void Invalidate() [instance] :1093
void TextRenderer::Invalidate()
{
    uPtr(_textLayout)->Invalidate();

    if (_measureLayout != NULL)
        uPtr(_measureLayout)->Invalidate();
}

// private void OnBitmapDraw(Fuse.DrawContext dc, Fuse.Node where, float2 dposition, float2 size) [instance] :1248
void TextRenderer::OnBitmapDraw(::g::Fuse::DrawContext* dc, ::g::Fuse::Node* where, ::g::Uno::Float2 dposition, ::g::Uno::Float2 size)
{
    if ((_textureVersion != _wantedVersion) || ::g::OpenGL::GLTextureHandle::op_Equality(_texture, ::g::OpenGL::GLTextureHandle::Zero()))
        return;

    ::g::Uno::Int2 pixelSize = uPtr(_textLayout)->PixelBounds().Size();
    ::g::Uno::Float2 pointSize = ::g::Uno::Float2__op_Division1(::g::Uno::Float2__op_Implicit1(pixelSize), ::g::Fuse::IViewport::PixelsPerPoint(uInterface(uPtr(uPtr(_control)->Viewport()), ::TYPES[23/*Fuse.IViewport*/])));
    ::g::Uno::Float2 position = ::g::Uno::Float2__op_Addition2(::g::Uno::Float2__op_Division1(::g::Uno::Float2__op_Implicit1(uPtr(_textLayout)->PixelBounds().Position()), ::g::Fuse::IViewport::PixelsPerPoint(uInterface(uPtr(uPtr(_control)->Viewport()), ::TYPES[23/*Fuse.IViewport*/]))), dposition);
    ::g::Uno::Float4x4 m = uPtr(dc)->GetLocalToClipTransform(where);
    uPtr(::g::Fuse::Android::Blitter::Singleton())->Blit(::g::Uno::Graphics::Texture2D::New2(_texture, pixelSize, 1, 3), position, pointSize, m);
    ::g::OpenGL::GL::BindTexture(3553, ::g::OpenGL::GLTextureHandle::Zero());
}

// private void PrepareDraw() [instance] :1154
void TextRenderer::PrepareDraw()
{
    UpdateLayout();

    if (!_emitNewTexture)
        return;

    _wantedVersion++;
    ::g::Uno::Recti pixelBounds = uPtr(_textLayout)->PixelBounds();

    if ((pixelBounds.Size().X <= 0) || (pixelBounds.Size().Y <= 0))
    {
        SetTexture(::g::OpenGL::GLTextureHandle::Zero());
        return;
    }

    if (_renderThreaded)
    {
        TextRenderer__BackgroundRender* backgroundRender = TextRenderer__BackgroundRender::New1(this, _wantedVersion, uPtr(_textLayout)->Layout(), uPtr(_control)->RenderColor(), pixelBounds);
        ::g::Fuse::GraphicsWorker::Dispatch(uDelegate::New(::TYPES[1/*Uno.Action*/], (void*)TextRenderer__BackgroundRender__UpdateTextureAsync_fn, backgroundRender));
    }
    else
    {
        SetTexture(UpdateTexture(uPtr(_textLayout)->Layout(), uPtr(_control)->RenderColor(), pixelBounds));
        _textureVersion = _wantedVersion;
    }

    _emitNewTexture = false;
}

// private void SetTexture(OpenGL.GLTextureHandle newTexture) [instance] :1137
void TextRenderer::SetTexture(uint32_t newTexture)
{
    if (::g::OpenGL::GLTextureHandle::op_Inequality(_texture, ::g::OpenGL::GLTextureHandle::Zero()))
        ::g::OpenGL::GL::DeleteTexture(_texture);

    _texture = newTexture;
    uPtr(_control)->InvalidateVisual();
}

// public void SoftDispose() [instance] :1100
void TextRenderer::SoftDispose()
{
    DisposeTexture();
    _paint = NULL;
}

// private void UpdateLayout() [instance] :1083
void TextRenderer::UpdateLayout()
{
    UpdatePaint();

    if (uPtr(_textLayout)->Measure(_control, _paint, _arrangeSize.X, false))
        _emitNewTexture = true;

    _renderThreaded = (uPtr(uPtr(_control)->RenderValue())->Length() > 50);
}

// private void UpdatePaint() [instance] :1063
void TextRenderer::UpdatePaint()
{
    if (_paint == NULL)
        _paint = ::g::Fuse::Android::Internal::TextPaint::New1();

    uPtr(_textLayout)->UpdatePaint(_control, _paint);
}

// private OpenGL.GLTextureHandle UpdateTexture(Fuse.Android.Internal.StaticLayout layout, float4 renderColor, Uno.Recti pixelBounds) [instance] :1189
uint32_t TextRenderer::UpdateTexture(::g::Fuse::Android::Internal::StaticLayout* layout, ::g::Uno::Float4 renderColor, ::g::Uno::Recti pixelBounds)
{
    ::g::Fuse::Android::Internal::Bitmap* bitmap = ::g::Fuse::Android::Internal::Bitmap::CreateBitmapARGB8888(pixelBounds.Size().X, pixelBounds.Size().Y);
    ::g::Fuse::Android::Internal::Canvas* canvas = ::g::Fuse::Android::Internal::Canvas::New1(bitmap);
    canvas->Translate((float)-pixelBounds.Position().X, (float)-pixelBounds.Position().Y);
    uPtr(bitmap)->EraseColor(::g::Uno::Float4__New1(0.0f));
    UpdatePaint();
    uPtr(_paint)->Color(renderColor);
    uPtr(layout)->Draw(canvas);
    uint32_t texture = ::g::OpenGL::GL::CreateTexture();
    ::g::OpenGL::GL::BindTexture(3553, texture);
    ::g::Fuse::Android::Internal::GLUtils::TexImage2D1(3553, 0, bitmap, 0);
    bitmap->Recycle();
    return texture;
}

// public static Fuse.Controls.Graphics.ITextRenderer Create(Fuse.Controls.TextControl control) [static] :1051
uObject* TextRenderer::Create(::g::Fuse::Controls::TextControl* control)
{
    return (uObject*)TextRenderer::New1(control);
}

// private TextRenderer New(Fuse.Controls.TextControl Control) [static] :1057
TextRenderer* TextRenderer::New1(::g::Fuse::Controls::TextControl* Control)
{
    TextRenderer* obj1 = (TextRenderer*)uNew(TextRenderer_typeof());
    obj1->ctor_(Control);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Android/0.27.10/$.uno#4
// ----------------------------------------------------------

// private sealed class InputDispatch.TouchListener :293
// {
InputDispatch__TouchListener_type* InputDispatch__TouchListener_typeof()
{
    static uSStrong<InputDispatch__TouchListener_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 6;
    options.InterfaceCount = 3;
    options.ObjectSize = sizeof(InputDispatch__TouchListener);
    options.TypeSize = sizeof(InputDispatch__TouchListener_type);
    type = (InputDispatch__TouchListener_type*)uClassType::New("Fuse.Android.InputDispatch.TouchListener", options);
    type->SetBase(::g::Android::java::lang::Object_typeof());
    type->fp_ctor_ = (void*)InputDispatch__TouchListener__New5_fn;
    type->interface2.fp_onTouch = (void(*)(uObject*, ::g::Android::android::view::View*, ::g::Android::android::view::MotionEvent*, bool*))InputDispatch__TouchListener__onTouch_fn;
    type->interface0.fp__GetJavaObject = (void(*)(uObject*, jobject*))::g::Android::Base::Wrappers::JWrapper___GetJavaObject_fn;
    type->interface0.fp__IsSubclassed = (void(*)(uObject*, bool*))::g::Android::Base::Wrappers::JWrapper___IsSubclassed_fn;
    type->interface1.fp_Dispose = (void(*)(uObject*))::g::Android::Base::Wrappers::JWrapper__UnoIDisposableDispose_fn;
    ::STRINGS[10] = uString::Const("com.Bindings.Binding_Fuse_Android_InputDispatch_TouchListener");
    ::STRINGS[1] = uString::Const("<init>");
    ::STRINGS[2] = uString::Const("(J)V");
    ::TYPES[5] = ::g::Uno::Bool_typeof();
    ::TYPES[6] = ::g::Android::Base::Wrappers::JWrapper_typeof();
    ::TYPES[7] = ::g::Android::Base::Primitives::ujclass_typeof();
    type->SetInterfaces(
        ::g::Android::Base::Wrappers::IJWrapper_typeof(), offsetof(InputDispatch__TouchListener_type, interface0),
        ::g::Uno::IDisposable_typeof(), offsetof(InputDispatch__TouchListener_type, interface1),
        ::g::Android::android::view::ViewDLROnTouchListener_typeof(), offsetof(InputDispatch__TouchListener_type, interface2));
    type->SetFields(5,
        ::g::Android::Base::Primitives::ujclass_typeof(), (uintptr_t)&::g::Fuse::Android::InputDispatch__TouchListener::_javaClass2_, uFieldFlagsStatic);
    return type;
}

// public generated TouchListener() :293
void InputDispatch__TouchListener__ctor_5_fn(InputDispatch__TouchListener* __this)
{
    __this->ctor_5();
}

// public generated TouchListener New() :293
void InputDispatch__TouchListener__New5_fn(InputDispatch__TouchListener** __retval)
{
    *__retval = InputDispatch__TouchListener::New5();
}

// public bool onTouch(Android.android.view.View view, Android.android.view.MotionEvent motionEvent) :297
void InputDispatch__TouchListener__onTouch_fn(InputDispatch__TouchListener* __this, ::g::Android::android::view::View* view, ::g::Android::android::view::MotionEvent* motionEvent, bool* __retval)
{
    *__retval = __this->onTouch(view, motionEvent);
}

jclass InputDispatch__TouchListener::_javaClass2_;

// public generated TouchListener() [instance] :293
void InputDispatch__TouchListener::ctor_5()
{
    if (!_subclassed)
    {
        _subclassed = true;
        _javaClassName = ::STRINGS[10/*"com.Binding...*/];
    }

    ctor_4(::g::Android::Base::JNI::GetDefaultObject(), ::g::Android::Base::JNI::GetDefaultType(), false, false);

    if (::g::Android::Base::Primitives::ujclass::op_Equality(InputDispatch__TouchListener::_javaClass2(), ::g::Android::Base::Primitives::ujclass::Null()))
    {
        InputDispatch__TouchListener::_javaClass2() = ::g::Android::Base::JNI::LocalToGlobalRef(::g::Android::Base::JNI::LoadClass3(::STRINGS[10/*"com.Binding...*/], false));
        JniHelper jni;
        BEGIN_REG_MTD(1);
        REG_MTD(0,"__n_onTouch","(JLandroid/view/View;Landroid/view/MotionEvent;JJ)Z",Binding_Fuse_Android_InputDispatch_TouchListener__onTouch22729);
        COMMIT_REG_MTD(InputDispatch__TouchListener::_javaClass2());
    }

    jclass tmpCls = ::g::Android::Base::JNI::LoadClass3(_javaClassName, false);
    jmethodID mtd = ::g::Android::Base::JNI::GetMethodID(tmpCls, ::STRINGS[1/*"<init>"*/], ::STRINGS[2/*"(J)V"*/]);
    jobject tmp = ::g::Android::Base::JNI::NewObject1(tmpCls, mtd, ::g::Android::Base::Primitives::ujvalue::op_Implicit7((jlong)this->__weakptr));
    ::g::Android::Base::JNI::CheckException();
    _javaObject = ::g::Android::Base::JNI::LocalToGlobalRef1(tmp);
    ::g::Android::Base::JNI::DeleteLocalRef(tmpCls);
}

// public bool onTouch(Android.android.view.View view, Android.android.view.MotionEvent motionEvent) [instance] :297
bool InputDispatch__TouchListener::onTouch(::g::Android::android::view::View* view, ::g::Android::android::view::MotionEvent* motionEvent)
{
    ::g::Fuse::Node* node = ::g::Fuse::Android::InputDispatch::GetNode(view);

    if (node == NULL)
        return false;

    ::g::Fuse::Android::InputDispatch::RaiseEvent(node, view, motionEvent);
    return false;
}

// public generated TouchListener New() [static] :293
InputDispatch__TouchListener* InputDispatch__TouchListener::New5()
{
    InputDispatch__TouchListener* obj1 = (InputDispatch__TouchListener*)uNew(InputDispatch__TouchListener_typeof());
    obj1->ctor_5();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Android/0.27.10/$.uno#9
// ----------------------------------------------------------

// internal sealed extern class Typeface :1329
// {
uType* Typeface_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.ObjectSize = sizeof(Typeface);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Android.Typeface", options);
    type->fp_Equals = (void(*)(uObject*, uObject*, bool*))Typeface__Equals_fn;
    type->fp_GetHashCode = (void(*)(uObject*, int*))Typeface__GetHashCode_fn;
    ::TYPES[71] = ::g::Uno::IO::BundleFile_typeof();
    ::TYPES[72] = ::g::Java::Object_typeof();
    ::TYPES[11] = uObject_typeof();
    type->SetFields(0,
        ::g::Java::Object_typeof(), offsetof(::g::Fuse::Android::Typeface, _handle), 0);
    return type;
}

// public Typeface(Java.Object handle) :1339
void Typeface__ctor__fn(Typeface* __this, ::g::Java::Object* handle)
{
    __this->ctor_(handle);
}

// private static Java.Object CreateFromBundleFile(string bundlePath) :1372
void Typeface__CreateFromBundleFile_fn(uString* bundlePath, ::g::Java::Object** __retval)
{
    *__retval = Typeface::CreateFromBundleFile(bundlePath);
}

// public static Fuse.Android.Typeface CreateFromBundleFile(Uno.IO.BundleFile file) :1361
void Typeface__CreateFromBundleFile1_fn(::g::Uno::IO::BundleFile* file, Typeface** __retval)
{
    *__retval = Typeface::CreateFromBundleFile1(file);
}

// public static Fuse.Android.Typeface CreateFromFile(string path) :1366
void Typeface__CreateFromFile_fn(uString* path, Typeface** __retval)
{
    *__retval = Typeface::CreateFromFile(path);
}

// private static Java.Object CreateFromFileImpl(string path) :1380
void Typeface__CreateFromFileImpl_fn(uString* path, ::g::Java::Object** __retval)
{
    *__retval = Typeface::CreateFromFileImpl(path);
}

// public static Fuse.Android.Typeface get_Default() :1346
void Typeface__get_Default_fn(Typeface** __retval)
{
    *__retval = Typeface::Default();
}

// public override sealed bool Equals(object obj) :1349
void Typeface__Equals_fn(Typeface* __this, uObject* obj, bool* __retval)
{
    return *__retval = uIs(obj, ::TYPES[72/*Java.Object*/]) ? ::g::Uno::Object::Equals(uPtr(__this->_handle), uCast< ::g::Java::Object*>(obj, ::TYPES[72/*Java.Object*/])) : false, void();
}

// private static Java.Object GetDefault() :1386
void Typeface__GetDefault_fn(::g::Java::Object** __retval)
{
    *__retval = Typeface::GetDefault();
}

// public override sealed int GetHashCode() :1356
void Typeface__GetHashCode_fn(Typeface* __this, int* __retval)
{
    return *__retval = ::g::Uno::Object::GetHashCode(uPtr(__this->_handle)), void();
}

// public Java.Object get_Handle() :1333
void Typeface__get_Handle_fn(Typeface* __this, ::g::Java::Object** __retval)
{
    *__retval = __this->Handle();
}

// public Typeface New(Java.Object handle) :1339
void Typeface__New1_fn(::g::Java::Object* handle, Typeface** __retval)
{
    *__retval = Typeface::New1(handle);
}

// public Typeface(Java.Object handle) [instance] :1339
void Typeface::ctor_(::g::Java::Object* handle)
{
    _handle = handle;
}

// public Java.Object get_Handle() [instance] :1333
::g::Java::Object* Typeface::Handle()
{
    return _handle;
}

// private static Java.Object CreateFromBundleFile(string bundlePath) [static] :1372
::g::Java::Object* Typeface::CreateFromBundleFile(uString* bundlePath)
{
    {
        JniHelper _jni;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "CreateFromBundleFile83", "(Ljava/lang/String;)Ljava/lang/Object;");
        jstring _bundlePath = JniHelper::UnoToJavaString(bundlePath);
        jobject __jresult = _jni->CallStaticObjectMethod(__cls, __mtd,_bundlePath);
        uObject* __result;
        NEW_UNO(__jresult,__result,::g::Android::Base::Wrappers::JWrapper_typeof(),::g::Android::Base::Wrappers::JWrapper*,false,false);
        if (_bundlePath!=NULL) { _jni->DeleteLocalRef(_bundlePath); }
        ::g::Android::Base::JNI::CheckException();
        return (::g::Java::Object*)__result;
    }
    
}

// public static Fuse.Android.Typeface CreateFromBundleFile(Uno.IO.BundleFile file) [static] :1361
Typeface* Typeface::CreateFromBundleFile1(::g::Uno::IO::BundleFile* file)
{
    return Typeface::New1(Typeface::CreateFromBundleFile(uPtr(file)->BundlePath()));
}

// public static Fuse.Android.Typeface CreateFromFile(string path) [static] :1366
Typeface* Typeface::CreateFromFile(uString* path)
{
    return Typeface::New1(Typeface::CreateFromFileImpl(path));
}

// private static Java.Object CreateFromFileImpl(string path) [static] :1380
::g::Java::Object* Typeface::CreateFromFileImpl(uString* path)
{
    {
        JniHelper _jni;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "CreateFromFileImpl84", "(Ljava/lang/String;)Ljava/lang/Object;");
        jstring _path = JniHelper::UnoToJavaString(path);
        jobject __jresult = _jni->CallStaticObjectMethod(__cls, __mtd,_path);
        uObject* __result;
        NEW_UNO(__jresult,__result,::g::Android::Base::Wrappers::JWrapper_typeof(),::g::Android::Base::Wrappers::JWrapper*,false,false);
        if (_path!=NULL) { _jni->DeleteLocalRef(_path); }
        ::g::Android::Base::JNI::CheckException();
        return (::g::Java::Object*)__result;
    }
    
}

// private static Java.Object GetDefault() [static] :1386
::g::Java::Object* Typeface::GetDefault()
{
    {
        JniHelper _jni;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "GetDefault85", "()Ljava/lang/Object;");
        jobject __jresult = _jni->CallStaticObjectMethod(__cls, __mtd);
        uObject* __result;
        NEW_UNO(__jresult,__result,::g::Android::Base::Wrappers::JWrapper_typeof(),::g::Android::Base::Wrappers::JWrapper*,false,false);
        ::g::Android::Base::JNI::CheckException();
        return (::g::Java::Object*)__result;
    }
    
}

// public Typeface New(Java.Object handle) [static] :1339
Typeface* Typeface::New1(::g::Java::Object* handle)
{
    Typeface* obj1 = (Typeface*)uNew(Typeface_typeof());
    obj1->ctor_(handle);
    return obj1;
}

// public static Fuse.Android.Typeface get_Default() [static] :1346
Typeface* Typeface::Default()
{
    return Typeface::New1(Typeface::GetDefault());
}
// }

// /usr/local/share/uno/Packages/Fuse.Android/0.27.10/$.uno#9
// ----------------------------------------------------------

// internal static extern class TypefaceCache :1392
// {
// static TypefaceCache() :1392
static void TypefaceCache__cctor__fn(uType* __type)
{
    TypefaceCache::_typefaces_ = ((::g::Uno::Collections::Dictionary*)::g::Uno::Collections::Dictionary::New1(::TYPES[73/*Uno.Collections.Dictionary<string, Fuse.Android.Typeface>*/]));
}

uClassType* TypefaceCache_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Fuse.Android.TypefaceCache", options);
    type->fp_cctor_ = TypefaceCache__cctor__fn;
    ::STRINGS[11] = uString::Const("/tempFont");
    ::TYPES[73] = ::g::Uno::Collections::Dictionary_typeof()->MakeType(::g::Uno::String_typeof(), ::g::Fuse::Android::Typeface_typeof());
    ::TYPES[74] = ::g::Uno::UX::BundleFileSource_typeof();
    ::TYPES[75] = ::g::Fuse::Font_typeof();
    ::TYPES[71] = ::g::Uno::IO::BundleFile_typeof();
    ::TYPES[76] = ::g::Uno::UX::FileSource_typeof();
    type->SetFields(0,
        ::g::Uno::Collections::Dictionary_typeof()->MakeType(::g::Uno::String_typeof(), ::g::Fuse::Android::Typeface_typeof()), (uintptr_t)&::g::Fuse::Android::TypefaceCache::_typefaces_, uFieldFlagsStatic);
    return type;
}

// public static Fuse.Android.Typeface GetTypeface(Fuse.Font font) :1397
void TypefaceCache__GetTypeface_fn(::g::Fuse::Font* font, ::g::Fuse::Android::Typeface** __retval)
{
    *__retval = TypefaceCache::GetTypeface(font);
}

// private static Fuse.Android.Typeface GetTypefaceFromBundleFile(Uno.IO.BundleFile file) :1404
void TypefaceCache__GetTypefaceFromBundleFile_fn(::g::Uno::IO::BundleFile* file, ::g::Fuse::Android::Typeface** __retval)
{
    *__retval = TypefaceCache::GetTypefaceFromBundleFile(file);
}

// private static Fuse.Android.Typeface GetTypefaceFromFileSource(Uno.UX.FileSource fileSource) :1414
void TypefaceCache__GetTypefaceFromFileSource_fn(::g::Uno::UX::FileSource* fileSource, ::g::Fuse::Android::Typeface** __retval)
{
    *__retval = TypefaceCache::GetTypefaceFromFileSource(fileSource);
}

uSStrong< ::g::Uno::Collections::Dictionary*> TypefaceCache::_typefaces_;

// public static Fuse.Android.Typeface GetTypeface(Fuse.Font font) [static] :1397
::g::Fuse::Android::Typeface* TypefaceCache::GetTypeface(::g::Fuse::Font* font)
{
    TypefaceCache_typeof()->Init();
    return uIs(uPtr(font)->File(), ::TYPES[74/*Uno.UX.BundleFileSource*/]) ? (::g::Fuse::Android::Typeface*)TypefaceCache::GetTypefaceFromBundleFile(uPtr(uCast< ::g::Uno::UX::BundleFileSource*>(uPtr(font)->File(), ::TYPES[74/*Uno.UX.BundleFileSource*/]))->BundleFile) : (::g::Fuse::Android::Typeface*)TypefaceCache::GetTypefaceFromFileSource(uPtr(font)->File());
}

// private static Fuse.Android.Typeface GetTypefaceFromBundleFile(Uno.IO.BundleFile file) [static] :1404
::g::Fuse::Android::Typeface* TypefaceCache::GetTypefaceFromBundleFile(::g::Uno::IO::BundleFile* file)
{
    TypefaceCache_typeof()->Init();
    bool ret1;
    ::g::Fuse::Android::Typeface* ret2;

    if ((::g::Uno::Collections::Dictionary__ContainsKey_fn(uPtr(TypefaceCache::_typefaces()), uPtr(file)->BundlePath(), &ret1), ret1))
        return (::g::Uno::Collections::Dictionary__get_Item_fn(uPtr(TypefaceCache::_typefaces()), uPtr(file)->BundlePath(), &ret2), ret2);

    ::g::Fuse::Android::Typeface* typeface = ::g::Fuse::Android::Typeface::CreateFromBundleFile1(file);
    ::g::Uno::Collections::Dictionary__Add_fn(uPtr(TypefaceCache::_typefaces()), uPtr(file)->BundlePath(), typeface);
    return typeface;
}

// private static Fuse.Android.Typeface GetTypefaceFromFileSource(Uno.UX.FileSource fileSource) [static] :1414
::g::Fuse::Android::Typeface* TypefaceCache::GetTypefaceFromFileSource(::g::Uno::UX::FileSource* fileSource)
{
    TypefaceCache_typeof()->Init();
    bool ret3;
    ::g::Fuse::Android::Typeface* ret4;

    if ((::g::Uno::Collections::Dictionary__ContainsKey_fn(uPtr(TypefaceCache::_typefaces()), uPtr(fileSource)->Name, &ret3), ret3))
        return (::g::Uno::Collections::Dictionary__get_Item_fn(uPtr(TypefaceCache::_typefaces()), uPtr(fileSource)->Name, &ret4), ret4);

    uArray* data = uPtr(fileSource)->ReadAllBytes();
    uString* path = ::g::Uno::String::op_Addition2(::g::Uno::IO::Directory::GetUserDirectory(1), ::STRINGS[11/*"/tempFont"*/]);
    ::g::Uno::IO::File::WriteAllBytes(path, data);
    ::g::Fuse::Android::Typeface* typeface = ::g::Fuse::Android::Typeface::CreateFromFile(path);
    ::g::Uno::IO::File::Delete(path);
    ::g::Uno::Collections::Dictionary__Add_fn(uPtr(TypefaceCache::_typefaces()), fileSource->Name, typeface);
    return typeface;
}
// }

}}} // ::g::Fuse::Android
