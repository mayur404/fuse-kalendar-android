// This file was generated based on '(multiple files)'.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.FuseVideo_bundle.h>
#include <Fuse.Controls.Graphics.Visual.h>
#include <Fuse.DrawContext.h>
#include <Fuse.Elements.Alignment.h>
#include <Fuse.Elements.StretchDirection.h>
#include <Fuse.Elements.StretchMode.h>
#include <Fuse.Elements.StretchSizing.h>
#include <Fuse.HitTestContext.h>
#include <Fuse.Internal.SizingContainer.h>
#include <Fuse.InvalidateLayoutReason.h>
#include <Fuse.IViewport.h>
#include <Fuse.LayoutParams.h>
#include <Fuse.Node.h>
#include <Fuse.Triggers.IMediaPlayback.h>
#include <Fuse.Triggers.WhileCompleted.h>
#include <Fuse.Triggers.WhileFailed.h>
#include <Fuse.Triggers.WhileLoading.h>
#include <Fuse.Triggers.WhilePaused.h>
#include <Fuse.Triggers.WhilePlaying.h>
#include <Fuse.UpdateManager.h>
#include <Fuse.UpdateStage.h>
#include <Fuse.Video.Graphics.Android.VideoLoader.h>
#include <Fuse.Video.IVideoPlayer.h>
#include <Fuse.Video.Scale9Rectangle.h>
#include <Fuse.Video.VideoContainer.h>
#include <Fuse.Video.VideoDiskCache.h>
#include <Fuse.Video.VideoDrawElement.h>
#include <Fuse.Video.VideoLoader.h>
#include <Fuse.Video.VideoVisual.h>
#include <Uno.Action.h>
#include <Uno.Action-1.h>
#include <Uno.Application.h>
#include <Uno.Bool.h>
#include <Uno.Buffer.h>
#include <Uno.Byte.h>
#include <Uno.Char.h>
#include <Uno.Collections.Dictionary-2.Enumerator.h>
#include <Uno.Collections.Dictionary-2.h>
#include <Uno.Collections.KeyValuePair-2.h>
#include <Uno.Delegate.h>
#include <Uno.Double.h>
#include <Uno.EventArgs.h>
#include <Uno.EventHandler.h>
#include <Uno.EventHandler-1.h>
#include <Uno.Exception.h>
#include <Uno.Float.h>
#include <Uno.Float2.h>
#include <Uno.Float3.h>
#include <Uno.Float4.h>
#include <Uno.Float4x4.h>
#include <Uno.Graphics.BlendOperand.h>
#include <Uno.Graphics.BufferUsage.h>
#include <Uno.Graphics.IndexBuffer.h>
#include <Uno.Graphics.IndexType.h>
#include <Uno.Graphics.PolygonFace.h>
#include <Uno.Graphics.VertexAttributeType.h>
#include <Uno.Graphics.VertexBuffer.h>
#include <Uno.Graphics.VideoTexture.h>
#include <Uno.IDisposable.h>
#include <Uno.Int.h>
#include <Uno.Int2.h>
#include <Uno.IO.Directory.h>
#include <Uno.IO.File.h>
#include <Uno.IO.UserDirectory.h>
#include <Uno.Math.h>
#include <Uno.Matrix.h>
#include <Uno.Object.h>
#include <Uno.Platform.Window.h>
#include <Uno.Runtime.Implementation.Internal.BufferConverters.h>
#include <Uno.Runtime.Implementation.ShaderBackends.OpenGL.GLProgram.h>
#include <Uno.String.h>
#include <Uno.Threading.Future.h>
#include <Uno.Threading.Future-1.h>
#include <Uno.UShort.h>
#include <Uno.UX.FileSource.h>
#include <Uno.UX.ValueChangedArgs-1.h>
#include <Uno.UX.ValueChangedHandler-1.h>
static uString* STRINGS[4];
static uType* TYPES[44];

