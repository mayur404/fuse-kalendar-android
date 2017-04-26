// This file was generated based on '/Users/mayur404/Dropbox/Public/Little Boat/InHouse/BlackBerry/Kalendar/Priv/fuse/.uno/MainView.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.kal_FuseControlsPanel_Background_Property.h>
#include <_root.kal_FuseControlsText_Value_Property.h>
#include <_root.kal_FuseReactiveMatch_Value_Property.h>
#include <_root.kal_FuseTriggersStateGroup_Active_Property.h>
#include <_root.MainView.Factory8.Factory10.h>
#include <_root.MainView.Factory8.Factory11.h>
#include <_root.MainView.Factory8.Factory9.h>
#include <_root.MainView.Factory8.h>
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
#include <Fuse.Reactive.Case.h>
#include <Fuse.Reactive.DataBinding-1.h>
#include <Fuse.Reactive.EventBinding.h>
#include <Fuse.Reactive.Match.h>
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
static uString* STRINGS[8];
static uType* TYPES[25];

namespace g{

// public partial sealed class MainView.Factory8 :1122
// {
// static Factory8() :1243
static void MainView__Factory8__cctor__fn(uType* __type)
{
}

::g::Uno::UX::Factory_type* MainView__Factory8_typeof()
{
    static uSStrong< ::g::Uno::UX::Factory_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 8;
    options.ObjectSize = sizeof(MainView__Factory8);
    options.TypeSize = sizeof(::g::Uno::UX::Factory_type);
    type = (::g::Uno::UX::Factory_type*)uClassType::New("MainView.Factory8", options);
    type->SetBase(::g::Uno::UX::Factory_typeof());
    type->fp_cctor_ = MainView__Factory8__cctor__fn;
    type->fp_New1 = (void(*)(::g::Uno::UX::Factory*, uObject**))MainView__Factory8__New1_fn;
    ::STRINGS[0] = uString::Const("name");
    ::STRINGS[1] = uString::Const("sport");
    ::STRINGS[2] = uString::Const("status");
    ::STRINGS[3] = uString::Const("sportListHandler");
    ::STRINGS[4] = uString::Const("sportItem");
    ::STRINGS[5] = uString::Const("PAST");
    ::STRINGS[6] = uString::Const("LATER");
    ::STRINGS[7] = uString::Const("LIVE");
    ::TYPES[0] = ::g::MainView_typeof();
    ::TYPES[1] = ::g::Fuse::Reactive::DataBinding_typeof()->MakeType(::g::Uno::String_typeof());
    ::TYPES[2] = ::g::Uno::UX::Property_typeof()->MakeType(::g::Uno::String_typeof());
    ::TYPES[3] = ::g::Fuse::Animations::Change_typeof()->MakeType(::g::Fuse::Drawing::Brush_typeof());
    ::TYPES[4] = ::g::Uno::UX::Property_typeof()->MakeType(::g::Fuse::Drawing::Brush_typeof());
    ::TYPES[5] = ::g::Fuse::Triggers::Actions::Set_typeof()->MakeType(::g::Fuse::Triggers::State_typeof());
    ::TYPES[6] = ::g::Uno::UX::Property_typeof()->MakeType(::g::Fuse::Triggers::State_typeof());
    ::TYPES[7] = ::g::Fuse::Reactive::DataBinding_typeof()->MakeType(uObject_typeof());
    ::TYPES[8] = ::g::Uno::UX::Property_typeof()->MakeType(uObject_typeof());
    ::TYPES[9] = ::g::Fuse::Elements::Element_typeof();
    ::TYPES[10] = ::g::Fuse::Node_typeof();
    ::TYPES[11] = ::g::Fuse::Controls::TextControl_typeof();
    ::TYPES[12] = ::g::Fuse::Behavior_typeof();
    ::TYPES[13] = ::g::Fuse::Reactive::Match_typeof();
    ::TYPES[14] = ::g::Fuse::Reactive::Case_typeof();
    ::TYPES[15] = ::g::Uno::UX::Factory_typeof();
    ::TYPES[16] = ::g::Fuse::Controls::Control_typeof();
    ::TYPES[17] = ::g::Fuse::Drawing::Brush_typeof();
    ::TYPES[18] = ::g::Fuse::Triggers::Trigger_typeof();
    ::TYPES[19] = ::g::Fuse::Animations::Animator_typeof();
    ::TYPES[20] = ::g::Fuse::Triggers::Actions::TriggerAction_typeof();
    ::TYPES[21] = ::g::Fuse::Triggers::Actions::Callback_typeof();
    ::TYPES[22] = ::g::Fuse::NodeEventHandler_typeof();
    ::TYPES[23] = ::g::Fuse::Controls::ParentControl_typeof();
    ::TYPES[24] = uObject_typeof();
    type->SetFields(2,
        ::g::MainView_typeof(), offsetof(::g::MainView__Factory8, __parent1), 0,
        ::g::kal_FuseControlsPanel_Background_Property_typeof(), offsetof(::g::MainView__Factory8, self_Background_inst), 0,
        ::g::kal_FuseTriggersStateGroup_Active_Property_typeof(), offsetof(::g::MainView__Factory8, stateGroupSport_Active_inst), 0,
        ::g::kal_FuseControlsText_Value_Property_typeof(), offsetof(::g::MainView__Factory8, temp_Value_inst), 0,
        ::g::kal_FuseControlsText_Value_Property_typeof(), offsetof(::g::MainView__Factory8, temp1_Value_inst), 0,
        ::g::kal_FuseReactiveMatch_Value_Property_typeof(), offsetof(::g::MainView__Factory8, temp2_Value_inst), 0);
    return type;
}

// public Factory8(MainView parent) :1125
void MainView__Factory8__ctor_1_fn(MainView__Factory8* __this, ::g::MainView* parent)
{
    __this->ctor_1(parent);
}

// public override sealed object New() :1246
void MainView__Factory8__New1_fn(MainView__Factory8* __this, uObject** __retval)
{
    ::g::Fuse::Controls::Panel* self = ::g::Fuse::Controls::Panel::New2();
    ::g::Fuse::Controls::Text* temp = ::g::Fuse::Controls::Text::New2();
    __this->temp_Value_inst = ::g::kal_FuseControlsText_Value_Property::New1(temp);
    ::g::Fuse::Controls::Text* temp1 = ::g::Fuse::Controls::Text::New2();
    __this->temp1_Value_inst = ::g::kal_FuseControlsText_Value_Property::New1(temp1);
    __this->self_Background_inst = ::g::kal_FuseControlsPanel_Background_Property::New1(self);
    __this->stateGroupSport_Active_inst = ::g::kal_FuseTriggersStateGroup_Active_Property::New1(uPtr(__this->__parent1)->stateGroupSport);
    ::g::Fuse::Reactive::Match* temp2 = ::g::Fuse::Reactive::Match::New1();
    __this->temp2_Value_inst = ::g::kal_FuseReactiveMatch_Value_Property::New1(temp2);
    ::g::Fuse::Reactive::DataBinding* temp3 = (::g::Fuse::Reactive::DataBinding*)::g::Fuse::Reactive::DataBinding::New1(::TYPES[1/*Fuse.Reactive.DataBinding<string>*/], __this->temp_Value_inst, ::STRINGS[0/*"name"*/]);
    ::g::Fuse::Reactive::DataBinding* temp4 = (::g::Fuse::Reactive::DataBinding*)::g::Fuse::Reactive::DataBinding::New1(::TYPES[1/*Fuse.Reactive.DataBinding<string>*/], __this->temp1_Value_inst, ::STRINGS[1/*"sport"*/]);
    ::g::Fuse::Reactive::Case* temp5 = ::g::Fuse::Reactive::Case::New1();
    MainView__Factory8__Factory9* temp6 = MainView__Factory8__Factory9::New2(__this);
    ::g::Fuse::Reactive::Case* temp7 = ::g::Fuse::Reactive::Case::New1();
    MainView__Factory8__Factory10* temp8 = MainView__Factory8__Factory10::New2(__this);
    ::g::Fuse::Reactive::Case* temp9 = ::g::Fuse::Reactive::Case::New1();
    MainView__Factory8__Factory11* temp10 = MainView__Factory8__Factory11::New2(__this);
    ::g::Fuse::Controls::Rectangle* temp11 = ::g::Fuse::Controls::Rectangle::New3();
    ::g::Fuse::Drawing::StaticSolidColor* temp12 = ::g::Fuse::Drawing::StaticSolidColor::New1(::g::Uno::Float4__New2(0.9019608f, 0.9019608f, 0.9019608f, 1.0f));
    ::g::Fuse::Gestures::WhilePressed* temp13 = ::g::Fuse::Gestures::WhilePressed::New1();
    ::g::Fuse::Animations::Change* temp14 = (::g::Fuse::Animations::Change*)::g::Fuse::Animations::Change::New1(::TYPES[3/*Fuse.Animations.Change<Fuse.Drawing.Brush>*/], __this->self_Background_inst);
    ::g::Fuse::Drawing::StaticSolidColor* temp15 = ::g::Fuse::Drawing::StaticSolidColor::New1(::g::Uno::Float4__New2(0.9019608f, 0.9019608f, 0.9019608f, 1.0f));
    ::g::Fuse::Gestures::Clicked* temp16 = ::g::Fuse::Gestures::Clicked::New1();
    ::g::Fuse::Triggers::Actions::Callback* temp17 = ::g::Fuse::Triggers::Actions::Callback::New1();
    ::g::Fuse::Triggers::Actions::Set* temp18 = (::g::Fuse::Triggers::Actions::Set*)::g::Fuse::Triggers::Actions::Set::New1(::TYPES[5/*Fuse.Triggers.Actions.Set<Fuse.Triggers.State>*/], __this->stateGroupSport_Active_inst);
    ::g::Fuse::Reactive::DataBinding* temp19 = (::g::Fuse::Reactive::DataBinding*)::g::Fuse::Reactive::DataBinding::New1(::TYPES[7/*Fuse.Reactive.DataBinding<object>*/], __this->temp2_Value_inst, ::STRINGS[2/*"status"*/]);
    ::g::Fuse::Drawing::StaticSolidColor* temp20 = ::g::Fuse::Drawing::StaticSolidColor::New1(::g::Uno::Float4__New2(0.9607843f, 0.9607843f, 0.9607843f, 1.0f));
    ::g::Fuse::Reactive::EventBinding* temp_eb71 = ::g::Fuse::Reactive::EventBinding::New1(::STRINGS[3/*"sportListHa...*/]);
    self->Height(::g::Uno::UX::Size__New1(110.0f, 0));
    self->Margin(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 0.0f));
    self->Name(::STRINGS[4/*"sportItem"*/]);
    temp->FontSize(15.0f);
    temp->TextAlignment(0);
    temp->TextColor(::g::Uno::Float4__New2(0.1294118f, 0.1294118f, 0.1294118f, 1.0f));
    temp->Alignment(5);
    temp->Padding(::g::Uno::Float4__New2(20.0f, 40.0f, 90.0f, 0.0f));
    temp->Font(::g::MainView::gMedium());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp->Behaviors()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[12/*Fuse.Behavior*/])), temp3);
    temp1->FontSize(14.0f);
    temp1->TextAlignment(0);
    temp1->TextColor(::g::Uno::Float4__New2(0.1294118f, 0.1294118f, 0.1294118f, 1.0f));
    temp1->Alignment(5);
    temp1->Padding(::g::Uno::Float4__New2(20.0f, 70.0f, 0.0f, 0.0f));
    temp1->Opacity(0.5f);
    temp1->Font(::g::MainView::gMedium());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp1->Behaviors()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[12/*Fuse.Behavior*/])), temp4);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp2->Cases()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[14/*Fuse.Reactive.Case*/])), temp5);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp2->Cases()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[14/*Fuse.Reactive.Case*/])), temp7);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp2->Cases()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[14/*Fuse.Reactive.Case*/])), temp9);
    temp5->String(::STRINGS[5/*"PAST"*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp5->Factories()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[15/*Uno.UX.Factory*/])), temp6);
    temp7->String(::STRINGS[6/*"LATER"*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp7->Factories()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[15/*Uno.UX.Factory*/])), temp8);
    temp9->String(::STRINGS[7/*"LIVE"*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp9->Factories()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[15/*Uno.UX.Factory*/])), temp10);
    temp11->Width(::g::Uno::UX::Size__New1(100.0f, 3));
    temp11->Height(::g::Uno::UX::Size__New1(1.0f, 0));
    temp11->Alignment(12);
    temp11->Background(temp12);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp13->Animators()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[19/*Fuse.Animations.Animator*/])), temp14);
    ::g::Fuse::Animations::Change__set_Value_fn(temp14, temp15);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp16->Actions()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[20/*Fuse.Triggers.Actions.TriggerAction*/])), temp17);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp16->Actions()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[20/*Fuse.Triggers.Actions.TriggerAction*/])), temp18);
    temp17->add_Handler(uDelegate::New(::TYPES[22/*Fuse.NodeEventHandler*/], (void*)::g::Fuse::Reactive::EventBinding__OnEvent_fn, temp_eb71));
    ::g::Fuse::Triggers::Actions::Set__set_Value_fn(temp18, uPtr(__this->__parent1)->sportL2);
    self->Background(temp20);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(self->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[10/*Fuse.Node*/])), temp);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(self->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[10/*Fuse.Node*/])), temp1);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(self->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[10/*Fuse.Node*/])), temp11);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(self->Behaviors()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[12/*Fuse.Behavior*/])), temp19);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(self->Behaviors()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[12/*Fuse.Behavior*/])), temp_eb71);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(self->Behaviors()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[12/*Fuse.Behavior*/])), temp2);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(self->Behaviors()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[12/*Fuse.Behavior*/])), temp13);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(self->Behaviors()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[12/*Fuse.Behavior*/])), temp16);
    return *__retval = self, void();
}

// public Factory8 New(MainView parent) :1125
void MainView__Factory8__New2_fn(::g::MainView* parent, MainView__Factory8** __retval)
{
    *__retval = MainView__Factory8::New2(parent);
}

// public Factory8(MainView parent) [instance] :1125
void MainView__Factory8::ctor_1(::g::MainView* parent)
{
    ctor_(NULL, false);
    __parent1 = parent;
}

// public Factory8 New(MainView parent) [static] :1125
MainView__Factory8* MainView__Factory8::New2(::g::MainView* parent)
{
    MainView__Factory8* obj1 = (MainView__Factory8*)uNew(MainView__Factory8_typeof());
    obj1->ctor_1(parent);
    return obj1;
}
// }

} // ::g
