// This file was generated based on '(multiple files)'.
// WARNING: Changes might be lost if you edit this file directly.

#include <Android.Base.Types.String.h>
#include <Android.Base.Wrappers.IJWrapper.h>
#include <Android.com.fuse.Native.Camera.h>
#include <Android.com.fuse.Native.CameraTask.h>
#include <Fuse.Camera.AndroidCameraImpl.DispatchTakePicture.h>
#include <Fuse.Camera.AndroidCameraImpl.h>
#include <Fuse.Camera.AndroidCameraImpl.TakePictureTask.h>
#include <Fuse.Camera.Camera.h>
#include <Fuse.Camera.PictureResult.h>
#include <Fuse.Camera.TakePictureOptions.h>
#include <Uno.Bool.h>
#include <Uno.Exception.h>
#include <Uno.Int.h>
#include <Uno.String.h>
#include <Uno.Threading.Future-1.h>
#include <Uno.Threading.Promise-1.h>
static uType* TYPES[7];

namespace g{
namespace Fuse{
namespace Camera{

// /usr/local/share/uno/Packages/Fuse.Camera/0.27.10/$.uno#2
// ---------------------------------------------------------

// internal static extern class AndroidCameraImpl :373
// {
uClassType* AndroidCameraImpl_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Fuse.Camera.AndroidCameraImpl", options);
    type->SetFields(0,
        ::g::Android::com::fuse::Native::CameraTask_typeof(), (uintptr_t)&::g::Fuse::Camera::AndroidCameraImpl::_pendingTask_, uFieldFlagsStatic);
    return type;
}

// public static void TakePicture(Uno.Threading.Promise<Fuse.Camera.PictureResult> futurePath, Fuse.Camera.TakePictureOptions options) :376
void AndroidCameraImpl__TakePicture_fn(::g::Uno::Threading::Promise* futurePath, ::g::Fuse::Camera::TakePictureOptions* options)
{
    AndroidCameraImpl::TakePicture(futurePath, options);
}

uSStrong< ::g::Android::com::fuse::Native::CameraTask*> AndroidCameraImpl::_pendingTask_;

// public static void TakePicture(Uno.Threading.Promise<Fuse.Camera.PictureResult> futurePath, Fuse.Camera.TakePictureOptions options) [static] :376
void AndroidCameraImpl::TakePicture(::g::Uno::Threading::Promise* futurePath, ::g::Fuse::Camera::TakePictureOptions* options)
{
    AndroidCameraImpl__DispatchTakePicture* d = AndroidCameraImpl__DispatchTakePicture::New1(futurePath, options);
    d->Fire();
}
// }

// /usr/local/share/uno/Packages/Fuse.Camera/0.27.10/$.uno
// -------------------------------------------------------

// public static class Camera :106
// {
uClassType* Camera_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Fuse.Camera.Camera", options);
    ::TYPES[0] = ::g::Uno::Threading::Promise_typeof()->MakeType(::g::Fuse::Camera::PictureResult_typeof());
    ::TYPES[1] = ::g::Uno::Threading::Future1_typeof()->MakeType(::g::Fuse::Camera::PictureResult_typeof());
    return type;
}

// public static Uno.Threading.Future<Fuse.Camera.PictureResult> TakePicture(Fuse.Camera.TakePictureOptions options) :114
void Camera__TakePicture1_fn(::g::Fuse::Camera::TakePictureOptions* options, ::g::Uno::Threading::Future1** __retval)
{
    *__retval = Camera::TakePicture1(options);
}

// public static Uno.Threading.Future<Fuse.Camera.PictureResult> TakePicture(Fuse.Camera.TakePictureOptions options) [static] :114
::g::Uno::Threading::Future1* Camera::TakePicture1(::g::Fuse::Camera::TakePictureOptions* options)
{
    ::g::Uno::Threading::Promise* futurePath = (::g::Uno::Threading::Promise*)::g::Uno::Threading::Promise::New1(::TYPES[0/*Uno.Threading.Promise<Fuse.Camera.PictureResult>*/]);
    ::g::Fuse::Camera::AndroidCameraImpl::TakePicture(futurePath, options);
    return futurePath;
}
// }

// /usr/local/share/uno/Packages/Fuse.Camera/0.27.10/$.uno#2
// ---------------------------------------------------------

// private sealed class AndroidCameraImpl.DispatchTakePicture :429
// {
uType* AndroidCameraImpl__DispatchTakePicture_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.ObjectSize = sizeof(AndroidCameraImpl__DispatchTakePicture);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Camera.AndroidCameraImpl.DispatchTakePicture", options);
    ::TYPES[2] = ::g::Fuse::Camera::AndroidCameraImpl_typeof();
    ::TYPES[3] = ::g::Android::com::fuse::Native::CameraTask_typeof();
    ::TYPES[4] = ::g::Android::Base::Wrappers::IJWrapper_typeof();
    type->SetFields(0,
        ::g::Uno::Threading::Promise_typeof()->MakeType(::g::Fuse::Camera::PictureResult_typeof()), offsetof(::g::Fuse::Camera::AndroidCameraImpl__DispatchTakePicture, _futurePath), 0,
        ::g::Fuse::Camera::TakePictureOptions_typeof(), offsetof(::g::Fuse::Camera::AndroidCameraImpl__DispatchTakePicture, _options), 0);
    return type;
}

