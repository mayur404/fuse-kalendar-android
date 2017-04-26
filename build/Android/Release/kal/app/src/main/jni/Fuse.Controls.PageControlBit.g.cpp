// This file was generated based on '(multiple files)'.
// WARNING: Changes might be lost if you edit this file directly.

#include <Fuse.Animations.Animator.h>
#include <Fuse.Animations.Move.h>
#include <Fuse.Animations.TransformAnimator-1.h>
#include <Fuse.Controls.PageControlBit.EnterHorizontal.h>
#include <Fuse.Controls.PageControlBit.EnterVertical.h>
#include <Fuse.Controls.PageControlBit.ExitHorizontal.h>
#include <Fuse.Controls.PageControlBit.ExitVertical.h>
#include <Fuse.ITranslationMode.h>
#include <Fuse.Translation.h>
#include <Fuse.TranslationModes.h>
#include <Fuse.Triggers.Trigger.h>
#include <Uno.Collections.ICollection-1.h>
#include <Uno.Collections.IList-1.h>
#include <Uno.Float.h>
static uType* TYPES[5];

namespace g{
namespace Fuse{
namespace Controls{
namespace PageControlBit{

// /usr/local/share/uno/Packages/Fuse.Controls/0.27.10/.uno/$.uno#3
// ----------------------------------------------------------------

// public partial sealed class EnterHorizontal :94
// {
// static EnterHorizontal() :96
static void EnterHorizontal__cctor__fn(uType* __type)
{
}

::g::Fuse::Navigation::NavigationAnimation_type* EnterHorizontal_typeof()
{
    static uSStrong< ::g::Fuse::Navigation::NavigationAnimation_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 18;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(EnterHorizontal);
    options.TypeSize = sizeof(::g::Fuse::Navigation::NavigationAnimation_type);
    type = (::g::Fuse::Navigation::NavigationAnimation_type*)uClassType::New("Fuse.Controls.PageControlBit.EnterHorizontal", options);
    type->SetBase(::g::Fuse::Navigation::EnteringAnimation_typeof());
    type->fp_ctor_ = (void*)EnterHorizontal__New2_fn;
    type->fp_cctor_ = EnterHorizontal__cctor__fn;
    type->interface0.fp_get_ParentObject = (void(*)(uObject*, uObject**))::g::Fuse::Behavior__FuseIChildObjectget_ParentObject_fn;
    ::TYPES[0] = ::g::Fuse::Animations::TransformAnimator_typeof()->MakeType(::g::Fuse::Translation_typeof());
    ::TYPES[1] = ::g::Fuse::Animations::Move_typeof();
    ::TYPES[2] = ::g::Fuse::TranslationModes_typeof();
    ::TYPES[3] = ::g::Fuse::Triggers::Trigger_typeof();
    ::TYPES[4] = ::g::Fuse::Animations::Animator_typeof();
    type->SetInterfaces(
        ::g::Fuse::IChildObject_typeof(), offsetof(::g::Fuse::Navigation::NavigationAnimation_type, interface0));
    type->SetFields(18);
    return type;
}

// public EnterHorizontal() :99
void EnterHorizontal__ctor_5_fn(EnterHorizontal* __this)
{
    __this->ctor_5();
}

// private void InitializeUX() :103
void EnterHorizontal__InitializeUX_fn(EnterHorizontal* __this)
{
    __this->InitializeUX();
}

// public EnterHorizontal New() :99
void EnterHorizontal__New2_fn(EnterHorizontal** __retval)
{
    *__retval = EnterHorizontal::New2();
}

// public EnterHorizontal() [instance] :99
void EnterHorizontal::ctor_5()
{
    ctor_4();
    InitializeUX();
}

// private void InitializeUX() [instance] :103
void EnterHorizontal::InitializeUX()
{
    ::g::Fuse::Animations::Move* temp = ::g::Fuse::Animations::Move::New1();
    temp->X(-1.0f);
    temp->RelativeTo(::g::Fuse::TranslationModes::ParentSize());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Animators()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[4/*Fuse.Animations.Animator*/])), temp);
}

// public EnterHorizontal New() [static] :99
EnterHorizontal* EnterHorizontal::New2()
{
    EnterHorizontal* obj1 = (EnterHorizontal*)uNew(EnterHorizontal_typeof());
    obj1->ctor_5();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Controls/0.27.10/.uno/$.uno#5
// ----------------------------------------------------------------

// public partial sealed class EnterVertical :142
// {
// static EnterVertical() :144
static void EnterVertical__cctor__fn(uType* __type)
{
}

::g::Fuse::Navigation::NavigationAnimation_type* EnterVertical_typeof()
{
    static uSStrong< ::g::Fuse::Navigation::NavigationAnimation_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 18;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(EnterVertical);
    options.TypeSize = sizeof(::g::Fuse::Navigation::NavigationAnimation_type);
    type = (::g::Fuse::Navigation::NavigationAnimation_type*)uClassType::New("Fuse.Controls.PageControlBit.EnterVertical", options);
    type->SetBase(::g::Fuse::Navigation::EnteringAnimation_typeof());
    type->fp_ctor_ = (void*)EnterVertical__New2_fn;
    type->fp_cctor_ = EnterVertical__cctor__fn;
    type->interface0.fp_get_ParentObject = (void(*)(uObject*, uObject**))::g::Fuse::Behavior__FuseIChildObjectget_ParentObject_fn;
    ::TYPES[0] = ::g::Fuse::Animations::TransformAnimator_typeof()->MakeType(::g::Fuse::Translation_typeof());
    ::TYPES[1] = ::g::Fuse::Animations::Move_typeof();
    ::TYPES[2] = ::g::Fuse::TranslationModes_typeof();
    ::TYPES[3] = ::g::Fuse::Triggers::Trigger_typeof();
    ::TYPES[4] = ::g::Fuse::Animations::Animator_typeof();
    type->SetInterfaces(
        ::g::Fuse::IChildObject_typeof(), offsetof(::g::Fuse::Navigation::NavigationAnimation_type, interface0));
    type->SetFields(18);
    return type;
}

// public EnterVertical() :147
void EnterVertical__ctor_5_fn(EnterVertical* __this)
{
    __this->ctor_5();
}

// private void InitializeUX() :151
void EnterVertical__InitializeUX_fn(EnterVertical* __this)
{
    __this->InitializeUX();
}

// public EnterVertical New() :147
void EnterVertical__New2_fn(EnterVertical** __retval)
{
    *__retval = EnterVertical::New2();
}

// public EnterVertical() [instance] :147
void EnterVertical::ctor_5()
{
    ctor_4();
    InitializeUX();
}

// private void InitializeUX() [instance] :151
void EnterVertical::InitializeUX()
{
    ::g::Fuse::Animations::Move* temp = ::g::Fuse::Animations::Move::New1();
    temp->Y(-1.0f);
    temp->RelativeTo(::g::Fuse::TranslationModes::ParentSize());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Animators()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[4/*Fuse.Animations.Animator*/])), temp);
}