namespace g{
namespace Fuse{
namespace Video{

// /usr/local/share/uno/Packages/Fuse.Video/0.27.10/$.uno
// ------------------------------------------------------

// public abstract interface IVideoPlayer :14
// {
uInterfaceType* IVideoPlayer_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Fuse.Video.IVideoPlayer", 0, 0);
    return type;
}
// }

// /usr/local/share/uno/Packages/Fuse.Video/0.27.10/$.uno#5
// --------------------------------------------------------

// internal sealed class Scale9Rectangle :806
// {
// static Scale9Rectangle() :806
static void Scale9Rectangle__cctor__fn(uType* __type)
{
    Scale9Rectangle::Impl_ = Scale9Rectangle::New1();
}

uType* Scale9Rectangle_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 6;
    options.ObjectSize = sizeof(Scale9Rectangle);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Video.Scale9Rectangle", options);
    type->fp_ctor_ = (void*)Scale9Rectangle__New1_fn;
    type->fp_cctor_ = Scale9Rectangle__cctor__fn;
    ::TYPES[0] = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall_typeof();
    ::TYPES[1] = ::g::Uno::Float4_typeof();
    ::TYPES[2] = ::g::Uno::Float2_typeof();
    ::TYPES[3] = ::g::Fuse::Node_typeof();
    ::TYPES[4] = ::g::Fuse::IViewport_typeof();
    ::TYPES[5] = ::g::Fuse::DrawContext_typeof();
    ::TYPES[6] = ::g::Uno::UShort_typeof()->Array();
    ::TYPES[7] = ::g::Uno::Float3_typeof()->Array();
    ::TYPES[8] = ::g::FuseVideo_bundle_typeof();
    type->SetFields(0,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall_typeof(), offsetof(::g::Fuse::Video::Scale9Rectangle, _draw_42e7c397), 0,
        ::g::Uno::UShort_typeof()->Array(), offsetof(::g::Fuse::Video::Scale9Rectangle, Draw_indices_42e7c397_1_2_12), 0,
        ::g::Uno::Graphics::IndexBuffer_typeof(), offsetof(::g::Fuse::Video::Scale9Rectangle, Draw_xv_42e7c397_1_3_2), 0,
        ::g::Uno::Graphics::VertexBuffer_typeof(), offsetof(::g::Fuse::Video::Scale9Rectangle, Draw_xv_42e7c397_1_3_3), 0,
        ::g::Uno::Graphics::VertexBuffer_typeof(), offsetof(::g::Fuse::Video::Scale9Rectangle, Draw_yv_42e7c397_1_4_6), 0,
        Scale9Rectangle_typeof(), (uintptr_t)&::g::Fuse::Video::Scale9Rectangle::Impl_, uFieldFlagsStatic);
    return type;
}

// public generated Scale9Rectangle() :806
void Scale9Rectangle__ctor__fn(Scale9Rectangle* __this)
{
    __this->ctor_();
}

// public void Draw(Fuse.DrawContext dc, Fuse.Node element, float2 size, float2 scaleTextureSize, Uno.Graphics.VideoTexture tex, float4 margin) :810
void Scale9Rectangle__Draw_fn(Scale9Rectangle* __this, ::g::Fuse::DrawContext* dc, ::g::Fuse::Node* element, ::g::Uno::Float2* size, ::g::Uno::Float2* scaleTextureSize, ::g::Uno::Graphics::VideoTexture* tex, ::g::Uno::Float4* margin)
{
    __this->Draw(dc, element, *size, *scaleTextureSize, tex, *margin);
}

// private generated void init_DrawCalls() :806
void Scale9Rectangle__init_DrawCalls_fn(Scale9Rectangle* __this)
{
    __this->init_DrawCalls();
}

// public generated Scale9Rectangle New() :806
void Scale9Rectangle__New1_fn(Scale9Rectangle** __retval)
{
    *__retval = Scale9Rectangle::New1();
}

uSStrong<Scale9Rectangle*> Scale9Rectangle::Impl_;

// public generated Scale9Rectangle() [instance] :806
void Scale9Rectangle::ctor_()
{
    init_DrawCalls();
}

// public void Draw(Fuse.DrawContext dc, Fuse.Node element, float2 size, float2 scaleTextureSize, Uno.Graphics.VideoTexture tex, float4 margin) [instance] :810
void Scale9Rectangle::Draw(::g::Fuse::DrawContext* dc, ::g::Fuse::Node* element, ::g::Uno::Float2 size, ::g::Uno::Float2 scaleTextureSize, ::g::Uno::Graphics::VideoTexture* tex, ::g::Uno::Float4 margin)
{
    _draw_42e7c397.BlendEnabled(true);
    _draw_42e7c397.DepthTestEnabled(false);
    _draw_42e7c397.CullFace(0);
    _draw_42e7c397.BlendSrcRgb(2);
    _draw_42e7c397.BlendDstRgb(3);
    _draw_42e7c397.BlendDstAlpha(3);
    _draw_42e7c397.Use();
    _draw_42e7c397.Attrib1(0, 3, Draw_xv_42e7c397_1_3_3, 12, 0);
    _draw_42e7c397.Attrib1(1, 3, Draw_yv_42e7c397_1_4_6, 12, 0);
    _draw_42e7c397.Uniform(2, margin.X);
    _draw_42e7c397.Uniform(3, size.X - margin.Z);
    _draw_42e7c397.Uniform(4, size.X);
    _draw_42e7c397.Uniform(5, margin.Y);
    _draw_42e7c397.Uniform(6, size.Y - margin.W);
    _draw_42e7c397.Uniform(7, size.Y);
    _draw_42e7c397.Uniform12(8, uPtr(element)->WorldTransform());
    _draw_42e7c397.Uniform12(9, ::g::Fuse::IViewport::ViewProjectionTransform(uInterface(uPtr(uPtr(dc)->Viewport()), ::TYPES[4/*Fuse.IViewport*/])));
    _draw_42e7c397.Uniform(10, scaleTextureSize.X - margin.Z);
    _draw_42e7c397.Uniform(11, scaleTextureSize.X);
    _draw_42e7c397.Uniform(12, scaleTextureSize.Y - margin.W);
    _draw_42e7c397.Uniform(13, scaleTextureSize.Y);
    _draw_42e7c397.Uniform2(14, scaleTextureSize);
    _draw_42e7c397.Sampler6(15, tex);
    _draw_42e7c397.Draw(uPtr(Draw_indices_42e7c397_1_2_12)->Length(), 2, Draw_xv_42e7c397_1_3_2);
}

// private generated void init_DrawCalls() [instance] :806
void Scale9Rectangle::init_DrawCalls()
{
    uArray* indices_42e7c397_1_2_1 = uArray::Init<int>(::TYPES[6/*ushort[]*/], 54, 0, 4, 5, 0, 5, 1, 1, 5, 6, 1, 6, 2, 2, 6, 7, 2, 7, 3, 4, 8, 9, 4, 9, 5, 5, 9, 10, 5, 10, 6, 6, 10, 11, 6, 11, 7, 8, 12, 13, 8, 13, 9, 9, 13, 14, 9, 14, 10, 10, 14, 15, 10, 15, 11);
    Draw_xv_42e7c397_1_3_2 = ::g::Uno::Graphics::IndexBuffer::New2(::g::Uno::Runtime::Implementation::Internal::BufferConverters::ToBuffer9(indices_42e7c397_1_2_1), 0);
    Draw_xv_42e7c397_1_3_3 = ::g::Uno::Graphics::VertexBuffer::New2(::g::Uno::Runtime::Implementation::Internal::BufferConverters::ToBuffer4(uArray::Init< ::g::Uno::Float3>(::TYPES[7/*float3[]*/], 16, ::g::Uno::Float3__New2(0.0f, 0.0f, 0.0f), ::g::Uno::Float3__New2(1.0f, 0.0f, 0.0f), ::g::Uno::Float3__New2(0.0f, 1.0f, 0.0f), ::g::Uno::Float3__New2(0.0f, 0.0f, 1.0f), ::g::Uno::Float3__New2(0.0f, 0.0f, 0.0f), ::g::Uno::Float3__New2(1.0f, 0.0f, 0.0f), ::g::Uno::Float3__New2(0.0f, 1.0f, 0.0f), ::g::Uno::Float3__New2(0.0f, 0.0f, 1.0f), ::g::Uno::Float3__New2(0.0f, 0.0f, 0.0f), ::g::Uno::Float3__New2(1.0f, 0.0f, 0.0f), ::g::Uno::Float3__New2(0.0f, 1.0f, 0.0f), ::g::Uno::Float3__New2(0.0f, 0.0f, 1.0f), ::g::Uno::Float3__New2(0.0f, 0.0f, 0.0f), ::g::Uno::Float3__New2(1.0f, 0.0f, 0.0f), ::g::Uno::Float3__New2(0.0f, 1.0f, 0.0f), ::g::Uno::Float3__New2(0.0f, 0.0f, 1.0f))), 0);
    Draw_yv_42e7c397_1_4_6 = ::g::Uno::Graphics::VertexBuffer::New2(::g::Uno::Runtime::Implementation::Internal::BufferConverters::ToBuffer4(uArray::Init< ::g::Uno::Float3>(::TYPES[7/*float3[]*/], 16, ::g::Uno::Float3__New2(0.0f, 0.0f, 0.0f), ::g::Uno::Float3__New2(0.0f, 0.0f, 0.0f), ::g::Uno::Float3__New2(0.0f, 0.0f, 0.0f), ::g::Uno::Float3__New2(0.0f, 0.0f, 0.0f), ::g::Uno::Float3__New2(1.0f, 0.0f, 0.0f), ::g::Uno::Float3__New2(1.0f, 0.0f, 0.0f), ::g::Uno::Float3__New2(1.0f, 0.0f, 0.0f), ::g::Uno::Float3__New2(1.0f, 0.0f, 0.0f), ::g::Uno::Float3__New2(0.0f, 1.0f, 0.0f), ::g::Uno::Float3__New2(0.0f, 1.0f, 0.0f), ::g::Uno::Float3__New2(0.0f, 1.0f, 0.0f), ::g::Uno::Float3__New2(0.0f, 1.0f, 0.0f), ::g::Uno::Float3__New2(0.0f, 0.0f, 1.0f), ::g::Uno::Float3__New2(0.0f, 0.0f, 1.0f), ::g::Uno::Float3__New2(0.0f, 0.0f, 1.0f), ::g::Uno::Float3__New2(0.0f, 0.0f, 1.0f))), 0);
    Draw_indices_42e7c397_1_2_12 = indices_42e7c397_1_2_1;
    _draw_42e7c397 = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall__New1(::g::FuseVideo_bundle::Scale9Rectanglea63d6a3e());
}

// public generated Scale9Rectangle New() [static] :806
Scale9Rectangle* Scale9Rectangle::New1()
{
    Scale9Rectangle* obj1 = (Scale9Rectangle*)uNew(Scale9Rectangle_typeof());
    obj1->ctor_();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Video/0.27.10/$.uno#2
// --------------------------------------------------------

// internal sealed class VideoContainer :72
// {
// static VideoContainer() :72
static void VideoContainer__cctor__fn(uType* __type)
{
    VideoContainer::CompletionTimeThreshold_ = 0.05f;
}

VideoContainer_type* VideoContainer_typeof()
{
    static uSStrong<VideoContainer_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 17;
    options.InterfaceCount = 3;
    options.ObjectSize = sizeof(VideoContainer);
    options.TypeSize = sizeof(VideoContainer_type);
    type = (VideoContainer_type*)uClassType::New("Fuse.Video.VideoContainer", options);
    type->fp_ctor_ = (void*)VideoContainer__New1_fn;
    type->fp_cctor_ = VideoContainer__cctor__fn;
    type->interface1.fp_Stop = (void(*)(uObject*))VideoContainer__Stop_fn;
    type->interface1.fp_PlayTo = (void(*)(uObject*, double*))VideoContainer__PlayTo_fn;
    type->interface1.fp_Pause = (void(*)(uObject*))VideoContainer__Pause_fn;
    type->interface1.fp_Resume = (void(*)(uObject*))VideoContainer__Resume_fn;
    type->interface1.fp_get_Progress = (void(*)(uObject*, double*))VideoContainer__get_Progress_fn;
    type->interface1.fp_set_Progress = (void(*)(uObject*, double*))VideoContainer__set_Progress_fn;
    type->interface1.fp_get_CanPlayTo = (void(*)(uObject*, bool*))VideoContainer__get_CanPlayTo_fn;
    type->interface1.fp_get_CanStop = (void(*)(uObject*, bool*))VideoContainer__get_CanStop_fn;
    type->interface1.fp_get_CanPause = (void(*)(uObject*, bool*))VideoContainer__get_CanPause_fn;
    type->interface1.fp_get_CanResume = (void(*)(uObject*, bool*))VideoContainer__get_CanResume_fn;
    type->interface2.fp_get_Progress = (void(*)(uObject*, double*))VideoContainer__get_Progress_fn;
    type->interface2.fp_add_ProgressChanged = (void(*)(uObject*, uDelegate*))VideoContainer__add_ProgressChanged_fn;
    type->interface2.fp_remove_ProgressChanged = (void(*)(uObject*, uDelegate*))VideoContainer__remove_ProgressChanged_fn;
    ::TYPES[9] = ::g::Fuse::Video::IVideoPlayer_typeof();
    ::TYPES[10] = ::g::Uno::EventHandler_typeof();
    ::TYPES[11] = ::g::Uno::EventHandler1_typeof()->MakeType(::g::Uno::Exception_typeof());
    ::TYPES[12] = ::g::Uno::Action1_typeof()->MakeType(::g::Fuse::Video::IVideoPlayer_typeof());
    ::TYPES[13] = ::g::Uno::Action1_typeof()->MakeType(::g::Uno::Exception_typeof());
    ::TYPES[14] = ::g::Uno::Delegate_typeof();
    ::TYPES[15] = uObject_typeof();
    ::TYPES[16] = ::g::Uno::EventArgs_typeof();
    ::TYPES[17] = ::g::Uno::EventHandler1_typeof()->MakeType(::g::Uno::String_typeof());
    ::TYPES[18] = ::g::Uno::Exception_typeof();
    ::TYPES[19] = ::g::Uno::Bool_typeof();
    ::TYPES[20] = ::g::Uno::Double_typeof();
    ::TYPES[21] = ::g::Uno::UX::ValueChangedHandler_typeof()->MakeType(::g::Uno::Double_typeof());
    ::TYPES[22] = ::g::Uno::UX::ValueChangedArgs_typeof()->MakeType(::g::Uno::Double_typeof());
    type->SetInterfaces(
        ::g::Fuse::Triggers::IMediaPlayback_typeof(), offsetof(VideoContainer_type, interface0),
        ::g::Fuse::Triggers::IPlayback_typeof(), offsetof(VideoContainer_type, interface1),
        ::g::Fuse::Triggers::IProgress_typeof(), offsetof(VideoContainer_type, interface2));
    type->SetFields(0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Video::VideoContainer, _autoPlay), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Video::VideoContainer, _isLooping), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Video::VideoContainer, _isPlaying), 0,
        ::g::Uno::Threading::Future1_typeof()->MakeType(::g::Fuse::Video::IVideoPlayer_typeof()), offsetof(::g::Fuse::Video::VideoContainer, _loaderFuture), 0,
        ::g::Fuse::Video::IVideoPlayer_typeof(), offsetof(::g::Fuse::Video::VideoContainer, _player), 0,
        ::g::Uno::Threading::Future1_typeof()->MakeType(::g::Fuse::Video::IVideoPlayer_typeof()), offsetof(::g::Fuse::Video::VideoContainer, _thenFuture), 0,
        ::g::Uno::Float_typeof(), offsetof(::g::Fuse::Video::VideoContainer, _volume), 0,
        ::g::Uno::EventHandler_typeof(), offsetof(::g::Fuse::Video::VideoContainer, Completed1), 0,
        ::g::Uno::EventHandler1_typeof()->MakeType(::g::Uno::String_typeof()), offsetof(::g::Fuse::Video::VideoContainer, Error1), 0,
        ::g::Uno::EventHandler_typeof(), offsetof(::g::Fuse::Video::VideoContainer, FrameAvailable1), 0,
        ::g::Uno::EventHandler_typeof(), offsetof(::g::Fuse::Video::VideoContainer, Loading1), 0,
        ::g::Uno::EventHandler_typeof(), offsetof(::g::Fuse::Video::VideoContainer, Paused1), 0,
        ::g::Uno::EventHandler_typeof(), offsetof(::g::Fuse::Video::VideoContainer, Prepared1), 0,
        ::g::Uno::UX::ValueChangedHandler_typeof()->MakeType(::g::Uno::Double_typeof()), offsetof(::g::Fuse::Video::VideoContainer, ProgressChanged1), 0,
        ::g::Uno::EventHandler_typeof(), offsetof(::g::Fuse::Video::VideoContainer, Started1), 0,
        ::g::Uno::EventHandler_typeof(), offsetof(::g::Fuse::Video::VideoContainer, Stopped1), 0,
        ::g::Uno::Float_typeof(), (uintptr_t)&::g::Fuse::Video::VideoContainer::CompletionTimeThreshold_, uFieldFlagsStatic);
    return type;
}

// public generated VideoContainer() :72
void VideoContainer__ctor__fn(VideoContainer* __this)
{
    __this->ctor_();
}

// public bool get_AutoPlay() :115
void VideoContainer__get_AutoPlay_fn(VideoContainer* __this, bool* __retval)
{
    *__retval = __this->AutoPlay();
}

// public void set_AutoPlay(bool value) :116
void VideoContainer__set_AutoPlay_fn(VideoContainer* __this, bool* value)
{
    __this->AutoPlay(*value);
}

// private void Cancel() :192
void VideoContainer__Cancel_fn(VideoContainer* __this)
{
    __this->Cancel();
}

// public bool get_CanPause() :395
void VideoContainer__get_CanPause_fn(VideoContainer* __this, bool* __retval)
{
    *__retval = __this->CanPause();
}

// public bool get_CanPlayTo() :419
void VideoContainer__get_CanPlayTo_fn(VideoContainer* __this, bool* __retval)
{
    *__retval = __this->CanPlayTo();
}

// public bool get_CanResume() :400
void VideoContainer__get_CanResume_fn(VideoContainer* __this, bool* __retval)
{
    *__retval = __this->CanResume();
}

// public bool get_CanStop() :390
void VideoContainer__get_CanStop_fn(VideoContainer* __this, bool* __retval)
{
    *__retval = __this->CanStop();
}

// public generated void add_Completed(Uno.EventHandler value) :309
void VideoContainer__add_Completed_fn(VideoContainer* __this, uDelegate* value)
{
    __this->add_Completed(value);
}

// public generated void remove_Completed(Uno.EventHandler value) :309
void VideoContainer__remove_Completed_fn(VideoContainer* __this, uDelegate* value)
{
    __this->remove_Completed(value);
}

// private void DisposePlayer() :142
void VideoContainer__DisposePlayer_fn(VideoContainer* __this)
{
    __this->DisposePlayer();
}

// public double get_Duration() :290
void VideoContainer__get_Duration_fn(VideoContainer* __this, double* __retval)
{
    *__retval = __this->Duration();
}

// public generated void add_Error(Uno.EventHandler<string> value) :313
void VideoContainer__add_Error_fn(VideoContainer* __this, uDelegate* value)
{
    __this->add_Error(value);
}

// public generated void remove_Error(Uno.EventHandler<string> value) :313
void VideoContainer__remove_Error_fn(VideoContainer* __this, uDelegate* value)
{
    __this->remove_Error(value);
}

// public void set_File(Uno.UX.FileSource value) :90
void VideoContainer__set_File_fn(VideoContainer* __this, ::g::Uno::UX::FileSource* value)
{
    __this->File(value);
}

// public generated void add_FrameAvailable(Uno.EventHandler value) :311
void VideoContainer__add_FrameAvailable_fn(VideoContainer* __this, uDelegate* value)
{
    __this->add_FrameAvailable(value);
}

// public generated void remove_FrameAvailable(Uno.EventHandler value) :311
void VideoContainer__remove_FrameAvailable_fn(VideoContainer* __this, uDelegate* value)
{
    __this->remove_FrameAvailable(value);
}

