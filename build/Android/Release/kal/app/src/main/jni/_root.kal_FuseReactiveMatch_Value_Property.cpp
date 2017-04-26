// This file was generated based on '/Users/mayur404/Dropbox/Public/Little Boat/InHouse/BlackBerry/Kalendar/Priv/fuse/.uno/kal.unoproj.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.kal_FuseReactiveMatch_Value_Property.h>
#include <Fuse.Reactive.Match.h>
static uType* TYPES[1];

namespace g{

// internal sealed class kal_FuseReactiveMatch_Value_Property :17
// {
::g::Uno::UX::Property_type* kal_FuseReactiveMatch_Value_Property_typeof()
{
    static uSStrong< ::g::Uno::UX::Property_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.ObjectSize = sizeof(kal_FuseReactiveMatch_Value_Property);
    options.TypeSize = sizeof(::g::Uno::UX::Property_type);
    type = (::g::Uno::UX::Property_type*)uClassType::New("kal_FuseReactiveMatch_Value_Property", options);
    type->SetBase(::g::Uno::UX::Property_typeof()->MakeType(uObject_typeof()));
    type->fp_OnGet = (void(*)(::g::Uno::UX::Property*, uTRef))kal_FuseReactiveMatch_Value_Property__OnGet_fn;
    type->fp_OnSet = (void(*)(::g::Uno::UX::Property*, void*, uObject*))kal_FuseReactiveMatch_Value_Property__OnSet_fn;
    ::TYPES[0] = ::g::Fuse::Reactive::Match_typeof();
    type->SetFields(2,
        ::g::Fuse::Reactive::Match_typeof(), offsetof(::g::kal_FuseReactiveMatch_Value_Property, _obj), 0);
    return type;
}

// public kal_FuseReactiveMatch_Value_Property(Fuse.Reactive.Match obj) :20
void kal_FuseReactiveMatch_Value_Property__ctor_1_fn(kal_FuseReactiveMatch_Value_Property* __this, ::g::Fuse::Reactive::Match* obj)
{
    __this->ctor_1(obj);
}

// public kal_FuseReactiveMatch_Value_Property New(Fuse.Reactive.Match obj) :20
void kal_FuseReactiveMatch_Value_Property__New1_fn(::g::Fuse::Reactive::Match* obj, kal_FuseReactiveMatch_Value_Property** __retval)
{
    *__retval = kal_FuseReactiveMatch_Value_Property::New1(obj);
}

// protected override sealed object OnGet() :21
void kal_FuseReactiveMatch_Value_Property__OnGet_fn(kal_FuseReactiveMatch_Value_Property* __this, uObject** __retval)
{
    return *__retval = uPtr(__this->_obj)->Value(), void();
}

// protected override sealed void OnSet(object v, object origin) :22
void kal_FuseReactiveMatch_Value_Property__OnSet_fn(kal_FuseReactiveMatch_Value_Property* __this, uObject* v, uObject* origin)
{
    uPtr(__this->_obj)->Value(v);
}

// public kal_FuseReactiveMatch_Value_Property(Fuse.Reactive.Match obj) [instance] :20
void kal_FuseReactiveMatch_Value_Property::ctor_1(::g::Fuse::Reactive::Match* obj)
{
    ctor_();
    _obj = obj;
}

// public kal_FuseReactiveMatch_Value_Property New(Fuse.Reactive.Match obj) [static] :20
kal_FuseReactiveMatch_Value_Property* kal_FuseReactiveMatch_Value_Property::New1(::g::Fuse::Reactive::Match* obj)
{
    kal_FuseReactiveMatch_Value_Property* obj1 = (kal_FuseReactiveMatch_Value_Property*)uNew(kal_FuseReactiveMatch_Value_Property_typeof());
    obj1->ctor_1(obj);
    return obj1;
}
// }

} // ::g
