// This file was generated based on '(multiple files)'.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.FuseThemes_bundle.h>
#include <_root.FuseThemes_FuseControlsScrollView_KeepFocusInView_Property.h>
#include <_root.FuseThemes_FuseControlsScrollView_UserScroll_Property.h>
#include <_root.FuseThemes_FuseGesturesScroller_UserScroll_Property.h>
#include <_root.FuseThemes_FuseTriggersWhileTrue_Value_Property.h>
#include <Fuse.Behavior.h>
#include <Fuse.Controls.IVisualDraw.h>
#include <Fuse.Controls.ParentControl.h>
#include <Fuse.Controls.PropertyBinding-1.h>
#include <Fuse.Controls.ScrollView.h>
#include <Fuse.Controls.TextControl.h>
#include <Fuse.Controls.Video.h>
#include <Fuse.Font.h>
#include <Fuse.Gestures.KeepFocusInView.h>
#include <Fuse.Gestures.Scroller.h>
#include <Fuse.Node.h>
#include <Fuse.StyleProperty-2.h>
#include <Fuse.Themes.GraphicsStyle.h>
#include <Fuse.Themes.GraphicsStyle.Template.h>
#include <Fuse.Themes.GraphicsStyle.Template1.h>
#include <Fuse.Themes.GraphicsStyle.Template2.h>
#include <Fuse.Themes.GraphicsTemplate.h>
#include <Fuse.Triggers.Trigger.h>
#include <Fuse.Triggers.WhileTrue.h>
#include <Fuse.Video.VideoVisual.h>
#include <Uno.Bool.h>
#include <Uno.Collections.ICollection-1.h>
#include <Uno.Collections.IList-1.h>
#include <Uno.IO.BundleFile.h>
#include <Uno.Object.h>
#include <Uno.String.h>
#include <Uno.UX.BundleFileSource.h>
#include <Uno.UX.FileSource.h>
#include <Uno.UX.Property-1.h>
#include <Uno.UX.Resource.h>
#include <Uno.UX.Template-1.h>
static uString* STRINGS[1];
static uType* TYPES[16];

