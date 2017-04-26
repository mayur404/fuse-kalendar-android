// This file was generated based on '/Users/mayur404/Dropbox/Public/Little Boat/InHouse/BlackBerry/Kalendar/Priv/fuse/.uno/kal.unoproj.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Triggers.State.h>
#include <Uno.UX.Property-1.h>
namespace g{namespace Fuse{namespace Triggers{struct StateGroup;}}}
namespace g{struct kal_FuseTriggersStateGroup_Active_Property;}

namespace g{

// internal sealed class kal_FuseTriggersStateGroup_Active_Property :31
// {
::g::Uno::UX::Property_type* kal_FuseTriggersStateGroup_Active_Property_typeof();
void kal_FuseTriggersStateGroup_Active_Property__ctor_1_fn(kal_FuseTriggersStateGroup_Active_Property* __this, ::g::Fuse::Triggers::StateGroup* obj);
void kal_FuseTriggersStateGroup_Active_Property__New1_fn(::g::Fuse::Triggers::StateGroup* obj, kal_FuseTriggersStateGroup_Active_Property** __retval);
void kal_FuseTriggersStateGroup_Active_Property__OnGet_fn(kal_FuseTriggersStateGroup_Active_Property* __this, ::g::Fuse::Triggers::State** __retval);
void kal_FuseTriggersStateGroup_Active_Property__OnSet_fn(kal_FuseTriggersStateGroup_Active_Property* __this, ::g::Fuse::Triggers::State* v, uObject* origin);

struct kal_FuseTriggersStateGroup_Active_Property : ::g::Uno::UX::Property
{
    uStrong< ::g::Fuse::Triggers::StateGroup*> _obj;

    void ctor_1(::g::Fuse::Triggers::StateGroup* obj);
    static kal_FuseTriggersStateGroup_Active_Property* New1(::g::Fuse::Triggers::StateGroup* obj);
};
// }

} // ::g
