// This file was generated based on '/Users/mayur404/Dropbox/Public/Little Boat/InHouse/BlackBerry/Kalendar/Priv/fuse/.uno/MainView.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.kal_FuseControlsPanel_Background_Property.h>
#include <_root.kal_FuseControlsText_Value_Property.h>
#include <_root.MainView.Factory11.h>
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
#include <Fuse.Gestures.ClickedHandler.h>
#include <Fuse.Gestures.WhilePressed.h>
#include <Fuse.Node.h>
#include <Fuse.Reactive.DataBinding-1.h>
#include <Fuse.Reactive.EventBinding.h>
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
static uString* STRINGS[4];
static uType* TYPES[16];

namespace g{

// public partial sealed class MainView.Factory11 :1511
// {
// static Factory11() :1522
static void MainView__Factory11__cctor__fn(uType* __type)
{
}

::g::Uno::UX::Factory_type* MainView__Factory11_typeof()
{
    static uSStrong< ::g::Uno::UX::Factory_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 6;
    options.ObjectSize = sizeof(MainView__Factory11);
    options.TypeSize = sizeof(::g::Uno::UX::Factory_type);
    type = (::g::Uno::UX::Factory_type*)uClassType::New("MainView.Factory11", options);
    type->SetBase(::g::Uno::UX::Factory_typeof());
    type->fp_cctor_ = MainView__Factory11__cctor__fn;
    type->fp_New1 = (void(*)(::g::Uno::UX::Factory*, uObject**))MainView__Factory11__New1_fn;
    ::STRINGS[0] = uString::Const("title");
    ::STRINGS[1] = uString::Const("date");
    ::STRINGS[2] = uString::Const("pinHandler");
    ::STRINGS[3] = uString::Const("sportListClicker");
    ::TYPES[0] = ::g::Fuse::Reactive::DataBinding_typeof()->MakeType(::g::Uno::String_typeof());
    ::TYPES[1] = ::g::Uno::UX::Property_typeof()->MakeType(::g::Uno::String_typeof());
    ::TYPES[2] = ::g::Fuse::Animations::Change_typeof()->MakeType(::g::Fuse::Drawing::Brush_typeof());
    ::TYPES[3] = ::g::Uno::UX::Property_typeof()->MakeType(::g::Fuse::Drawing::Brush_typeof());
    ::TYPES[4] = ::g::Fuse::Elements::Element_typeof();
    ::TYPES[5] = ::g::Fuse::Node_typeof();
    ::TYPES[6] = ::g::Fuse::Gestures::ClickedHandler_typeof();
    ::TYPES[7] = ::g::Fuse::Controls::TextControl_typeof();
    ::TYPES[8] = ::g::MainView_typeof();
    ::TYPES[9] = ::g::Fuse::Behavior_typeof();
    ::TYPES[10] = ::g::Fuse::Controls::Control_typeof();
    ::TYPES[11] = ::g::Fuse::Drawing::Brush_typeof();
    ::TYPES[12] = ::g::Fuse::Triggers::Trigger_typeof();
    ::TYPES[13] = ::g::Fuse::Animations::Animator_typeof();
    ::TYPES[14] = ::g::Fuse::Controls::ParentControl_typeof();
    ::TYPES[15] = uObject_typeof();
    type->SetFields(2,
        ::g::MainView_typeof(), offsetof(::g::MainView__Factory11, __parent1), 0,
        ::g::kal_FuseControlsPanel_Background_Property_typeof(), offsetof(::g::MainView__Factory11, self_Background_inst), 0,
        ::g::kal_FuseControlsText_Value_Property_typeof(), offsetof(::g::MainView__Factory11, temp_Value_inst), 0,
        ::g::kal_FuseControlsText_Value_Property_typeof(), offsetof(::g::MainView__Factory11, temp1_Value_inst), 0);
    return type;
}

// public Factory11(MainView parent) :1514
void MainView__Factory11__ctor_1_fn(MainView__Factory11* __this, ::g::MainView* parent)
{
    __this->ctor_1(parent);
}

// public override sealed object New() :1525
void MainView__Factory11__New1_fn(MainView__Factory11* __this, uObject** __retval)
{
    ::g::Fuse::Controls::Panel* self = ::g::Fuse::Controls::Panel::New2();
    ::g::Fuse::Controls::Text* temp = ::g::Fuse::Controls::Text::New2();
    __this->temp_Value_inst = ::g::kal_FuseControlsText_Value_Property::New1(temp);
    ::g::Fuse::Controls::Text* temp1 = ::g::Fuse::Controls::Text::New2();
    __this->temp1_Value_inst = ::g::kal_FuseControlsText_Value_Property::New1(temp1);
    __this->self_Background_inst = ::g::kal_FuseControlsPanel_Background_Property::New1(self);
    ::g::Fuse::Reactive::DataBinding* temp2 = (::g::Fuse::Reactive::DataBinding*)::g::Fuse::Reactive::DataBinding::New1(::TYPES[0/*Fuse.Reactive.DataBinding<string>*/], __this->temp_Value_inst, ::STRINGS[0/*"title"*/]);
    ::g::Fuse::Reactive::DataBinding* temp3 = (::g::Fuse::Reactive::DataBinding*)::g::Fuse::Reactive::DataBinding::New1(::TYPES[0/*Fuse.Reactive.DataBinding<string>*/], __this->temp1_Value_inst, ::STRINGS[1/*"date"*/]);
    ::g::Fuse::Controls::Rectangle* temp4 = ::g::Fuse::Controls::Rectangle::New3();
    ::g::Fuse::Drawing::StaticSolidColor* temp5 = ::g::Fuse::Drawing::StaticSolidColor::New1(::g::Uno::Float4__New2(0.9019608f, 0.9019608f, 0.9019608f, 1.0f));
    ::g::Fuse::Gestures::WhilePressed* temp6 = ::g::Fuse::Gestures::WhilePressed::New1();
    ::g::Fuse::Animations::Change* temp7 = (::g::Fuse::Animations::Change*)::g::Fuse::Animations::Change::New1(::TYPES[2/*Fuse.Animations.Change<Fuse.Drawing.Brush>*/], __this->self_Background_inst);
    ::g::Fuse::Drawing::StaticSolidColor* temp8 = ::g::Fuse::Drawing::StaticSolidColor::New1(::g::Uno::Float4__New2(0.9019608f, 0.9019608f, 0.9019608f, 1.0f));
    ::g::Fuse::Drawing::StaticSolidColor* temp9 = ::g::Fuse::Drawing::StaticSolidColor::New1(::g::Uno::Float4__New2(0.9607843f, 0.9607843f, 0.9607843f, 1.0f));
    ::g::Fuse::Reactive::EventBinding* temp_eb111 = ::g::Fuse::Reactive::EventBinding::New1(::STRINGS[2/*"pinHandler"*/]);
    self->Margin(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 0.0f));
    self->Name(::STRINGS[3/*"sportListCl...*/]);
    ::g::Fuse::Gestures::Clicked::AddHandler(self, uDelegate::New(::TYPES[6/*Fuse.Gestures.ClickedHandler*/], (void*)::g::Fuse::Reactive::EventBinding__OnEvent_fn, temp_eb111));
    temp->FontSize(15.0f);
    temp->TextAlignment(0);
    temp->TextColor(::g::Uno::Float4__New2(0.1294118f, 0.1294118f, 0.1294118f, 1.0f));
    temp->Alignment(5);
    temp->Padding(::g::Uno::Float4__New2(20.0f, 40.0f, 90.0f, 0.0f));
    temp->Font(::g::MainView::gMedium());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp->Behaviors()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[9/*Fuse.Behavior*/])), temp2);
    temp1->FontSize(15.0f);
    temp1->TextAlignment(0);
    temp1->TextColor(::g::Uno::Float4__New2(0.1294118f, 0.1294118f, 0.1294118f, 1.0f));
    temp1->Alignment(5);
    temp1->Padding(::g::Uno::Float4__New2(20.0f, 70.0f, 20.0f, 20.0f));
    temp1->Opacity(0.5f);
    temp1->Font(::g::MainView::gMedium());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp1->Behaviors()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[9/*Fuse.Behavior*/])), temp3);
    temp4->Width(::g::Uno::UX::Size__New1(100.0f, 3));
    temp4->Height(::g::Uno::UX::Size__New1(1.0f, 0));
    temp4->Alignment(12);
    temp4->Background(temp5);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp6->Animators()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[13/*Fuse.Animations.Animator*/])), temp7);
    ::g::Fuse::Animations::Change__set_Value_fn(temp7, temp8);
    self->Background(temp9);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(self->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[5/*Fuse.Node*/])), temp);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(self->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[5/*Fuse.Node*/])), temp1);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(self->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[5/*Fuse.Node*/])), temp4);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(self->Behaviors()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[9/*Fuse.Behavior*/])), temp_eb111);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(self->Behaviors()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[9/*Fuse.Behavior*/])), temp6);
    return *__retval = self, void();
}

// public Factory11 New(MainView parent) :1514
void MainView__Factory11__New2_fn(::g::MainView* parent, MainView__Factory11** __retval)
{
    *__retval = MainView__Factory11::New2(parent);
}

// public Factory11(MainView parent) [instance] :1514
void MainView__Factory11::ctor_1(::g::MainView* parent)
{
    ctor_(NULL, false);
    __parent1 = parent;
}

// public Factory11 New(MainView parent) [static] :1514
MainView__Factory11* MainView__Factory11::New2(::g::MainView* parent)
{
    MainView__Factory11* obj1 = (MainView__Factory11*)uNew(MainView__Factory11_typeof());
    obj1->ctor_1(parent);
    return obj1;
}
// }

} // ::g
