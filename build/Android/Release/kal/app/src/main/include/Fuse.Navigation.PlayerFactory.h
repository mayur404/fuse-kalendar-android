// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Navigation/0.27.10/Internal/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.h>
namespace g{namespace Fuse{namespace Navigation{struct NavigationTween;}}}
namespace g{namespace Fuse{namespace Navigation{struct PlayerFactory;}}}

namespace g{
namespace Fuse{
namespace Navigation{

// internal static class PlayerFactory :58
// {
uClassType* PlayerFactory_typeof();
void PlayerFactory__Start_fn(double* targetProgress, double* startProgress, uObject* animators, uDelegate* doneCallback, uDelegate* progressSetterCallback, ::g::Fuse::Navigation::NavigationTween* navigationTween, uObject** __retval);

struct PlayerFactory : uObject
{
    static uObject* Start(double targetProgress, double startProgress, uObject* animators, uDelegate* doneCallback, uDelegate* progressSetterCallback, ::g::Fuse::Navigation::NavigationTween* navigationTween);
};
// }

}}} // ::g::Fuse::Navigation