// public bool get_IsLooping() :104
void VideoContainer__get_IsLooping_fn(VideoContainer* __this, bool* __retval)
{
    *__retval = __this->IsLooping();
}

// public void set_IsLooping(bool value) :105
void VideoContainer__set_IsLooping_fn(VideoContainer* __this, bool* value)
{
    __this->IsLooping(*value);
}

// public bool get_IsPlaying() :280
void VideoContainer__get_IsPlaying_fn(VideoContainer* __this, bool* __retval)
{
    *__retval = __this->IsPlaying();
}

// private void Load(string url) :164
void VideoContainer__Load_fn(VideoContainer* __this, uString* url)
{
    __this->Load(url);
}

// private void Load(Uno.UX.FileSource fileSource) :172
void VideoContainer__Load1_fn(VideoContainer* __this, ::g::Uno::UX::FileSource* fileSource)
{
    __this->Load1(fileSource);
}

// public generated void add_Loading(Uno.EventHandler value) :299
void VideoContainer__add_Loading_fn(VideoContainer* __this, uDelegate* value)
{
    __this->add_Loading(value);
}

// public generated void remove_Loading(Uno.EventHandler value) :299
void VideoContainer__remove_Loading_fn(VideoContainer* __this, uDelegate* value)
{
    __this->remove_Loading(value);
}

// public generated VideoContainer New() :72
void VideoContainer__New1_fn(VideoContainer** __retval)
{
    *__retval = VideoContainer::New1();
}

// private void OnCompleted() :248
void VideoContainer__OnCompleted_fn(VideoContainer* __this)
{
    __this->OnCompleted();
}

// private void OnError(object sender, string msg) :227
void VideoContainer__OnError_fn(VideoContainer* __this, uObject* sender, uString* msg)
{
    __this->OnError(sender, msg);
}

// private void OnFrameAvailable(object sender, Uno.EventArgs args) :207
void VideoContainer__OnFrameAvailable_fn(VideoContainer* __this, uObject* sender, ::g::Uno::EventArgs* args)
{
    __this->OnFrameAvailable(sender, args);
}

// private void OnLoaded(Fuse.Video.IVideoPlayer videoPlayer) :180
void VideoContainer__OnLoaded_fn(VideoContainer* __this, uObject* videoPlayer)
{
    __this->OnLoaded(videoPlayer);
}

// private void OnLoading() :233
void VideoContainer__OnLoading_fn(VideoContainer* __this)
{
    __this->OnLoading();
}

// private void OnLoadingError(Uno.Exception e) :185
void VideoContainer__OnLoadingError_fn(VideoContainer* __this, ::g::Uno::Exception* e)
{
    __this->OnLoadingError(e);
}

// private void OnParamChanged() :213
void VideoContainer__OnParamChanged_fn(VideoContainer* __this)
{
    __this->OnParamChanged();
}

// private void OnPaused() :260
void VideoContainer__OnPaused_fn(VideoContainer* __this)
{
    __this->OnPaused();
}

// private void OnPlayerError(object sender, Uno.Exception e) :221
void VideoContainer__OnPlayerError_fn(VideoContainer* __this, uObject* sender, ::g::Uno::Exception* e)
{
    __this->OnPlayerError(sender, e);
}

// private void OnPrepared() :239
void VideoContainer__OnPrepared_fn(VideoContainer* __this)
{
    __this->OnPrepared();
}

// private void OnStarted() :254
void VideoContainer__OnStarted_fn(VideoContainer* __this)
{
    __this->OnStarted();
}

// private void OnStopped() :266
void VideoContainer__OnStopped_fn(VideoContainer* __this)
{
    __this->OnStopped();
}

// public void Pause() :373
void VideoContainer__Pause_fn(VideoContainer* __this)
{
    __this->Pause();
}

// public generated void add_Paused(Uno.EventHandler value) :305
void VideoContainer__add_Paused_fn(VideoContainer* __this, uDelegate* value)
{
    __this->add_Paused(value);
}

// public generated void remove_Paused(Uno.EventHandler value) :305
void VideoContainer__remove_Paused_fn(VideoContainer* __this, uDelegate* value)
{
    __this->remove_Paused(value);
}

// public void Play() :342
void VideoContainer__Play_fn(VideoContainer* __this)
{
    __this->Play();
}

// public void PlayTo(double progress) :415
void VideoContainer__PlayTo_fn(VideoContainer* __this, double* progress)
{
    __this->PlayTo(*progress);
}

// public double get_Position() :295
void VideoContainer__get_Position_fn(VideoContainer* __this, double* __retval)
{
    *__retval = __this->Position();
}

// public void set_Position(double value) :296
void VideoContainer__set_Position_fn(VideoContainer* __this, double* value)
{
    __this->Position(*value);
}

// public generated void add_Prepared(Uno.EventHandler value) :301
void VideoContainer__add_Prepared_fn(VideoContainer* __this, uDelegate* value)
{
    __this->add_Prepared(value);
}

// public generated void remove_Prepared(Uno.EventHandler value) :301
void VideoContainer__remove_Prepared_fn(VideoContainer* __this, uDelegate* value)
{
    __this->remove_Prepared(value);
}

// public double get_Progress() :405
void VideoContainer__get_Progress_fn(VideoContainer* __this, double* __retval)
{
    *__retval = __this->Progress();
}

// public void set_Progress(double value) :406
void VideoContainer__set_Progress_fn(VideoContainer* __this, double* value)
{
    __this->Progress(*value);
}

// public generated void add_ProgressChanged(Uno.UX.ValueChangedHandler<double> value) :413
void VideoContainer__add_ProgressChanged_fn(VideoContainer* __this, uDelegate* value)
{
    __this->add_ProgressChanged(value);
}

// public generated void remove_ProgressChanged(Uno.UX.ValueChangedHandler<double> value) :413
void VideoContainer__remove_ProgressChanged_fn(VideoContainer* __this, uDelegate* value)
{
    __this->remove_ProgressChanged(value);
}

// public void Reset() :134
void VideoContainer__Reset_fn(VideoContainer* __this)
{
    __this->Reset();
}

// public void Resume() :383
void VideoContainer__Resume_fn(VideoContainer* __this)
{
    __this->Resume();
}

// private void SetPlayer(Fuse.Video.IVideoPlayer player) :154
void VideoContainer__SetPlayer_fn(VideoContainer* __this, uObject* player)
{
    __this->SetPlayer(player);
}

// public int2 get_Size() :285
void VideoContainer__get_Size_fn(VideoContainer* __this, ::g::Uno::Int2* __retval)
{
    *__retval = __this->Size();
}

// public generated void add_Started(Uno.EventHandler value) :303
void VideoContainer__add_Started_fn(VideoContainer* __this, uDelegate* value)
{
    __this->add_Started(value);
}

// public generated void remove_Started(Uno.EventHandler value) :303
void VideoContainer__remove_Started_fn(VideoContainer* __this, uDelegate* value)
{
    __this->remove_Started(value);
}

// public void Stop() :352
void VideoContainer__Stop_fn(VideoContainer* __this)
{
    __this->Stop();
}

// public generated void add_Stopped(Uno.EventHandler value) :307
void VideoContainer__add_Stopped_fn(VideoContainer* __this, uDelegate* value)
{
    __this->add_Stopped(value);
}

// public generated void remove_Stopped(Uno.EventHandler value) :307
void VideoContainer__remove_Stopped_fn(VideoContainer* __this, uDelegate* value)
{
    __this->remove_Stopped(value);
}

// public void Update() :317
void VideoContainer__Update_fn(VideoContainer* __this)
{
    __this->Update();
}

// public void set_Url(string value) :77
void VideoContainer__set_Url_fn(VideoContainer* __this, uString* value)
{
    __this->Url(value);
}

// public Uno.Graphics.VideoTexture get_VideoTexture() :274
void VideoContainer__get_VideoTexture_fn(VideoContainer* __this, ::g::Uno::Graphics::VideoTexture** __retval)
{
    *__retval = __this->VideoTexture();
}

// public float get_Volume() :126
void VideoContainer__get_Volume_fn(VideoContainer* __this, float* __retval)
{
    *__retval = __this->Volume();
}

// public void set_Volume(float value) :127
void VideoContainer__set_Volume_fn(VideoContainer* __this, float* value)
{
    __this->Volume(*value);
}

float VideoContainer::CompletionTimeThreshold_;

// public generated VideoContainer() [instance] :72
void VideoContainer::ctor_()
{
    _volume = 1.0f;
}

// public bool get_AutoPlay() [instance] :115
bool VideoContainer::AutoPlay()
{
    return _autoPlay;
}

// public void set_AutoPlay(bool value) [instance] :116
void VideoContainer::AutoPlay(bool value)
{
    _autoPlay = value;
    OnParamChanged();
}

// private void Cancel() [instance] :192
void VideoContainer::Cancel()
{
    if (_loaderFuture != NULL)
    {
        uPtr(_loaderFuture)->Cancel(false);
        uPtr(_loaderFuture)->Dispose();
        _loaderFuture = NULL;
    }

    if (_thenFuture != NULL)
    {
        uPtr(_thenFuture)->Dispose();
        _thenFuture = NULL;
    }
}

// public bool get_CanPause() [instance] :395
bool VideoContainer::CanPause()
{
    return _player != NULL;
}

// public bool get_CanPlayTo() [instance] :419
bool VideoContainer::CanPlayTo()
{
    return _player != NULL;
}

// public bool get_CanResume() [instance] :400
bool VideoContainer::CanResume()
{
    return _player != NULL;
}

// public bool get_CanStop() [instance] :390
bool VideoContainer::CanStop()
{
    return _player != NULL;
}

// public generated void add_Completed(Uno.EventHandler value) [instance] :309
void VideoContainer::add_Completed(uDelegate* value)
{
    Completed1 = uCast<uDelegate*>(::g::Uno::Delegate::Combine(Completed1, value), ::TYPES[10/*Uno.EventHandler*/]);
}

// public generated void remove_Completed(Uno.EventHandler value) [instance] :309
void VideoContainer::remove_Completed(uDelegate* value)
{
    Completed1 = uCast<uDelegate*>(::g::Uno::Delegate::Remove(Completed1, value), ::TYPES[10/*Uno.EventHandler*/]);
}

// private void DisposePlayer() [instance] :142
void VideoContainer::DisposePlayer()
{
    if (_player != NULL)
    {
        ::g::Fuse::Video::IVideoPlayer::Pause(uInterface(uPtr(_player), ::TYPES[9/*Fuse.Video.IVideoPlayer*/]));
        ::g::Fuse::Video::IVideoPlayer::remove_FrameAvailable(uInterface(uPtr(_player), ::TYPES[9/*Fuse.Video.IVideoPlayer*/]), uDelegate::New(::TYPES[10/*Uno.EventHandler*/], (void*)VideoContainer__OnFrameAvailable_fn, this));
        ::g::Fuse::Video::IVideoPlayer::remove_ErrorOccurred(uInterface(uPtr(_player), ::TYPES[9/*Fuse.Video.IVideoPlayer*/]), uDelegate::New(::TYPES[11/*Uno.EventHandler<Uno.Exception>*/], (void*)VideoContainer__OnPlayerError_fn, this));
        ::g::Uno::IDisposable::Dispose(uInterface(uPtr(_player), ::g::Uno::IDisposable_typeof()));
        _player = NULL;
    }
}

// public double get_Duration() [instance] :290
double VideoContainer::Duration()
{
    return (_player != NULL) ? ::g::Fuse::Video::IVideoPlayer::Duration(uInterface(uPtr(_player), ::TYPES[9/*Fuse.Video.IVideoPlayer*/])) : 0.0;
}

// public generated void add_Error(Uno.EventHandler<string> value) [instance] :313
void VideoContainer::add_Error(uDelegate* value)
{
    Error1 = uCast<uDelegate*>(::g::Uno::Delegate::Combine(Error1, value), ::TYPES[17/*Uno.EventHandler<string>*/]);
}