// internal DispatchTakePicture(Uno.Threading.Promise<Fuse.Camera.PictureResult> futurePath, Fuse.Camera.TakePictureOptions options) :433
void AndroidCameraImpl__DispatchTakePicture__ctor__fn(AndroidCameraImpl__DispatchTakePicture* __this, ::g::Uno::Threading::Promise* futurePath, ::g::Fuse::Camera::TakePictureOptions* options)
{
    __this->ctor_(futurePath, options);
}

// internal void Fire() :439
void AndroidCameraImpl__DispatchTakePicture__Fire_fn(AndroidCameraImpl__DispatchTakePicture* __this)
{
    __this->Fire();
}

// internal DispatchTakePicture New(Uno.Threading.Promise<Fuse.Camera.PictureResult> futurePath, Fuse.Camera.TakePictureOptions options) :433
void AndroidCameraImpl__DispatchTakePicture__New1_fn(::g::Uno::Threading::Promise* futurePath, ::g::Fuse::Camera::TakePictureOptions* options, AndroidCameraImpl__DispatchTakePicture** __retval)
{
    *__retval = AndroidCameraImpl__DispatchTakePicture::New1(futurePath, options);
}

// internal DispatchTakePicture(Uno.Threading.Promise<Fuse.Camera.PictureResult> futurePath, Fuse.Camera.TakePictureOptions options) [instance] :433
void AndroidCameraImpl__DispatchTakePicture::ctor_(::g::Uno::Threading::Promise* futurePath, ::g::Fuse::Camera::TakePictureOptions* options)
{
    _futurePath = futurePath;
    _options = options;
}

// internal void Fire() [instance] :439
void AndroidCameraImpl__DispatchTakePicture::Fire()
{
    ::g::Fuse::Camera::AndroidCameraImpl::_pendingTask() = ::g::Fuse::Camera::AndroidCameraImpl__TakePictureTask::New3(_futurePath, _options);
    ::g::Android::com::fuse::Native::Camera::TakePicture((uObject*)::g::Fuse::Camera::AndroidCameraImpl::_pendingTask());
}

// internal DispatchTakePicture New(Uno.Threading.Promise<Fuse.Camera.PictureResult> futurePath, Fuse.Camera.TakePictureOptions options) [static] :433
AndroidCameraImpl__DispatchTakePicture* AndroidCameraImpl__DispatchTakePicture::New1(::g::Uno::Threading::Promise* futurePath, ::g::Fuse::Camera::TakePictureOptions* options)
{
    AndroidCameraImpl__DispatchTakePicture* obj1 = (AndroidCameraImpl__DispatchTakePicture*)uNew(AndroidCameraImpl__DispatchTakePicture_typeof());
    obj1->ctor_(futurePath, options);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Camera/0.27.10/$.uno
// -------------------------------------------------------

// public sealed class PictureResult :95
// {
uType* PictureResult_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.ObjectSize = sizeof(PictureResult);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Camera.PictureResult", options);
    type->SetFields(0,
        ::g::Uno::String_typeof(), offsetof(::g::Fuse::Camera::PictureResult, _Path), 0,
        ::g::Uno::Int_typeof(), offsetof(::g::Fuse::Camera::PictureResult, _Rotation), 0);
    return type;
}

// public PictureResult(string path, int rotation) :99
void PictureResult__ctor__fn(PictureResult* __this, uString* path, int* rotation)
{
    __this->ctor_(path, *rotation);
}

// public PictureResult New(string path, int rotation) :99
void PictureResult__New1_fn(uString* path, int* rotation, PictureResult** __retval)
{
    *__retval = PictureResult::New1(path, *rotation);
}

