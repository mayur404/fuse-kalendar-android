// This file was generated based on '(multiple files)'.
// WARNING: Changes might be lost if you edit this file directly.

#include <Android.Base.Wrappers.JWrapper.h>
#include <Fuse.UpdateManager.h>
#include <Fuse.UpdateStage.h>
#include <Fuse.Video.Graphics.Android.MediaPlayer.h>
#include <Fuse.Video.Graphics.Android.VideoLoader.h>
#include <Fuse.Video.Graphics.Android.VideoLoader.VideoPromise.h>
#include <Fuse.Video.IVideoPlayer.h>
#include <Fuse.Video.VideoDiskCache.h>
#include <Java.Object.h>
#include <jni.h>
#include <OpenGL.GL.h>
#include <OpenGL.GLTextureHandle.h>
#include <Uno.Action.h>
#include <Uno.Bool.h>
#include <Uno.Compiler.ExportTargetInterop.Foreign.Android.JavaUnoObject.h>
#include <Uno.Delegate.h>
#include <Uno.Double.h>
#include <Uno.EventArgs.h>
#include <Uno.EventHandler.h>
#include <Uno.EventHandler-1.h>
#include <Uno.Exception.h>
#include <Uno.Float.h>
#include <Uno.Graphics.VideoTexture.h>
#include <Uno.Int.h>
#include <Uno.Int2.h>
#include <Uno.IO.BundleFile.h>
#include <Uno.Math.h>
#include <Uno.Object.h>
#include <Uno.Platform2.Application.h>
#include <Uno.Platform2.ApplicationState.h>
#include <Uno.Platform2.ApplicationStateTransitionHandler.h>
#include <Uno.String.h>
#include <Uno.Threading.Future-1.h>
#include <Uno.UX.BundleFileSource.h>
#include <Uno.UX.FileSource.h>
#include <Uno/JNIHelper.h>
static uString* STRINGS[2];
static uType* TYPES[18];

