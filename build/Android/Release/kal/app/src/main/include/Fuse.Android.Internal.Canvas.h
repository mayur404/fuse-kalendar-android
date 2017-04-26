// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Android/0.27.10/Internal/$.uno#1'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Android{namespace Internal{struct Bitmap;}}}}
namespace g{namespace Fuse{namespace Android{namespace Internal{struct Canvas;}}}}
namespace g{namespace Java{struct Object;}}

namespace g{
namespace Fuse{
namespace Android{
namespace Internal{

// internal sealed extern class Canvas :78
// {
uType* Canvas_typeof();
void Canvas__ctor__fn(Canvas* __this, ::g::Fuse::Android::Internal::Bitmap* bitmap);
void Canvas__ctor_1_fn(Canvas* __this, ::g::Java::Object* handle);
void Canvas__Create_fn(::g::Java::Object* bitmapHandle, ::g::Java::Object** __retval);
void Canvas__get_Handle_fn(Canvas* __this, ::g::Java::Object** __retval);
void Canvas__New1_fn(::g::Fuse::Android::Internal::Bitmap* bitmap, Canvas** __retval);
void Canvas__Translate_fn(Canvas* __this, float* dx, float* dy);
void Canvas__Translate1_fn(::g::Java::Object* handle, float* dx, float* dy);

struct Canvas : uObject
{
    uStrong< ::g::Java::Object*> _handle;

    void ctor_(::g::Fuse::Android::Internal::Bitmap* bitmap);
    void ctor_1(::g::Java::Object* handle);
    ::g::Java::Object* Handle();
    void Translate(float dx, float dy);
    static ::g::Java::Object* Create(::g::Java::Object* bitmapHandle);
    static Canvas* New1(::g::Fuse::Android::Internal::Bitmap* bitmap);
    static void Translate1(::g::Java::Object* handle, float dx, float dy);
};
// }

}}}} // ::g::Fuse::Android::Internal
