// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Controls/0.27.10/Triggers/$.uno#5'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.IChildObject.h>
#include <Fuse.Triggers.WhileTrigger.h>
namespace g{namespace Fuse{namespace Triggers{struct WhileInteracting;}}}
namespace g{namespace Fuse{struct Node;}}

namespace g{
namespace Fuse{
namespace Triggers{

// public sealed class WhileInteracting :490
// {
::g::Fuse::Triggers::Trigger_type* WhileInteracting_typeof();
void WhileInteracting__ctor_3_fn(WhileInteracting* __this);
void WhileInteracting__New1_fn(WhileInteracting** __retval);
void WhileInteracting__OnInteractingChanged_fn(WhileInteracting* __this, uObject* s, uObject* a);
void WhileInteracting__OnRooted_fn(WhileInteracting* __this, ::g::Fuse::Node* parentNode);
void WhileInteracting__OnUnrooted_fn(WhileInteracting* __this, ::g::Fuse::Node* parentNode);

struct WhileInteracting : ::g::Fuse::Triggers::WhileTrigger
{
    uStrong< ::g::Fuse::Node*> _node;
    uStrong< ::g::Fuse::Node*> _source;

    void ctor_3();
    void OnInteractingChanged(uObject* s, uObject* a);
    static WhileInteracting* New1();
};
// }

}}} // ::g::Fuse::Triggers
