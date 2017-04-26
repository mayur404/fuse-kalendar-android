// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Triggers/0.27.10/$.uno#4'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.IChildObject.h>
#include <Fuse.Triggers.OnKeyPress.h>
namespace g{namespace Fuse{namespace Triggers{struct OnBackButton;}}}
namespace g{namespace Fuse{struct Node;}}

namespace g{
namespace Fuse{
namespace Triggers{

// public sealed class OnBackButton :250
// {
::g::Fuse::Triggers::Trigger_type* OnBackButton_typeof();
void OnBackButton__ctor_3_fn(OnBackButton* __this);
void OnBackButton__New2_fn(OnBackButton** __retval);
void OnBackButton__OnRooted_fn(OnBackButton* __this, ::g::Fuse::Node* parentNode);

struct OnBackButton : ::g::Fuse::Triggers::OnKeyPress
{
    void ctor_3();
    static OnBackButton* New2();
};
// }

}}} // ::g::Fuse::Triggers