// public generated void remove_Error(Uno.EventHandler<string> value) [instance] :313
void VideoContainer::remove_Error(uDelegate* value)
{
    Error1 = uCast<uDelegate*>(::g::Uno::Delegate::Remove(Error1, value), ::TYPES[17/*Uno.EventHandler<string>*/]);
}

// public void set_File(Uno.UX.FileSource value) [instance] :90
void VideoContainer::File(::g::Uno::UX::FileSource* value)
{
    try
    {
        Load1(value);
    }
    catch (const uThrowable& __t)
    {
        ::g::Uno::Exception* e = __t.Exception;
        Reset();
        OnError(this, uPtr(e)->Message());
    }
}

// public generated void add_FrameAvailable(Uno.EventHandler value) [instance] :311
void VideoContainer::add_FrameAvailable(uDelegate* value)
{
    FrameAvailable1 = uCast<uDelegate*>(::g::Uno::Delegate::Combine(FrameAvailable1, value), ::TYPES[10/*Uno.EventHandler*/]);
}

// public generated void remove_FrameAvailable(Uno.EventHandler value) [instance] :311
void VideoContainer::remove_FrameAvailable(uDelegate* value)
{
    FrameAvailable1 = uCast<uDelegate*>(::g::Uno::Delegate::Remove(FrameAvailable1, value), ::TYPES[10/*Uno.EventHandler*/]);
}

// public bool get_IsLooping() [instance] :104
bool VideoContainer::IsLooping()
{
    return _isLooping;
}

// public void set_IsLooping(bool value) [instance] :105
void VideoContainer::IsLooping(bool value)
{
    _isLooping = value;
    OnParamChanged();
}

// public bool get_IsPlaying() [instance] :280
bool VideoContainer::IsPlaying()
{
    return (_player != NULL) ? _isPlaying : false;
}

// private void Load(string url) [instance] :164
void VideoContainer::Load(uString* url)
{
    Reset();
    OnLoading();
    _loaderFuture = ::g::Fuse::Video::VideoLoader::Load(url);
    _thenFuture = ((::g::Uno::Threading::Future1*)uPtr(_loaderFuture)->Then1(uDelegate::New(::TYPES[12/*Uno.Action<Fuse.Video.IVideoPlayer>*/], (void*)VideoContainer__OnLoaded_fn, this), uDelegate::New(::TYPES[13/*Uno.Action<Uno.Exception>*/], (void*)VideoContainer__OnLoadingError_fn, this)));
}

// private void Load(Uno.UX.FileSource fileSource) [instance] :172
void VideoContainer::Load1(::g::Uno::UX::FileSource* fileSource)
{
    Reset();
    OnLoading();
    _loaderFuture = ::g::Fuse::Video::VideoLoader::Load1(fileSource);
    _thenFuture = ((::g::Uno::Threading::Future1*)uPtr(_loaderFuture)->Then1(uDelegate::New(::TYPES[12/*Uno.Action<Fuse.Video.IVideoPlayer>*/], (void*)VideoContainer__OnLoaded_fn, this), uDelegate::New(::TYPES[13/*Uno.Action<Uno.Exception>*/], (void*)VideoContainer__OnLoadingError_fn, this)));
}

// public generated void add_Loading(Uno.EventHandler value) [instance] :299
void VideoContainer::add_Loading(uDelegate* value)
{
    Loading1 = uCast<uDelegate*>(::g::Uno::Delegate::Combine(Loading1, value), ::TYPES[10/*Uno.EventHandler*/]);
}

// public generated void remove_Loading(Uno.EventHandler value) [instance] :299
void VideoContainer::remove_Loading(uDelegate* value)
{
    Loading1 = uCast<uDelegate*>(::g::Uno::Delegate::Remove(Loading1, value), ::TYPES[10/*Uno.EventHandler*/]);
}

// private void OnCompleted() [instance] :248
void VideoContainer::OnCompleted()
{
    if (::g::Uno::Delegate::op_Inequality(Completed1, NULL))
        uPtr(Completed1)->Invoke(2, this, (::g::Uno::EventArgs*)::g::Uno::EventArgs::Empty());
}

// private void OnError(object sender, string msg) [instance] :227
void VideoContainer::OnError(uObject* sender, uString* msg)
{
    if (::g::Uno::Delegate::op_Inequality(Error1, NULL))
        uPtr(Error1)->Invoke(2, this, msg);
}

// private void OnFrameAvailable(object sender, Uno.EventArgs args) [instance] :207
void VideoContainer::OnFrameAvailable(uObject* sender, ::g::Uno::EventArgs* args)
{
    if (::g::Uno::Delegate::op_Inequality(FrameAvailable1, NULL))
        uPtr(FrameAvailable1)->Invoke(2, this, (::g::Uno::EventArgs*)::g::Uno::EventArgs::Empty());
}

// private void OnLoaded(Fuse.Video.IVideoPlayer videoPlayer) [instance] :180
void VideoContainer::OnLoaded(uObject* videoPlayer)
{
    SetPlayer(videoPlayer);
}

// private void OnLoading() [instance] :233
void VideoContainer::OnLoading()
{
    if (::g::Uno::Delegate::op_Inequality(Loading1, NULL))
        uPtr(Loading1)->Invoke(2, this, (::g::Uno::EventArgs*)::g::Uno::EventArgs::Empty());
}

// private void OnLoadingError(Uno.Exception e) [instance] :185
void VideoContainer::OnLoadingError(::g::Uno::Exception* e)
{
    OnError(this, uPtr(e)->Message());
}

// private void OnParamChanged() [instance] :213
void VideoContainer::OnParamChanged()
{
    if (_player != NULL)
        ::g::Fuse::Video::IVideoPlayer::Volume(uInterface(uPtr(_player), ::TYPES[9/*Fuse.Video.IVideoPlayer*/]), Volume());
}

// private void OnPaused() [instance] :260
void VideoContainer::OnPaused()
{
    if (::g::Uno::Delegate::op_Inequality(Paused1, NULL))
        uPtr(Paused1)->Invoke(2, this, (::g::Uno::EventArgs*)::g::Uno::EventArgs::Empty());
}

// private void OnPlayerError(object sender, Uno.Exception e) [instance] :221
void VideoContainer::OnPlayerError(uObject* sender, ::g::Uno::Exception* e)
{
    if (::g::Uno::Delegate::op_Inequality(Error1, NULL))
        uPtr(Error1)->Invoke(2, this, (uString*)uPtr(e)->Message());
}

// private void OnPrepared() [instance] :239
void VideoContainer::OnPrepared()
{
    if (::g::Uno::Delegate::op_Inequality(Prepared1, NULL))
        uPtr(Prepared1)->Invoke(2, this, (::g::Uno::EventArgs*)::g::Uno::EventArgs::Empty());

    if (AutoPlay())
        Play();
}

// private void OnStarted() [instance] :254
void VideoContainer::OnStarted()
{
    if (::g::Uno::Delegate::op_Inequality(Started1, NULL))
        uPtr(Started1)->Invoke(2, this, (::g::Uno::EventArgs*)::g::Uno::EventArgs::Empty());
}

// private void OnStopped() [instance] :266
void VideoContainer::OnStopped()
{
    if (::g::Uno::Delegate::op_Inequality(Stopped1, NULL))
        uPtr(Stopped1)->Invoke(2, this, (::g::Uno::EventArgs*)::g::Uno::EventArgs::Empty());
}

// public void Pause() [instance] :373
void VideoContainer::Pause()
{
    if ((_player != NULL) && IsPlaying())
    {
        _isPlaying = false;
        ::g::Fuse::Video::IVideoPlayer::Pause(uInterface(uPtr(_player), ::TYPES[9/*Fuse.Video.IVideoPlayer*/]));
        OnPaused();
    }
}

// public generated void add_Paused(Uno.EventHandler value) [instance] :305
void VideoContainer::add_Paused(uDelegate* value)
{
    Paused1 = uCast<uDelegate*>(::g::Uno::Delegate::Combine(Paused1, value), ::TYPES[10/*Uno.EventHandler*/]);
}

// public generated void remove_Paused(Uno.EventHandler value) [instance] :305
void VideoContainer::remove_Paused(uDelegate* value)
{
    Paused1 = uCast<uDelegate*>(::g::Uno::Delegate::Remove(Paused1, value), ::TYPES[10/*Uno.EventHandler*/]);
}

// public void Play() [instance] :342
void VideoContainer::Play()
{
    if ((_player != NULL) && !IsPlaying())
    {
        _isPlaying = true;
        ::g::Fuse::Video::IVideoPlayer::Play(uInterface(uPtr(_player), ::TYPES[9/*Fuse.Video.IVideoPlayer*/]));
        OnStarted();
    }
}

// public void PlayTo(double progress) [instance] :415
void VideoContainer::PlayTo(double progress)
{
}

// public double get_Position() [instance] :295
double VideoContainer::Position()
{
    return (_player != NULL) ? ::g::Fuse::Video::IVideoPlayer::Position(uInterface(uPtr(_player), ::TYPES[9/*Fuse.Video.IVideoPlayer*/])) : 0.0;
}

// public void set_Position(double value) [instance] :296
void VideoContainer::Position(double value)
{
    if (_player != NULL)
        ::g::Fuse::Video::IVideoPlayer::Position(uInterface(uPtr(_player), ::TYPES[9/*Fuse.Video.IVideoPlayer*/]), ::g::Uno::Math::Clamp(value, 0.0, Duration()));
}

// public generated void add_Prepared(Uno.EventHandler value) [instance] :301
void VideoContainer::add_Prepared(uDelegate* value)
{
    Prepared1 = uCast<uDelegate*>(::g::Uno::Delegate::Combine(Prepared1, value), ::TYPES[10/*Uno.EventHandler*/]);
}

// public generated void remove_Prepared(Uno.EventHandler value) [instance] :301
void VideoContainer::remove_Prepared(uDelegate* value)
{
    Prepared1 = uCast<uDelegate*>(::g::Uno::Delegate::Remove(Prepared1, value), ::TYPES[10/*Uno.EventHandler*/]);
}

// public double get_Progress() [instance] :405
double VideoContainer::Progress()
{
    return ((_player != NULL) && (Duration() != 0.0)) ? Position() / Duration() : 0.0;
}

// public void set_Progress(double value) [instance] :406
void VideoContainer::Progress(double value)
{
    if ((_player != NULL) && (Duration() != 0.0))
        Position(value * Duration());
}

// public generated void add_ProgressChanged(Uno.UX.ValueChangedHandler<double> value) [instance] :413
void VideoContainer::add_ProgressChanged(uDelegate* value)
{
    ProgressChanged1 = uCast<uDelegate*>(::g::Uno::Delegate::Combine(ProgressChanged1, value), ::TYPES[21/*Uno.UX.ValueChangedHandler<double>*/]);
}

// public generated void remove_ProgressChanged(Uno.UX.ValueChangedHandler<double> value) [instance] :413
void VideoContainer::remove_ProgressChanged(uDelegate* value)
{
    ProgressChanged1 = uCast<uDelegate*>(::g::Uno::Delegate::Remove(ProgressChanged1, value), ::TYPES[21/*Uno.UX.ValueChangedHandler<double>*/]);
}

// public void Reset() [instance] :134
void VideoContainer::Reset()
{
    Cancel();
    DisposePlayer();
}

// public void Resume() [instance] :383
void VideoContainer::Resume()
{
    Play();
}

// private void SetPlayer(Fuse.Video.IVideoPlayer player) [instance] :154
void VideoContainer::SetPlayer(uObject* player)
{
    _player = player;
    ::g::Fuse::Video::IVideoPlayer::add_FrameAvailable(uInterface(uPtr(_player), ::TYPES[9/*Fuse.Video.IVideoPlayer*/]), uDelegate::New(::TYPES[10/*Uno.EventHandler*/], (void*)VideoContainer__OnFrameAvailable_fn, this));
    ::g::Fuse::Video::IVideoPlayer::add_ErrorOccurred(uInterface(uPtr(_player), ::TYPES[9/*Fuse.Video.IVideoPlayer*/]), uDelegate::New(::TYPES[11/*Uno.EventHandler<Uno.Exception>*/], (void*)VideoContainer__OnPlayerError_fn, this));
    OnParamChanged();
    OnPrepared();
}