namespace g{
namespace Fuse{
namespace Themes{

// /usr/local/share/uno/Packages/Fuse.Themes/0.27.10/.uno/$.uno
// ------------------------------------------------------------

// public partial sealed class GraphicsStyle :5
// {
// static GraphicsStyle() :71
static void GraphicsStyle__cctor__fn(uType* __type)
{
    GraphicsStyle::Default_ = ::g::Fuse::Font::New1(::g::Uno::UX::BundleFileSource::New1(::g::FuseThemes_bundle::RobotoRegularf37b616b()));
    ::g::Uno::UX::Resource::SetGlobalKey(GraphicsStyle::Default_, ::STRINGS[0/*"Default"*/]);
}

::g::Fuse::Style_type* GraphicsStyle_typeof()
{
    static uSStrong< ::g::Fuse::Style_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 6;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(GraphicsStyle);
    options.TypeSize = sizeof(::g::Fuse::Style_type);
    type = (::g::Fuse::Style_type*)uClassType::New("Fuse.Themes.GraphicsStyle", options);
    type->SetBase(::g::Fuse::Style_typeof());
    type->fp_ctor_ = (void*)GraphicsStyle__New2_fn;
    type->fp_cctor_ = GraphicsStyle__cctor__fn;
    type->interface0.fp_Apply = (void(*)(uObject*, uObject*, bool*))::g::Fuse::Style__Apply_fn;
    ::STRINGS[0] = uString::Const("Default");
    ::TYPES[0] = ::g::Uno::UX::FileSource_typeof();
    ::TYPES[1] = ::g::FuseThemes_bundle_typeof();
    ::TYPES[2] = uObject_typeof();
    ::TYPES[3] = ::g::Uno::UX::Template_typeof()->MakeType(::g::Fuse::Controls::TextControl_typeof());
    ::TYPES[4] = ::g::Uno::UX::Template_typeof()->MakeType(::g::Fuse::Controls::Video_typeof());
    ::TYPES[5] = ::g::Uno::UX::Template_typeof()->MakeType(::g::Fuse::Controls::ScrollView_typeof());
    ::TYPES[6] = ::g::Fuse::Style_typeof();
    ::TYPES[7] = ::g::Uno::UX::ITemplate_typeof();
    type->SetInterfaces(
        ::g::Uno::UX::ITemplate_typeof(), offsetof(::g::Fuse::Style_type, interface0));
    type->SetFields(5,
        ::g::Fuse::Font_typeof(), (uintptr_t)&::g::Fuse::Themes::GraphicsStyle::Default_, uFieldFlagsStatic);
    return type;
}

// public GraphicsStyle() :76
void GraphicsStyle__ctor_1_fn(GraphicsStyle* __this)
{
    __this->ctor_1();
}

// private void InitializeUX() :80
void GraphicsStyle__InitializeUX_fn(GraphicsStyle* __this)
{
    __this->InitializeUX();
}

// public GraphicsStyle New() :76
void GraphicsStyle__New2_fn(GraphicsStyle** __retval)
{
    *__retval = GraphicsStyle::New2();
}

uSStrong< ::g::Fuse::Font*> GraphicsStyle::Default_;

// public GraphicsStyle() [instance] :76
void GraphicsStyle::ctor_1()
{
    ctor_();
    InitializeUX();
}

// private void InitializeUX() [instance] :80
void GraphicsStyle::InitializeUX()
{
    GraphicsStyle__Template* collection1;
    GraphicsStyle__Template1* collection2;
    GraphicsStyle__Template2* collection3;
    ::g::Fuse::Themes::GraphicsTemplate* temp = ::g::Fuse::Themes::GraphicsTemplate::New1();
    collection1 = GraphicsStyle__Template::New1(this);
    uPtr(collection1)->Cascade(true);
    true;
    uPtr(collection1)->AffectSubtypes(true);
    true;
    GraphicsStyle__Template* temp1 = collection1;
    collection2 = GraphicsStyle__Template1::New1(this);
    uPtr(collection2)->Cascade(true);
    true;
    uPtr(collection2)->AffectSubtypes(true);
    true;
    GraphicsStyle__Template1* temp2 = collection2;
    collection3 = GraphicsStyle__Template2::New1(this);
    uPtr(collection3)->Cascade(true);
    true;
    uPtr(collection3)->AffectSubtypes(true);
    true;
    GraphicsStyle__Template2* temp3 = collection3;
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Templates()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[7/*Uno.UX.ITemplate*/])), (uObject*)temp);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Templates()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[7/*Uno.UX.ITemplate*/])), (uObject*)temp1);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Templates()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[7/*Uno.UX.ITemplate*/])), (uObject*)temp2);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Templates()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[7/*Uno.UX.ITemplate*/])), (uObject*)temp3);
}

// public GraphicsStyle New() [static] :76
GraphicsStyle* GraphicsStyle::New2()
{
    GraphicsStyle* obj4 = (GraphicsStyle*)uNew(GraphicsStyle_typeof());
    obj4->ctor_1();
    return obj4;
}
// }

// /usr/local/share/uno/Packages/Fuse.Themes/0.27.10/$.uno
// -------------------------------------------------------

// internal sealed class GraphicsTemplate :7
// {
GraphicsTemplate_type* GraphicsTemplate_typeof()
{
    static uSStrong<GraphicsTemplate_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(GraphicsTemplate);
    options.TypeSize = sizeof(GraphicsTemplate_type);
    type = (GraphicsTemplate_type*)uClassType::New("Fuse.Themes.GraphicsTemplate", options);
    type->fp_ctor_ = (void*)GraphicsTemplate__New1_fn;
    type->interface0.fp_Apply = (void(*)(uObject*, uObject*, bool*))GraphicsTemplate__Apply_fn;
    ::TYPES[8] = ::g::Fuse::Controls::IVisualDraw_typeof();
    type->SetInterfaces(
        ::g::Uno::UX::ITemplate_typeof(), offsetof(GraphicsTemplate_type, interface0));
    return type;
}

// public generated GraphicsTemplate() :7
void GraphicsTemplate__ctor__fn(GraphicsTemplate* __this)
{
    __this->ctor_();
}

// public bool Apply(object obj) :9
void GraphicsTemplate__Apply_fn(GraphicsTemplate* __this, uObject* obj, bool* __retval)
{
    *__retval = __this->Apply(obj);
}

// public generated GraphicsTemplate New() :7
void GraphicsTemplate__New1_fn(GraphicsTemplate** __retval)
{
    *__retval = GraphicsTemplate::New1();
}

// public generated GraphicsTemplate() [instance] :7
void GraphicsTemplate::ctor_()
{
}

