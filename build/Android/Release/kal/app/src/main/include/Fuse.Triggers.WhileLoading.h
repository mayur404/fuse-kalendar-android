// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Triggers/0.27.10/$.uno#21'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.IChildObject.h>
#include <Fuse.Triggers.WhileTrigger.h>
namespace g{namespace Fuse{namespace Triggers{struct WhileLoading;}}}
namespace g{namespace Fuse{struct Node;}}
namespace g{namespace Fuse{struct PropertyHandle;}}

namespace g{
namespace Fuse{
namespace Triggers{

// public sealed class WhileLoading :1849
// {
::g::Fuse::Triggers::Trigger_type* WhileLoading_typeof();
void WhileLoading__IsLoading_fn(::g::Fuse::Node* n, bool* __retval);
void WhileLoading__OnRooted_fn(WhileLoading* __this, ::g::Fuse::Node* parentNode);
void WhileLoading__SetState_fn(::g::Fuse::Node* n, bool* loading);

struct WhileLoading : ::g::Fuse::Triggers::WhileTrigger
{
    static uSStrong< ::g::Fuse::PropertyHandle*> _whileLoadingProp_;
    static uSStrong< ::g::Fuse::PropertyHandle*>& _whileLoadingProp() { return WhileLoading_typeof()->Init(), _whileLoadingProp_; }

    static bool IsLoading(::g::Fuse::Node* n);
    static void SetState(::g::Fuse::Node* n, bool loading);
};
// }

}}} // ::g::Fuse::Triggers