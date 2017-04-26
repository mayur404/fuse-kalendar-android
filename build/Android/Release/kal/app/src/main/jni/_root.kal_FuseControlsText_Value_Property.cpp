// This file was generated based on '/Users/mayur404/Dropbox/Public/Little Boat/InHouse/BlackBerry/Kalendar/Priv/fuse/.uno/kal.unoproj.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.kal_FuseControlsText_Value_Property.h>
#include <Fuse.Controls.Text.h>
#include <Fuse.Controls.TextControl.h>
#include <Uno.Object.h>
#include <Uno.UX.ValueChangedHandler-1.h>
static uType* TYPES[2];

namespace g{

// internal sealed class kal_FuseControlsText_Value_Property :1
// {
::g::Uno::UX::Property_type* kal_FuseControlsText_Value_Property_typeof()
{
    static uSStrong< ::g::Uno::UX::Property_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.ObjectSize = sizeof(kal_FuseControlsText_Value_Property);
    options.TypeSize = sizeof(::g::Uno::UX::Property_type);
    type = (::g::Uno::UX::Property_type*)uClassType::New("kal_FuseControlsText_Value_Property", options);
    type->SetBase(::g::Uno::UX::Property_typeof()->MakeType(::g::Uno::String_typeof()));
    type->fp_OnAddListener = (void(*)(::g::Uno::UX::Property*, uDelegate*))kal_FuseControlsText_Value_Property__OnAddListener_fn;
    type->fp_OnGet = (void(*)(::g::Uno::UX::Property*, uTRef))kal_FuseControlsText_Value_Property__OnGet_fn;
    type->fp_OnRemoveListener = (void(*)(::g::Uno::UX::Property*, uDelegate*))kal_FuseControlsText_Value_Property__OnRemoveListener_fn;
    type->fp_OnSet = (void(*)(::g::Uno::UX::Property*, void*, uObject*))kal_FuseControlsText_Value_Property__OnSet_fn;
    ::TYPES[0] = ::g::Fuse::Controls::TextControl_typeof();
    ::TYPES[1] = ::g::Uno::UX::ValueChangedHandler_typeof()->MakeType(::g::Uno::String_typeof());
    type->SetFields(2,
        ::g::Fuse::Controls::Text_typeof(), offsetof(::g::kal_FuseControlsText_Value_Property, _obj), 0);
    return type;
}

// public kal_FuseControlsText_Value_Property(Fuse.Controls.Text obj) :4
void kal_FuseControlsText_Value_Property__ctor_1_fn(kal_FuseControlsText_Value_Property* __this, ::g::Fuse::Controls::Text* obj)
{
    __this->ctor_1(obj);
}

// public kal_FuseControlsText_Value_Property New(Fuse.Controls.Text obj) :4
void kal_FuseControlsText_Value_Property__New1_fn(::g::Fuse::Controls::Text* obj, kal_FuseControlsText_Value_Property** __retval)
{
    *__retval = kal_FuseControlsText_Value_Property::New1(obj);
}

// protected override sealed void OnAddListener(Uno.UX.ValueChangedHandler<string> listener) :7
void kal_FuseControlsText_Value_Property__OnAddListener_fn(kal_FuseControlsText_Value_Property* __this, uDelegate* listener)
{
    uPtr(__this->_obj)->add_ValueChanged(listener);
}

// protected override sealed string OnGet() :5
void kal_FuseControlsText_Value_Property__OnGet_fn(kal_FuseControlsText_Value_Property* __this, uString** __retval)
{
    return *__retval = uPtr(__this->_obj)->Value(), void();
}

// protected override sealed void OnRemoveListener(Uno.UX.ValueChangedHandler<string> listener) :8
void kal_FuseControlsText_Value_Property__OnRemoveListener_fn(kal_FuseControlsText_Value_Property* __this, uDelegate* listener)
{
    uPtr(__this->_obj)->remove_ValueChanged(listener);
}

// protected override sealed void OnSet(string v, object origin) :6
void kal_FuseControlsText_Value_Property__OnSet_fn(kal_FuseControlsText_Value_Property* __this, uString* v, uObject* origin)
{
    uPtr(__this->_obj)->SetValue1(v, origin);
}

// public kal_FuseControlsText_Value_Property(Fuse.Controls.Text obj) [instance] :4
void kal_FuseControlsText_Value_Property::ctor_1(::g::Fuse::Controls::Text* obj)
{
    ctor_();
    _obj = obj;
    uPtr(obj)->add_ValueChanged(uDelegate::New(::TYPES[1/*Uno.UX.ValueChangedHandler<string>*/], (void*)::g::Uno::UX::Property__OnValueChanged_fn, this));
}

// public kal_FuseControlsText_Value_Property New(Fuse.Controls.Text obj) [static] :4
kal_FuseControlsText_Value_Property* kal_FuseControlsText_Value_Property::New1(::g::Fuse::Controls::Text* obj)
{
    kal_FuseControlsText_Value_Property* obj1 = (kal_FuseControlsText_Value_Property*)uNew(kal_FuseControlsText_Value_Property_typeof());
    obj1->ctor_1(obj);
    return obj1;
}
// }

} // ::g