// public EnterVertical New() [static] :147
EnterVertical* EnterVertical::New2()
{
    EnterVertical* obj1 = (EnterVertical*)uNew(EnterVertical_typeof());
    obj1->ctor_5();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Controls/0.27.10/.uno/$.uno#4
// ----------------------------------------------------------------

// public partial sealed class ExitHorizontal :118
// {
// static ExitHorizontal() :120
static void ExitHorizontal__cctor__fn(uType* __type)
{
}

::g::Fuse::Navigation::NavigationAnimation_type* ExitHorizontal_typeof()
{
    static uSStrong< ::g::Fuse::Navigation::NavigationAnimation_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 18;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(ExitHorizontal);
    options.TypeSize = sizeof(::g::Fuse::Navigation::NavigationAnimation_type);
    type = (::g::Fuse::Navigation::NavigationAnimation_type*)uClassType::New("Fuse.Controls.PageControlBit.ExitHorizontal", options);
    type->SetBase(::g::Fuse::Navigation::ExitingAnimation_typeof());
    type->fp_ctor_ = (void*)ExitHorizontal__New2_fn;
    type->fp_cctor_ = ExitHorizontal__cctor__fn;
    type->interface0.fp_get_ParentObject = (void(*)(uObject*, uObject**))::g::Fuse::Behavior__FuseIChildObjectget_ParentObject_fn;
    ::TYPES[0] = ::g::Fuse::Animations::TransformAnimator_typeof()->MakeType(::g::Fuse::Translation_typeof());
    ::TYPES[1] = ::g::Fuse::Animations::Move_typeof();
    ::TYPES[2] = ::g::Fuse::TranslationModes_typeof();
    ::TYPES[3] = ::g::Fuse::Triggers::Trigger_typeof();
    ::TYPES[4] = ::g::Fuse::Animations::Animator_typeof();
    type->SetInterfaces(
        ::g::Fuse::IChildObject_typeof(), offsetof(::g::Fuse::Navigation::NavigationAnimation_type, interface0));
    type->SetFields(18);
    return type;
}

// public ExitHorizontal() :123
void ExitHorizontal__ctor_5_fn(ExitHorizontal* __this)
{
    __this->ctor_5();
}

// private void InitializeUX() :127
void ExitHorizontal__InitializeUX_fn(ExitHorizontal* __this)
{
    __this->InitializeUX();
}

// public ExitHorizontal New() :123
void ExitHorizontal__New2_fn(ExitHorizontal** __retval)
{
    *__retval = ExitHorizontal::New2();
}

// public ExitHorizontal() [instance] :123
void ExitHorizontal::ctor_5()
{
    ctor_4();
    InitializeUX();
}

// private void InitializeUX() [instance] :127
void ExitHorizontal::InitializeUX()
{
    ::g::Fuse::Animations::Move* temp = ::g::Fuse::Animations::Move::New1();
    temp->X(1.0f);
    temp->RelativeTo(::g::Fuse::TranslationModes::ParentSize());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Animators()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[4/*Fuse.Animations.Animator*/])), temp);
}