// public generated string get_Path() :97
void PictureResult__get_Path_fn(PictureResult* __this, uString** __retval)
{
    *__retval = __this->Path();
}

// private generated void set_Path(string value) :97
void PictureResult__set_Path_fn(PictureResult* __this, uString* value)
{
    __this->Path(value);
}

// public generated int get_Rotation() :98
void PictureResult__get_Rotation_fn(PictureResult* __this, int* __retval)
{
    *__retval = __this->Rotation();
}

// private generated void set_Rotation(int value) :98
void PictureResult__set_Rotation_fn(PictureResult* __this, int* value)
{
    __this->Rotation(*value);
}

// public PictureResult(string path, int rotation) [instance] :99
void PictureResult::ctor_(uString* path, int rotation)
{
    Path(path);
    Rotation(rotation);
}

// public generated string get_Path() [instance] :97
uString* PictureResult::Path()
{
    return _Path;
}

// private generated void set_Path(string value) [instance] :97
void PictureResult::Path(uString* value)
{
    _Path = value;
}

// public generated int get_Rotation() [instance] :98
int PictureResult::Rotation()
{
    return _Rotation;
}

// private generated void set_Rotation(int value) [instance] :98
void PictureResult::Rotation(int value)
{
    _Rotation = value;
}

// public PictureResult New(string path, int rotation) [static] :99
PictureResult* PictureResult::New1(uString* path, int rotation)
{
    PictureResult* obj1 = (PictureResult*)uNew(PictureResult_typeof());
    obj1->ctor_(path, rotation);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Camera/0.27.10/$.uno
// -------------------------------------------------------

// public sealed class TakePictureOptions :14
// {
uType* TakePictureOptions_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 5;
    options.ObjectSize = sizeof(TakePictureOptions);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Camera.TakePictureOptions", options);
    type->fp_ctor_ = (void*)TakePictureOptions__New1_fn;
    ::TYPES[5] = ::g::Uno::Bool_typeof();
    type->SetFields(0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Camera::TakePictureOptions, _correctOrientation), 0,
        ::g::Uno::Int_typeof(), offsetof(::g::Fuse::Camera::TakePictureOptions, _targetHeight), 0,
        ::g::Uno::Int_typeof(), offsetof(::g::Fuse::Camera::TakePictureOptions, _targetWidth), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Camera::TakePictureOptions, _TargetHeightSet), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Camera::TakePictureOptions, _TargetWidthSet), 0);
    return type;
}

// public generated TakePictureOptions() :14
void TakePictureOptions__ctor__fn(TakePictureOptions* __this)
{
    __this->ctor_();
}

// public bool get_CorrectOrientation() :45
void TakePictureOptions__get_CorrectOrientation_fn(TakePictureOptions* __this, bool* __retval)
{
    *__retval = __this->CorrectOrientation();
}

// public void set_CorrectOrientation(bool value) :46
void TakePictureOptions__set_CorrectOrientation_fn(TakePictureOptions* __this, bool* value)
{
    __this->CorrectOrientation(*value);
}

// public generated TakePictureOptions New() :14
void TakePictureOptions__New1_fn(TakePictureOptions** __retval)
{
    *__retval = TakePictureOptions::New1();
}

// public int get_TargetHeight() :34
void TakePictureOptions__get_TargetHeight_fn(TakePictureOptions* __this, int* __retval)
{
    *__retval = __this->TargetHeight();
}

// public void set_TargetHeight(int value) :35
void TakePictureOptions__set_TargetHeight_fn(TakePictureOptions* __this, int* value)
{
    __this->TargetHeight(*value);
}

// internal generated bool get_TargetHeightSet() :30
void TakePictureOptions__get_TargetHeightSet_fn(TakePictureOptions* __this, bool* __retval)
{
    *__retval = __this->TargetHeightSet();
}

// internal generated void set_TargetHeightSet(bool value) :30
void TakePictureOptions__set_TargetHeightSet_fn(TakePictureOptions* __this, bool* value)
{
    __this->TargetHeightSet(*value);
}

// public int get_TargetWidth() :22
void TakePictureOptions__get_TargetWidth_fn(TakePictureOptions* __this, int* __retval)
{
    *__retval = __this->TargetWidth();
}

// public void set_TargetWidth(int value) :23
void TakePictureOptions__set_TargetWidth_fn(TakePictureOptions* __this, int* value)
{
    __this->TargetWidth(*value);
}

