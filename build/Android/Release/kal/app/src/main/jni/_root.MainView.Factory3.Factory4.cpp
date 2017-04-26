// This file was generated based on '/Users/mayur404/Dropbox/Public/Little Boat/InHouse/BlackBerry/Kalendar/Priv/fuse/.uno/MainView.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.kal_FuseControlsPanel_Background_Property.h>
#include <_root.kal_FuseControlsText_Value_Property.h>
#include <_root.MainView.Factory3.Factory4.h>
#include <_root.MainView.Factory3.h>
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
static uString* STRINGS[5];
static uType* TYPES[20];

namespace g{

// public partial sealed class MainView.Factory3.Factory4 :530
// {
// static Factory4() :542
static void MainView__Factory3__Factory4__cctor__fn(uType* __type)
{
}

::g::Uno::UX::Factory_type* MainView__Factory3__Factory4_typeof()
{
    static uSStrong< ::g::Uno::UX::Factory_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 7;
    options.ObjectSize = sizeof(MainView__Factory3__Factory4);
    options.TypeSize = sizeof(::g::Uno::UX::Factory_type);
    type = (::g::Uno::UX::Factory_type*)uClassType::New("MainView.Factory3.Factory4", options);
    type->SetBase(::g::Uno::UX::Factory_typeof());
    type->fp_cctor_ = MainView__Factory3__Factory4__cctor__fn;
    type->fp_New1 = (void(*)(::g::Uno::UX::Factory*, uObject**))MainView__Factory3__Factory4__New1_fn;
    ::STRINGS[0] = uString::Const("name");
    ::STRINGS[1] = uString::Const("date");
    ::STRINGS[2] = uString::Const("daysTo");
    ::STRINGS[3] = uString::Const("addNativeEvent");
    ::STRINGS[4] = uString::Const("movieItem");
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
        ::g::MainView__Factory3_typeof(), offsetof(::g::MainView__Factory3__Factory4, __parent1), 0,
        ::g::kal_FuseControlsPanel_Background_Property_typeof(), offsetof(::g::MainView__Factory3__Factory4, self_Background_inst), 0,
        ::g::kal_FuseControlsText_Value_Property_typeof(), offsetof(::g::MainView__Factory3__Factory4, temp_Value_inst), 0,
        ::g::kal_FuseControlsText_Value_Property_typeof(), offsetof(::g::MainView__Factory3__Factory4, temp1_Value_inst), 0,
        ::g::kal_FuseControlsText_Value_Property_typeof(), offsetof(::g::MainView__Factory3__Factory4, temp2_Value_inst), 0);
    return type;
}

// public Factory4(MainView.Factory3 parent) :533
void MainView__Factory3__Factory4__ctor_1_fn(MainView__Factory3__Factory4* __this, ::g::MainView__Factory3* parent)
{
    __this->ctor_1(parent);
}

