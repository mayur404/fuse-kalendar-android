// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Triggers/0.27.10/$.uno#17'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.IChildObject.h>
#include <Fuse.Triggers.WhileTrigger.h>
namespace g{namespace Fuse{namespace Triggers{struct WhileFailed;}}}
namespace g{namespace Fuse{struct Node;}}
namespace g{namespace Fuse{struct PropertyHandle;}}

namespace g{
namespace Fuse{
namespace Triggers{

// public sealed class WhileFailed :1602
// {
::g::Fuse::Triggers::Trigger_type* WhileFailed_typeof();
void WhileFailed__IsFailed_fn(::g::Fuse::Node* n, bool* __retval);
void WhileFailed__OnRooted_fn(WhileFailed* __this, ::g::Fuse::Node* parentNode);
void WhileFailed__SetState_fn(::g::Fuse::Node* n, bool* failed, uString* message);

struct WhileFailed : ::g::Fuse::Triggers::WhileTrigger
{
    static uSStrong< ::g::Fuse::PropertyHandle*> _whileFailedProp_;
    static uSStrong< ::g::Fuse::PropertyHandle*>& _whileFailedProp() { return WhileFailed_typeof()->Init(), _whileFailedProp_; }

    static bool IsFailed(::g::Fuse::Node* n);
    static void SetState(::g::Fuse::Node* n, bool failed, uString* message);
};
// }

}}} // ::g::Fuse::Triggers