namespace g{
namespace Fuse{
namespace Video{
namespace Graphics{
namespace Android{

// /usr/local/share/uno/Packages/Fuse.Video/0.27.10/Android/$.uno
// --------------------------------------------------------------

// internal sealed extern class MediaPlayer :118
// {
MediaPlayer_type* MediaPlayer_typeof()
{
    static uSStrong<MediaPlayer_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 13;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(MediaPlayer);
    options.TypeSize = sizeof(MediaPlayer_type);
    type = (MediaPlayer_type*)uClassType::New("Fuse.Video.Graphics.Android.MediaPlayer", options);
    type->fp_ctor_ = (void*)MediaPlayer__New1_fn;
    type->interface0.fp_Dispose = (void(*)(uObject*))MediaPlayer__Dispose_fn;
    type->interface1.fp_Play = (void(*)(uObject*))MediaPlayer__Play_fn;
    type->interface1.fp_Pause = (void(*)(uObject*))MediaPlayer__Pause_fn;
    type->interface1.fp_Update = (void(*)(uObject*))MediaPlayer__Update_fn;
    type->interface1.fp_get_VideoTexture = (void(*)(uObject*, ::g::Uno::Graphics::VideoTexture**))MediaPlayer__get_VideoTexture_fn;
    type->interface1.fp_get_Size = (void(*)(uObject*, ::g::Uno::Int2*))MediaPlayer__get_Size_fn;
    type->interface1.fp_get_Volume = (void(*)(uObject*, float*))MediaPlayer__get_Volume_fn;
    type->interface1.fp_set_Volume = (void(*)(uObject*, float*))MediaPlayer__set_Volume_fn;
    type->interface1.fp_get_Duration = (void(*)(uObject*, double*))MediaPlayer__get_Duration_fn;
    type->interface1.fp_get_Position = (void(*)(uObject*, double*))MediaPlayer__get_Position_fn;
    type->interface1.fp_set_Position = (void(*)(uObject*, double*))MediaPlayer__set_Position_fn;
    type->interface1.fp_add_FrameAvailable = (void(*)(uObject*, uDelegate*))MediaPlayer__add_FrameAvailable_fn;
    type->interface1.fp_remove_FrameAvailable = (void(*)(uObject*, uDelegate*))MediaPlayer__remove_FrameAvailable_fn;
    type->interface1.fp_add_ErrorOccurred = (void(*)(uObject*, uDelegate*))MediaPlayer__add_ErrorOccurred_fn;
    type->interface1.fp_remove_ErrorOccurred = (void(*)(uObject*, uDelegate*))MediaPlayer__remove_ErrorOccurred_fn;
    ::STRINGS[0] = uString::Const("what: ");
    ::STRINGS[1] = uString::Const(" extra: ");
    ::TYPES[0] = ::g::Uno::Platform2::Application_typeof();
    ::TYPES[1] = ::g::Uno::Platform2::ApplicationStateTransitionHandler_typeof();
    ::TYPES[2] = ::g::Uno::Bool_typeof();
    ::TYPES[3] = ::g::Uno::IO::BundleFile_typeof();
    ::TYPES[4] = ::g::Uno::Delegate_typeof();
    ::TYPES[5] = ::g::Uno::EventHandler1_typeof()->MakeType(::g::Uno::Int_typeof());
    ::TYPES[6] = uObject_typeof();
    ::TYPES[7] = ::g::Uno::EventHandler_typeof();
    ::TYPES[8] = ::g::Uno::EventArgs_typeof();
    ::TYPES[9] = ::g::Uno::EventHandler1_typeof()->MakeType(::g::Uno::String_typeof());
    ::TYPES[10] = ::g::Uno::EventHandler1_typeof()->MakeType(::g::Uno::Exception_typeof());
    ::TYPES[11] = ::g::Uno::Double_typeof();
    ::TYPES[12] = ::g::Uno::Int_typeof();
    type->SetInterfaces(
        ::g::Uno::IDisposable_typeof(), offsetof(MediaPlayer_type, interface0),
        ::g::Fuse::Video::IVideoPlayer_typeof(), offsetof(MediaPlayer_type, interface1));
    type->SetFields(0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Video::Graphics::Android::MediaPlayer, _frameAvailable), 0,
        ::g::Java::Object_typeof(), offsetof(::g::Fuse::Video::Graphics::Android::MediaPlayer, _handle), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Video::Graphics::Android::MediaPlayer, _isDisposed), 0,
        ::g::Java::Object_typeof(), offsetof(::g::Fuse::Video::Graphics::Android::MediaPlayer, _surface), 0,
        ::g::Java::Object_typeof(), offsetof(::g::Fuse::Video::Graphics::Android::MediaPlayer, _surfaceTexture), 0,
        ::g::Uno::Graphics::VideoTexture_typeof(), offsetof(::g::Fuse::Video::Graphics::Android::MediaPlayer, _videoTexture), 0,
        ::g::Uno::Float_typeof(), offsetof(::g::Fuse::Video::Graphics::Android::MediaPlayer, _volume), 0,
        ::g::Uno::EventHandler1_typeof()->MakeType(::g::Uno::Int_typeof()), offsetof(::g::Fuse::Video::Graphics::Android::MediaPlayer, Buffering1), 0,
        ::g::Uno::EventHandler_typeof(), offsetof(::g::Fuse::Video::Graphics::Android::MediaPlayer, Completion1), 0,
        ::g::Uno::EventHandler1_typeof()->MakeType(::g::Uno::String_typeof()), offsetof(::g::Fuse::Video::Graphics::Android::MediaPlayer, Error1), 0,
        ::g::Uno::EventHandler1_typeof()->MakeType(::g::Uno::Exception_typeof()), offsetof(::g::Fuse::Video::Graphics::Android::MediaPlayer, ErrorOccurred1), 0,
        ::g::Uno::EventHandler_typeof(), offsetof(::g::Fuse::Video::Graphics::Android::MediaPlayer, FrameAvailable1), 0,
        ::g::Uno::EventHandler_typeof(), offsetof(::g::Fuse::Video::Graphics::Android::MediaPlayer, Prepared1), 0);
    return type;
}

// public MediaPlayer() :159
void MediaPlayer__ctor__fn(MediaPlayer* __this)
{
    __this->ctor_();
}

// public generated void add_Buffering(Uno.EventHandler<int> value) :129
void MediaPlayer__add_Buffering_fn(MediaPlayer* __this, uDelegate* value)
{
    __this->add_Buffering(value);
}

// public generated void remove_Buffering(Uno.EventHandler<int> value) :129
void MediaPlayer__remove_Buffering_fn(MediaPlayer* __this, uDelegate* value)
{
    __this->remove_Buffering(value);
}

// public generated void add_Completion(Uno.EventHandler value) :127
void MediaPlayer__add_Completion_fn(MediaPlayer* __this, uDelegate* value)
{
    __this->add_Completion(value);
}

// public generated void remove_Completion(Uno.EventHandler value) :127
void MediaPlayer__remove_Completion_fn(MediaPlayer* __this, uDelegate* value)
{
    __this->remove_Completion(value);
}

// private Java.Object CreateMediaPlayer(Java.Object surfaceHandle) :171
void MediaPlayer__CreateMediaPlayer_fn(MediaPlayer* __this, ::g::Java::Object* surfaceHandle, ::g::Java::Object** __retval)
{
    *__retval = __this->CreateMediaPlayer(surfaceHandle);
}

// private Java.Object CreateSurface(Java.Object surfaceTexture) :213
void MediaPlayer__CreateSurface_fn(MediaPlayer* __this, ::g::Java::Object* surfaceTexture, ::g::Java::Object** __retval)
{
    *__retval = __this->CreateSurface(surfaceTexture);
}

// private Java.Object CreateSurfaceTexture(int glHandle) :201
void MediaPlayer__CreateSurfaceTexture_fn(MediaPlayer* __this, int* glHandle, ::g::Java::Object** __retval)
{
    *__retval = __this->CreateSurfaceTexture(*glHandle);
}

// public void Dispose() :349
void MediaPlayer__Dispose_fn(MediaPlayer* __this)
{
    __this->Dispose();
}

// private static void Dispose(Java.Object mediaplayerHandle, Java.Object surfaceHandle, Java.Object surfaceTextureHandle) :361
void MediaPlayer__Dispose1_fn(::g::Java::Object* mediaplayerHandle, ::g::Java::Object* surfaceHandle, ::g::Java::Object* surfaceTextureHandle)
{
    MediaPlayer::Dispose1(mediaplayerHandle, surfaceHandle, surfaceTextureHandle);
}

// public double get_Duration() :134
void MediaPlayer__get_Duration_fn(MediaPlayer* __this, double* __retval)
{
    *__retval = __this->Duration();
}

// public generated void add_Error(Uno.EventHandler<string> value) :128
void MediaPlayer__add_Error_fn(MediaPlayer* __this, uDelegate* value)
{
    __this->add_Error(value);
}

// public generated void remove_Error(Uno.EventHandler<string> value) :128
void MediaPlayer__remove_Error_fn(MediaPlayer* __this, uDelegate* value)
{
    __this->remove_Error(value);
}

// public generated void add_ErrorOccurred(Uno.EventHandler<Uno.Exception> value) :132
void MediaPlayer__add_ErrorOccurred_fn(MediaPlayer* __this, uDelegate* value)
{
    __this->add_ErrorOccurred(value);
}

// public generated void remove_ErrorOccurred(Uno.EventHandler<Uno.Exception> value) :132
void MediaPlayer__remove_ErrorOccurred_fn(MediaPlayer* __this, uDelegate* value)
{
    __this->remove_ErrorOccurred(value);
}

// public generated void add_FrameAvailable(Uno.EventHandler value) :131
void MediaPlayer__add_FrameAvailable_fn(MediaPlayer* __this, uDelegate* value)
{
    __this->add_FrameAvailable(value);
}

// public generated void remove_FrameAvailable(Uno.EventHandler value) :131
void MediaPlayer__remove_FrameAvailable_fn(MediaPlayer* __this, uDelegate* value)
{
    __this->remove_FrameAvailable(value);
}

// private static int GetCurrentPosition(Java.Object handle) :408
void MediaPlayer__GetCurrentPosition_fn(::g::Java::Object* handle, int* __retval)
{
    *__retval = MediaPlayer::GetCurrentPosition(handle);
}

// private static int GetDuration(Java.Object handle) :438
void MediaPlayer__GetDuration_fn(::g::Java::Object* handle, int* __retval)
{
    *__retval = MediaPlayer::GetDuration(handle);
}

// private static int GetHeight(Java.Object handle) :426
void MediaPlayer__GetHeight_fn(::g::Java::Object* handle, int* __retval)
{
    *__retval = MediaPlayer::GetHeight(handle);
}

// private static int GetWidth(Java.Object handle) :420
void MediaPlayer__GetWidth_fn(::g::Java::Object* handle, int* __retval)
{
    *__retval = MediaPlayer::GetWidth(handle);
}

// public void LoadAsync(string url) :254
void MediaPlayer__LoadAsync_fn(MediaPlayer* __this, uString* url)
{
    __this->LoadAsync(url);
}

// public void LoadAsync(Uno.IO.BundleFile file) :249
void MediaPlayer__LoadAsync1_fn(MediaPlayer* __this, ::g::Uno::IO::BundleFile* file)
{
    __this->LoadAsync1(file);
}

// private void LoadAsyncAsset(Java.Object handle, string assetName) :278
void MediaPlayer__LoadAsyncAsset_fn(MediaPlayer* __this, ::g::Java::Object* handle, uString* assetName)
{
    __this->LoadAsyncAsset(handle, assetName);
}

// private void LoadAsyncUrl(Java.Object handle, string url) :260
void MediaPlayer__LoadAsyncUrl_fn(MediaPlayer* __this, ::g::Java::Object* handle, uString* url)
{
    __this->LoadAsyncUrl(handle, url);
}

// public MediaPlayer New() :159
void MediaPlayer__New1_fn(MediaPlayer** __retval)
{
    *__retval = MediaPlayer::New1();
}

// private void OnBuffer(int percent) :401
void MediaPlayer__OnBuffer_fn(MediaPlayer* __this, int* percent)
{
    __this->OnBuffer(*percent);
}

// private void OnCompletion() :380
void MediaPlayer__OnCompletion_fn(MediaPlayer* __this)
{
    __this->OnCompletion();
}

// private void OnEnteringBackground(Uno.Platform2.ApplicationState args) :244
void MediaPlayer__OnEnteringBackground_fn(MediaPlayer* __this, int* args)
{
    __this->OnEnteringBackground(*args);
}

// private void OnError(int what, int extra) :386
void MediaPlayer__OnError_fn(MediaPlayer* __this, int* what, int* extra)
{
    __this->OnError(*what, *extra);
}

// private void OnErrorOccurred(string msg) :395
void MediaPlayer__OnErrorOccurred_fn(MediaPlayer* __this, uString* msg)
{
    __this->OnErrorOccurred(msg);
}

// private void OnFrameAvailable() :226
void MediaPlayer__OnFrameAvailable_fn(MediaPlayer* __this)
{
    __this->OnFrameAvailable();
}

// private void OnPrepared() :374
void MediaPlayer__OnPrepared_fn(MediaPlayer* __this)
{
    __this->OnPrepared();
}

// public void Pause() :322
void MediaPlayer__Pause_fn(MediaPlayer* __this)
{
    __this->Pause();
}

// private static void Pause(Java.Object handle) :337
void MediaPlayer__Pause1_fn(::g::Java::Object* handle)
{
    MediaPlayer::Pause1(handle);
}

// public void Play() :321
void MediaPlayer__Play_fn(MediaPlayer* __this)
{
    __this->Play();
}

// private static void Play(Java.Object handle) :325
void MediaPlayer__Play1_fn(::g::Java::Object* handle)
{
    MediaPlayer::Play1(handle);
}

// public double get_Position() :138
void MediaPlayer__get_Position_fn(MediaPlayer* __this, double* __retval)
{
    *__retval = __this->Position();
}

// public void set_Position(double value) :139
void MediaPlayer__set_Position_fn(MediaPlayer* __this, double* value)
{
    __this->Position(*value);
}

// public generated void add_Prepared(Uno.EventHandler value) :126
void MediaPlayer__add_Prepared_fn(MediaPlayer* __this, uDelegate* value)
{
    __this->add_Prepared(value);
}

// public generated void remove_Prepared(Uno.EventHandler value) :126
void MediaPlayer__remove_Prepared_fn(MediaPlayer* __this, uDelegate* value)
{
    __this->remove_Prepared(value);
}

// private static void SeekTo(Java.Object handle, int position) :414
void MediaPlayer__SeekTo_fn(::g::Java::Object* handle, int* position)
{
    MediaPlayer::SeekTo(handle, *position);
}

// private static void SetVolume(Java.Object handle, float left, float right) :432
void MediaPlayer__SetVolume_fn(::g::Java::Object* handle, float* left, float* right)
{
    MediaPlayer::SetVolume(handle, *left, *right);
}

// public int2 get_Size() :135
void MediaPlayer__get_Size_fn(MediaPlayer* __this, ::g::Uno::Int2* __retval)
{
    *__retval = __this->Size();
}

// public void Update() :231
void MediaPlayer__Update_fn(MediaPlayer* __this)
{
    __this->Update();
}

// private void UpdateTexture() :218
void MediaPlayer__UpdateTexture_fn(MediaPlayer* __this)
{
    __this->UpdateTexture();
}

// private static void UpdateTexture(Java.Object surfaceTextureHandle) :220
void MediaPlayer__UpdateTexture1_fn(::g::Java::Object* surfaceTextureHandle)
{
    MediaPlayer::UpdateTexture1(surfaceTextureHandle);
}

// public Uno.Graphics.VideoTexture get_VideoTexture() :123
void MediaPlayer__get_VideoTexture_fn(MediaPlayer* __this, ::g::Uno::Graphics::VideoTexture** __retval)
{
    *__retval = __this->VideoTexture();
}

// public float get_Volume() :145
void MediaPlayer__get_Volume_fn(MediaPlayer* __this, float* __retval)
{
    *__retval = __this->Volume();
}

// public void set_Volume(float value) :146
void MediaPlayer__set_Volume_fn(MediaPlayer* __this, float* value)
{
    __this->Volume(*value);
}

// public MediaPlayer() [instance] :159
void MediaPlayer::ctor_()
{
    _volume = 1.0f;
    uint32_t glHandle = ::g::OpenGL::GL::CreateTexture();
    _videoTexture = ::g::Uno::Graphics::VideoTexture::New1(glHandle);
    _surfaceTexture = CreateSurfaceTexture(::g::OpenGL::GLTextureHandle::op_Explicit1(glHandle));
    _surface = CreateSurface(_surfaceTexture);
    _handle = CreateMediaPlayer(_surface);
    ::g::Uno::Platform2::Application::add_EnteringBackground(uDelegate::New(::TYPES[1/*Uno.Platform2.ApplicationStateTransitionHandler*/], (void*)MediaPlayer__OnEnteringBackground_fn, this));
}

// public generated void add_Buffering(Uno.EventHandler<int> value) [instance] :129
void MediaPlayer::add_Buffering(uDelegate* value)
{
    Buffering1 = uCast<uDelegate*>(::g::Uno::Delegate::Combine(Buffering1, value), ::TYPES[5/*Uno.EventHandler<int>*/]);
}

// public generated void remove_Buffering(Uno.EventHandler<int> value) [instance] :129
void MediaPlayer::remove_Buffering(uDelegate* value)
{
    Buffering1 = uCast<uDelegate*>(::g::Uno::Delegate::Remove(Buffering1, value), ::TYPES[5/*Uno.EventHandler<int>*/]);
}

// public generated void add_Completion(Uno.EventHandler value) [instance] :127
void MediaPlayer::add_Completion(uDelegate* value)
{
    Completion1 = uCast<uDelegate*>(::g::Uno::Delegate::Combine(Completion1, value), ::TYPES[7/*Uno.EventHandler*/]);
}

// public generated void remove_Completion(Uno.EventHandler value) [instance] :127
void MediaPlayer::remove_Completion(uDelegate* value)
{
    Completion1 = uCast<uDelegate*>(::g::Uno::Delegate::Remove(Completion1, value), ::TYPES[7/*Uno.EventHandler*/]);
}

// private Java.Object CreateMediaPlayer(Java.Object surfaceHandle) [instance] :171
::g::Java::Object* MediaPlayer::CreateMediaPlayer(::g::Java::Object* surfaceHandle)
{
    {
        JniHelper _jni;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "CreateMediaPlayer32", "(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;");
        jobject _this_ = ::g::Uno::Compiler::ExportTargetInterop::Foreign::Android::JavaUnoObject::Box5(this);
        jobject __jresult = _jni->CallStaticObjectMethod(__cls, __mtd,_this_,::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)surfaceHandle, ::g::Android::Base::Wrappers::IJWrapper_typeof())));
        uObject* __result;
        NEW_UNO(__jresult,__result,::g::Android::Base::Wrappers::JWrapper_typeof(),::g::Android::Base::Wrappers::JWrapper*,false,false);
        if (_this_!=NULL) { _jni->DeleteLocalRef(_this_); }
        ::g::Android::Base::JNI::CheckException();
        return (::g::Java::Object*)__result;
    }
    
}