// internal generated bool get_TargetWidthSet() :17
void TakePictureOptions__get_TargetWidthSet_fn(TakePictureOptions* __this, bool* __retval)
{
    *__retval = __this->TargetWidthSet();
}

// internal generated void set_TargetWidthSet(bool value) :17
void TakePictureOptions__set_TargetWidthSet_fn(TakePictureOptions* __this, bool* value)
{
    __this->TargetWidthSet(*value);
}

// public generated TakePictureOptions() [instance] :14
void TakePictureOptions::ctor_()
{
    _targetWidth = -1;
    _targetHeight = -1;
    _correctOrientation = true;
}

// public bool get_CorrectOrientation() [instance] :45
bool TakePictureOptions::CorrectOrientation()
{
    return _correctOrientation;
}

// public void set_CorrectOrientation(bool value) [instance] :46
void TakePictureOptions::CorrectOrientation(bool value)
{
    _correctOrientation = value;
}

// public int get_TargetHeight() [instance] :34
int TakePictureOptions::TargetHeight()
{
    return _targetHeight;
}

// public void set_TargetHeight(int value) [instance] :35
void TakePictureOptions::TargetHeight(int value)
{
    if (!TargetHeightSet())
        TargetHeightSet(true);

    _targetHeight = value;
}

// internal generated bool get_TargetHeightSet() [instance] :30
bool TakePictureOptions::TargetHeightSet()
{
    return _TargetHeightSet;
}

// internal generated void set_TargetHeightSet(bool value) [instance] :30
void TakePictureOptions::TargetHeightSet(bool value)
{
    _TargetHeightSet = value;
}

// public int get_TargetWidth() [instance] :22
int TakePictureOptions::TargetWidth()
{
    return _targetWidth;
}

// public void set_TargetWidth(int value) [instance] :23
void TakePictureOptions::TargetWidth(int value)
{
    if (!TargetWidthSet())
        TargetWidthSet(true);

    _targetWidth = value;
}

// internal generated bool get_TargetWidthSet() [instance] :17
bool TakePictureOptions::TargetWidthSet()
{
    return _TargetWidthSet;
}

// internal generated void set_TargetWidthSet(bool value) [instance] :17
void TakePictureOptions::TargetWidthSet(bool value)
{
    _TargetWidthSet = value;
}

// public generated TakePictureOptions New() [static] :14
TakePictureOptions* TakePictureOptions::New1()
{
    TakePictureOptions* obj1 = (TakePictureOptions*)uNew(TakePictureOptions_typeof());
    obj1->ctor_();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Camera/0.27.10/$.uno#2
// ---------------------------------------------------------

// private sealed class AndroidCameraImpl.TakePictureTask :388
// {
::g::Android::com::fuse::Native::CameraTask_type* AndroidCameraImpl__TakePictureTask_typeof()
{
    static uSStrong< ::g::Android::com::fuse::Native::CameraTask_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 9;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(AndroidCameraImpl__TakePictureTask);
    options.TypeSize = sizeof(::g::Android::com::fuse::Native::CameraTask_type);
    type = (::g::Android::com::fuse::Native::CameraTask_type*)uClassType::New("Fuse.Camera.AndroidCameraImpl.TakePictureTask", options);
    type->SetBase(::g::Android::com::fuse::Native::CameraTask_typeof());
    type->fp_OnFailed = (void(*)(::g::Android::com::fuse::Native::CameraTask*, uObject*))AndroidCameraImpl__TakePictureTask__OnFailed_fn;
    type->fp_OnSuccess = (void(*)(::g::Android::com::fuse::Native::CameraTask*, uObject*))AndroidCameraImpl__TakePictureTask__OnSuccess_fn;
    type->interface1.fp_Dispose = (void(*)(uObject*))::g::Android::Base::Wrappers::JWrapper__UnoIDisposableDispose_fn;
    type->interface0.fp__GetJavaObject = (void(*)(uObject*, jobject*))::g::Android::Base::Wrappers::JWrapper___GetJavaObject_fn;
    type->interface0.fp__IsSubclassed = (void(*)(uObject*, bool*))::g::Android::Base::Wrappers::JWrapper___IsSubclassed_fn;
    ::TYPES[6] = ::g::Fuse::Camera::TakePictureOptions_typeof();
    ::TYPES[2] = ::g::Fuse::Camera::AndroidCameraImpl_typeof();
    type->SetInterfaces(
        ::g::Android::Base::Wrappers::IJWrapper_typeof(), offsetof(::g::Android::com::fuse::Native::CameraTask_type, interface0),
        ::g::Uno::IDisposable_typeof(), offsetof(::g::Android::com::fuse::Native::CameraTask_type, interface1));
    type->SetFields(5,
        ::g::Uno::Threading::Promise_typeof()->MakeType(::g::Fuse::Camera::PictureResult_typeof()), offsetof(::g::Fuse::Camera::AndroidCameraImpl__TakePictureTask, _futurePath), 0,
        ::g::Fuse::Camera::TakePictureOptions_typeof(), offsetof(::g::Fuse::Camera::AndroidCameraImpl__TakePictureTask, _options), 0,
        ::g::Uno::String_typeof(), offsetof(::g::Fuse::Camera::AndroidCameraImpl__TakePictureTask, _payload), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Camera::AndroidCameraImpl__TakePictureTask, _success), 0);
    return type;
}

