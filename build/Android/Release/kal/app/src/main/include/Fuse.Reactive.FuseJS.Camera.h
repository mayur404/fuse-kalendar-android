// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Reactive/0.27.10/FuseJS/$.uno#3'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.h>
namespace g{namespace Fuse{namespace Camera{struct PictureResult;}}}
namespace g{namespace Fuse{namespace Reactive{namespace FuseJS{struct Camera;}}}}
namespace g{namespace Fuse{namespace Scripting{struct Context;}}}
namespace g{namespace Fuse{namespace Scripting{struct NativeModule;}}}
namespace g{namespace Fuse{namespace Scripting{struct Object;}}}
namespace g{namespace Uno{namespace Threading{struct Future1;}}}

namespace g{
namespace Fuse{
namespace Reactive{
namespace FuseJS{

// internal static class Camera :254
// {
uClassType* Camera_typeof();
void Camera__Converter_fn(::g::Fuse::Scripting::Context* context, ::g::Fuse::Camera::PictureResult* result, ::g::Fuse::Scripting::Object** __retval);
void Camera__CreateModule_fn(::g::Fuse::Scripting::NativeModule** __retval);
void Camera__TakePicture_fn(uArray* args, ::g::Uno::Threading::Future1** __retval);

struct Camera : uObject
{
    static ::g::Fuse::Scripting::Object* Converter(::g::Fuse::Scripting::Context* context, ::g::Fuse::Camera::PictureResult* result);
    static ::g::Fuse::Scripting::NativeModule* CreateModule();
    static ::g::Uno::Threading::Future1* TakePicture(uArray* args);
};
// }

}}}} // ::g::Fuse::Reactive::FuseJS
