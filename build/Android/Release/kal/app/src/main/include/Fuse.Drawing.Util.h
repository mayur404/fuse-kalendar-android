// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Drawing.Paths/0.27.10/$.uno#8'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Drawing{struct Util;}}}
namespace g{namespace Uno{struct Float2;}}

namespace g{
namespace Fuse{
namespace Drawing{

// internal sealed class Util :1061
// {
uType* Util_typeof();
void Util__ValidateFloat_fn(float* v);
void Util__ValidateFloat2_fn(::g::Uno::Float2* v);

struct Util : uObject
{
    static void ValidateFloat(float v);
    static void ValidateFloat2(::g::Uno::Float2 v);
};
// }

}}} // ::g::Fuse::Drawing
