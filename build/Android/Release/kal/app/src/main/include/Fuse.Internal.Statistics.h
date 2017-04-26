// This file was generated based on '/usr/local/share/uno/Packages/FuseCore/0.27.10/Internal/$.uno#5'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.h>
namespace g{namespace Fuse{namespace Internal{struct Statistics;}}}

namespace g{
namespace Fuse{
namespace Internal{

// public static class Statistics :614
// {
uClassType* Statistics_typeof();
void Statistics__ContinuousFilterAlpha_fn(double* elapsed, double* period, double* __retval);

struct Statistics : uObject
{
    static double ContinuousFilterAlpha(double elapsed, double period);
};
// }

}}} // ::g::Fuse::Internal