// public int2 get_Size() [instance] :285
::g::Uno::Int2 VideoContainer::Size()
{
    return (_player != NULL) ? ::g::Fuse::Video::IVideoPlayer::Size(uInterface(uPtr(_player), ::TYPES[9/*Fuse.Video.IVideoPlayer*/])) : ::g::Uno::Int2__New2(0, 0);
}

// public generated void add_Started(Uno.EventHandler value) [instance] :303
void VideoContainer::add_Started(uDelegate* value)
{
    Started1 = uCast<uDelegate*>(::g::Uno::Delegate::Combine(Started1, value), ::TYPES[10/*Uno.EventHandler*/]);
}

// public generated void remove_Started(Uno.EventHandler value) [instance] :303
void VideoContainer::remove_Started(uDelegate* value)
{
    Started1 = uCast<uDelegate*>(::g::Uno::Delegate::Remove(Started1, value), ::TYPES[10/*Uno.EventHandler*/]);
}

// public void Stop() [instance] :352
void VideoContainer::Stop()
{
    if (_player != NULL)
    {
        _isPlaying = false;
        ::g::Fuse::Video::IVideoPlayer::Pause(uInterface(uPtr(_player), ::TYPES[9/*Fuse.Video.IVideoPlayer*/]));
        Position(0.0);
        OnStopped();
    }
}

// public generated void add_Stopped(Uno.EventHandler value) [instance] :307
void VideoContainer::add_Stopped(uDelegate* value)
{
    Stopped1 = uCast<uDelegate*>(::g::Uno::Delegate::Combine(Stopped1, value), ::TYPES[10/*Uno.EventHandler*/]);
}

// public generated void remove_Stopped(Uno.EventHandler value) [instance] :307
void VideoContainer::remove_Stopped(uDelegate* value)
{
    Stopped1 = uCast<uDelegate*>(::g::Uno::Delegate::Remove(Stopped1, value), ::TYPES[10/*Uno.EventHandler*/]);
}

// public void Update() [instance] :317
void VideoContainer::Update()
{
    ::g::Uno::UX::ValueChangedArgs* ret2;

    if (_player != NULL)
    {
        ::g::Fuse::Video::IVideoPlayer::Update(uInterface(uPtr(_player), ::TYPES[9/*Fuse.Video.IVideoPlayer*/]));

        if (IsPlaying() && (::g::Uno::Math::Abs(Duration() - Position()) < (double)VideoContainer::CompletionTimeThreshold()))
        {
            if (IsLooping())
            {
                Stop();
                Play();
            }
            else
            {
                Pause();
                OnCompleted();
            }
        }
    }

    if (::g::Uno::Delegate::op_Inequality(ProgressChanged1, NULL))
        uPtr(ProgressChanged1)->Invoke(2, this, (::g::Uno::UX::ValueChangedArgs__New2_fn(::TYPES[22/*Uno.UX.ValueChangedArgs<double>*/], uCRef(Progress()), this, &ret2), ret2));
}

// public void set_Url(string value) [instance] :77
void VideoContainer::Url(uString* value)
{
    try
    {
        Load(value);
    }
    catch (const uThrowable& __t)
    {
        ::g::Uno::Exception* e = __t.Exception;
        Reset();
        OnError(this, uPtr(e)->Message());
    }
}

// public Uno.Graphics.VideoTexture get_VideoTexture() [instance] :274
::g::Uno::Graphics::VideoTexture* VideoContainer::VideoTexture()
{
    return (_player != NULL) ? (::g::Uno::Graphics::VideoTexture*)::g::Fuse::Video::IVideoPlayer::VideoTexture(uInterface(uPtr(_player), ::TYPES[9/*Fuse.Video.IVideoPlayer*/])) : NULL;
}

// public float get_Volume() [instance] :126
float VideoContainer::Volume()
{
    return _volume;
}

// public void set_Volume(float value) [instance] :127
void VideoContainer::Volume(float value)
{
    _volume = value;
    OnParamChanged();
}

// public generated VideoContainer New() [static] :72
VideoContainer* VideoContainer::New1()
{
    VideoContainer* obj1 = (VideoContainer*)uNew(VideoContainer_typeof());
    obj1->ctor_();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Video/0.27.10/$.uno#3
// --------------------------------------------------------

// internal static class VideoDiskCache :438
// {
// static VideoDiskCache() :444
static void VideoDiskCache__cctor__fn(uType* __type)
{
    VideoDiskCache::_files_ = ((::g::Uno::Collections::Dictionary*)::g::Uno::Collections::Dictionary::New1(::TYPES[23/*Uno.Collections.Dictionary<string, string>*/]));
    uPtr(uPtr(::g::Uno::Application::Current())->Window())->add_Closed(uDelegate::New(::TYPES[10/*Uno.EventHandler*/], (void*)VideoDiskCache__OnWindowClosed_fn));
}

uClassType* VideoDiskCache_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Fuse.Video.VideoDiskCache", options);
    type->fp_cctor_ = VideoDiskCache__cctor__fn;
    ::STRINGS[0] = uString::Const("/tempVideo");
    ::STRINGS[1] = uString::Const(".");
    ::TYPES[23] = ::g::Uno::Collections::Dictionary_typeof()->MakeType(::g::Uno::String_typeof(), ::g::Uno::String_typeof());
    ::TYPES[24] = ::g::Uno::Platform::Window_typeof();
    ::TYPES[25] = ::g::Uno::Application_typeof();
    ::TYPES[10] = ::g::Uno::EventHandler_typeof();
    ::TYPES[26] = ::g::Uno::Char_typeof()->Array();
    ::TYPES[27] = ::g::Uno::String_typeof()->Array();
    ::TYPES[19] = ::g::Uno::Bool_typeof();
    ::TYPES[28] = ::g::Uno::UX::FileSource_typeof();
    ::TYPES[29] = ::g::Uno::Int_typeof();
    ::TYPES[30] = ::g::Uno::Collections::Dictionary__Enumerator_typeof()->MakeType(::g::Uno::String_typeof(), ::g::Uno::String_typeof());
    ::TYPES[31] = ::g::Uno::Collections::KeyValuePair_typeof()->MakeType(::g::Uno::String_typeof(), ::g::Uno::String_typeof());
    type->SetFields(0,
        ::g::Uno::Int_typeof(), (uintptr_t)&::g::Fuse::Video::VideoDiskCache::_fileCount_, uFieldFlagsStatic,
        ::g::Uno::Collections::Dictionary_typeof()->MakeType(::g::Uno::String_typeof(), ::g::Uno::String_typeof()), (uintptr_t)&::g::Fuse::Video::VideoDiskCache::_files_, uFieldFlagsStatic);
    return type;
}

// public static string GetFileExtension(string fileName) :475
void VideoDiskCache__GetFileExtension_fn(uString* fileName, uString** __retval)
{
    *__retval = VideoDiskCache::GetFileExtension(fileName);
}

// public static string GetFilePath(Uno.UX.FileSource fileSource) :462
void VideoDiskCache__GetFilePath_fn(::g::Uno::UX::FileSource* fileSource, uString** __retval)
{
    *__retval = VideoDiskCache::GetFilePath(fileSource);
}

// private static void OnWindowClosed(object sender, Uno.EventArgs args) :449
void VideoDiskCache__OnWindowClosed_fn(uObject* sender, ::g::Uno::EventArgs* args)
{
    VideoDiskCache::OnWindowClosed(sender, args);
}

int VideoDiskCache::_fileCount_;
uSStrong< ::g::Uno::Collections::Dictionary*> VideoDiskCache::_files_;

// public static string GetFileExtension(string fileName) [static] :475
uString* VideoDiskCache::GetFileExtension(uString* fileName)
{
    VideoDiskCache_typeof()->Init();
    uArray* strings = ::g::Uno::String::Split(uPtr(fileName), uArray::Init<int>(::TYPES[26/*char[]*/], 1, '.'));
    return uPtr(strings)->Strong<uString*>(uPtr(strings)->Length() - 1);
}

// public static string GetFilePath(Uno.UX.FileSource fileSource) [static] :462
uString* VideoDiskCache::GetFilePath(::g::Uno::UX::FileSource* fileSource)
{
    VideoDiskCache_typeof()->Init();
    bool ret2;
    uString* ret3;

    if (!(::g::Uno::Collections::Dictionary__ContainsKey_fn(uPtr(VideoDiskCache::_files()), uPtr(fileSource)->Name, &ret2), ret2))
    {
        uArray* bytes = uPtr(fileSource)->ReadAllBytes();
        uString* path = ::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::IO::Directory::GetUserDirectory(1), ::STRINGS[0/*"/tempVideo"*/]), ::g::Uno::Int::ToString(VideoDiskCache::_fileCount(), ::TYPES[29/*int*/])), ::STRINGS[1/*"."*/]), VideoDiskCache::GetFileExtension(fileSource->Name));
        VideoDiskCache::_fileCount()++;
        ::g::Uno::IO::File::WriteAllBytes(path, bytes);
        ::g::Uno::Collections::Dictionary__Add_fn(uPtr(VideoDiskCache::_files()), fileSource->Name, path);
    }

    return (::g::Uno::Collections::Dictionary__get_Item_fn(uPtr(VideoDiskCache::_files()), uPtr(fileSource)->Name, &ret3), ret3);
}

// private static void OnWindowClosed(object sender, Uno.EventArgs args) [static] :449
void VideoDiskCache::OnWindowClosed(uObject* sender, ::g::Uno::EventArgs* args)
{
    VideoDiskCache_typeof()->Init();
    ::g::Uno::Collections::Dictionary__Enumerator<uStrong<uString*>, uStrong<uString*> > ret4;
    uPtr(uPtr(::g::Uno::Application::Current())->Window())->remove_Closed(uDelegate::New(::TYPES[10/*Uno.EventHandler*/], (void*)VideoDiskCache__OnWindowClosed_fn));

    for (::g::Uno::Collections::Dictionary__Enumerator<uStrong<uString*>, uStrong<uString*> > enum1 = (::g::Uno::Collections::Dictionary__GetEnumerator_fn(uPtr(VideoDiskCache::_files()), &ret4), ret4); enum1.MoveNext(::TYPES[30/*Uno.Collections.Dictionary<string, string>.Enumerator*/]); )
    {
        ::g::Uno::Collections::KeyValuePair<uStrong<uString*>, uStrong<uString*> > pair = enum1.Current(::TYPES[30/*Uno.Collections.Dictionary<string, string>.Enumerator*/]);

        if (::g::Uno::IO::File::Exists(pair.Value(::TYPES[31/*Uno.Collections.KeyValuePair<string, string>*/])))
            ::g::Uno::IO::File::Delete(pair.Value(::TYPES[31/*Uno.Collections.KeyValuePair<string, string>*/]));
    }
}
// }

// /usr/local/share/uno/Packages/Fuse.Video/0.27.10/$.uno#5
// --------------------------------------------------------

// internal sealed class VideoDrawElement :782
// {
// static VideoDrawElement() :782
static void VideoDrawElement__cctor__fn(uType* __type)
{
    VideoDrawElement::Impl_ = VideoDrawElement::New1();
}

uType* VideoDrawElement_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 5;
    options.ObjectSize = sizeof(VideoDrawElement);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Video.VideoDrawElement", options);
    type->fp_ctor_ = (void*)VideoDrawElement__New1_fn;
    type->fp_cctor_ = VideoDrawElement__cctor__fn;
    ::TYPES[2] = ::g::Uno::Float2_typeof();
    ::TYPES[0] = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall_typeof();
    ::TYPES[5] = ::g::Fuse::DrawContext_typeof();
    ::TYPES[4] = ::g::Fuse::IViewport_typeof();
    ::TYPES[3] = ::g::Fuse::Node_typeof();
    ::TYPES[32] = ::g::Uno::Float2_typeof()->Array();
    ::TYPES[33] = ::g::Uno::Float_typeof();
    ::TYPES[8] = ::g::FuseVideo_bundle_typeof();
    type->SetFields(0,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall_typeof(), offsetof(::g::Fuse::Video::VideoDrawElement, _draw_5ede1af2), 0,
        ::g::Uno::Float4x4_typeof(), offsetof(::g::Fuse::Video::VideoDrawElement, Draw_LocalTransform_5ede1af2_3_8_2), 0,
        ::g::Uno::Float4x4_typeof(), offsetof(::g::Fuse::Video::VideoDrawElement, Draw_LocalTransform_5ede1af2_3_8_3), 0,
        ::g::Uno::Graphics::VertexBuffer_typeof(), offsetof(::g::Fuse::Video::VideoDrawElement, Draw_VertexData_5ede1af2_6_2_1), 0,
        VideoDrawElement_typeof(), (uintptr_t)&::g::Fuse::Video::VideoDrawElement::Impl_, uFieldFlagsStatic);
    return type;
}

