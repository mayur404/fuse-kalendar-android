// This file was generated based on '/Users/mayur404/Dropbox/Public/Little Boat/InHouse/BlackBerry/Kalendar/Priv/fuse/.uno/MainView.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.kal_FuseControlsPanel_Background_Property.h>
#include <_root.kal_FuseControlsText_Value_Property.h>
#include <_root.MainView.Factory9.Factory10.h>
#include <_root.MainView.Factory9.h>
#include <_root.MainView.h>
#include <Fuse.Animations.Animator.h>
#include <Fuse.Animations.Change-1.h>
#include <Fuse.Behavior.h>
#include <Fuse.Controls.Control.h>
#include <Fuse.Controls.Panel.h>
#include <Fuse.Controls.ParentControl.h>
#include <Fuse.Controls.Rectangle.h>
#include <Fuse.Controls.Shape.h>
#include <Fuse.Controls.Text.h>
#include <Fuse.Controls.TextControl.h>
#include <Fuse.Drawing.Brush.h>
#include <Fuse.Drawing.StaticSolidColor.h>
#include <Fuse.Elements.Alignment.h>
#include <Fuse.Elements.Element.h>
#include <Fuse.Elements.TextAlignment.h>
#include <Fuse.Font.h>
#include <Fuse.Gestures.DoubleClicked.h>
#include <Fuse.Gestures.WhilePressed.h>
#include <Fuse.Node.h>
#include <Fuse.NodeEventHandler.h>
#include <Fuse.Reactive.DataBinding-1.h>
#include <Fuse.Reactive.EventBinding.h>
#include <Fuse.Triggers.Actions.Callback.h>
#include <Fuse.Triggers.Actions.TriggerAction.h>
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
static uString* STRINGS[6];
static uType* TYPES[20];

