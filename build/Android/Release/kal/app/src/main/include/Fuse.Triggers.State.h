// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Triggers/0.27.10/$.uno#11'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.IChildObject.h>
#include <Fuse.Triggers.Trigger.h>
namespace g{namespace Fuse{namespace Scripting{struct ScriptClass;}}}
namespace g{namespace Fuse{namespace Triggers{struct State;}}}
namespace g{namespace Fuse{namespace Triggers{struct StateGroup;}}}
namespace g{namespace Fuse{struct Node;}}

namespace g{
namespace Fuse{
namespace Triggers{

// public partial sealed class State :684
// {
::g::Fuse::Triggers::Trigger_type* State_typeof();
void State__ctor_2_fn(State* __this);
void State__FuseIChildObjectget_ParentObject1_fn(State* __this, uObject** __retval);
void State__Goto_fn(State* __this);
void State__goto__fn(State* n, uArray* args);
void State__get_Name_fn(State* __this, uString** __retval);
void State__set_Name_fn(State* __this, uString* value);
void State__New1_fn(State** __retval);
void State__get_On_fn(State* __this, bool* __retval);
void State__set_On_fn(State* __this, bool* value);
void State__OnRooted_fn(State* __this, ::g::Fuse::Node* parentNode);
void State__OnUnrooted_fn(State* __this, ::g::Fuse::Node* parentNode);
void State__get_Progress1_fn(State* __this, double* __retval);
void State__RootStateGroup_fn(State* __this, ::g::Fuse::Triggers::StateGroup* stateGroup);

struct State : ::g::Fuse::Triggers::Trigger
{
    uStrong<uString*> _name;
    bool _on;
    uStrong< ::g::Fuse::Triggers::StateGroup*> _stateGroup;
    static uSStrong< ::g::Fuse::Scripting::ScriptClass*> ScriptClass_;
    static uSStrong< ::g::Fuse::Scripting::ScriptClass*>& ScriptClass() { return State_typeof()->Init(), ScriptClass_; }

    void ctor_2();
    void Goto();
    uString* Name();
    void Name(uString* value);
    bool On();
    void On(bool value);
    double Progress1();
    void RootStateGroup(::g::Fuse::Triggers::StateGroup* stateGroup);
    static void goto_(State* n, uArray* args);
    static State* New1();
};
// }

}}} // ::g::Fuse::Triggers
