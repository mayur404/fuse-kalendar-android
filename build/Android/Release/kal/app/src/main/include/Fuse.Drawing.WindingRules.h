// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Drawing/0.27.10/$.uno#5'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.h>
namespace g{namespace Fuse{namespace Drawing{struct WindingRules;}}}

namespace g{
namespace Fuse{
namespace Drawing{

// public static class WindingRules :540
// {
uClassType* WindingRules_typeof();
void WindingRules__NonZero_fn(int* n, bool* __retval);
void WindingRules__Odd_fn(int* n, bool* __retval);

struct WindingRules : uObject
{
    static bool NonZero(int n);
    static bool Odd(int n);
};
// }

}}} // ::g::Fuse::Drawing
