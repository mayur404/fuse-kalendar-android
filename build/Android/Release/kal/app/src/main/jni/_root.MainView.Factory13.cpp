// This file was generated based on '/Users/mayur404/Dropbox/Public/Little Boat/InHouse/BlackBerry/Kalendar/Priv/fuse/.uno/MainView.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.kal_FuseReactiveMatch_Value_Property.h>
#include <_root.MainView.Factory13.Factory14.h>
#include <_root.MainView.Factory13.h>
#include <_root.MainView.h>
#include <Fuse.Behavior.h>
#include <Fuse.Controls.Panel.h>
#include <Fuse.Node.h>
#include <Fuse.Reactive.Case.h>
#include <Fuse.Reactive.DataBinding-1.h>
#include <Fuse.Reactive.Match.h>
#include <Uno.Bool.h>
#include <Uno.Collections.ICollection-1.h>
#include <Uno.Collections.IList-1.h>
#include <Uno.Object.h>
#include <Uno.String.h>
#include <Uno.UX.Property-1.h>
static uString* STRINGS[2];
static uType* TYPES[8];

namespace g{

// public partial sealed class MainView.Factory13 :1636
// {
// static Factory13() :1751
static void MainView__Factory13__cctor__fn(uType* __type)
{
}

::g::Uno::UX::Factory_type* MainView__Factory13_typeof()
{
    static uSStrong< ::g::Uno::UX::Factory_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 4;
    options.ObjectSize = sizeof(MainView__Factory13);
    options.TypeSize = sizeof(::g::Uno::UX::Factory_type);
    type = (::g::Uno::UX::Factory_type*)uClassType::New("MainView.Factory13", options);
    type->SetBase(::g::Uno::UX::Factory_typeof());
    type->fp_cctor_ = MainView__Factory13__cctor__fn;
    type->fp_New1 = (void(*)(::g::Uno::UX::Factory*, uObject**))MainView__Factory13__New1_fn;
    ::STRINGS[0] = uString::Const("status");
    ::STRINGS[1] = uString::Const("SOON");
    ::TYPES[0] = ::g::Fuse::Reactive::DataBinding_typeof()->MakeType(uObject_typeof());
    ::TYPES[1] = ::g::Uno::UX::Property_typeof()->MakeType(uObject_typeof());
    ::TYPES[2] = ::g::Fuse::Reactive::Match_typeof();
    ::TYPES[3] = ::g::Fuse::Reactive::Case_typeof();
    ::TYPES[4] = ::g::Uno::UX::Factory_typeof();
    ::TYPES[5] = ::g::Fuse::Node_typeof();
    ::TYPES[6] = ::g::Fuse::Behavior_typeof();
    ::TYPES[7] = uObject_typeof();
    type->SetFields(2,
        ::g::MainView_typeof(), offsetof(::g::MainView__Factory13, __parent1), 0,
        ::g::kal_FuseReactiveMatch_Value_Property_typeof(), offsetof(::g::MainView__Factory13, temp_Value_inst), 0);
    return type;
}

// public Factory13(MainView parent) :1639
void MainView__Factory13__ctor_1_fn(MainView__Factory13* __this, ::g::MainView* parent)
{
    __this->ctor_1(parent);
}

// public override sealed object New() :1754
void MainView__Factory13__New1_fn(MainView__Factory13* __this, uObject** __retval)
{
    ::g::Fuse::Controls::Panel* self = ::g::Fuse::Controls::Panel::New2();
    ::g::Fuse::Reactive::Match* temp = ::g::Fuse::Reactive::Match::New1();
    __this->temp_Value_inst = ::g::kal_FuseReactiveMatch_Value_Property::New1(temp);
    ::g::Fuse::Reactive::Case* temp1 = ::g::Fuse::Reactive::Case::New1();
    MainView__Factory13__Factory14* countryItem = MainView__Factory13__Factory14::New2(__this);
    ::g::Fuse::Reactive::DataBinding* temp2 = (::g::Fuse::Reactive::DataBinding*)::g::Fuse::Reactive::DataBinding::New1(::TYPES[0/*Fuse.Reactive.DataBinding<object>*/], __this->temp_Value_inst, ::STRINGS[0/*"status"*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp->Cases()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[3/*Fuse.Reactive.Case*/])), temp1);
    temp1->String(::STRINGS[1/*"SOON"*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp1->Factories()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[4/*Uno.UX.Factory*/])), countryItem);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(self->Behaviors()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[6/*Fuse.Behavior*/])), temp2);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(self->Behaviors()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[6/*Fuse.Behavior*/])), temp);
    return *__retval = self, void();
}

// public Factory13 New(MainView parent) :1639
void MainView__Factory13__New2_fn(::g::MainView* parent, MainView__Factory13** __retval)
{
    *__retval = MainView__Factory13::New2(parent);
}

// public Factory13(MainView parent) [instance] :1639
void MainView__Factory13::ctor_1(::g::MainView* parent)
{
    ctor_(NULL, false);
    __parent1 = parent;
}

// public Factory13 New(MainView parent) [static] :1639
MainView__Factory13* MainView__Factory13::New2(::g::MainView* parent)
{
    MainView__Factory13* obj1 = (MainView__Factory13*)uNew(MainView__Factory13_typeof());
    obj1->ctor_1(parent);
    return obj1;
}
// }

} // ::g