// public TakePictureTask(Uno.Threading.Promise<Fuse.Camera.PictureResult> futurePath, Fuse.Camera.TakePictureOptions options) :393
void AndroidCameraImpl__TakePictureTask__ctor_5_fn(AndroidCameraImpl__TakePictureTask* __this, ::g::Uno::Threading::Promise* futurePath, ::g::Fuse::Camera::TakePictureOptions* options)
{
    __this->ctor_5(futurePath, options);
}

// private void fireResultCode() :418
void AndroidCameraImpl__TakePictureTask__fireResultCode_fn(AndroidCameraImpl__TakePictureTask* __this)
{
    __this->fireResultCode();
}

// public TakePictureTask New(Uno.Threading.Promise<Fuse.Camera.PictureResult> futurePath, Fuse.Camera.TakePictureOptions options) :393
void AndroidCameraImpl__TakePictureTask__New3_fn(::g::Uno::Threading::Promise* futurePath, ::g::Fuse::Camera::TakePictureOptions* options, AndroidCameraImpl__TakePictureTask** __retval)
{
    *__retval = AndroidCameraImpl__TakePictureTask::New3(futurePath, options);
}

// public override sealed void OnFailed(Android.Base.Wrappers.IJWrapper message) :411
void AndroidCameraImpl__TakePictureTask__OnFailed_fn(AndroidCameraImpl__TakePictureTask* __this, uObject* message)
{
    __this->_payload = ::g::Android::Base::Types::String::JavaToUno2(message);
    __this->_success = false;
    __this->fireResultCode();
}

// public override sealed void OnSuccess(Android.Base.Wrappers.IJWrapper path) :404
void AndroidCameraImpl__TakePictureTask__OnSuccess_fn(AndroidCameraImpl__TakePictureTask* __this, uObject* path)
{
    __this->_payload = ::g::Android::Base::Types::String::JavaToUno2(path);
    __this->_success = true;
    __this->fireResultCode();
}

// public TakePictureTask(Uno.Threading.Promise<Fuse.Camera.PictureResult> futurePath, Fuse.Camera.TakePictureOptions options) [instance] :393
void AndroidCameraImpl__TakePictureTask::ctor_5(::g::Uno::Threading::Promise* futurePath, ::g::Fuse::Camera::TakePictureOptions* options)
{
    ctor_4(uPtr(options)->TargetWidth(), uPtr(options)->TargetHeight(), uPtr(options)->CorrectOrientation());
    _futurePath = futurePath;
    _options = options;
}

// private void fireResultCode() [instance] :418
void AndroidCameraImpl__TakePictureTask::fireResultCode()
{
    ::g::Fuse::Camera::AndroidCameraImpl::_pendingTask() = NULL;

    if (_success)
        ::g::Uno::Threading::Promise__Resolve_fn(uPtr(_futurePath), ::g::Fuse::Camera::PictureResult::New1(_payload, 0));
    else
        uPtr(_futurePath)->Reject(::g::Uno::Exception::New2(_payload));
}

// public TakePictureTask New(Uno.Threading.Promise<Fuse.Camera.PictureResult> futurePath, Fuse.Camera.TakePictureOptions options) [static] :393
AndroidCameraImpl__TakePictureTask* AndroidCameraImpl__TakePictureTask::New3(::g::Uno::Threading::Promise* futurePath, ::g::Fuse::Camera::TakePictureOptions* options)
{
    AndroidCameraImpl__TakePictureTask* obj1 = (AndroidCameraImpl__TakePictureTask*)uNew(AndroidCameraImpl__TakePictureTask_typeof());
    obj1->ctor_5(futurePath, options);
    return obj1;
}
// }

}}} // ::g::Fuse::Camera