// public ExitHorizontal New() [static] :123
ExitHorizontal* ExitHorizontal::New2()
{
    ExitHorizontal* obj1 = (ExitHorizontal*)uNew(ExitHorizontal_typeof());
    obj1->ctor_5();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Controls/0.27.10/.uno/$.uno#6
// ----------------------------------------------------------------

// public partial sealed class ExitVertical :166
// {
// static ExitVertical() :168
static void ExitVertical__cctor__fn(uType* __type)
{
}

::g::Fuse::Navigation::NavigationAnimation_type* ExitVertical_typeof()
{
    static uSStrong< ::g::Fuse::Navigation::NavigationAnimation_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 18;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(ExitVertical);
    options.TypeSize = sizeof(::g::Fuse::Navigation::NavigationAnimation_type);
    type = (::g::Fuse::Navigation::NavigationAnimation_type*)uClassType::New("Fuse.Controls.PageControlBit.ExitVertical", options);
    type->SetBase(::g::Fuse::Navigation::ExitingAnimation_typeof());
    type->fp_ctor_ = (void*)ExitVertical__New2_fn;
    type->fp_cctor_ = ExitVertical__cctor__fn;
    type->interface0.fp_get_ParentObject = (void(*)(uObject*, uObject**))::g::Fuse::Behavior__FuseIChildObjectget_ParentObject_fn;
    ::TYPES[0] = ::g::Fuse::Animations::TransformAnimator_typeof()->MakeType(::g::Fuse::Translation_typeof());
    ::TYPES[1] = ::g::Fuse::Animations::Move_typeof();
    ::TYPES[2] = ::g::Fuse::TranslationModes_typeof();
    ::TYPES[3] = ::g::Fuse::Triggers::Trigger_typeof();
    ::TYPES[4] = ::g::Fuse::Animations::Animator_typeof();
    type->SetInterfaces(
        ::g::Fuse::IChildObject_typeof(), offsetof(::g::Fuse::Navigation::NavigationAnimation_type, interface0));
    type->SetFields(18);
    return type;
}

// public ExitVertical() :171
void ExitVertical__ctor_5_fn(ExitVertical* __this)
{
    __this->ctor_5();
}

// private void InitializeUX() :175
void ExitVertical__InitializeUX_fn(ExitVertical* __this)
{
    __this->InitializeUX();
}

// public ExitVertical New() :171
void ExitVertical__New2_fn(ExitVertical** __retval)
{
    *__retval = ExitVertical::New2();
}

// public ExitVertical() [instance] :171
void ExitVertical::ctor_5()
{
    ctor_4();
    InitializeUX();
}

// private void InitializeUX() [instance] :175
void ExitVertical::InitializeUX()
{
    ::g::Fuse::Animations::Move* temp = ::g::Fuse::Animations::Move::New1();
    temp->Y(1.0f);
    temp->RelativeTo(::g::Fuse::TranslationModes::ParentSize());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Animators()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[4/*Fuse.Animations.Animator*/])), temp);
}

// public ExitVertical New() [static] :171
ExitVertical* ExitVertical::New2()
{
    ExitVertical* obj1 = (ExitVertical*)uNew(ExitVertical_typeof());
    obj1->ctor_5();
    return obj1;
}
// }

}}}} // ::g::Fuse::Controls::PageControlBit
