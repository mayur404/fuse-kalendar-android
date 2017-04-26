// This file was generated based on '/Users/mayur404/Dropbox/Public/Little Boat/InHouse/BlackBerry/Kalendar/Priv/fuse/.uno/kal.unoproj.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.kal_FuseTriggersStateGroup_Active_Property.h>
#include <Fuse.Triggers.StateGroup.h>
#include <Uno.Object.h>
static uType* TYPES[1];

namespace g{

// internal sealed class kal_FuseTriggersStateGroup_Active_Property :31
// {
::g::Uno::UX::Property_type* kal_FuseTriggersStateGroup_Active_Property_typeof()
{
    static uSStrong< ::g::Uno::UX::Property_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.ObjectSize = sizeof(kal_FuseTriggersStateGroup_Active_Property);
    options.TypeSize = sizeof(::g::Uno::UX::Property_type);
    type = (::g::Uno::UX::Property_type*)uClassType::New("kal_FuseTriggersStateGroup_Active_Property", options);
    type->SetBase(::g::Uno::UX::Property_typeof()->MakeType(::g::Fuse::Triggers::State_typeof()));
    type->fp_OnGet = (void(*)(::g::Uno::UX::Property*, uTRef))kal_FuseTriggersStateGroup_Active_Property__OnGet_fn;
    type->fp_OnSet = (void(*)(::g::Uno::UX::Property*, void*, uObject*))kal_FuseTriggersStateGroup_Active_Property__OnSet_fn;
    ::TYPES[0] = ::g::Fuse::Triggers::StateGroup_typeof();
    type->SetFields(2,
        ::g::Fuse::Triggers::StateGroup_typeof(), offsetof(::g::kal_FuseTriggersStateGroup_Active_Property, _obj), 0);
    return type;
}

// public kal_FuseTriggersStateGroup_Active_Property(Fuse.Triggers.StateGroup obj) :34
void kal_FuseTriggersStateGroup_Active_Property__ctor_1_fn(kal_FuseTriggersStateGroup_Active_Property* __this, ::g::Fuse::Triggers::StateGroup* obj)
{
    __this->ctor_1(obj);
}

// public kal_FuseTriggersStateGroup_Active_Property New(Fuse.Triggers.StateGroup obj) :34
void kal_FuseTriggersStateGroup_Active_Property__New1_fn(::g::Fuse::Triggers::StateGroup* obj, kal_FuseTriggersStateGroup_Active_Property** __retval)
{
    *__retval = kal_FuseTriggersStateGroup_Active_Property::New1(obj);
}

// protected override sealed Fuse.Triggers.State OnGet() :35
void kal_FuseTriggersStateGroup_Active_Property__OnGet_fn(kal_FuseTriggersStateGroup_Active_Property* __this, ::g::Fuse::Triggers::State** __retval)
{
    return *__retval = uPtr(__this->_obj)->Active(), void();
}

// protected override sealed void OnSet(Fuse.Triggers.State v, object origin) :36
void kal_FuseTriggersStateGroup_Active_Property__OnSet_fn(kal_FuseTriggersStateGroup_Active_Property* __this, ::g::Fuse::Triggers::State* v, uObject* origin)
{
    uPtr(__this->_obj)->Active(v);
}

// public kal_FuseTriggersStateGroup_Active_Property(Fuse.Triggers.StateGroup obj) [instance] :34
void kal_FuseTriggersStateGroup_Active_Property::ctor_1(::g::Fuse::Triggers::StateGroup* obj)
{
    ctor_();
    _obj = obj;
}

// public kal_FuseTriggersStateGroup_Active_Property New(Fuse.Triggers.StateGroup obj) [static] :34
kal_FuseTriggersStateGroup_Active_Property* kal_FuseTriggersStateGroup_Active_Property::New1(::g::Fuse::Triggers::StateGroup* obj)
{
    kal_FuseTriggersStateGroup_Active_Property* obj1 = (kal_FuseTriggersStateGroup_Active_Property*)uNew(kal_FuseTriggersStateGroup_Active_Property_typeof());
    obj1->ctor_1(obj);
    return obj1;
}
// }

} // ::g
