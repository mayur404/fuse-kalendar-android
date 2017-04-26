// This file was generated based on '/Users/mayur404/Dropbox/Public/Little Boat/InHouse/BlackBerry/Kalendar/Priv/fuse/.uno/MainView.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.kal_FuseControlsPanel_Background_Property.h>
#include <_root.kal_FuseControlsText_Value_Property.h>
#include <_root.kal_FuseTriggersStateGroup_Active_Property.h>
#include <_root.MainView.Factory12.h>
#include <_root.MainView.h>
#include <Fuse.Animations.Animator.h>
#include <Fuse.Animations.Change-1.h>
#include <Fuse.Behavior.h>
#include <Fuse.Controls.Control.h>
#include <Fuse.Controls.Panel.h>
#include <Fuse.Controls.ParentControl.h>
#include <Fuse.Controls.Rectangle.h>
#include <Fuse.Controls.Text.h>
#include <Fuse.Controls.TextControl.h>
#include <Fuse.Drawing.Brush.h>
#include <Fuse.Drawing.StaticSolidColor.h>
#include <Fuse.Elements.Alignment.h>
#include <Fuse.Elements.Element.h>
#include <Fuse.Elements.TextAlignment.h>
#include <Fuse.Font.h>
#include <Fuse.Gestures.Clicked.h>
#include <Fuse.Gestures.WhilePressed.h>
#include <Fuse.Node.h>
#include <Fuse.NodeEventHandler.h>
#include <Fuse.Reactive.DataBinding-1.h>
#include <Fuse.Reactive.EventBinding.h>
#include <Fuse.Triggers.Actions.Callback.h>
#include <Fuse.Triggers.Actions.Set-1.h>
#include <Fuse.Triggers.Actions.TriggerAction.h>
#include <Fuse.Triggers.State.h>
#include <Fuse.Triggers.StateGroup.h>
#include <Fuse.Triggers.Trigger.h>
#include <Uno.Bool.h>
#include <Uno.Collections.ICollection-1.h>
#include <Uno.Collections.IList-1.h>
#include <Uno.Float.h>
#include <Uno.Float4.h>
#include <Uno.Object.h>
#include <Uno.String.h>
#include <Uno.UX.Property-1.h>
#include <Uno.UX.Size.h>
#include <Uno.UX.Unit.h>
static uString* STRINGS[3];
static uType* TYPES[20];

