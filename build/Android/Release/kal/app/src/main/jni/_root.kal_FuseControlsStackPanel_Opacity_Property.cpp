// This file was generated based on '/Users/mayur404/Dropbox/Public/Little Boat/InHouse/BlackBerry/Kalendar/Priv/fuse/.uno/kal.unoproj.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.kal_FuseControlsStackPanel_Opacity_Property.h>
#include <Fuse.Controls.StackPanel.h>
#include <Fuse.Elements.Element.h>
#include <Uno.Object.h>
static uType* TYPES[1];

namespace g{

// internal sealed class kal_FuseControlsStackPanel_Opacity_Property :45
// {
::g::Uno::UX::Property_type* kal_FuseControlsStackPanel_Opacity_Property_typeof()
{
    static uSStrong< ::g::Uno::UX::Property_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.ObjectSize = sizeof(kal_FuseControlsStackPanel_Opacity_Property);
    options.TypeSize = sizeof(::g::Uno::UX::Property_type);
    type = (::g::Uno::UX::Property_type*)uClassType::New("kal_FuseControlsStackPanel_Opacity_Property", options);
    type->SetBase(::g::Uno::UX::Property_typeof()->MakeType(::g::Uno::Float_typeof()));
    type->fp_OnGet = (void(*)(::g::Uno::UX::Property*, uTRef))kal_FuseControlsStackPanel_Opacity_Property__OnGet_fn;
    type->fp_OnSet = (void(*)(::g::Uno::UX::Property*, void*, uObject*))kal_FuseControlsStackPanel_Opacity_Property__OnSet_fn;
    ::TYPES[0] = ::g::Fuse::Elements::Element_typeof();
    type->SetFields(2,
        ::g::Fuse::Controls::StackPanel_typeof(), offsetof(::g::kal_FuseControlsStackPanel_Opacity_Property, _obj), 0);
    return type;
}

// public kal_FuseControlsStackPanel_Opacity_Property(Fuse.Controls.StackPanel obj) :48
void kal_FuseControlsStackPanel_Opacity_Property__ctor_1_fn(kal_FuseControlsStackPanel_Opacity_Property* __this, ::g::Fuse::Controls::StackPanel* obj)
{
    __this->ctor_1(obj);
}

// public kal_FuseControlsStackPanel_Opacity_Property New(Fuse.Controls.StackPanel obj) :48
void kal_FuseControlsStackPanel_Opacity_Property__New1_fn(::g::Fuse::Controls::StackPanel* obj, kal_FuseControlsStackPanel_Opacity_Property** __retval)
{
    *__retval = kal_FuseControlsStackPanel_Opacity_Property::New1(obj);
}

// protected override sealed float OnGet() :49
void kal_FuseControlsStackPanel_Opacity_Property__OnGet_fn(kal_FuseControlsStackPanel_Opacity_Property* __this, float* __retval)
{
    return *__retval = uPtr(__this->_obj)->Opacity(), void();
}

// protected override sealed void OnSet(float v, object origin) :50
void kal_FuseControlsStackPanel_Opacity_Property__OnSet_fn(kal_FuseControlsStackPanel_Opacity_Property* __this, float* v, uObject* origin)
{
    float v_ = *v;
    uPtr(__this->_obj)->Opacity(v_);
}

// public kal_FuseControlsStackPanel_Opacity_Property(Fuse.Controls.StackPanel obj) [instance] :48
void kal_FuseControlsStackPanel_Opacity_Property::ctor_1(::g::Fuse::Controls::StackPanel* obj)
{
    ctor_();
    _obj = obj;
}

// public kal_FuseControlsStackPanel_Opacity_Property New(Fuse.Controls.StackPanel obj) [static] :48
kal_FuseControlsStackPanel_Opacity_Property* kal_FuseControlsStackPanel_Opacity_Property::New1(::g::Fuse::Controls::StackPanel* obj)
{
    kal_FuseControlsStackPanel_Opacity_Property* obj1 = (kal_FuseControlsStackPanel_Opacity_Property*)uNew(kal_FuseControlsStackPanel_Opacity_Property_typeof());
    obj1->ctor_1(obj);
    return obj1;
}
// }

} // ::g
