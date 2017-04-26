// This file was generated based on '/Users/mayur404/Dropbox/Public/Little Boat/InHouse/BlackBerry/Kalendar/Priv/fuse/.uno/kal.unoproj.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.kal_FuseReactiveEach_Items_Property.h>
#include <Fuse.Reactive.Each.h>
static uType* TYPES[1];

namespace g{

// internal sealed class kal_FuseReactiveEach_Items_Property :10
// {
::g::Uno::UX::Property_type* kal_FuseReactiveEach_Items_Property_typeof()
{
    static uSStrong< ::g::Uno::UX::Property_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.ObjectSize = sizeof(kal_FuseReactiveEach_Items_Property);
    options.TypeSize = sizeof(::g::Uno::UX::Property_type);
    type = (::g::Uno::UX::Property_type*)uClassType::New("kal_FuseReactiveEach_Items_Property", options);
    type->SetBase(::g::Uno::UX::Property_typeof()->MakeType(uObject_typeof()));
    type->fp_OnGet = (void(*)(::g::Uno::UX::Property*, uTRef))kal_FuseReactiveEach_Items_Property__OnGet_fn;
    type->fp_OnSet = (void(*)(::g::Uno::UX::Property*, void*, uObject*))kal_FuseReactiveEach_Items_Property__OnSet_fn;
    ::TYPES[0] = ::g::Fuse::Reactive::Each_typeof();
    type->SetFields(2,
        ::g::Fuse::Reactive::Each_typeof(), offsetof(::g::kal_FuseReactiveEach_Items_Property, _obj), 0);
    return type;
}

// public kal_FuseReactiveEach_Items_Property(Fuse.Reactive.Each obj) :13
void kal_FuseReactiveEach_Items_Property__ctor_1_fn(kal_FuseReactiveEach_Items_Property* __this, ::g::Fuse::Reactive::Each* obj)
{
    __this->ctor_1(obj);
}

// public kal_FuseReactiveEach_Items_Property New(Fuse.Reactive.Each obj) :13
void kal_FuseReactiveEach_Items_Property__New1_fn(::g::Fuse::Reactive::Each* obj, kal_FuseReactiveEach_Items_Property** __retval)
{
    *__retval = kal_FuseReactiveEach_Items_Property::New1(obj);
}

// protected override sealed object OnGet() :14
void kal_FuseReactiveEach_Items_Property__OnGet_fn(kal_FuseReactiveEach_Items_Property* __this, uObject** __retval)
{
    return *__retval = uPtr(__this->_obj)->Items(), void();
}

// protected override sealed void OnSet(object v, object origin) :15
void kal_FuseReactiveEach_Items_Property__OnSet_fn(kal_FuseReactiveEach_Items_Property* __this, uObject* v, uObject* origin)
{
    uPtr(__this->_obj)->Items(v);
}

// public kal_FuseReactiveEach_Items_Property(Fuse.Reactive.Each obj) [instance] :13
void kal_FuseReactiveEach_Items_Property::ctor_1(::g::Fuse::Reactive::Each* obj)
{
    ctor_();
    _obj = obj;
}

// public kal_FuseReactiveEach_Items_Property New(Fuse.Reactive.Each obj) [static] :13
kal_FuseReactiveEach_Items_Property* kal_FuseReactiveEach_Items_Property::New1(::g::Fuse::Reactive::Each* obj)
{
    kal_FuseReactiveEach_Items_Property* obj1 = (kal_FuseReactiveEach_Items_Property*)uNew(kal_FuseReactiveEach_Items_Property_typeof());
    obj1->ctor_1(obj);
    return obj1;
}
// }

} // ::g