// private Java.Object CreateSurface(Java.Object surfaceTexture) [instance] :213
::g::Java::Object* MediaPlayer::CreateSurface(::g::Java::Object* surfaceTexture)
{
    {
        JniHelper _jni;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "CreateSurface37", "(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;");
        jobject _this_ = ::g::Uno::Compiler::ExportTargetInterop::Foreign::Android::JavaUnoObject::Box5(this);
        jobject __jresult = _jni->CallStaticObjectMethod(__cls, __mtd,_this_,::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)surfaceTexture, ::g::Android::Base::Wrappers::IJWrapper_typeof())));
        uObject* __result;
        NEW_UNO(__jresult,__result,::g::Android::Base::Wrappers::JWrapper_typeof(),::g::Android::Base::Wrappers::JWrapper*,false,false);
        if (_this_!=NULL) { _jni->DeleteLocalRef(_this_); }
        ::g::Android::Base::JNI::CheckException();
        return (::g::Java::Object*)__result;
    }
    
}

// private Java.Object CreateSurfaceTexture(int glHandle) [instance] :201
::g::Java::Object* MediaPlayer::CreateSurfaceTexture(int glHandle)
{
    {
        JniHelper _jni;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "CreateSurfaceTexture38", "(Ljava/lang/Object;I)Ljava/lang/Object;");
        jobject _this_ = ::g::Uno::Compiler::ExportTargetInterop::Foreign::Android::JavaUnoObject::Box5(this);
        jobject __jresult = _jni->CallStaticObjectMethod(__cls, __mtd,_this_,(jint)glHandle);
        uObject* __result;
        NEW_UNO(__jresult,__result,::g::Android::Base::Wrappers::JWrapper_typeof(),::g::Android::Base::Wrappers::JWrapper*,false,false);
        if (_this_!=NULL) { _jni->DeleteLocalRef(_this_); }
        ::g::Android::Base::JNI::CheckException();
        return (::g::Java::Object*)__result;
    }
    
}