namespace g{

// public partial sealed class MainView.Factory9.Factory10 :1332
// {
// static Factory10() :1345
static void MainView__Factory9__Factory10__cctor__fn(uType* __type)
{
}

::g::Uno::UX::Factory_type* MainView__Factory9__Factory10_typeof()
{
    static uSStrong< ::g::Uno::UX::Factory_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 8;
    options.ObjectSize = sizeof(MainView__Factory9__Factory10);
    options.TypeSize = sizeof(::g::Uno::UX::Factory_type);
    type = (::g::Uno::UX::Factory_type*)uClassType::New("MainView.Factory9.Factory10", options);
    type->SetBase(::g::Uno::UX::Factory_typeof());
    type->fp_cctor_ = MainView__Factory9__Factory10__cctor__fn;
    type->fp_New1 = (void(*)(::g::Uno::UX::Factory*, uObject**))MainView__Factory9__Factory10__New1_fn;
    ::STRINGS[0] = uString::Const("name");
    ::STRINGS[1] = uString::Const("title");
    ::STRINGS[2] = uString::Const("date");
    ::STRINGS[3] = uString::Const("daysTo");
    ::STRINGS[4] = uString::Const("addNativeEvent");
    ::STRINGS[5] = uString::Const("sportItem");
    ::TYPES[0] = ::g::Fuse::Reactive::DataBinding_typeof()->MakeType(::g::Uno::String_typeof());
    ::TYPES[1] = ::g::Uno::UX::Property_typeof()->MakeType(::g::Uno::String_typeof());
    ::TYPES[2] = ::g::Fuse::Animations::Change_typeof()->MakeType(::g::Fuse::Drawing::Brush_typeof());
    ::TYPES[3] = ::g::Uno::UX::Property_typeof()->MakeType(::g::Fuse::Drawing::Brush_typeof());
    ::TYPES[4] = ::g::Fuse::Elements::Element_typeof();
    ::TYPES[5] = ::g::Fuse::Node_typeof();
    ::TYPES[6] = ::g::Fuse::Controls::TextControl_typeof();
    ::TYPES[7] = ::g::MainView_typeof();
    ::TYPES[8] = ::g::Fuse::Behavior_typeof();
    ::TYPES[9] = ::g::Fuse::Controls::ParentControl_typeof();
    ::TYPES[10] = ::g::Fuse::Controls::Rectangle_typeof();
    ::TYPES[11] = ::g::Fuse::Controls::Shape_typeof();
    ::TYPES[12] = ::g::Fuse::Drawing::Brush_typeof();
    ::TYPES[13] = ::g::Fuse::Controls::Control_typeof();
    ::TYPES[14] = ::g::Fuse::Triggers::Trigger_typeof();
    ::TYPES[15] = ::g::Fuse::Animations::Animator_typeof();
    ::TYPES[16] = ::g::Fuse::Triggers::Actions::TriggerAction_typeof();
    ::TYPES[17] = ::g::Fuse::Triggers::Actions::Callback_typeof();
    ::TYPES[18] = ::g::Fuse::NodeEventHandler_typeof();
    ::TYPES[19] = uObject_typeof();
    type->SetFields(2,
        ::g::MainView__Factory9_typeof(), offsetof(::g::MainView__Factory9__Factory10, __parent1), 0,
        ::g::kal_FuseControlsPanel_Background_Property_typeof(), offsetof(::g::MainView__Factory9__Factory10, self_Background_inst), 0,
        ::g::kal_FuseControlsText_Value_Property_typeof(), offsetof(::g::MainView__Factory9__Factory10, temp_Value_inst), 0,
        ::g::kal_FuseControlsText_Value_Property_typeof(), offsetof(::g::MainView__Factory9__Factory10, temp1_Value_inst), 0,
        ::g::kal_FuseControlsText_Value_Property_typeof(), offsetof(::g::MainView__Factory9__Factory10, temp2_Value_inst), 0,
        ::g::kal_FuseControlsText_Value_Property_typeof(), offsetof(::g::MainView__Factory9__Factory10, temp3_Value_inst), 0);
    return type;
}

// public Factory10(MainView.Factory9 parent) :1335
void MainView__Factory9__Factory10__ctor_1_fn(MainView__Factory9__Factory10* __this, ::g::MainView__Factory9* parent)
{
    __this->ctor_1(parent);
}

// public override sealed object New() :1348
void MainView__Factory9__Factory10__New1_fn(MainView__Factory9__Factory10* __this, uObject** __retval)
{
    ::g::Fuse::Controls::Panel* self = ::g::Fuse::Controls::Panel::New2();
    ::g::Fuse::Controls::Text* temp = ::g::Fuse::Controls::Text::New2();
    __this->temp_Value_inst = ::g::kal_FuseControlsText_Value_Property::New1(temp);
    ::g::Fuse::Controls::Text* temp1 = ::g::Fuse::Controls::Text::New2();
    __this->temp1_Value_inst = ::g::kal_FuseControlsText_Value_Property::New1(temp1);
    ::g::Fuse::Controls::Text* temp2 = ::g::Fuse::Controls::Text::New2();
    __this->temp2_Value_inst = ::g::kal_FuseControlsText_Value_Property::New1(temp2);
    ::g::Fuse::Controls::Text* temp3 = ::g::Fuse::Controls::Text::New2();
    __this->temp3_Value_inst = ::g::kal_FuseControlsText_Value_Property::New1(temp3);
    __this->self_Background_inst = ::g::kal_FuseControlsPanel_Background_Property::New1(self);
    ::g::Fuse::Reactive::DataBinding* temp4 = (::g::Fuse::Reactive::DataBinding*)::g::Fuse::Reactive::DataBinding::New1(::TYPES[0/*Fuse.Reactive.DataBinding<string>*/], __this->temp_Value_inst, ::STRINGS[0/*"name"*/]);
    ::g::Fuse::Reactive::DataBinding* temp5 = (::g::Fuse::Reactive::DataBinding*)::g::Fuse::Reactive::DataBinding::New1(::TYPES[0/*Fuse.Reactive.DataBinding<string>*/], __this->temp1_Value_inst, ::STRINGS[1/*"title"*/]);
    ::g::Fuse::Reactive::DataBinding* temp6 = (::g::Fuse::Reactive::DataBinding*)::g::Fuse::Reactive::DataBinding::New1(::TYPES[0/*Fuse.Reactive.DataBinding<string>*/], __this->temp2_Value_inst, ::STRINGS[2/*"date"*/]);
    ::g::Fuse::Controls::Panel* temp7 = ::g::Fuse::Controls::Panel::New2();
    ::g::Fuse::Reactive::DataBinding* temp8 = (::g::Fuse::Reactive::DataBinding*)::g::Fuse::Reactive::DataBinding::New1(::TYPES[0/*Fuse.Reactive.DataBinding<string>*/], __this->temp3_Value_inst, ::STRINGS[3/*"daysTo"*/]);
    ::g::Fuse::Controls::Rectangle* temp9 = ::g::Fuse::Controls::Rectangle::New3();
    ::g::Fuse::Drawing::StaticSolidColor* temp10 = ::g::Fuse::Drawing::StaticSolidColor::New1(::g::Uno::Float4__New2(0.2980392f, 0.7372549f, 0.4039216f, 1.0f));
    ::g::Fuse::Controls::Rectangle* temp11 = ::g::Fuse::Controls::Rectangle::New3();
    ::g::Fuse::Drawing::StaticSolidColor* temp12 = ::g::Fuse::Drawing::StaticSolidColor::New1(::g::Uno::Float4__New2(0.9019608f, 0.9019608f, 0.9019608f, 1.0f));
    ::g::Fuse::Gestures::WhilePressed* temp13 = ::g::Fuse::Gestures::WhilePressed::New1();
    ::g::Fuse::Animations::Change* temp14 = (::g::Fuse::Animations::Change*)::g::Fuse::Animations::Change::New1(::TYPES[2/*Fuse.Animations.Change<Fuse.Drawing.Brush>*/], __this->self_Background_inst);
    ::g::Fuse::Drawing::StaticSolidColor* temp15 = ::g::Fuse::Drawing::StaticSolidColor::New1(::g::Uno::Float4__New2(0.9019608f, 0.9019608f, 0.9019608f, 1.0f));
    ::g::Fuse::Gestures::DoubleClicked* temp16 = ::g::Fuse::Gestures::DoubleClicked::New1();
    ::g::Fuse::Triggers::Actions::Callback* temp17 = ::g::Fuse::Triggers::Actions::Callback::New1();
    ::g::Fuse::Drawing::StaticSolidColor* temp18 = ::g::Fuse::Drawing::StaticSolidColor::New1(::g::Uno::Float4__New2(0.9607843f, 0.9607843f, 0.9607843f, 1.0f));
    ::g::Fuse::Reactive::EventBinding* temp_eb91 = ::g::Fuse::Reactive::EventBinding::New1(::STRINGS[4/*"addNativeEv...*/]);
    self->Height(::g::Uno::UX::Size__New1(130.0f, 0));
    self->Margin(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 0.0f));
    self->Name(::STRINGS[5/*"sportItem"*/]);
    temp->FontSize(15.0f);
    temp->TextAlignment(0);
    temp->TextColor(::g::Uno::Float4__New2(0.1294118f, 0.1294118f, 0.1294118f, 1.0f));
    temp->Alignment(5);
    temp->Padding(::g::Uno::Float4__New2(20.0f, 40.0f, 90.0f, 0.0f));
    temp->Font(::g::MainView::gMedium());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp->Behaviors()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[8/*Fuse.Behavior*/])), temp4);
    temp1->FontSize(14.0f);
    temp1->TextAlignment(0);
    temp1->TextColor(::g::Uno::Float4__New2(0.1294118f, 0.1294118f, 0.1294118f, 1.0f));
    temp1->Alignment(5);
    temp1->Padding(::g::Uno::Float4__New2(20.0f, 70.0f, 20.0f, 0.0f));
    temp1->Opacity(0.5f);
    temp1->Font(::g::MainView::gMedium());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp1->Behaviors()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[8/*Fuse.Behavior*/])), temp5);
    temp2->FontSize(14.0f);
    temp2->TextAlignment(0);
    temp2->TextColor(::g::Uno::Float4__New2(0.1294118f, 0.1294118f, 0.1294118f, 1.0f));
    temp2->Alignment(5);
    temp2->Padding(::g::Uno::Float4__New2(20.0f, 100.0f, 0.0f, 0.0f));
    temp2->Opacity(0.8f);
    temp2->Font(::g::MainView::gMedium());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp2->Behaviors()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[8/*Fuse.Behavior*/])), temp6);
    temp7->Width(::g::Uno::UX::Size__New1(65.0f, 0));
    temp7->Height(::g::Uno::UX::Size__New1(25.0f, 0));
    temp7->Alignment(7);
    temp7->Margin(::g::Uno::Float4__New2(0.0f, 35.0f, 20.0f, 0.0f));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp7->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[5/*Fuse.Node*/])), temp3);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp7->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[5/*Fuse.Node*/])), temp9);
    temp3->FontSize(10.0f);
    temp3->TextAlignment(1);
    temp3->TextColor(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f));
    temp3->Alignment(8);
    temp3->Opacity(0.9f);
    temp3->Font(::g::MainView::gBold());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp3->Behaviors()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[8/*Fuse.Behavior*/])), temp8);
    temp9->CornerRadius(::g::Uno::Float4__New2(100.0f, 100.0f, 100.0f, 100.0f));
    temp9->Width(::g::Uno::UX::Size__New1(100.0f, 3));
    temp9->Height(::g::Uno::UX::Size__New1(100.0f, 3));
    temp9->Fill(temp10);
    temp11->Width(::g::Uno::UX::Size__New1(100.0f, 3));
    temp11->Height(::g::Uno::UX::Size__New1(1.0f, 0));
    temp11->Alignment(12);
    temp11->Background(temp12);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp13->Animators()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[15/*Fuse.Animations.Animator*/])), temp14);
    ::g::Fuse::Animations::Change__set_Value_fn(temp14, temp15);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp16->Actions()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[16/*Fuse.Triggers.Actions.TriggerAction*/])), temp17);
    temp17->add_Handler(uDelegate::New(::TYPES[18/*Fuse.NodeEventHandler*/], (void*)::g::Fuse::Reactive::EventBinding__OnEvent_fn, temp_eb91));
    self->Background(temp18);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(self->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[5/*Fuse.Node*/])), temp);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(self->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[5/*Fuse.Node*/])), temp1);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(self->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[5/*Fuse.Node*/])), temp2);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(self->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[5/*Fuse.Node*/])), temp7);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(self->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[5/*Fuse.Node*/])), temp11);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(self->Behaviors()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[8/*Fuse.Behavior*/])), temp_eb91);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(self->Behaviors()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[8/*Fuse.Behavior*/])), temp13);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(self->Behaviors()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[8/*Fuse.Behavior*/])), temp16);
    return *__retval = self, void();
}

// public Factory10 New(MainView.Factory9 parent) :1335
void MainView__Factory9__Factory10__New2_fn(::g::MainView__Factory9* parent, MainView__Factory9__Factory10** __retval)
{
    *__retval = MainView__Factory9__Factory10::New2(parent);
}

// public Factory10(MainView.Factory9 parent) [instance] :1335
void MainView__Factory9__Factory10::ctor_1(::g::MainView__Factory9* parent)
{
    ctor_(NULL, false);
    __parent1 = parent;
}

// public Factory10 New(MainView.Factory9 parent) [static] :1335
MainView__Factory9__Factory10* MainView__Factory9__Factory10::New2(::g::MainView__Factory9* parent)
{
    MainView__Factory9__Factory10* obj1 = (MainView__Factory9__Factory10*)uNew(MainView__Factory9__Factory10_typeof());
    obj1->ctor_1(parent);
    return obj1;
}
// }

} // ::g
