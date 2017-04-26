// This file was generated based on '/Users/mayur404/Dropbox/Public/Little Boat/InHouse/BlackBerry/Kalendar/Priv/fuse/.uno/MainView.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.MainView.Factory8.Factory11.h>
#include <_root.MainView.Factory8.h>
#include <_root.MainView.h>
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
#include <Fuse.Node.h>
#include <Uno.Bool.h>
#include <Uno.Collections.ICollection-1.h>
#include <Uno.Collections.IList-1.h>
#include <Uno.Float.h>
#include <Uno.Float4.h>
#include <Uno.Object.h>
#include <Uno.String.h>
#include <Uno.UX.Size.h>
#include <Uno.UX.Unit.h>
static uString* STRINGS[1];
static uType* TYPES[9];

namespace g{

// public partial sealed class MainView.Factory8.Factory11 :1201
// {
// static Factory11() :1208
static void MainView__Factory8__Factory11__cctor__fn(uType* __type)
{
}

::g::Uno::UX::Factory_type* MainView__Factory8__Factory11_typeof()
{
    static uSStrong< ::g::Uno::UX::Factory_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.ObjectSize = sizeof(MainView__Factory8__Factory11);
    options.TypeSize = sizeof(::g::Uno::UX::Factory_type);
    type = (::g::Uno::UX::Factory_type*)uClassType::New("MainView.Factory8.Factory11", options);
    type->SetBase(::g::Uno::UX::Factory_typeof());
    type->fp_cctor_ = MainView__Factory8__Factory11__cctor__fn;
    type->fp_New1 = (void(*)(::g::Uno::UX::Factory*, uObject**))MainView__Factory8__Factory11__New1_fn;
    ::STRINGS[0] = uString::Const("LIVE");
    ::TYPES[0] = ::g::Fuse::Elements::Element_typeof();
    ::TYPES[1] = ::g::Fuse::Controls::TextControl_typeof();
    ::TYPES[2] = ::g::MainView_typeof();
    ::TYPES[3] = ::g::Fuse::Controls::Rectangle_typeof();
    ::TYPES[4] = ::g::Fuse::Controls::Shape_typeof();
    ::TYPES[5] = ::g::Fuse::Drawing::Brush_typeof();
    ::TYPES[6] = ::g::Fuse::Controls::ParentControl_typeof();
    ::TYPES[7] = ::g::Fuse::Node_typeof();
    ::TYPES[8] = uObject_typeof();
    type->SetFields(2,
        ::g::MainView__Factory8_typeof(), offsetof(::g::MainView__Factory8__Factory11, __parent1), 0);
    return type;
}

// public Factory11(MainView.Factory8 parent) :1204
void MainView__Factory8__Factory11__ctor_1_fn(MainView__Factory8__Factory11* __this, ::g::MainView__Factory8* parent)
{
    __this->ctor_1(parent);
}

// public override sealed object New() :1211
void MainView__Factory8__Factory11__New1_fn(MainView__Factory8__Factory11* __this, uObject** __retval)
{
    ::g::Fuse::Controls::Panel* self = ::g::Fuse::Controls::Panel::New2();
    ::g::Fuse::Controls::Text* temp = ::g::Fuse::Controls::Text::New2();
    ::g::Fuse::Controls::Rectangle* temp1 = ::g::Fuse::Controls::Rectangle::New3();
    ::g::Fuse::Drawing::StaticSolidColor* temp2 = ::g::Fuse::Drawing::StaticSolidColor::New1(::g::Uno::Float4__New2(0.2509804f, 0.8313726f, 0.4941176f, 1.0f));
    self->Width(::g::Uno::UX::Size__New1(60.0f, 0));
    self->Height(::g::Uno::UX::Size__New1(25.0f, 0));
    self->Alignment(7);
    self->Margin(::g::Uno::Float4__New2(0.0f, 35.0f, 20.0f, 0.0f));
    temp->Value(::STRINGS[0/*"LIVE"*/]);
    temp->FontSize(10.0f);
    temp->TextAlignment(1);
    temp->TextColor(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f));
    temp->Alignment(8);
    temp->Opacity(0.9f);
    temp->Font(::g::MainView::gBold());
    temp1->CornerRadius(::g::Uno::Float4__New2(100.0f, 100.0f, 100.0f, 100.0f));
    temp1->Width(::g::Uno::UX::Size__New1(100.0f, 3));
    temp1->Height(::g::Uno::UX::Size__New1(100.0f, 3));
    temp1->Fill(temp2);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(self->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[7/*Fuse.Node*/])), temp);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(self->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[7/*Fuse.Node*/])), temp1);
    return *__retval = self, void();
}

// public Factory11 New(MainView.Factory8 parent) :1204
void MainView__Factory8__Factory11__New2_fn(::g::MainView__Factory8* parent, MainView__Factory8__Factory11** __retval)
{
    *__retval = MainView__Factory8__Factory11::New2(parent);
}

// public Factory11(MainView.Factory8 parent) [instance] :1204
void MainView__Factory8__Factory11::ctor_1(::g::MainView__Factory8* parent)
{
    ctor_(NULL, false);
    __parent1 = parent;
}

// public Factory11 New(MainView.Factory8 parent) [static] :1204
MainView__Factory8__Factory11* MainView__Factory8__Factory11::New2(::g::MainView__Factory8* parent)
{
    MainView__Factory8__Factory11* obj1 = (MainView__Factory8__Factory11*)uNew(MainView__Factory8__Factory11_typeof());
    obj1->ctor_1(parent);
    return obj1;
}
// }

} // ::g
