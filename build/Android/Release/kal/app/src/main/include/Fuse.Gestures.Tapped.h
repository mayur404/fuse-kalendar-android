// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Gestures/0.27.10/$.uno#8'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Gestures.ClickerTrigger.h>
#include <Fuse.IChildObject.h>
namespace g{namespace Fuse{namespace Gestures{struct Tapped;}}}
namespace g{namespace Fuse{namespace Input{struct PointerEventArgs;}}}
namespace g{namespace Fuse{struct Node;}}

namespace g{
namespace Fuse{
namespace Gestures{

// public sealed class Tapped :1017
// {
::g::Fuse::Triggers::Trigger_type* Tapped_typeof();
void Tapped__ctor_3_fn(Tapped* __this);
void Tapped__add_Handler_fn(Tapped* __this, uDelegate* value);
void Tapped__remove_Handler_fn(Tapped* __this, uDelegate* value);
void Tapped__New1_fn(Tapped** __retval);
void Tapped__OnRooted_fn(Tapped* __this, ::g::Fuse::Node* parentNode);
void Tapped__OnTapped_fn(Tapped* __this, ::g::Fuse::Input::PointerEventArgs* args, int* tapCount);
void Tapped__OnUnrooted_fn(Tapped* __this, ::g::Fuse::Node* parentNode);

struct Tapped : ::g::Fuse::Gestures::ClickerTrigger
{
    uStrong<uDelegate*> Handler1;

    void ctor_3();
    void add_Handler(uDelegate* value);
    void remove_Handler(uDelegate* value);
    void OnTapped(::g::Fuse::Input::PointerEventArgs* args, int tapCount);
    static Tapped* New1();
};
// }

}}} // ::g::Fuse::Gestures