// public void Dispose() [instance] :349
void MediaPlayer::Dispose()
{
    if (!_isDisposed)
    {
        _isDisposed = true;
        ::g::Uno::Platform2::Application::remove_EnteringBackground(uDelegate::New(::TYPES[1/*Uno.Platform2.ApplicationStateTransitionHandler*/], (void*)MediaPlayer__OnEnteringBackground_fn, this));
        MediaPlayer::Dispose1(_handle, _surface, _surfaceTexture);
        uPtr(_videoTexture)->Dispose();
    }
}

// public double get_Duration() [instance] :134
double MediaPlayer::Duration()
{
    return (double)MediaPlayer::GetDuration(_handle) / 1000.0;
}

// public generated void add_Error(Uno.EventHandler<string> value) [instance] :128
void MediaPlayer::add_Error(uDelegate* value)
{
    Error1 = uCast<uDelegate*>(::g::Uno::Delegate::Combine(Error1, value), ::TYPES[9/*Uno.EventHandler<string>*/]);
}

// public generated void remove_Error(Uno.EventHandler<string> value) [instance] :128
void MediaPlayer::remove_Error(uDelegate* value)
{
    Error1 = uCast<uDelegate*>(::g::Uno::Delegate::Remove(Error1, value), ::TYPES[9/*Uno.EventHandler<string>*/]);
}

// public generated void add_ErrorOccurred(Uno.EventHandler<Uno.Exception> value) [instance] :132
void MediaPlayer::add_ErrorOccurred(uDelegate* value)
{
    ErrorOccurred1 = uCast<uDelegate*>(::g::Uno::Delegate::Combine(ErrorOccurred1, value), ::TYPES[10/*Uno.EventHandler<Uno.Exception>*/]);
}

// public generated void remove_ErrorOccurred(Uno.EventHandler<Uno.Exception> value) [instance] :132
void MediaPlayer::remove_ErrorOccurred(uDelegate* value)
{
    ErrorOccurred1 = uCast<uDelegate*>(::g::Uno::Delegate::Remove(ErrorOccurred1, value), ::TYPES[10/*Uno.EventHandler<Uno.Exception>*/]);
}