// public generated VideoDrawElement() :782
void VideoDrawElement__ctor__fn(VideoDrawElement* __this)
{
    __this->ctor_();
}

// public void Draw(Fuse.DrawContext dc, Fuse.Node element, float2 offset, float2 size, float2 uvPosition, float2 uvSize, Uno.Graphics.VideoTexture tex) :786
void VideoDrawElement__Draw_fn(VideoDrawElement* __this, ::g::Fuse::DrawContext* dc, ::g::Fuse::Node* element, ::g::Uno::Float2* offset, ::g::Uno::Float2* size, ::g::Uno::Float2* uvPosition, ::g::Uno::Float2* uvSize, ::g::Uno::Graphics::VideoTexture* tex)
{
    __this->Draw(dc, element, *offset, *size, *uvPosition, *uvSize, tex);
}

// private generated void init_DrawCalls() :782
void VideoDrawElement__init_DrawCalls_fn(VideoDrawElement* __this)
{
    __this->init_DrawCalls();
}

// public generated VideoDrawElement New() :782
void VideoDrawElement__New1_fn(VideoDrawElement** __retval)
{
    *__retval = VideoDrawElement::New1();
}

uSStrong<VideoDrawElement*> VideoDrawElement::Impl_;

// public generated VideoDrawElement() [instance] :782
void VideoDrawElement::ctor_()
{
    init_DrawCalls();
}

// public void Draw(Fuse.DrawContext dc, Fuse.Node element, float2 offset, float2 size, float2 uvPosition, float2 uvSize, Uno.Graphics.VideoTexture tex) [instance] :786
void VideoDrawElement::Draw(::g::Fuse::DrawContext* dc, ::g::Fuse::Node* element, ::g::Uno::Float2 offset, ::g::Uno::Float2 size, ::g::Uno::Float2 uvPosition, ::g::Uno::Float2 uvSize, ::g::Uno::Graphics::VideoTexture* tex)
{
    ::g::Uno::Float4x4 LocalTransform_5ede1af2_3_8_4 = ::g::Uno::Matrix::Mul10(Draw_LocalTransform_5ede1af2_3_8_2, ::g::Uno::Matrix::Scaling1(size.X, size.Y, 1.0f), Draw_LocalTransform_5ede1af2_3_8_3, ::g::Uno::Matrix::Translation(offset.X, offset.Y, 0.0f));
    _draw_5ede1af2.BlendEnabled(true);
    _draw_5ede1af2.DepthTestEnabled(false);
    _draw_5ede1af2.CullFace(uPtr(dc)->CullFace());
    _draw_5ede1af2.BlendSrcRgb(2);
    _draw_5ede1af2.BlendDstRgb(3);
    _draw_5ede1af2.BlendDstAlpha(3);
    _draw_5ede1af2.Use();
    _draw_5ede1af2.Attrib1(0, 2, Draw_VertexData_5ede1af2_6_2_1, 8, 0);
    _draw_5ede1af2.Uniform12(1, ::g::Fuse::IViewport::ViewProjectionTransform(uInterface(uPtr(dc->Viewport()), ::TYPES[4/*Fuse.IViewport*/])));
    _draw_5ede1af2.Uniform2(2, uvSize);
    _draw_5ede1af2.Uniform2(3, uvPosition);
    _draw_5ede1af2.Uniform12(4, (element != NULL) ? ::g::Uno::Matrix::Mul8(LocalTransform_5ede1af2_3_8_4, uPtr(element)->WorldTransform()) : LocalTransform_5ede1af2_3_8_4);
    _draw_5ede1af2.Sampler6(5, tex);
    _draw_5ede1af2.DrawArrays(6);
}

// private generated void init_DrawCalls() [instance] :782
void VideoDrawElement::init_DrawCalls()
{
    Draw_VertexData_5ede1af2_6_2_1 = ::g::Uno::Graphics::VertexBuffer::New2(::g::Uno::Runtime::Implementation::Internal::BufferConverters::ToBuffer3(uArray::Init< ::g::Uno::Float2>(::TYPES[32/*float2[]*/], 6, ::g::Uno::Float2__New2(0.0f, 0.0f), ::g::Uno::Float2__New2(0.0f, 1.0f), ::g::Uno::Float2__New2(1.0f, 1.0f), ::g::Uno::Float2__New2(0.0f, 0.0f), ::g::Uno::Float2__New2(1.0f, 1.0f), ::g::Uno::Float2__New2(1.0f, 0.0f))), 0);
    Draw_LocalTransform_5ede1af2_3_8_2 = ::g::Uno::Matrix::Translation(-::g::Uno::Float2__New1(0.0f).X, -::g::Uno::Float2__New1(0.0f).Y, 0.0f);
    Draw_LocalTransform_5ede1af2_3_8_3 = ::g::Uno::Matrix::RotationZ(0.0f);
    _draw_5ede1af2 = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall__New1(::g::FuseVideo_bundle::VideoDrawElement369fdefc());
}

// public generated VideoDrawElement New() [static] :782
VideoDrawElement* VideoDrawElement::New1()
{
    VideoDrawElement* obj1 = (VideoDrawElement*)uNew(VideoDrawElement_typeof());
    obj1->ctor_();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Video/0.27.10/$.uno#4
// --------------------------------------------------------

// public static class VideoLoader :499
// {
uClassType* VideoLoader_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Fuse.Video.VideoLoader", options);
    ::STRINGS[2] = uString::Const("Video not supported on this platform");
    return type;
}

// public static Uno.Threading.Future<Fuse.Video.IVideoPlayer> Load(string url) :501
void VideoLoader__Load_fn(uString* url, ::g::Uno::Threading::Future1** __retval)
{
    *__retval = VideoLoader::Load(url);
}

// public static Uno.Threading.Future<Fuse.Video.IVideoPlayer> Load(Uno.UX.FileSource file) :510
void VideoLoader__Load1_fn(::g::Uno::UX::FileSource* file, ::g::Uno::Threading::Future1** __retval)
{
    *__retval = VideoLoader::Load1(file);
}

// public static Uno.Threading.Future<Fuse.Video.IVideoPlayer> Load(string url) [static] :501
::g::Uno::Threading::Future1* VideoLoader::Load(uString* url)
{
    return ::g::Fuse::Video::Graphics::Android::VideoLoader::Load(url);
    U_THROW(::g::Uno::Exception::New2(::STRINGS[2/*"Video not s...*/]));
}

// public static Uno.Threading.Future<Fuse.Video.IVideoPlayer> Load(Uno.UX.FileSource file) [static] :510
::g::Uno::Threading::Future1* VideoLoader::Load1(::g::Uno::UX::FileSource* file)
{
    return ::g::Fuse::Video::Graphics::Android::VideoLoader::Load2(file);
    U_THROW(::g::Uno::Exception::New2(::STRINGS[2/*"Video not s...*/]));
}
// }

// /usr/local/share/uno/Packages/Fuse.Video/0.27.10/$.uno#5
// --------------------------------------------------------

// public sealed extern class VideoVisual :575
// {
::g::Fuse::Controls::Graphics::ControlVisual_type* VideoVisual_typeof()
{
    static uSStrong< ::g::Fuse::Controls::Graphics::ControlVisual_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 65;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(VideoVisual);
    options.TypeSize = sizeof(::g::Fuse::Controls::Graphics::ControlVisual_type);
    type = (::g::Fuse::Controls::Graphics::ControlVisual_type*)uClassType::New("Fuse.Video.VideoVisual", options);
    type->SetBase(::g::Fuse::Controls::Graphics::ControlVisual_typeof()->MakeType(::g::Fuse::Controls::Video_typeof()));
    type->fp_ctor_ = (void*)VideoVisual__New1_fn;
    type->fp_Attach = (void(*)(::g::Fuse::Controls::Graphics::ControlVisual*))VideoVisual__Attach_fn;
    type->fp_Detach = (void(*)(::g::Fuse::Controls::Graphics::ControlVisual*))VideoVisual__Detach_fn;
    type->fp_GetMarginSize = (void(*)(::g::Fuse::Node*, ::g::Fuse::LayoutParams*, ::g::Uno::Float2*))VideoVisual__GetMarginSize_fn;
    type->fp_OnArrangeMarginBox = (void(*)(::g::Fuse::Node*, ::g::Uno::Float2*, ::g::Fuse::LayoutParams*, ::g::Uno::Float2*))VideoVisual__OnArrangeMarginBox_fn;
    type->fp_OnDraw = (void(*)(::g::Fuse::Controls::Graphics::Visual*, ::g::Fuse::DrawContext*))VideoVisual__OnDraw_fn;
    type->fp_OnHitTest = (void(*)(::g::Fuse::Node*, ::g::Fuse::HitTestContext*))VideoVisual__OnHitTest_fn;
    type->interface0.fp_get_ParentObject = (void(*)(uObject*, uObject**))::g::Fuse::Node__FuseIChildObjectget_ParentObject_fn;
    type->interface1.fp_get_DataContext = (void(*)(uObject*, uObject**))::g::Fuse::Node__get_DataContext_fn;
    type->interface1.fp_set_DataContext = (void(*)(uObject*, uObject*))::g::Fuse::Node__set_DataContext_fn;
    ::STRINGS[3] = uString::Const("");
    ::TYPES[34] = ::g::Fuse::Controls::Video_typeof();
    ::TYPES[35] = ::g::Fuse::Controls::Graphics::ControlVisual_typeof()->MakeType(::g::Fuse::Controls::Video_typeof());
    ::TYPES[10] = ::g::Uno::EventHandler_typeof();
    ::TYPES[36] = ::g::Uno::Action_typeof();
    ::TYPES[37] = ::g::Fuse::Triggers::IMediaPlayback_typeof();
    ::TYPES[38] = ::g::Fuse::Video::VideoContainer_typeof();
    ::TYPES[17] = ::g::Uno::EventHandler1_typeof()->MakeType(::g::Uno::String_typeof());
    ::TYPES[39] = ::g::Fuse::Internal::SizingContainer_typeof();
    ::TYPES[3] = ::g::Fuse::Node_typeof();
    ::TYPES[29] = ::g::Uno::Int_typeof();
    ::TYPES[40] = ::g::Fuse::Video::Scale9Rectangle_typeof();
    ::TYPES[41] = ::g::Fuse::Controls::Graphics::Visual_typeof();
    ::TYPES[42] = ::g::Fuse::Video::VideoDrawElement_typeof();
    ::TYPES[1] = ::g::Uno::Float4_typeof();
    ::TYPES[43] = ::g::Fuse::HitTestContext_typeof();
    ::TYPES[2] = ::g::Uno::Float2_typeof();
    type->SetInterfaces(
        ::g::Fuse::IChildObject_typeof(), offsetof(::g::Fuse::Controls::Graphics::ControlVisual_type, interface0),
        ::g::Fuse::IDataContext_typeof(), offsetof(::g::Fuse::Controls::Graphics::ControlVisual_type, interface1));
    type->SetFields(57,
        ::g::Uno::Float2_typeof(), offsetof(::g::Fuse::Video::VideoVisual, _drawOrigin), 0,
        ::g::Uno::Float2_typeof(), offsetof(::g::Fuse::Video::VideoVisual, _drawSize), 0,
        ::g::Uno::Float2_typeof(), offsetof(::g::Fuse::Video::VideoVisual, _origin), 0,
        ::g::Uno::Float2_typeof(), offsetof(::g::Fuse::Video::VideoVisual, _scale), 0,
        ::g::Uno::Int2_typeof(), offsetof(::g::Fuse::Video::VideoVisual, _sizeCache), 0,
        ::g::Fuse::Internal::SizingContainer_typeof(), offsetof(::g::Fuse::Video::VideoVisual, _sizing), 0,
        ::g::Uno::Float4_typeof(), offsetof(::g::Fuse::Video::VideoVisual, _uvClip), 0,
        ::g::Fuse::Video::VideoContainer_typeof(), offsetof(::g::Fuse::Video::VideoVisual, _videoContainer), 0);
    return type;
}

