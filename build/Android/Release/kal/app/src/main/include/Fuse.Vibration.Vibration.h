// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Vibration/0.27.10/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.h>
namespace g{namespace Fuse{namespace Vibration{struct Vibration;}}}

namespace g{
namespace Fuse{
namespace Vibration{

// public static class Vibration :13
// {
uClassType* Vibration_typeof();
void Vibration__Vibrate_fn(double* seconds);

struct Vibration : uObject
{
    static void Vibrate(double seconds);
};
// }

}}} // ::g::Fuse::Vibration