// public generated void add_FrameAvailable(Uno.EventHandler value) [instance] :131
void MediaPlayer::add_FrameAvailable(uDelegate* value)
{
    FrameAvailable1 = uCast<uDelegate*>(::g::Uno::Delegate::Combine(FrameAvailable1, value), ::TYPES[7/*Uno.EventHandler*/]);
}

// public generated void remove_FrameAvailable(Uno.EventHandler value) [instance] :131
void MediaPlayer::remove_FrameAvailable(uDelegate* value)
{
    FrameAvailable1 = uCast<uDelegate*>(::g::Uno::Delegate::Remove(FrameAvailable1, value), ::TYPES[7/*Uno.EventHandler*/]);
}

// public void LoadAsync(string url) [instance] :254
void MediaPlayer::LoadAsync(uString* url)
{
    LoadAsyncUrl(_handle, url);
}

// public void LoadAsync(Uno.IO.BundleFile file) [instance] :249
void MediaPlayer::LoadAsync1(::g::Uno::IO::BundleFile* file)
{
    LoadAsyncAsset(_handle, uPtr(file)->BundlePath());
}

// private void LoadAsyncAsset(Java.Object handle, string assetName) [instance] :278
void MediaPlayer::LoadAsyncAsset(::g::Java::Object* handle, uString* assetName)
{
    {
        JniHelper _jni;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "LoadAsyncAsset45", "(Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/String;)V");
        jobject _this_ = ::g::Uno::Compiler::ExportTargetInterop::Foreign::Android::JavaUnoObject::Box5(this);
        jstring _assetName = JniHelper::UnoToJavaString(assetName);
        _jni->CallStaticVoidMethod(__cls, __mtd,_this_,::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)handle, ::g::Android::Base::Wrappers::IJWrapper_typeof())),_assetName);
        
        if (_this_!=NULL) { _jni->DeleteLocalRef(_this_); }
        if (_assetName!=NULL) { _jni->DeleteLocalRef(_assetName); }
        ::g::Android::Base::JNI::CheckException();
        
    }
    
}

// private void LoadAsyncUrl(Java.Object handle, string url) [instance] :260
void MediaPlayer::LoadAsyncUrl(::g::Java::Object* handle, uString* url)
{
    {
        JniHelper _jni;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "LoadAsyncUrl48", "(Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/String;)V");
        jobject _this_ = ::g::Uno::Compiler::ExportTargetInterop::Foreign::Android::JavaUnoObject::Box5(this);
        jstring _url = JniHelper::UnoToJavaString(url);
        _jni->CallStaticVoidMethod(__cls, __mtd,_this_,::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)handle, ::g::Android::Base::Wrappers::IJWrapper_typeof())),_url);
        
        if (_this_!=NULL) { _jni->DeleteLocalRef(_this_); }
        if (_url!=NULL) { _jni->DeleteLocalRef(_url); }
        ::g::Android::Base::JNI::CheckException();
        
    }
    
}

// private void OnBuffer(int percent) [instance] :401
void MediaPlayer::OnBuffer(int percent)
{
    if (::g::Uno::Delegate::op_Inequality(Buffering1, NULL))
        uPtr(Buffering1)->Invoke(2, this, uCRef<int>(percent));
}

// private void OnCompletion() [instance] :380
void MediaPlayer::OnCompletion()
{
    if (::g::Uno::Delegate::op_Inequality(Completion1, NULL))
        uPtr(Completion1)->Invoke(2, this, (::g::Uno::EventArgs*)::g::Uno::EventArgs::Empty());
}

// private void OnEnteringBackground(Uno.Platform2.ApplicationState args) [instance] :244
void MediaPlayer::OnEnteringBackground(int args)
{
    Pause();
}

// private void OnError(int what, int extra) [instance] :386
void MediaPlayer::OnError(int what, int extra)
{
    uString* msg = ::g::Uno::String::op_Addition1(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition1(::STRINGS[0/*"what: "*/], uBox<int>(::TYPES[12/*int*/], what)), ::STRINGS[1/*" extra: "*/]), uBox<int>(::TYPES[12/*int*/], extra));

    if (::g::Uno::Delegate::op_Inequality(Error1, NULL))
        uPtr(Error1)->Invoke(2, this, msg);

    OnErrorOccurred(msg);
}

// private void OnErrorOccurred(string msg) [instance] :395
void MediaPlayer::OnErrorOccurred(uString* msg)
{
    if (::g::Uno::Delegate::op_Inequality(ErrorOccurred1, NULL))
        uPtr(ErrorOccurred1)->Invoke(2, this, (::g::Uno::Exception*)::g::Uno::Exception::New2(msg));
}

// private void OnFrameAvailable() [instance] :226
void MediaPlayer::OnFrameAvailable()
{
    _frameAvailable = true;
}

// private void OnPrepared() [instance] :374
void MediaPlayer::OnPrepared()
{
    if (::g::Uno::Delegate::op_Inequality(Prepared1, NULL))
        uPtr(Prepared1)->Invoke(2, this, (::g::Uno::EventArgs*)::g::Uno::EventArgs::Empty());
}

// public void Pause() [instance] :322
void MediaPlayer::Pause()
{
    MediaPlayer::Pause1(_handle);
}

// public void Play() [instance] :321
void MediaPlayer::Play()
{
    MediaPlayer::Play1(_handle);
}

// public double get_Position() [instance] :138
double MediaPlayer::Position()
{
    return (double)MediaPlayer::GetCurrentPosition(_handle) / 1000.0;
}

// public void set_Position(double value) [instance] :139
void MediaPlayer::Position(double value)
{
    MediaPlayer::SeekTo(_handle, (int)(value * 1000.0));
}

// public generated void add_Prepared(Uno.EventHandler value) [instance] :126
void MediaPlayer::add_Prepared(uDelegate* value)
{
    Prepared1 = uCast<uDelegate*>(::g::Uno::Delegate::Combine(Prepared1, value), ::TYPES[7/*Uno.EventHandler*/]);
}

// public generated void remove_Prepared(Uno.EventHandler value) [instance] :126
void MediaPlayer::remove_Prepared(uDelegate* value)
{
    Prepared1 = uCast<uDelegate*>(::g::Uno::Delegate::Remove(Prepared1, value), ::TYPES[7/*Uno.EventHandler*/]);
}

