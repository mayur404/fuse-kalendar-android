// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Android/0.27.10/Internal/$.uno#2'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Android{namespace Internal{struct Bitmap;}}}}
namespace g{namespace Fuse{namespace Android{namespace Internal{struct GLUtils;}}}}
namespace g{namespace Java{struct Object;}}

namespace g{
namespace Fuse{
namespace Android{
namespace Internal{

// internal sealed extern class GLUtils :127
// {
uType* GLUtils_typeof();
void GLUtils__TexImage2D_fn(int* target, int* level, ::g::Java::Object* bitmap, int* border);
void GLUtils__TexImage2D1_fn(int* target, int* level, ::g::Fuse::Android::Internal::Bitmap* bitmap, int* border);

struct GLUtils : uObject
{
    static void TexImage2D(int target, int level, ::g::Java::Object* bitmap, int border);
    static void TexImage2D1(int target, int level, ::g::Fuse::Android::Internal::Bitmap* bitmap, int border);
};
// }

}}}} // ::g::Fuse::Android::Internal
