// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Controls/0.27.10/Triggers/$.uno#1'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.IChildObject.h>
#include <Fuse.Triggers.WhileTrigger.h>
namespace g{namespace Fuse{namespace Triggers{struct WhileContainsText;}}}
namespace g{namespace Fuse{struct Node;}}
namespace g{namespace Uno{struct EventArgs;}}

namespace g{
namespace Fuse{
namespace Triggers{

// public sealed class WhileContainsText :53
// {
::g::Fuse::Triggers::Trigger_type* WhileContainsText_typeof();
void WhileContainsText__ctor_3_fn(WhileContainsText* __this);
void WhileContainsText__New1_fn(WhileContainsText** __retval);
void WhileContainsText__OnRooted_fn(WhileContainsText* __this, ::g::Fuse::Node* parentNode);
void WhileContainsText__OnUnrooted_fn(WhileContainsText* __this, ::g::Fuse::Node* parentNode);
void WhileContainsText__OnValueChanged_fn(WhileContainsText* __this, uObject* sender, ::g::Uno::EventArgs* args);
void WhileContainsText__get_Source_fn(WhileContainsText* __this, uObject** __retval);
void WhileContainsText__set_Source_fn(WhileContainsText* __this, uObject* value);

struct WhileContainsText : ::g::Fuse::Triggers::WhileTrigger
{
    uStrong<uObject*> _source;
    uStrong<uObject*> _value;

    void ctor_3();
    void OnValueChanged(uObject* sender, ::g::Uno::EventArgs* args);
    uObject* Source();
    void Source(uObject* value);
    static WhileContainsText* New1();
};
// }

}}} // ::g::Fuse::Triggers