// public int2 get_Size() [instance] :135
::g::Uno::Int2 MediaPlayer::Size()
{
    return ::g::Uno::Int2__New2(MediaPlayer::GetWidth(_handle), MediaPlayer::GetHeight(_handle));
}

// public void Update() [instance] :231
void MediaPlayer::Update()
{
    if (_frameAvailable)
    {
        GLHelper::SwapBackToBackgroundSurface();
        UpdateTexture();
        _frameAvailable = false;

        if (::g::Uno::Delegate::op_Inequality(FrameAvailable1, NULL))
            uPtr(FrameAvailable1)->Invoke(2, this, (::g::Uno::EventArgs*)::g::Uno::EventArgs::Empty());
    }
}

// private void UpdateTexture() [instance] :218
void MediaPlayer::UpdateTexture()
{
    MediaPlayer::UpdateTexture1(_surfaceTexture);
}

// public Uno.Graphics.VideoTexture get_VideoTexture() [instance] :123
::g::Uno::Graphics::VideoTexture* MediaPlayer::VideoTexture()
{
    return _videoTexture;
}

// public float get_Volume() [instance] :145
float MediaPlayer::Volume()
{
    return _volume;
}

// public void set_Volume(float value) [instance] :146
void MediaPlayer::Volume(float value)
{
    _volume = ::g::Uno::Math::Clamp1(value, 0.0f, 1.0f);
    MediaPlayer::SetVolume(_handle, _volume, _volume);
}

// private static void Dispose(Java.Object mediaplayerHandle, Java.Object surfaceHandle, Java.Object surfaceTextureHandle) [static] :361
void MediaPlayer::Dispose1(::g::Java::Object* mediaplayerHandle, ::g::Java::Object* surfaceHandle, ::g::Java::Object* surfaceTextureHandle)
{
    {
        JniHelper _jni;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "Dispose140", "(Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;)V");
        _jni->CallStaticVoidMethod(__cls, __mtd,::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)mediaplayerHandle, ::g::Android::Base::Wrappers::IJWrapper_typeof())),::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)surfaceHandle, ::g::Android::Base::Wrappers::IJWrapper_typeof())),::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)surfaceTextureHandle, ::g::Android::Base::Wrappers::IJWrapper_typeof())));
        
        ::g::Android::Base::JNI::CheckException();
        
    }
    
}

// private static int GetCurrentPosition(Java.Object handle) [static] :408
int MediaPlayer::GetCurrentPosition(::g::Java::Object* handle)
{
    {
        JniHelper _jni;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "GetCurrentPosition41", "(Ljava/lang/Object;)I");
        jint __jresult = _jni->CallStaticIntMethod(__cls, __mtd,::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)handle, ::g::Android::Base::Wrappers::IJWrapper_typeof())));
        int __result = (int)__jresult;
        ::g::Android::Base::JNI::CheckException();
        return __result;
    }
    
}

// private static int GetDuration(Java.Object handle) [static] :438
int MediaPlayer::GetDuration(::g::Java::Object* handle)
{
    {
        JniHelper _jni;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "GetDuration42", "(Ljava/lang/Object;)I");
        jint __jresult = _jni->CallStaticIntMethod(__cls, __mtd,::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)handle, ::g::Android::Base::Wrappers::IJWrapper_typeof())));
        int __result = (int)__jresult;
        ::g::Android::Base::JNI::CheckException();
        return __result;
    }
    
}

// private static int GetHeight(Java.Object handle) [static] :426
int MediaPlayer::GetHeight(::g::Java::Object* handle)
{
    {
        JniHelper _jni;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "GetHeight43", "(Ljava/lang/Object;)I");
        jint __jresult = _jni->CallStaticIntMethod(__cls, __mtd,::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)handle, ::g::Android::Base::Wrappers::IJWrapper_typeof())));
        int __result = (int)__jresult;
        ::g::Android::Base::JNI::CheckException();
        return __result;
    }
    
}

// private static int GetWidth(Java.Object handle) [static] :420
int MediaPlayer::GetWidth(::g::Java::Object* handle)
{
    {
        JniHelper _jni;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "GetWidth44", "(Ljava/lang/Object;)I");
        jint __jresult = _jni->CallStaticIntMethod(__cls, __mtd,::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)handle, ::g::Android::Base::Wrappers::IJWrapper_typeof())));
        int __result = (int)__jresult;
        ::g::Android::Base::JNI::CheckException();
        return __result;
    }
    
}

// public MediaPlayer New() [static] :159
MediaPlayer* MediaPlayer::New1()
{
    MediaPlayer* obj1 = (MediaPlayer*)uNew(MediaPlayer_typeof());
    obj1->ctor_();
    return obj1;
}

// private static void Pause(Java.Object handle) [static] :337
void MediaPlayer::Pause1(::g::Java::Object* handle)
{
    {
        JniHelper _jni;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "Pause150", "(Ljava/lang/Object;)V");
        _jni->CallStaticVoidMethod(__cls, __mtd,::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)handle, ::g::Android::Base::Wrappers::IJWrapper_typeof())));
        
        ::g::Android::Base::JNI::CheckException();
        
    }
    
}

// private static void Play(Java.Object handle) [static] :325
void MediaPlayer::Play1(::g::Java::Object* handle)
{
    {
        JniHelper _jni;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "Play151", "(Ljava/lang/Object;)V");
        _jni->CallStaticVoidMethod(__cls, __mtd,::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)handle, ::g::Android::Base::Wrappers::IJWrapper_typeof())));
        
        ::g::Android::Base::JNI::CheckException();
        
    }
    
}

// private static void SeekTo(Java.Object handle, int position) [static] :414
void MediaPlayer::SeekTo(::g::Java::Object* handle, int position)
{
    {
        JniHelper _jni;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "SeekTo52", "(Ljava/lang/Object;I)V");
        _jni->CallStaticVoidMethod(__cls, __mtd,::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)handle, ::g::Android::Base::Wrappers::IJWrapper_typeof())),(jint)position);
        
        ::g::Android::Base::JNI::CheckException();
        
    }
    
}

// private static void SetVolume(Java.Object handle, float left, float right) [static] :432
void MediaPlayer::SetVolume(::g::Java::Object* handle, float left, float right)
{
    {
        JniHelper _jni;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "SetVolume53", "(Ljava/lang/Object;FF)V");
        _jni->CallStaticVoidMethod(__cls, __mtd,::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)handle, ::g::Android::Base::Wrappers::IJWrapper_typeof())),(jfloat)left,(jfloat)right);
        
        ::g::Android::Base::JNI::CheckException();
        
    }
    
}

