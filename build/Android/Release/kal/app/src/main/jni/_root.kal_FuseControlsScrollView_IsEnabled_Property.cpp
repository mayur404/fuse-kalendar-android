// This file was generated based on '/Users/mayur404/Dropbox/Public/Little Boat/InHouse/BlackBerry/Kalendar/Priv/fuse/.uno/kal.unoproj.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.kal_FuseControlsScrollView_IsEnabled_Property.h>
#include <Fuse.Controls.ScrollView.h>
#include <Fuse.Node.h>
#include <Uno.Object.h>
static uType* TYPES[1];

namespace g{

// internal sealed class kal_FuseControlsScrollView_IsEnabled_Property :52
// {
::g::Uno::UX::Property_type* kal_FuseControlsScrollView_IsEnabled_Property_typeof()
{
    static uSStrong< ::g::Uno::UX::Property_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.ObjectSize = sizeof(kal_FuseControlsScrollView_IsEnabled_Property);
    options.TypeSize = sizeof(::g::Uno::UX::Property_type);
    type = (::g::Uno::UX::Property_type*)uClassType::New("kal_FuseControlsScrollView_IsEnabled_Property", options);
    type->SetBase(::g::Uno::UX::Property_typeof()->MakeType(::g::Uno::Bool_typeof()));
    type->fp_OnGet = (void(*)(::g::Uno::UX::Property*, uTRef))kal_FuseControlsScrollView_IsEnabled_Property__OnGet_fn;
    type->fp_OnSet = (void(*)(::g::Uno::UX::Property*, void*, uObject*))kal_FuseControlsScrollView_IsEnabled_Property__OnSet_fn;
    ::TYPES[0] = ::g::Fuse::Node_typeof();
    type->SetFields(2,
        ::g::Fuse::Controls::ScrollView_typeof(), offsetof(::g::kal_FuseControlsScrollView_IsEnabled_Property, _obj), 0);
    return type;
}

// public kal_FuseControlsScrollView_IsEnabled_Property(Fuse.Controls.ScrollView obj) :55
void kal_FuseControlsScrollView_IsEnabled_Property__ctor_1_fn(kal_FuseControlsScrollView_IsEnabled_Property* __this, ::g::Fuse::Controls::ScrollView* obj)
{
    __this->ctor_1(obj);
}

// public kal_FuseControlsScrollView_IsEnabled_Property New(Fuse.Controls.ScrollView obj) :55
void kal_FuseControlsScrollView_IsEnabled_Property__New1_fn(::g::Fuse::Controls::ScrollView* obj, kal_FuseControlsScrollView_IsEnabled_Property** __retval)
{
    *__retval = kal_FuseControlsScrollView_IsEnabled_Property::New1(obj);
}

// protected override sealed bool OnGet() :56
void kal_FuseControlsScrollView_IsEnabled_Property__OnGet_fn(kal_FuseControlsScrollView_IsEnabled_Property* __this, bool* __retval)
{
    return *__retval = uPtr(__this->_obj)->IsEnabled(), void();
}

// protected override sealed void OnSet(bool v, object origin) :57
void kal_FuseControlsScrollView_IsEnabled_Property__OnSet_fn(kal_FuseControlsScrollView_IsEnabled_Property* __this, bool* v, uObject* origin)
{
    bool v_ = *v;
    uPtr(__this->_obj)->IsEnabled(v_);
}

// public kal_FuseControlsScrollView_IsEnabled_Property(Fuse.Controls.ScrollView obj) [instance] :55
void kal_FuseControlsScrollView_IsEnabled_Property::ctor_1(::g::Fuse::Controls::ScrollView* obj)
{
    ctor_();
    _obj = obj;
}

// public kal_FuseControlsScrollView_IsEnabled_Property New(Fuse.Controls.ScrollView obj) [static] :55
kal_FuseControlsScrollView_IsEnabled_Property* kal_FuseControlsScrollView_IsEnabled_Property::New1(::g::Fuse::Controls::ScrollView* obj)
{
    kal_FuseControlsScrollView_IsEnabled_Property* obj1 = (kal_FuseControlsScrollView_IsEnabled_Property*)uNew(kal_FuseControlsScrollView_IsEnabled_Property_typeof());
    obj1->ctor_1(obj);
    return obj1;
}
// }

} // ::g