// public bool Apply(object obj) [instance] :9
bool GraphicsTemplate::Apply(uObject* obj)
{
    uObject* r = uAs<uObject*>(obj, ::TYPES[8/*Fuse.Controls.IVisualDraw*/]);

    if (r != NULL)
        ::g::Fuse::Controls::IVisualDraw::VisualEnabled(uInterface(uPtr(r), ::TYPES[8/*Fuse.Controls.IVisualDraw*/]), true);

    return true;
}

// public generated GraphicsTemplate New() [static] :7
GraphicsTemplate* GraphicsTemplate::New1()
{
    GraphicsTemplate* obj1 = (GraphicsTemplate*)uNew(GraphicsTemplate_typeof());
    obj1->ctor_();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Themes/0.27.10/.uno/$.uno
// ------------------------------------------------------------

// public partial sealed class GraphicsStyle.Template :7
// {
// static Template() :14
static void GraphicsStyle__Template__cctor__fn(uType* __type)
{
}

::g::Uno::UX::Template_type* GraphicsStyle__Template_typeof()
{
    static uSStrong< ::g::Uno::UX::Template_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(GraphicsStyle__Template);
    options.TypeSize = sizeof(::g::Uno::UX::Template_type);
    type = (::g::Uno::UX::Template_type*)uClassType::New("Fuse.Themes.GraphicsStyle.Template", options);
    type->SetBase(::g::Uno::UX::Template_typeof()->MakeType(::g::Fuse::Controls::TextControl_typeof()));
    type->fp_cctor_ = GraphicsStyle__Template__cctor__fn;
    type->fp_OnApply = (void(*)(::g::Uno::UX::Template*, void*))GraphicsStyle__Template__OnApply_fn;
    type->interface0.fp_Apply = (void(*)(uObject*, uObject*, bool*))::g::Uno::UX::Template__Apply_fn;
    ::TYPES[9] = ::g::Fuse::Controls::TextControl_typeof();
    ::TYPES[10] = ::g::Fuse::Themes::GraphicsStyle_typeof();
    type->SetInterfaces(
        ::g::Uno::UX::ITemplate_typeof(), offsetof(::g::Uno::UX::Template_type, interface0));
    type->SetFields(2,
        ::g::Fuse::Themes::GraphicsStyle_typeof(), offsetof(::g::Fuse::Themes::GraphicsStyle__Template, __parent1), 0);
    return type;
}

// public Template(Fuse.Themes.GraphicsStyle parent) :10
void GraphicsStyle__Template__ctor_1_fn(GraphicsStyle__Template* __this, ::g::Fuse::Themes::GraphicsStyle* parent)
{
    __this->ctor_1(parent);
}

// public Template New(Fuse.Themes.GraphicsStyle parent) :10
void GraphicsStyle__Template__New1_fn(::g::Fuse::Themes::GraphicsStyle* parent, GraphicsStyle__Template** __retval)
{
    *__retval = GraphicsStyle__Template::New1(parent);
}

// protected override sealed void OnApply(Fuse.Controls.TextControl self) :17
void GraphicsStyle__Template__OnApply_fn(GraphicsStyle__Template* __this, ::g::Fuse::Controls::TextControl* self)
{
    bool ret2;
    ::g::Fuse::StyleProperty1__SetStyle_fn(uPtr(::g::Fuse::Controls::TextControl::FontProperty()), self, ::g::Fuse::Themes::GraphicsStyle::Default(), &ret2);
}

// public Template(Fuse.Themes.GraphicsStyle parent) [instance] :10
void GraphicsStyle__Template::ctor_1(::g::Fuse::Themes::GraphicsStyle* parent)
{
    ctor_();
    __parent1 = parent;
}

// public Template New(Fuse.Themes.GraphicsStyle parent) [static] :10
GraphicsStyle__Template* GraphicsStyle__Template::New1(::g::Fuse::Themes::GraphicsStyle* parent)
{
    GraphicsStyle__Template* obj1 = (GraphicsStyle__Template*)uNew(GraphicsStyle__Template_typeof());
    obj1->ctor_1(parent);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Themes/0.27.10/.uno/$.uno
// ------------------------------------------------------------

// public partial sealed class GraphicsStyle.Template1 :22
// {
// static Template1() :29
static void GraphicsStyle__Template1__cctor__fn(uType* __type)
{
}

::g::Uno::UX::Template_type* GraphicsStyle__Template1_typeof()
{
    static uSStrong< ::g::Uno::UX::Template_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(GraphicsStyle__Template1);
    options.TypeSize = sizeof(::g::Uno::UX::Template_type);
    type = (::g::Uno::UX::Template_type*)uClassType::New("Fuse.Themes.GraphicsStyle.Template1", options);
    type->SetBase(::g::Uno::UX::Template_typeof()->MakeType(::g::Fuse::Controls::Video_typeof()));
    type->fp_cctor_ = GraphicsStyle__Template1__cctor__fn;
    type->fp_OnApply = (void(*)(::g::Uno::UX::Template*, void*))GraphicsStyle__Template1__OnApply_fn;
    type->interface0.fp_Apply = (void(*)(uObject*, uObject*, bool*))::g::Uno::UX::Template__Apply_fn;
    ::TYPES[11] = ::g::Fuse::Node_typeof();
    type->SetInterfaces(
        ::g::Uno::UX::ITemplate_typeof(), offsetof(::g::Uno::UX::Template_type, interface0));
    type->SetFields(2,
        ::g::Fuse::Themes::GraphicsStyle_typeof(), offsetof(::g::Fuse::Themes::GraphicsStyle__Template1, __parent1), 0);
    return type;
}

// public Template1(Fuse.Themes.GraphicsStyle parent) :25
void GraphicsStyle__Template1__ctor_1_fn(GraphicsStyle__Template1* __this, ::g::Fuse::Themes::GraphicsStyle* parent)
{
    __this->ctor_1(parent);
}

// public Template1 New(Fuse.Themes.GraphicsStyle parent) :25
void GraphicsStyle__Template1__New1_fn(::g::Fuse::Themes::GraphicsStyle* parent, GraphicsStyle__Template1** __retval)
{
    *__retval = GraphicsStyle__Template1::New1(parent);
}

// protected override sealed void OnApply(Fuse.Controls.Video self) :32
void GraphicsStyle__Template1__OnApply_fn(GraphicsStyle__Template1* __this, ::g::Fuse::Controls::Video* self)
{
    ::g::Fuse::Video::VideoVisual* temp = ::g::Fuse::Video::VideoVisual::New1();
    uPtr(self)->AddStyleChild(temp);
}

// public Template1(Fuse.Themes.GraphicsStyle parent) [instance] :25
void GraphicsStyle__Template1::ctor_1(::g::Fuse::Themes::GraphicsStyle* parent)
{
    ctor_();
    __parent1 = parent;
}

// public Template1 New(Fuse.Themes.GraphicsStyle parent) [static] :25
GraphicsStyle__Template1* GraphicsStyle__Template1::New1(::g::Fuse::Themes::GraphicsStyle* parent)
{
    GraphicsStyle__Template1* obj1 = (GraphicsStyle__Template1*)uNew(GraphicsStyle__Template1_typeof());
    obj1->ctor_1(parent);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Themes/0.27.10/.uno/$.uno
// ------------------------------------------------------------

// public partial sealed class GraphicsStyle.Template2 :38
// {
// static Template2() :49
static void GraphicsStyle__Template2__cctor__fn(uType* __type)
{
}

::g::Uno::UX::Template_type* GraphicsStyle__Template2_typeof()
{
    static uSStrong< ::g::Uno::UX::Template_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 7;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(GraphicsStyle__Template2);
    options.TypeSize = sizeof(::g::Uno::UX::Template_type);
    type = (::g::Uno::UX::Template_type*)uClassType::New("Fuse.Themes.GraphicsStyle.Template2", options);
    type->SetBase(::g::Uno::UX::Template_typeof()->MakeType(::g::Fuse::Controls::ScrollView_typeof()));
    type->fp_cctor_ = GraphicsStyle__Template2__cctor__fn;
    type->fp_OnApply = (void(*)(::g::Uno::UX::Template*, void*))GraphicsStyle__Template2__OnApply_fn;
    type->interface0.fp_Apply = (void(*)(uObject*, uObject*, bool*))::g::Uno::UX::Template__Apply_fn;
    ::TYPES[12] = ::g::Fuse::Controls::PropertyBinding_typeof()->MakeType(::g::Uno::Bool_typeof());
    ::TYPES[13] = ::g::Uno::UX::Property_typeof()->MakeType(::g::Uno::Bool_typeof());
    ::TYPES[14] = ::g::Fuse::Triggers::Trigger_typeof();
    ::TYPES[15] = ::g::Fuse::Behavior_typeof();
    type->SetInterfaces(
        ::g::Uno::UX::ITemplate_typeof(), offsetof(::g::Uno::UX::Template_type, interface0));
    type->SetFields(2,
        ::g::Fuse::Themes::GraphicsStyle_typeof(), offsetof(::g::Fuse::Themes::GraphicsStyle__Template2, __parent1), 0,
        ::g::FuseThemes_FuseControlsScrollView_KeepFocusInView_Property_typeof(), offsetof(::g::Fuse::Themes::GraphicsStyle__Template2, self_KeepFocusInView_inst), 0,
        ::g::FuseThemes_FuseControlsScrollView_UserScroll_Property_typeof(), offsetof(::g::Fuse::Themes::GraphicsStyle__Template2, self_UserScroll_inst), 0,
        ::g::FuseThemes_FuseGesturesScroller_UserScroll_Property_typeof(), offsetof(::g::Fuse::Themes::GraphicsStyle__Template2, temp_UserScroll_inst), 0,
        ::g::FuseThemes_FuseTriggersWhileTrue_Value_Property_typeof(), offsetof(::g::Fuse::Themes::GraphicsStyle__Template2, temp1_Value_inst), 0);
    return type;
}

// public Template2(Fuse.Themes.GraphicsStyle parent) :41
void GraphicsStyle__Template2__ctor_1_fn(GraphicsStyle__Template2* __this, ::g::Fuse::Themes::GraphicsStyle* parent)
{
    __this->ctor_1(parent);
}

// public Template2 New(Fuse.Themes.GraphicsStyle parent) :41
void GraphicsStyle__Template2__New1_fn(::g::Fuse::Themes::GraphicsStyle* parent, GraphicsStyle__Template2** __retval)
{
    *__retval = GraphicsStyle__Template2::New1(parent);
}

// protected override sealed void OnApply(Fuse.Controls.ScrollView self) :52
void GraphicsStyle__Template2__OnApply_fn(GraphicsStyle__Template2* __this, ::g::Fuse::Controls::ScrollView* self)
{
    ::g::Fuse::Gestures::Scroller* temp = ::g::Fuse::Gestures::Scroller::New1();
    __this->temp_UserScroll_inst = ::g::FuseThemes_FuseGesturesScroller_UserScroll_Property::New1(temp);
    __this->self_UserScroll_inst = ::g::FuseThemes_FuseControlsScrollView_UserScroll_Property::New1(self);
    ::g::Fuse::Triggers::WhileTrue* temp1 = ::g::Fuse::Triggers::WhileTrue::New1();
    __this->temp1_Value_inst = ::g::FuseThemes_FuseTriggersWhileTrue_Value_Property::New1(temp1);
    __this->self_KeepFocusInView_inst = ::g::FuseThemes_FuseControlsScrollView_KeepFocusInView_Property::New1(self);
    ::g::Fuse::Gestures::KeepFocusInView* temp2 = ::g::Fuse::Gestures::KeepFocusInView::New2();
    ::g::Fuse::Controls::PropertyBinding* temp3 = (::g::Fuse::Controls::PropertyBinding*)::g::Fuse::Controls::PropertyBinding::New1(::TYPES[12/*Fuse.Controls.PropertyBinding<bool>*/], __this->temp_UserScroll_inst, __this->self_UserScroll_inst);
    ::g::Fuse::Controls::PropertyBinding* temp4 = (::g::Fuse::Controls::PropertyBinding*)::g::Fuse::Controls::PropertyBinding::New1(::TYPES[12/*Fuse.Controls.PropertyBinding<bool>*/], __this->temp1_Value_inst, __this->self_KeepFocusInView_inst);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp1->Behaviors()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[15/*Fuse.Behavior*/])), temp2);
    uPtr(self)->AddStyleBehavior(temp3);
    self->AddStyleBehavior(temp4);
    self->AddStyleBehavior(temp);
    self->AddStyleBehavior(temp1);
}

// public Template2(Fuse.Themes.GraphicsStyle parent) [instance] :41
void GraphicsStyle__Template2::ctor_1(::g::Fuse::Themes::GraphicsStyle* parent)
{
    ctor_();
    __parent1 = parent;
}

// public Template2 New(Fuse.Themes.GraphicsStyle parent) [static] :41
GraphicsStyle__Template2* GraphicsStyle__Template2::New1(::g::Fuse::Themes::GraphicsStyle* parent)
{
    GraphicsStyle__Template2* obj1 = (GraphicsStyle__Template2*)uNew(GraphicsStyle__Template2_typeof());
    obj1->ctor_1(parent);
    return obj1;
}
// }

}}} // ::g::Fuse::Themes