// private static void UpdateTexture(Java.Object surfaceTextureHandle) [static] :220
void MediaPlayer::UpdateTexture1(::g::Java::Object* surfaceTextureHandle)
{
    {
        JniHelper _jni;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "UpdateTexture154", "(Ljava/lang/Object;)V");
        _jni->CallStaticVoidMethod(__cls, __mtd,::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)surfaceTextureHandle, ::g::Android::Base::Wrappers::IJWrapper_typeof())));
        
        ::g::Android::Base::JNI::CheckException();
        
    }
    
}
// }

// /usr/local/share/uno/Packages/Fuse.Video/0.27.10/Android/$.uno
// --------------------------------------------------------------

// internal sealed extern class VideoLoader :16
// {
uType* VideoLoader_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.ObjectSize = sizeof(VideoLoader);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Video.Graphics.Android.VideoLoader", options);
    ::TYPES[13] = ::g::Uno::Threading::Future1_typeof()->MakeType(::g::Fuse::Video::IVideoPlayer_typeof());
    ::TYPES[14] = ::g::Uno::UX::BundleFileSource_typeof();
    return type;
}

// public static Uno.Threading.Future<Fuse.Video.IVideoPlayer> Load(string url) :98
void VideoLoader__Load_fn(uString* url, ::g::Uno::Threading::Future1** __retval)
{
    *__retval = VideoLoader::Load(url);
}

// private static Uno.Threading.Future<Fuse.Video.IVideoPlayer> Load(Uno.IO.BundleFile file) :111
void VideoLoader__Load1_fn(::g::Uno::IO::BundleFile* file, ::g::Uno::Threading::Future1** __retval)
{
    *__retval = VideoLoader::Load1(file);
}

// public static Uno.Threading.Future<Fuse.Video.IVideoPlayer> Load(Uno.UX.FileSource fileSource) :103
void VideoLoader__Load2_fn(::g::Uno::UX::FileSource* fileSource, ::g::Uno::Threading::Future1** __retval)
{
    *__retval = VideoLoader::Load2(fileSource);
}

// public static Uno.Threading.Future<Fuse.Video.IVideoPlayer> Load(string url) [static] :98
::g::Uno::Threading::Future1* VideoLoader::Load(uString* url)
{
    return VideoLoader__VideoPromise::New6(url);
}

// private static Uno.Threading.Future<Fuse.Video.IVideoPlayer> Load(Uno.IO.BundleFile file) [static] :111
::g::Uno::Threading::Future1* VideoLoader::Load1(::g::Uno::IO::BundleFile* file)
{
    return VideoLoader__VideoPromise::New7(file);
}

// public static Uno.Threading.Future<Fuse.Video.IVideoPlayer> Load(Uno.UX.FileSource fileSource) [static] :103
::g::Uno::Threading::Future1* VideoLoader::Load2(::g::Uno::UX::FileSource* fileSource)
{
    if (uIs(fileSource, ::TYPES[14/*Uno.UX.BundleFileSource*/]))
        return VideoLoader::Load1(uPtr(uCast< ::g::Uno::UX::BundleFileSource*>(fileSource, ::TYPES[14/*Uno.UX.BundleFileSource*/]))->BundleFile);
    else
        return VideoLoader::Load(::g::Fuse::Video::VideoDiskCache::GetFilePath(fileSource));
}
// }

// /usr/local/share/uno/Packages/Fuse.Video/0.27.10/Android/$.uno
// --------------------------------------------------------------

// private sealed class VideoLoader.VideoPromise :18
// {
::g::Uno::Threading::Future_type* VideoLoader__VideoPromise_typeof()
{
    static uSStrong< ::g::Uno::Threading::Future_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 12;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(VideoLoader__VideoPromise);
    options.TypeSize = sizeof(::g::Uno::Threading::Future_type);
    type = (::g::Uno::Threading::Future_type*)uClassType::New("Fuse.Video.Graphics.Android.VideoLoader.VideoPromise", options);
    type->SetBase(::g::Uno::Threading::Promise_typeof()->MakeType(::g::Fuse::Video::IVideoPlayer_typeof()));
    type->fp_Cancel = (void(*)(::g::Uno::Threading::Future*, bool*))VideoLoader__VideoPromise__Cancel_fn;
    type->fp_Dispose = (void(*)(::g::Uno::Threading::Future*))VideoLoader__VideoPromise__Dispose_fn;
    type->interface0.fp_Dispose = (void(*)(uObject*))VideoLoader__VideoPromise__Dispose_fn;
    ::TYPES[15] = ::g::Uno::Action_typeof();
    ::TYPES[16] = ::g::Fuse::Video::Graphics::Android::MediaPlayer_typeof();
    ::TYPES[7] = ::g::Uno::EventHandler_typeof();
    ::TYPES[9] = ::g::Uno::EventHandler1_typeof()->MakeType(::g::Uno::String_typeof());
    ::TYPES[2] = ::g::Uno::Bool_typeof();
    ::TYPES[17] = ::g::Fuse::Video::IVideoPlayer_typeof();
    type->SetInterfaces(
        ::g::Uno::IDisposable_typeof(), offsetof(::g::Uno::Threading::Future_type, interface0));
    type->SetFields(9,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Video::Graphics::Android::VideoLoader__VideoPromise, _isCancelled), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Video::Graphics::Android::VideoLoader__VideoPromise, _readyToDispose), 0,
        ::g::Fuse::Video::Graphics::Android::MediaPlayer_typeof(), offsetof(::g::Fuse::Video::Graphics::Android::VideoLoader__VideoPromise, _videoPlayer), 0);
    return type;
}

// private VideoPromise() :22
void VideoLoader__VideoPromise__ctor_7_fn(VideoLoader__VideoPromise* __this)
{
    __this->ctor_7();
}

// public VideoPromise(string url) :33
void VideoLoader__VideoPromise__ctor_8_fn(VideoLoader__VideoPromise* __this, uString* url)
{
    __this->ctor_8(url);
}

// public VideoPromise(Uno.IO.BundleFile file) :28
void VideoLoader__VideoPromise__ctor_9_fn(VideoLoader__VideoPromise* __this, ::g::Uno::IO::BundleFile* file)
{
    __this->ctor_9(file);
}