// public generated VideoVisual() :575
void VideoVisual__ctor_3_fn(VideoVisual* __this)
{
    __this->ctor_3();
}

// protected override sealed void Attach() :577
void VideoVisual__Attach_fn(VideoVisual* __this)
{
    ::g::Fuse::Controls::Video* ret5;
    ::g::Fuse::Controls::Video* ret6;
    ::g::Fuse::Controls::Video* ret7;
    ::g::Fuse::Controls::Video* ret8;
    uPtr((::g::Fuse::Controls::Graphics::ControlVisual__get_Control_fn(__this, &ret5), ret5))->add_RenderParamChanged(uDelegate::New(::TYPES[10/*Uno.EventHandler*/], (void*)VideoVisual__OnRenderParamChanged_fn, __this));
    uPtr((::g::Fuse::Controls::Graphics::ControlVisual__get_Control_fn(__this, &ret6), ret6))->add_ParamChanged(uDelegate::New(::TYPES[10/*Uno.EventHandler*/], (void*)VideoVisual__OnParamChanged_fn, __this));
    uPtr((::g::Fuse::Controls::Graphics::ControlVisual__get_Control_fn(__this, &ret7), ret7))->add_SourceChanged(uDelegate::New(::TYPES[10/*Uno.EventHandler*/], (void*)VideoVisual__OnSourceChanged_fn, __this));
    ::g::Fuse::UpdateManager::AddAction(uDelegate::New(::TYPES[36/*Uno.Action*/], (void*)::g::Fuse::Video::VideoContainer__Update_fn, uPtr(__this->_videoContainer)), 0);
    uPtr((::g::Fuse::Controls::Graphics::ControlVisual__get_Control_fn(__this, &ret8), ret8))->SetPlayback((uObject*)__this->_videoContainer);
    uPtr(__this->_videoContainer)->add_FrameAvailable(uDelegate::New(::TYPES[10/*Uno.EventHandler*/], (void*)VideoVisual__OnFrameAvailable_fn, __this));
    uPtr(__this->_videoContainer)->add_Error(uDelegate::New(::TYPES[17/*Uno.EventHandler<string>*/], (void*)VideoVisual__OnError_fn, __this));
    uPtr(__this->_videoContainer)->add_Loading(uDelegate::New(::TYPES[10/*Uno.EventHandler*/], (void*)VideoVisual__OnLoading_fn, __this));
    uPtr(__this->_videoContainer)->add_Prepared(uDelegate::New(::TYPES[10/*Uno.EventHandler*/], (void*)VideoVisual__OnPrepared_fn, __this));
    uPtr(__this->_videoContainer)->add_Completed(uDelegate::New(::TYPES[10/*Uno.EventHandler*/], (void*)VideoVisual__OnCompleted_fn, __this));
    uPtr(__this->_videoContainer)->add_Started(uDelegate::New(::TYPES[10/*Uno.EventHandler*/], (void*)VideoVisual__OnStarted_fn, __this));
    uPtr(__this->_videoContainer)->add_Paused(uDelegate::New(::TYPES[10/*Uno.EventHandler*/], (void*)VideoVisual__OnPaused_fn, __this));
    uPtr(__this->_videoContainer)->add_Stopped(uDelegate::New(::TYPES[10/*Uno.EventHandler*/], (void*)VideoVisual__OnStopped_fn, __this));
    __this->OnRenderParamChanged(NULL, NULL);
    __this->OnParamChanged(NULL, NULL);
    __this->OnSourceChanged(NULL, NULL);
}

// protected override sealed void Detach() :600
void VideoVisual__Detach_fn(VideoVisual* __this)
{
    ::g::Fuse::Controls::Video* ret9;
    ::g::Fuse::Controls::Video* ret10;
    ::g::Fuse::Controls::Video* ret11;
    ::g::Fuse::Controls::Video* ret12;
    uPtr((::g::Fuse::Controls::Graphics::ControlVisual__get_Control_fn(__this, &ret9), ret9))->SetPlayback(NULL);
    uPtr((::g::Fuse::Controls::Graphics::ControlVisual__get_Control_fn(__this, &ret10), ret10))->remove_RenderParamChanged(uDelegate::New(::TYPES[10/*Uno.EventHandler*/], (void*)VideoVisual__OnRenderParamChanged_fn, __this));
    uPtr((::g::Fuse::Controls::Graphics::ControlVisual__get_Control_fn(__this, &ret11), ret11))->remove_ParamChanged(uDelegate::New(::TYPES[10/*Uno.EventHandler*/], (void*)VideoVisual__OnParamChanged_fn, __this));
    uPtr((::g::Fuse::Controls::Graphics::ControlVisual__get_Control_fn(__this, &ret12), ret12))->remove_SourceChanged(uDelegate::New(::TYPES[10/*Uno.EventHandler*/], (void*)VideoVisual__OnSourceChanged_fn, __this));
    ::g::Fuse::UpdateManager::RemoveAction(uDelegate::New(::TYPES[36/*Uno.Action*/], (void*)::g::Fuse::Video::VideoContainer__Update_fn, uPtr(__this->_videoContainer)), 0);
    uPtr(__this->_videoContainer)->remove_FrameAvailable(uDelegate::New(::TYPES[10/*Uno.EventHandler*/], (void*)VideoVisual__OnFrameAvailable_fn, __this));
    uPtr(__this->_videoContainer)->remove_Error(uDelegate::New(::TYPES[17/*Uno.EventHandler<string>*/], (void*)VideoVisual__OnError_fn, __this));
    uPtr(__this->_videoContainer)->remove_Loading(uDelegate::New(::TYPES[10/*Uno.EventHandler*/], (void*)VideoVisual__OnLoading_fn, __this));
    uPtr(__this->_videoContainer)->remove_Prepared(uDelegate::New(::TYPES[10/*Uno.EventHandler*/], (void*)VideoVisual__OnPrepared_fn, __this));
    uPtr(__this->_videoContainer)->remove_Completed(uDelegate::New(::TYPES[10/*Uno.EventHandler*/], (void*)VideoVisual__OnCompleted_fn, __this));
    uPtr(__this->_videoContainer)->remove_Started(uDelegate::New(::TYPES[10/*Uno.EventHandler*/], (void*)VideoVisual__OnStarted_fn, __this));
    uPtr(__this->_videoContainer)->remove_Paused(uDelegate::New(::TYPES[10/*Uno.EventHandler*/], (void*)VideoVisual__OnPaused_fn, __this));
    uPtr(__this->_videoContainer)->remove_Stopped(uDelegate::New(::TYPES[10/*Uno.EventHandler*/], (void*)VideoVisual__OnStopped_fn, __this));
    uPtr(__this->_videoContainer)->Reset();
}

// public override sealed float2 GetMarginSize(Fuse.LayoutParams lp) :717
void VideoVisual__GetMarginSize_fn(VideoVisual* __this, ::g::Fuse::LayoutParams* lp, ::g::Uno::Float2* __retval)
{
    ::g::Fuse::Controls::Video* ret13;
    ::g::Fuse::Controls::Video* ret14;
    ::g::Fuse::LayoutParams lp_ = *lp;
    uPtr(__this->_sizing)->snapToPixels = uPtr((::g::Fuse::Controls::Graphics::ControlVisual__get_Control_fn(__this, &ret13), ret13))->SnapToPixels();
    uPtr(__this->_sizing)->absoluteZoom = uPtr((::g::Fuse::Controls::Graphics::ControlVisual__get_Control_fn(__this, &ret14), ret14))->AbsoluteZoom();
    return *__retval = uPtr(__this->_sizing)->ExpandFillSize(__this->GetSize(), lp_), void();
}

// private float2 GetSize() :725
void VideoVisual__GetSize_fn(VideoVisual* __this, ::g::Uno::Float2* __retval)
{
    *__retval = __this->GetSize();
}

// public generated VideoVisual New() :575
void VideoVisual__New1_fn(VideoVisual** __retval)
{
    *__retval = VideoVisual::New1();
}

// protected override sealed float2 OnArrangeMarginBox(float2 position, Fuse.LayoutParams lp) :735
void VideoVisual__OnArrangeMarginBox_fn(VideoVisual* __this, ::g::Uno::Float2* position, ::g::Fuse::LayoutParams* lp, ::g::Uno::Float2* __retval)
{
    ::g::Uno::Float2 ret15;
    ::g::Uno::Float2 position_ = *position;
    ::g::Fuse::LayoutParams lp_ = *lp;
    ::g::Fuse::Controls::Video* ret16;
    ::g::Fuse::Controls::Video* ret17;
    ::g::Uno::Float2 size = (::g::Fuse::Controls::Graphics::Visual__OnArrangeMarginBox_fn(__this, uCRef(position_), uCRef(lp_), &ret15), ret15);
    uPtr(__this->_sizing)->snapToPixels = uPtr((::g::Fuse::Controls::Graphics::ControlVisual__get_Control_fn(__this, &ret16), ret16))->SnapToPixels();
    uPtr(__this->_sizing)->absoluteZoom = uPtr((::g::Fuse::Controls::Graphics::ControlVisual__get_Control_fn(__this, &ret17), ret17))->AbsoluteZoom();
    ::g::Uno::Float2 contentDesiredSize = __this->GetSize();
    __this->_scale = uPtr(__this->_sizing)->CalcScale(size, contentDesiredSize);
    __this->_origin = uPtr(__this->_sizing)->CalcOrigin(size, ::g::Uno::Float2__op_Multiply2(contentDesiredSize, __this->_scale));
    __this->_drawOrigin = __this->_origin;
    __this->_drawSize = ::g::Uno::Float2__op_Multiply2(contentDesiredSize, __this->_scale);
    __this->_uvClip = uPtr(__this->_sizing)->CalcClip(size, &__this->_drawOrigin, &__this->_drawSize);
    return *__retval = size, void();
}

// private void OnCompleted(object sender, Uno.EventArgs args) :685
void VideoVisual__OnCompleted_fn(VideoVisual* __this, uObject* sender, ::g::Uno::EventArgs* args)
{
    __this->OnCompleted(sender, args);
}

// protected override sealed void OnDraw(Fuse.DrawContext dc) :754
void VideoVisual__OnDraw_fn(VideoVisual* __this, ::g::Fuse::DrawContext* dc)
{
    ::g::Uno::Float4 ind1;
    ::g::Uno::Float4 ind2;
    ::g::Uno::Float4 ind3;
    ::g::Fuse::Controls::Video* ret19;
    ::g::Fuse::Controls::Video* ret20;
    ::g::Uno::Graphics::VideoTexture* texture = uPtr(__this->_videoContainer)->VideoTexture();

    if (texture == NULL)
        return;

    if (uPtr((::g::Fuse::Controls::Graphics::ControlVisual__get_Control_fn(__this, &ret19), ret19))->StretchMode() == 4)
        uPtr(::g::Fuse::Video::Scale9Rectangle::Impl())->Draw(dc, __this, __this->ActualSize(), __this->GetSize(), texture, uPtr((::g::Fuse::Controls::Graphics::ControlVisual__get_Control_fn(__this, &ret20), ret20))->Scale9Margin());
    else
        uPtr(::g::Fuse::Video::VideoDrawElement::Impl())->Draw(dc, __this, __this->_drawOrigin, __this->_drawSize, (ind1 = __this->_uvClip, ::g::Uno::Float2__New2(ind1.X, ind1.Y)), ::g::Uno::Float2__op_Subtraction2((ind2 = __this->_uvClip, ::g::Uno::Float2__New2(ind2.Z, ind2.W)), (ind3 = __this->_uvClip, ::g::Uno::Float2__New2(ind3.X, ind3.Y))), texture);
}

