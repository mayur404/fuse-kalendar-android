// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.27.15/Source/Uno/Graphics/$.uno#2'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.h>
namespace g{namespace Uno{namespace Graphics{struct FormatHelpers;}}}

namespace g{
namespace Uno{
namespace Graphics{

// public static class FormatHelpers :265
// {
uClassType* FormatHelpers_typeof();
void FormatHelpers__GetStrideInBytes_fn(int* format, int* __retval);

struct FormatHelpers : uObject
{
    static int GetStrideInBytes(int format);
};
// }

}}} // ::g::Uno::Graphics