namespace g{

// public partial sealed class MainView.Factory12 :1575
// {
// static Factory12() :1586
static void MainView__Factory12__cctor__fn(uType* __type)
{
}

::g::Uno::UX::Factory_type* MainView__Factory12_typeof()
{
    static uSStrong< ::g::Uno::UX::Factory_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 6;
    options.ObjectSize = sizeof(MainView__Factory12);
    options.TypeSize = sizeof(::g::Uno::UX::Factory_type);
    type = (::g::Uno::UX::Factory_type*)uClassType::New("MainView.Factory12", options);
    type->SetBase(::g::Uno::UX::Factory_typeof());
    type->fp_cctor_ = MainView__Factory12__cctor__fn;
    type->fp_New1 = (void(*)(::g::Uno::UX::Factory*, uObject**))MainView__Factory12__New1_fn;
    ::STRINGS[0] = uString::Const("name");
    ::STRINGS[1] = uString::Const("countryListHandler");
    ::STRINGS[2] = uString::Const("countryItem");
    ::TYPES[0] = ::g::MainView_typeof();
    ::TYPES[1] = ::g::Fuse::Reactive::DataBinding_typeof()->MakeType(::g::Uno::String_typeof());
    ::TYPES[2] = ::g::Uno::UX::Property_typeof()->MakeType(::g::Uno::String_typeof());
    ::TYPES[3] = ::g::Fuse::Animations::Change_typeof()->MakeType(::g::Fuse::Drawing::Brush_typeof());
    ::TYPES[4] = ::g::Uno::UX::Property_typeof()->MakeType(::g::Fuse::Drawing::Brush_typeof());
    ::TYPES[5] = ::g::Fuse::Triggers::Actions::Set_typeof()->MakeType(::g::Fuse::Triggers::State_typeof());
    ::TYPES[6] = ::g::Uno::UX::Property_typeof()->MakeType(::g::Fuse::Triggers::State_typeof());
    ::TYPES[7] = ::g::Fuse::Elements::Element_typeof();
    ::TYPES[8] = ::g::Fuse::Node_typeof();
    ::TYPES[9] = ::g::Fuse::Controls::TextControl_typeof();
    ::TYPES[10] = ::g::Fuse::Behavior_typeof();
    ::TYPES[11] = ::g::Fuse::Controls::Control_typeof();
    ::TYPES[12] = ::g::Fuse::Drawing::Brush_typeof();
    ::TYPES[13] = ::g::Fuse::Triggers::Trigger_typeof();
    ::TYPES[14] = ::g::Fuse::Animations::Animator_typeof();
    ::TYPES[15] = ::g::Fuse::Triggers::Actions::TriggerAction_typeof();
    ::TYPES[16] = ::g::Fuse::Triggers::Actions::Callback_typeof();
    ::TYPES[17] = ::g::Fuse::NodeEventHandler_typeof();
    ::TYPES[18] = ::g::Fuse::Controls::ParentControl_typeof();
    ::TYPES[19] = uObject_typeof();
    type->SetFields(2,
        ::g::MainView_typeof(), offsetof(::g::MainView__Factory12, __parent1), 0,
        ::g::kal_FuseControlsPanel_Background_Property_typeof(), offsetof(::g::MainView__Factory12, self_Background_inst), 0,
        ::g::kal_FuseTriggersStateGroup_Active_Property_typeof(), offsetof(::g::MainView__Factory12, stateGroupCountry_Active_inst), 0,
        ::g::kal_FuseControlsText_Value_Property_typeof(), offsetof(::g::MainView__Factory12, temp_Value_inst), 0);
    return type;
}

// public Factory12(MainView parent) :1578
void MainView__Factory12__ctor_1_fn(MainView__Factory12* __this, ::g::MainView* parent)
{
    __this->ctor_1(parent);
}

// public override sealed object New() :1589
void MainView__Factory12__New1_fn(MainView__Factory12* __this, uObject** __retval)
{
    ::g::Fuse::Controls::Panel* self = ::g::Fuse::Controls::Panel::New2();
    ::g::Fuse::Controls::Text* temp = ::g::Fuse::Controls::Text::New2();
    __this->temp_Value_inst = ::g::kal_FuseControlsText_Value_Property::New1(temp);
    __this->self_Background_inst = ::g::kal_FuseControlsPanel_Background_Property::New1(self);
    __this->stateGroupCountry_Active_inst = ::g::kal_FuseTriggersStateGroup_Active_Property::New1(uPtr(__this->__parent1)->stateGroupCountry);
    ::g::Fuse::Reactive::DataBinding* temp1 = (::g::Fuse::Reactive::DataBinding*)::g::Fuse::Reactive::DataBinding::New1(::TYPES[1/*Fuse.Reactive.DataBinding<string>*/], __this->temp_Value_inst, ::STRINGS[0/*"name"*/]);
    ::g::Fuse::Controls::Rectangle* temp2 = ::g::Fuse::Controls::Rectangle::New3();
    ::g::Fuse::Drawing::StaticSolidColor* temp3 = ::g::Fuse::Drawing::StaticSolidColor::New1(::g::Uno::Float4__New2(0.9019608f, 0.9019608f, 0.9019608f, 1.0f));
    ::g::Fuse::Gestures::WhilePressed* temp4 = ::g::Fuse::Gestures::WhilePressed::New1();
    ::g::Fuse::Animations::Change* temp5 = (::g::Fuse::Animations::Change*)::g::Fuse::Animations::Change::New1(::TYPES[3/*Fuse.Animations.Change<Fuse.Drawing.Brush>*/], __this->self_Background_inst);
    ::g::Fuse::Drawing::StaticSolidColor* temp6 = ::g::Fuse::Drawing::StaticSolidColor::New1(::g::Uno::Float4__New2(0.9019608f, 0.9019608f, 0.9019608f, 1.0f));
    ::g::Fuse::Gestures::Clicked* temp7 = ::g::Fuse::Gestures::Clicked::New1();
    ::g::Fuse::Triggers::Actions::Callback* temp8 = ::g::Fuse::Triggers::Actions::Callback::New1();
    ::g::Fuse::Triggers::Actions::Set* temp9 = (::g::Fuse::Triggers::Actions::Set*)::g::Fuse::Triggers::Actions::Set::New1(::TYPES[5/*Fuse.Triggers.Actions.Set<Fuse.Triggers.State>*/], __this->stateGroupCountry_Active_inst);
    ::g::Fuse::Drawing::StaticSolidColor* temp10 = ::g::Fuse::Drawing::StaticSolidColor::New1(::g::Uno::Float4__New2(0.9607843f, 0.9607843f, 0.9607843f, 1.0f));
    ::g::Fuse::Reactive::EventBinding* temp_eb121 = ::g::Fuse::Reactive::EventBinding::New1(::STRINGS[1/*"countryList...*/]);
    self->Height(::g::Uno::UX::Size__New1(80.0f, 0));
    self->Margin(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 0.0f));
    self->Name(::STRINGS[2/*"countryItem"*/]);
    temp->FontSize(15.0f);
    temp->TextAlignment(0);
    temp->TextColor(::g::Uno::Float4__New2(0.1294118f, 0.1294118f, 0.1294118f, 1.0f));
    temp->Alignment(5);
    temp->Padding(::g::Uno::Float4__New2(20.0f, 40.0f, 90.0f, 20.0f));
    temp->Font(::g::MainView::gMedium());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp->Behaviors()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[10/*Fuse.Behavior*/])), temp1);
    temp2->Width(::g::Uno::UX::Size__New1(100.0f, 3));
    temp2->Height(::g::Uno::UX::Size__New1(1.0f, 0));
    temp2->Alignment(12);
    temp2->Background(temp3);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp4->Animators()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[14/*Fuse.Animations.Animator*/])), temp5);
    ::g::Fuse::Animations::Change__set_Value_fn(temp5, temp6);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp7->Actions()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[15/*Fuse.Triggers.Actions.TriggerAction*/])), temp8);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp7->Actions()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[15/*Fuse.Triggers.Actions.TriggerAction*/])), temp9);
    temp8->add_Handler(uDelegate::New(::TYPES[17/*Fuse.NodeEventHandler*/], (void*)::g::Fuse::Reactive::EventBinding__OnEvent_fn, temp_eb121));
    ::g::Fuse::Triggers::Actions::Set__set_Value_fn(temp9, uPtr(__this->__parent1)->countryL2);
    self->Background(temp10);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(self->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[8/*Fuse.Node*/])), temp);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(self->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[8/*Fuse.Node*/])), temp2);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(self->Behaviors()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[10/*Fuse.Behavior*/])), temp_eb121);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(self->Behaviors()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[10/*Fuse.Behavior*/])), temp4);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(self->Behaviors()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[10/*Fuse.Behavior*/])), temp7);
    return *__retval = self, void();
}

// public Factory12 New(MainView parent) :1578
void MainView__Factory12__New2_fn(::g::MainView* parent, MainView__Factory12** __retval)
{
    *__retval = MainView__Factory12::New2(parent);
}

// public Factory12(MainView parent) [instance] :1578
void MainView__Factory12::ctor_1(::g::MainView* parent)
{
    ctor_(NULL, false);
    __parent1 = parent;
}

// public Factory12 New(MainView parent) [static] :1578
MainView__Factory12* MainView__Factory12::New2(::g::MainView* parent)
{
    MainView__Factory12* obj1 = (MainView__Factory12*)uNew(MainView__Factory12_typeof());
    obj1->ctor_1(parent);
    return obj1;
}
// }

} // ::g