// private void OnError(object sender, string msg) :667
void VideoVisual__OnError_fn(VideoVisual* __this, uObject* sender, uString* msg)
{
    __this->OnError(sender, msg);
}

// private void OnFrameAvailable(object sender, Uno.EventArgs args) :657
void VideoVisual__OnFrameAvailable_fn(VideoVisual* __this, uObject* sender, ::g::Uno::EventArgs* args)
{
    __this->OnFrameAvailable(sender, args);
}

// protected override sealed void OnHitTest(Fuse.HitTestContext htc) :769
void VideoVisual__OnHitTest_fn(VideoVisual* __this, ::g::Fuse::HitTestContext* htc)
{
    ::g::Uno::Float2 lp = uPtr(htc)->LocalPoint();

    if ((((lp.X >= __this->_drawOrigin.X) && (lp.X <= (__this->_drawOrigin.X + __this->_drawSize.X))) && (lp.Y >= __this->_drawOrigin.Y)) && (lp.Y <= (__this->_drawOrigin.Y + __this->_drawSize.Y)))
        htc->Hit(__this);

    ::g::Fuse::Node__OnHitTest_fn(__this, htc);
}

// private void OnLoading(object sender, Uno.EventArgs args) :673
void VideoVisual__OnLoading_fn(VideoVisual* __this, uObject* sender, ::g::Uno::EventArgs* args)
{
    __this->OnLoading(sender, args);
}

// private void OnParamChanged(object sender, Uno.EventArgs args) :634
void VideoVisual__OnParamChanged_fn(VideoVisual* __this, uObject* sender, ::g::Uno::EventArgs* args)
{
    __this->OnParamChanged(sender, args);
}

// private void OnPaused(object sender, Uno.EventArgs args) :697
void VideoVisual__OnPaused_fn(VideoVisual* __this, uObject* sender, ::g::Uno::EventArgs* args)
{
    __this->OnPaused(sender, args);
}

// private void OnPrepared(object sender, Uno.EventArgs args) :679
void VideoVisual__OnPrepared_fn(VideoVisual* __this, uObject* sender, ::g::Uno::EventArgs* args)
{
    __this->OnPrepared(sender, args);
}

// private void OnRenderParamChanged(object sender, Uno.EventArgs args) :624
void VideoVisual__OnRenderParamChanged_fn(VideoVisual* __this, uObject* sender, ::g::Uno::EventArgs* args)
{
    __this->OnRenderParamChanged(sender, args);
}

// private void OnSourceChanged(object sender, Uno.EventArgs args) :641
void VideoVisual__OnSourceChanged_fn(VideoVisual* __this, uObject* sender, ::g::Uno::EventArgs* args)
{
    __this->OnSourceChanged(sender, args);
}

// private void OnStarted(object sender, Uno.EventArgs args) :691
void VideoVisual__OnStarted_fn(VideoVisual* __this, uObject* sender, ::g::Uno::EventArgs* args)
{
    __this->OnStarted(sender, args);
}

// private void OnStopped(object sender, Uno.EventArgs args) :703
void VideoVisual__OnStopped_fn(VideoVisual* __this, uObject* sender, ::g::Uno::EventArgs* args)
{
    __this->OnStopped(sender, args);
}

// private void ResetTriggers() :708
void VideoVisual__ResetTriggers_fn(VideoVisual* __this)
{
    __this->ResetTriggers();
}

// public generated VideoVisual() [instance] :575
void VideoVisual::ctor_3()
{
    _videoContainer = ::g::Fuse::Video::VideoContainer::New1();
    _sizing = ::g::Fuse::Internal::SizingContainer::New1();
    _sizeCache = ::g::Uno::Int2__New2(0, 0);
    ctor_2();
}

// private float2 GetSize() [instance] :725
::g::Uno::Float2 VideoVisual::GetSize()
{
    return ::g::Uno::Float2__op_Implicit1(uPtr(_videoContainer)->Size());
}

// private void OnCompleted(object sender, Uno.EventArgs args) [instance] :685
void VideoVisual::OnCompleted(uObject* sender, ::g::Uno::EventArgs* args)
{
    ::g::Fuse::Controls::Video* ret18;
    ResetTriggers();
    ::g::Fuse::Triggers::WhileCompleted::SetState((::g::Fuse::Controls::Graphics::ControlVisual__get_Control_fn(this, &ret18), ret18), true);
}

// private void OnError(object sender, string msg) [instance] :667
void VideoVisual::OnError(uObject* sender, uString* msg)
{
    ::g::Fuse::Controls::Video* ret21;
    ResetTriggers();
    ::g::Fuse::Triggers::WhileFailed::SetState((::g::Fuse::Controls::Graphics::ControlVisual__get_Control_fn(this, &ret21), ret21), true, msg);
}

// private void OnFrameAvailable(object sender, Uno.EventArgs args) [instance] :657
void VideoVisual::OnFrameAvailable(uObject* sender, ::g::Uno::EventArgs* args)
{
    if (::g::Uno::Int2__op_Inequality(uPtr(_videoContainer)->Size(), _sizeCache))
    {
        _sizeCache = uPtr(_videoContainer)->Size();
        InvalidateLayout(2);
    }

    InvalidateVisual();
}

// private void OnLoading(object sender, Uno.EventArgs args) [instance] :673
void VideoVisual::OnLoading(uObject* sender, ::g::Uno::EventArgs* args)
{
    ::g::Fuse::Controls::Video* ret22;
    ResetTriggers();
    ::g::Fuse::Triggers::WhileLoading::SetState((::g::Fuse::Controls::Graphics::ControlVisual__get_Control_fn(this, &ret22), ret22), true);
}

// private void OnParamChanged(object sender, Uno.EventArgs args) [instance] :634
void VideoVisual::OnParamChanged(uObject* sender, ::g::Uno::EventArgs* args)
{
    ::g::Fuse::Controls::Video* ret23;
    ::g::Fuse::Controls::Video* ret24;
    ::g::Fuse::Controls::Video* ret25;
    uPtr(_videoContainer)->IsLooping(uPtr((::g::Fuse::Controls::Graphics::ControlVisual__get_Control_fn(this, &ret23), ret23))->IsLooping());
    uPtr(_videoContainer)->AutoPlay(uPtr((::g::Fuse::Controls::Graphics::ControlVisual__get_Control_fn(this, &ret24), ret24))->AutoPlay());
    uPtr(_videoContainer)->Volume(uPtr((::g::Fuse::Controls::Graphics::ControlVisual__get_Control_fn(this, &ret25), ret25))->Volume());
}

// private void OnPaused(object sender, Uno.EventArgs args) [instance] :697
void VideoVisual::OnPaused(uObject* sender, ::g::Uno::EventArgs* args)
{
    ::g::Fuse::Controls::Video* ret26;
    ResetTriggers();
    ::g::Fuse::Triggers::WhilePaused::SetState((::g::Fuse::Controls::Graphics::ControlVisual__get_Control_fn(this, &ret26), ret26), true);
}

// private void OnPrepared(object sender, Uno.EventArgs args) [instance] :679
void VideoVisual::OnPrepared(uObject* sender, ::g::Uno::EventArgs* args)
{
    ::g::Fuse::Controls::Video* ret27;
    ResetTriggers();
    ::g::Fuse::Triggers::WhileLoading::SetState((::g::Fuse::Controls::Graphics::ControlVisual__get_Control_fn(this, &ret27), ret27), false);
}

// private void OnRenderParamChanged(object sender, Uno.EventArgs args) [instance] :624
void VideoVisual::OnRenderParamChanged(uObject* sender, ::g::Uno::EventArgs* args)
{
    ::g::Fuse::Controls::Video* ret28;
    ::g::Fuse::Controls::Video* ret29;
    ::g::Fuse::Controls::Video* ret30;
    ::g::Fuse::Controls::Video* ret31;
    uPtr(_sizing)->SetStretchMode(uPtr((::g::Fuse::Controls::Graphics::ControlVisual__get_Control_fn(this, &ret28), ret28))->StretchMode());
    uPtr(_sizing)->SetStretchDirection(uPtr((::g::Fuse::Controls::Graphics::ControlVisual__get_Control_fn(this, &ret29), ret29))->StretchDirection());
    uPtr(_sizing)->SetStretchSizing(uPtr((::g::Fuse::Controls::Graphics::ControlVisual__get_Control_fn(this, &ret30), ret30))->StretchSizing());
    uPtr(_sizing)->SetAlignment(uPtr((::g::Fuse::Controls::Graphics::ControlVisual__get_Control_fn(this, &ret31), ret31))->ContentAlignment());
    InvalidateVisual();
}

// private void OnSourceChanged(object sender, Uno.EventArgs args) [instance] :641
void VideoVisual::OnSourceChanged(uObject* sender, ::g::Uno::EventArgs* args)
{
    ::g::Fuse::Controls::Video* ret32;
    ::g::Fuse::Controls::Video* ret33;
    ::g::Fuse::Controls::Video* ret34;
    ::g::Fuse::Controls::Video* ret35;

    if (uPtr((::g::Fuse::Controls::Graphics::ControlVisual__get_Control_fn(this, &ret32), ret32))->File() != NULL)
    {
        uPtr(_videoContainer)->File(uPtr((::g::Fuse::Controls::Graphics::ControlVisual__get_Control_fn(this, &ret33), ret33))->File());
        return;
    }

    if (::g::Uno::String::op_Inequality(uPtr((::g::Fuse::Controls::Graphics::ControlVisual__get_Control_fn(this, &ret34), ret34))->Url(), NULL))
    {
        uPtr(_videoContainer)->Url(uPtr((::g::Fuse::Controls::Graphics::ControlVisual__get_Control_fn(this, &ret35), ret35))->Url());
        return;
    }
}

// private void OnStarted(object sender, Uno.EventArgs args) [instance] :691
void VideoVisual::OnStarted(uObject* sender, ::g::Uno::EventArgs* args)
{
    ::g::Fuse::Controls::Video* ret36;
    ResetTriggers();
    ::g::Fuse::Triggers::WhilePlaying::SetState((::g::Fuse::Controls::Graphics::ControlVisual__get_Control_fn(this, &ret36), ret36), true);
}

// private void OnStopped(object sender, Uno.EventArgs args) [instance] :703
void VideoVisual::OnStopped(uObject* sender, ::g::Uno::EventArgs* args)
{
    ResetTriggers();
}

// private void ResetTriggers() [instance] :708
void VideoVisual::ResetTriggers()
{
    ::g::Fuse::Controls::Video* ret37;
    ::g::Fuse::Controls::Video* ret38;
    ::g::Fuse::Controls::Video* ret39;
    ::g::Fuse::Controls::Video* ret40;
    ::g::Fuse::Controls::Video* ret41;
    ::g::Fuse::Triggers::WhileFailed::SetState((::g::Fuse::Controls::Graphics::ControlVisual__get_Control_fn(this, &ret37), ret37), false, ::STRINGS[3/*""*/]);
    ::g::Fuse::Triggers::WhileLoading::SetState((::g::Fuse::Controls::Graphics::ControlVisual__get_Control_fn(this, &ret38), ret38), false);
    ::g::Fuse::Triggers::WhileCompleted::SetState((::g::Fuse::Controls::Graphics::ControlVisual__get_Control_fn(this, &ret39), ret39), false);
    ::g::Fuse::Triggers::WhilePlaying::SetState((::g::Fuse::Controls::Graphics::ControlVisual__get_Control_fn(this, &ret40), ret40), false);
    ::g::Fuse::Triggers::WhilePaused::SetState((::g::Fuse::Controls::Graphics::ControlVisual__get_Control_fn(this, &ret41), ret41), false);
}

// public generated VideoVisual New() [static] :575
VideoVisual* VideoVisual::New1()
{
    VideoVisual* obj4 = (VideoVisual*)uNew(VideoVisual_typeof());
    obj4->ctor_3();
    return obj4;
}
// }

}}} // ::g::Fuse::Video