// public override sealed object New() :545
void MainView__Factory3__Factory4__New1_fn(MainView__Factory3__Factory4* __this, uObject** __retval)
{
    ::g::Fuse::Controls::Panel* self = ::g::Fuse::Controls::Panel::New2();
    ::g::Fuse::Controls::Text* temp = ::g::Fuse::Controls::Text::New2();
    __this->temp_Value_inst = ::g::kal_FuseControlsText_Value_Property::New1(temp);
    ::g::Fuse::Controls::Text* temp1 = ::g::Fuse::Controls::Text::New2();
    __this->temp1_Value_inst = ::g::kal_FuseControlsText_Value_Property::New1(temp1);
    ::g::Fuse::Controls::Text* temp2 = ::g::Fuse::Controls::Text::New2();
    __this->temp2_Value_inst = ::g::kal_FuseControlsText_Value_Property::New1(temp2);
    __this->self_Background_inst = ::g::kal_FuseControlsPanel_Background_Property::New1(self);
    ::g::Fuse::Reactive::DataBinding* temp3 = (::g::Fuse::Reactive::DataBinding*)::g::Fuse::Reactive::DataBinding::New1(::TYPES[0/*Fuse.Reactive.DataBinding<string>*/], __this->temp_Value_inst, ::STRINGS[0/*"name"*/]);
    ::g::Fuse::Reactive::DataBinding* temp4 = (::g::Fuse::Reactive::DataBinding*)::g::Fuse::Reactive::DataBinding::New1(::TYPES[0/*Fuse.Reactive.DataBinding<string>*/], __this->temp1_Value_inst, ::STRINGS[1/*"date"*/]);
    ::g::Fuse::Controls::Panel* temp5 = ::g::Fuse::Controls::Panel::New2();
    ::g::Fuse::Reactive::DataBinding* temp6 = (::g::Fuse::Reactive::DataBinding*)::g::Fuse::Reactive::DataBinding::New1(::TYPES[0/*Fuse.Reactive.DataBinding<string>*/], __this->temp2_Value_inst, ::STRINGS[2/*"daysTo"*/]);
    ::g::Fuse::Controls::Rectangle* temp7 = ::g::Fuse::Controls::Rectangle::New3();
    ::g::Fuse::Drawing::StaticSolidColor* temp8 = ::g::Fuse::Drawing::StaticSolidColor::New1(::g::Uno::Float4__New2(0.4431373f, 0.1333333f, 0.8470588f, 1.0f));
    ::g::Fuse::Controls::Rectangle* temp9 = ::g::Fuse::Controls::Rectangle::New3();
    ::g::Fuse::Drawing::StaticSolidColor* temp10 = ::g::Fuse::Drawing::StaticSolidColor::New1(::g::Uno::Float4__New2(0.9019608f, 0.9019608f, 0.9019608f, 1.0f));
    ::g::Fuse::Gestures::WhilePressed* temp11 = ::g::Fuse::Gestures::WhilePressed::New1();
    ::g::Fuse::Animations::Change* temp12 = (::g::Fuse::Animations::Change*)::g::Fuse::Animations::Change::New1(::TYPES[2/*Fuse.Animations.Change<Fuse.Drawing.Brush>*/], __this->self_Background_inst);
    ::g::Fuse::Drawing::StaticSolidColor* temp13 = ::g::Fuse::Drawing::StaticSolidColor::New1(::g::Uno::Float4__New2(0.9019608f, 0.9019608f, 0.9019608f, 1.0f));
    ::g::Fuse::Gestures::DoubleClicked* temp14 = ::g::Fuse::Gestures::DoubleClicked::New1();
    ::g::Fuse::Triggers::Actions::Callback* temp15 = ::g::Fuse::Triggers::Actions::Callback::New1();
    ::g::Fuse::Drawing::StaticSolidColor* temp16 = ::g::Fuse::Drawing::StaticSolidColor::New1(::g::Uno::Float4__New2(0.9607843f, 0.9607843f, 0.9607843f, 1.0f));
    ::g::Fuse::Reactive::EventBinding* temp_eb11 = ::g::Fuse::Reactive::EventBinding::New1(::STRINGS[3/*"addNativeEv...*/]);
    self->Height(::g::Uno::UX::Size__New1(110.0f, 0));
    self->Margin(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 0.0f));
    self->Name(::STRINGS[4/*"movieItem"*/]);
    temp->FontSize(15.0f);
    temp->TextAlignment(0);
    temp->TextColor(::g::Uno::Float4__New2(0.1294118f, 0.1294118f, 0.1294118f, 1.0f));
    temp->Alignment(5);
    temp->Padding(::g::Uno::Float4__New2(20.0f, 40.0f, 90.0f, 0.0f));
    temp->Font(::g::MainView::gMedium());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp->Behaviors()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[8/*Fuse.Behavior*/])), temp3);
    temp1->FontSize(14.0f);
    temp1->TextAlignment(0);
    temp1->TextColor(::g::Uno::Float4__New2(0.1294118f, 0.1294118f, 0.1294118f, 1.0f));
    temp1->Alignment(5);
    temp1->Padding(::g::Uno::Float4__New2(20.0f, 70.0f, 0.0f, 0.0f));
    temp1->Opacity(0.5f);
    temp1->Font(::g::MainView::gMedium());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp1->Behaviors()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[8/*Fuse.Behavior*/])), temp4);
    temp5->Width(::g::Uno::UX::Size__New1(65.0f, 0));
    temp5->Height(::g::Uno::UX::Size__New1(25.0f, 0));
    temp5->Alignment(7);
    temp5->Margin(::g::Uno::Float4__New2(0.0f, 35.0f, 20.0f, 0.0f));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp5->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[5/*Fuse.Node*/])), temp2);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp5->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[5/*Fuse.Node*/])), temp7);
    temp2->FontSize(10.0f);
    temp2->TextAlignment(1);
    temp2->TextColor(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f));
    temp2->Alignment(8);
    temp2->Opacity(0.9f);
    temp2->Font(::g::MainView::gBold());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp2->Behaviors()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[8/*Fuse.Behavior*/])), temp6);
    temp7->CornerRadius(::g::Uno::Float4__New2(100.0f, 100.0f, 100.0f, 100.0f));
    temp7->Width(::g::Uno::UX::Size__New1(100.0f, 3));
    temp7->Height(::g::Uno::UX::Size__New1(100.0f, 3));
    temp7->Fill(temp8);
    temp9->Width(::g::Uno::UX::Size__New1(100.0f, 3));
    temp9->Height(::g::Uno::UX::Size__New1(1.0f, 0));
    temp9->Alignment(12);
    temp9->Background(temp10);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp11->Animators()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[15/*Fuse.Animations.Animator*/])), temp12);
    ::g::Fuse::Animations::Change__set_Value_fn(temp12, temp13);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp14->Actions()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[16/*Fuse.Triggers.Actions.TriggerAction*/])), temp15);
    temp15->add_Handler(uDelegate::New(::TYPES[18/*Fuse.NodeEventHandler*/], (void*)::g::Fuse::Reactive::EventBinding__OnEvent_fn, temp_eb11));
    self->Background(temp16);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(self->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[5/*Fuse.Node*/])), temp);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(self->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[5/*Fuse.Node*/])), temp1);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(self->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[5/*Fuse.Node*/])), temp5);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(self->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[5/*Fuse.Node*/])), temp9);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(self->Behaviors()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[8/*Fuse.Behavior*/])), temp_eb11);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(self->Behaviors()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[8/*Fuse.Behavior*/])), temp11);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(self->Behaviors()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[8/*Fuse.Behavior*/])), temp14);
    return *__retval = self, void();
}

// public Factory4 New(MainView.Factory3 parent) :533
void MainView__Factory3__Factory4__New2_fn(::g::MainView__Factory3* parent, MainView__Factory3__Factory4** __retval)
{
    *__retval = MainView__Factory3__Factory4::New2(parent);
}

// public Factory4(MainView.Factory3 parent) [instance] :533
void MainView__Factory3__Factory4::ctor_1(::g::MainView__Factory3* parent)
{
    ctor_(NULL, false);
    __parent1 = parent;
}

// public Factory4 New(MainView.Factory3 parent) [static] :533
MainView__Factory3__Factory4* MainView__Factory3__Factory4::New2(::g::MainView__Factory3* parent)
{
    MainView__Factory3__Factory4* obj1 = (MainView__Factory3__Factory4*)uNew(MainView__Factory3__Factory4_typeof());
    obj1->ctor_1(parent);
    return obj1;
}
// }

} // ::g