// public override sealed void Cancel([bool shutdownGracefully]) :68
void VideoLoader__VideoPromise__Cancel_fn(VideoLoader__VideoPromise* __this, bool* shutdownGracefully)
{
    __this->ScheduleDispose();
}

// public override sealed void Dispose() :91
void VideoLoader__VideoPromise__Dispose_fn(VideoLoader__VideoPromise* __this)
{
    ::g::Uno::Threading::Future1__Dispose_fn(__this);
    __this->ScheduleDispose();
}

// private void DoDispose() :82
void VideoLoader__VideoPromise__DoDispose_fn(VideoLoader__VideoPromise* __this)
{
    __this->DoDispose();
}

// private void HookEvents() :38
void VideoLoader__VideoPromise__HookEvents_fn(VideoLoader__VideoPromise* __this)
{
    __this->HookEvents();
}

// public VideoPromise New(string url) :33
void VideoLoader__VideoPromise__New6_fn(uString* url, VideoLoader__VideoPromise** __retval)
{
    *__retval = VideoLoader__VideoPromise::New6(url);
}

// public VideoPromise New(Uno.IO.BundleFile file) :28
void VideoLoader__VideoPromise__New7_fn(::g::Uno::IO::BundleFile* file, VideoLoader__VideoPromise** __retval)
{
    *__retval = VideoLoader__VideoPromise::New7(file);
}

// private void OnError(object sender, string msg) :58
void VideoLoader__VideoPromise__OnError_fn(VideoLoader__VideoPromise* __this, uObject* sender, uString* msg)
{
    __this->OnError(sender, msg);
}

// private void OnPrepared(object sender, Uno.EventArgs args) :50
void VideoLoader__VideoPromise__OnPrepared_fn(VideoLoader__VideoPromise* __this, uObject* sender, ::g::Uno::EventArgs* args)
{
    __this->OnPrepared(sender, args);
}

// private void ScheduleDispose() :73
void VideoLoader__VideoPromise__ScheduleDispose_fn(VideoLoader__VideoPromise* __this)
{
    __this->ScheduleDispose();
}

// private void UnhookEvents() :44
void VideoLoader__VideoPromise__UnhookEvents_fn(VideoLoader__VideoPromise* __this)
{
    __this->UnhookEvents();
}

// private VideoPromise() [instance] :22
void VideoLoader__VideoPromise::ctor_7()
{
    ctor_3();
    _videoPlayer = ::g::Fuse::Video::Graphics::Android::MediaPlayer::New1();
    HookEvents();
}

// public VideoPromise(string url) [instance] :33
void VideoLoader__VideoPromise::ctor_8(uString* url)
{
    ctor_7();
    uPtr(_videoPlayer)->LoadAsync(url);
}

// public VideoPromise(Uno.IO.BundleFile file) [instance] :28
void VideoLoader__VideoPromise::ctor_9(::g::Uno::IO::BundleFile* file)
{
    ctor_7();
    uPtr(_videoPlayer)->LoadAsync1(file);
}

// private void DoDispose() [instance] :82
void VideoLoader__VideoPromise::DoDispose()
{
    if (_readyToDispose)
    {
        uPtr(_videoPlayer)->Dispose();
        ::g::Fuse::UpdateManager::RemoveAction(uDelegate::New(::TYPES[15/*Uno.Action*/], (void*)VideoLoader__VideoPromise__DoDispose_fn, this), 0);
    }
}

// private void HookEvents() [instance] :38
void VideoLoader__VideoPromise::HookEvents()
{
    uPtr(_videoPlayer)->add_Prepared(uDelegate::New(::TYPES[7/*Uno.EventHandler*/], (void*)VideoLoader__VideoPromise__OnPrepared_fn, this));
    uPtr(_videoPlayer)->add_Error(uDelegate::New(::TYPES[9/*Uno.EventHandler<string>*/], (void*)VideoLoader__VideoPromise__OnError_fn, this));
}

// private void OnError(object sender, string msg) [instance] :58
void VideoLoader__VideoPromise::OnError(uObject* sender, uString* msg)
{
    UnhookEvents();
    _readyToDispose = true;

    if (!_isCancelled)
        Reject(::g::Uno::Exception::New2(msg));
}

// private void OnPrepared(object sender, Uno.EventArgs args) [instance] :50
void VideoLoader__VideoPromise::OnPrepared(uObject* sender, ::g::Uno::EventArgs* args)
{
    UnhookEvents();
    _readyToDispose = true;

    if (!_isCancelled)
        ::g::Uno::Threading::Promise__Resolve_fn(this, (uObject*)_videoPlayer);
}

// private void ScheduleDispose() [instance] :73
void VideoLoader__VideoPromise::ScheduleDispose()
{
    if (!_isCancelled)
    {
        _isCancelled = true;
        ::g::Fuse::UpdateManager::AddAction(uDelegate::New(::TYPES[15/*Uno.Action*/], (void*)VideoLoader__VideoPromise__DoDispose_fn, this), 0);
    }
}

// private void UnhookEvents() [instance] :44
void VideoLoader__VideoPromise::UnhookEvents()
{
    uPtr(_videoPlayer)->remove_Prepared(uDelegate::New(::TYPES[7/*Uno.EventHandler*/], (void*)VideoLoader__VideoPromise__OnPrepared_fn, this));
    uPtr(_videoPlayer)->remove_Error(uDelegate::New(::TYPES[9/*Uno.EventHandler<string>*/], (void*)VideoLoader__VideoPromise__OnError_fn, this));
}

// public VideoPromise New(string url) [static] :33
VideoLoader__VideoPromise* VideoLoader__VideoPromise::New6(uString* url)
{
    VideoLoader__VideoPromise* obj3 = (VideoLoader__VideoPromise*)uNew(VideoLoader__VideoPromise_typeof());
    obj3->ctor_8(url);
    return obj3;
}

// public VideoPromise New(Uno.IO.BundleFile file) [static] :28
VideoLoader__VideoPromise* VideoLoader__VideoPromise::New7(::g::Uno::IO::BundleFile* file)
{
    VideoLoader__VideoPromise* obj2 = (VideoLoader__VideoPromise*)uNew(VideoLoader__VideoPromise_typeof());
    obj2->ctor_9(file);
    return obj2;
}
// }

}}}}} // ::g::Fuse::Video::Graphics::Android
