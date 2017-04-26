// This file was generated based on '/Users/mayur404/Dropbox/Public/Little Boat/InHouse/BlackBerry/Kalendar/Priv/fuse/.uno/MainView.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.kal_FuseControlsPanel_Background_Property.h>
#include <_root.kal_FuseControlsText_Value_Property.h>
#include <_root.MainView.Factory7.h>
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
#include <Fuse.Elements.TextWrapping.h>
#include <Fuse.Font.h>
#include <Fuse.Gestures.WhilePressed.h>
#include <Fuse.Node.h>
#include <Fuse.Reactive.DataBinding-1.h>
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
static uType* TYPES[15];

namespace g{

// public partial sealed class MainView.Factory7 :1048
// {
// static Factory7() :1059
static void MainView__Factory7__cctor__fn(uType* __type)
{
}

::g::Uno::UX::Factory_type* MainView__Factory7_typeof()
{
    static uSStrong< ::g::Uno::UX::Factory_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 7;
    options.ObjectSize = sizeof(MainView__Factory7);
    options.TypeSize = sizeof(::g::Uno::UX::Factory_type);
    type = (::g::Uno::UX::Factory_type*)uClassType::New("MainView.Factory7", options);
    type->SetBase(::g::Uno::UX::Factory_typeof());
    type->fp_cctor_ = MainView__Factory7__cctor__fn;
    type->fp_New1 = (void(*)(::g::Uno::UX::Factory*, uObject**))MainView__Factory7__New1_fn;
    ::STRINGS[0] = uString::Const("episode");
    ::STRINGS[1] = uString::Const("desc");
    ::STRINGS[2] = uString::Const("date");
    ::STRINGS[3] = uString::Const("tvListClicker");
    ::TYPES[0] = ::g::Fuse::Reactive::DataBinding_typeof()->MakeType(::g::Uno::String_typeof());
    ::TYPES[1] = ::g::Uno::UX::Property_typeof()->MakeType(::g::Uno::String_typeof());
    ::TYPES[2] = ::g::Fuse::Animations::Change_typeof()->MakeType(::g::Fuse::Drawing::Brush_typeof());
    ::TYPES[3] = ::g::Uno::UX::Property_typeof()->MakeType(::g::Fuse::Drawing::Brush_typeof());
    ::TYPES[4] = ::g::Fuse::Elements::Element_typeof();
    ::TYPES[5] = ::g::Fuse::Node_typeof();
    ::TYPES[6] = ::g::Fuse::Controls::TextControl_typeof();
    ::TYPES[7] = ::g::MainView_typeof();
    ::TYPES[8] = ::g::Fuse::Behavior_typeof();
    ::TYPES[9] = ::g::Fuse::Controls::Control_typeof();
    ::TYPES[10] = ::g::Fuse::Drawing::Brush_typeof();
    ::TYPES[11] = ::g::Fuse::Triggers::Trigger_typeof();
    ::TYPES[12] = ::g::Fuse::Animations::Animator_typeof();
    ::TYPES[13] = ::g::Fuse::Controls::ParentControl_typeof();
    ::TYPES[14] = uObject_typeof();
    type->SetFields(2,
        ::g::MainView_typeof(), offsetof(::g::MainView__Factory7, __parent1), 0,
        ::g::kal_FuseControlsPanel_Background_Property_typeof(), offsetof(::g::MainView__Factory7, self_Background_inst), 0,
        ::g::kal_FuseControlsText_Value_Property_typeof(), offsetof(::g::MainView__Factory7, temp_Value_inst), 0,
        ::g::kal_FuseControlsText_Value_Property_typeof(), offsetof(::g::MainView__Factory7, temp1_Value_inst), 0,
        ::g::kal_FuseControlsText_Value_Property_typeof(), offsetof(::g::MainView__Factory7, temp2_Value_inst), 0);
    return type;
}

// public Factory7(MainView parent) :1051
void MainView__Factory7__ctor_1_fn(MainView__Factory7* __this, ::g::MainView* parent)
{
    __this->ctor_1(parent);
}

// public override sealed object New() :1062
void MainView__Factory7__New1_fn(MainView__Factory7* __this, uObject** __retval)
{
    ::g::Fuse::Controls::Panel* self = ::g::Fuse::Controls::Panel::New2();
    ::g::Fuse::Controls::Text* temp = ::g::Fuse::Controls::Text::New2();
    __this->temp_Value_inst = ::g::kal_FuseControlsText_Value_Property::New1(temp);
    ::g::Fuse::Controls::Text* temp1 = ::g::Fuse::Controls::Text::New2();
    __this->temp1_Value_inst = ::g::kal_FuseControlsText_Value_Property::New1(temp1);
    ::g::Fuse::Controls::Text* temp2 = ::g::Fuse::Controls::Text::New2();
    __this->temp2_Value_inst = ::g::kal_FuseControlsText_Value_Property::New1(temp2);
    __this->self_Background_inst = ::g::kal_FuseControlsPanel_Background_Property::New1(self);
    ::g::Fuse::Reactive::DataBinding* temp3 = (::g::Fuse::Reactive::DataBinding*)::g::Fuse::Reactive::DataBinding::New1(::TYPES[0/*Fuse.Reactive.DataBinding<string>*/], __this->temp_Value_inst, ::STRINGS[0/*"episode"*/]);
    ::g::Fuse::Reactive::DataBinding* temp4 = (::g::Fuse::Reactive::DataBinding*)::g::Fuse::Reactive::DataBinding::New1(::TYPES[0/*Fuse.Reactive.DataBinding<string>*/], __this->temp1_Value_inst, ::STRINGS[1/*"desc"*/]);
    ::g::Fuse::Reactive::DataBinding* temp5 = (::g::Fuse::Reactive::DataBinding*)::g::Fuse::Reactive::DataBinding::New1(::TYPES[0/*Fuse.Reactive.DataBinding<string>*/], __this->temp2_Value_inst, ::STRINGS[2/*"date"*/]);
    ::g::Fuse::Controls::Rectangle* temp6 = ::g::Fuse::Controls::Rectangle::New3();
    ::g::Fuse::Drawing::StaticSolidColor* temp7 = ::g::Fuse::Drawing::StaticSolidColor::New1(::g::Uno::Float4__New2(0.9019608f, 0.9019608f, 0.9019608f, 1.0f));
    ::g::Fuse::Gestures::WhilePressed* temp8 = ::g::Fuse::Gestures::WhilePressed::New1();
    ::g::Fuse::Animations::Change* temp9 = (::g::Fuse::Animations::Change*)::g::Fuse::Animations::Change::New1(::TYPES[2/*Fuse.Animations.Change<Fuse.Drawing.Brush>*/], __this->self_Background_inst);
    ::g::Fuse::Drawing::StaticSolidColor* temp10 = ::g::Fuse::Drawing::StaticSolidColor::New1(::g::Uno::Float4__New2(0.9019608f, 0.9019608f, 0.9019608f, 1.0f));
    ::g::Fuse::Drawing::StaticSolidColor* temp11 = ::g::Fuse::Drawing::StaticSolidColor::New1(::g::Uno::Float4__New2(0.9607843f, 0.9607843f, 0.9607843f, 1.0f));
    self->Margin(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 0.0f));
    self->Name(::STRINGS[3/*"tvListClicker"*/]);
    temp->FontSize(15.0f);
    temp->TextAlignment(0);
    temp->TextColor(::g::Uno::Float4__New2(0.1294118f, 0.1294118f, 0.1294118f, 1.0f));
    temp->Alignment(5);
    temp->Padding(::g::Uno::Float4__New2(20.0f, 40.0f, 90.0f, 0.0f));
    temp->Font(::g::MainView::gMedium());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp->Behaviors()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[8/*Fuse.Behavior*/])), temp3);
    temp1->FontSize(15.0f);
    temp1->TextAlignment(0);
    temp1->TextColor(::g::Uno::Float4__New2(0.1294118f, 0.1294118f, 0.1294118f, 1.0f));
    temp1->Alignment(5);
    temp1->Padding(::g::Uno::Float4__New2(20.0f, 70.0f, 20.0f, 0.0f));
    temp1->Opacity(0.5f);
    temp1->Font(::g::MainView::gMedium());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp1->Behaviors()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[8/*Fuse.Behavior*/])), temp4);
    temp2->TextWrapping(1);
    temp2->FontSize(14.0f);
    temp2->TextAlignment(0);
    temp2->TextColor(::g::Uno::Float4__New2(0.1294118f, 0.1294118f, 0.1294118f, 1.0f));
    temp2->Alignment(5);
    temp2->Padding(::g::Uno::Float4__New2(20.0f, 100.0f, 20.0f, 20.0f));
    temp2->Opacity(0.8f);
    temp2->Font(::g::MainView::gMedium());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp2->Behaviors()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[8/*Fuse.Behavior*/])), temp5);
    temp6->Width(::g::Uno::UX::Size__New1(100.0f, 3));
    temp6->Height(::g::Uno::UX::Size__New1(1.0f, 0));
    temp6->Alignment(12);
    temp6->Background(temp7);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp8->Animators()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[12/*Fuse.Animations.Animator*/])), temp9);
    ::g::Fuse::Animations::Change__set_Value_fn(temp9, temp10);
    self->Background(temp11);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(self->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[5/*Fuse.Node*/])), temp);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(self->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[5/*Fuse.Node*/])), temp1);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(self->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[5/*Fuse.Node*/])), temp2);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(self->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[5/*Fuse.Node*/])), temp6);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(self->Behaviors()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[8/*Fuse.Behavior*/])), temp8);
    return *__retval = self, void();
}

// public Factory7 New(MainView parent) :1051
void MainView__Factory7__New2_fn(::g::MainView* parent, MainView__Factory7** __retval)
{
    *__retval = MainView__Factory7::New2(parent);
}

// public Factory7(MainView parent) [instance] :1051
void MainView__Factory7::ctor_1(::g::MainView* parent)
{
    ctor_(NULL, false);
    __parent1 = parent;
}

// public Factory7 New(MainView parent) [static] :1051
MainView__Factory7* MainView__Factory7::New2(::g::MainView* parent)
{
    MainView__Factory7* obj1 = (MainView__Factory7*)uNew(MainView__Factory7_typeof());
    obj1->ctor_1(parent);
    return obj1;
}
// }

} // ::g
