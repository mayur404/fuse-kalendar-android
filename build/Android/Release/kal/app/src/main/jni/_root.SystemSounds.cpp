// This file was generated based on '/Users/mayur404/Dropbox/Public/Little Boat/InHouse/BlackBerry/Kalendar/Priv/fuse/SystemSounds.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.SystemSounds.h>
#include <Android.android.app.Activity.h>
#include <Android.android.app.Application.h>
#include <Android.android.content.Context.h>
#include <Android.android.content.ContextWrapper.h>
#include <Android.android.content.Intent.h>
#include <Android.android.widget.Toast.h>
#include <Android.java.lang.CharSequence.h>
#include <Android.java.lang.Integer.h>
#include <Android.java.lang.String.h>
#include <Android.java.util.Calendar.h>
#include <Fuse.Scripting.Context.h>
#include <Fuse.Scripting.NativeCallback.h>
#include <Fuse.Scripting.NativeFunction.h>
#include <Fuse.Scripting.NativeMember.h>
#include <Fuse.UpdateManager.h>
#include <Uno.Action.h>
#include <Uno.Bool.h>
#include <Uno.Int.h>
#include <Uno.Long.h>
#include <Uno.Object.h>
#include <Uno.String.h>
static uString* STRINGS[7];
static uType* TYPES[8];

namespace g{

// public sealed class SystemSounds :16
// {
::g::Fuse::Scripting::NativeModule_type* SystemSounds_typeof()
{
    static uSStrong< ::g::Fuse::Scripting::NativeModule_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 4;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(SystemSounds);
    options.TypeSize = sizeof(::g::Fuse::Scripting::NativeModule_type);
    type = (::g::Fuse::Scripting::NativeModule_type*)uClassType::New("SystemSounds", options);
    type->SetBase(::g::Fuse::Scripting::NativeModule_typeof());
    type->fp_ctor_ = (void*)SystemSounds__New2_fn;
    type->interface1.fp_GetModule = (void(*)(uObject*, ::g::Fuse::Scripting::Module**))::g::Fuse::Scripting::NativeModule__FuseScriptingIModuleProviderGetModule_fn;
    type->interface0.fp_Dispose = (void(*)(uObject*))::g::Fuse::Scripting::Module__Dispose_fn;
    ::STRINGS[0] = uString::Const("addEventOther");
    ::STRINGS[1] = uString::Const("toastIt");
    ::STRINGS[2] = uString::Const("vnd.android.cursor.item/event");
    ::STRINGS[3] = uString::Const("beginTime");
    ::STRINGS[4] = uString::Const("allDay");
    ::STRINGS[5] = uString::Const("endTime");
    ::STRINGS[6] = uString::Const("title");
    ::TYPES[0] = ::g::Fuse::Scripting::NativeMember_typeof()->Array();
    ::TYPES[1] = ::g::Fuse::Scripting::NativeMember_typeof();
    ::TYPES[2] = ::g::Fuse::Scripting::NativeCallback_typeof();
    ::TYPES[3] = ::g::Uno::String_typeof();
    ::TYPES[4] = ::g::Android::android::content::Intent_typeof();
    ::TYPES[5] = ::g::Uno::Action_typeof();
    ::TYPES[6] = ::g::Android::java::lang::CharSequence_typeof();
    ::TYPES[7] = ::g::Android::android::widget::Toast_typeof();
    type->SetInterfaces(
        ::g::Uno::IDisposable_typeof(), offsetof(::g::Fuse::Scripting::NativeModule_type, interface0),
        ::g::Fuse::Scripting::IModuleProvider_typeof(), offsetof(::g::Fuse::Scripting::NativeModule_type, interface1));
    type->SetFields(3,
        ::g::Uno::String_typeof(), offsetof(::g::SystemSounds, m_text), 0);
    return type;
}

// public SystemSounds() :20
void SystemSounds__ctor_2_fn(SystemSounds* __this)
{
    __this->ctor_2();
}

// private object AddEventOther(Fuse.Scripting.Context c, object[] args) :28
void SystemSounds__AddEventOther_fn(SystemSounds* __this, ::g::Fuse::Scripting::Context* c, uArray* args, uObject** __retval)
{
    *__retval = __this->AddEventOther(c, args);
}

// public SystemSounds New() :20
void SystemSounds__New2_fn(SystemSounds** __retval)
{
    *__retval = SystemSounds::New2();
}

// private object ToastIt(Fuse.Scripting.Context c, object[] args) :63
void SystemSounds__ToastIt_fn(SystemSounds* __this, ::g::Fuse::Scripting::Context* c, uArray* args, uObject** __retval)
{
    *__retval = __this->ToastIt(c, args);
}

// public extern void ToastMakeText() :73
void SystemSounds__ToastMakeText_fn(SystemSounds* __this)
{
    __this->ToastMakeText();
}

// public SystemSounds() [instance] :20
void SystemSounds::ctor_2()
{
    ctor_1(uArray::New(::TYPES[0/*Fuse.Scripting.NativeMember[]*/], 0));
    AddMember(::g::Fuse::Scripting::NativeFunction::New1(::STRINGS[0/*"addEventOther"*/], uDelegate::New(::TYPES[2/*Fuse.Scripting.NativeCallback*/], (void*)SystemSounds__AddEventOther_fn, this)));
    AddMember(::g::Fuse::Scripting::NativeFunction::New1(::STRINGS[1/*"toastIt"*/], uDelegate::New(::TYPES[2/*Fuse.Scripting.NativeCallback*/], (void*)SystemSounds__ToastIt_fn, this)));
}

// private object AddEventOther(Fuse.Scripting.Context c, object[] args) [instance] :28
uObject* SystemSounds::AddEventOther(::g::Fuse::Scripting::Context* c, uArray* args)
{
    uString* year = uAs<uString*>(uPtr(args)->Strong<uObject*>(0), ::TYPES[3/*string*/]);
    uString* month = uAs<uString*>(args->Strong<uObject*>(1), ::TYPES[3/*string*/]);
    uString* day = uAs<uString*>(args->Strong<uObject*>(2), ::TYPES[3/*string*/]);
    uString* title = uAs<uString*>(args->Strong<uObject*>(3), ::TYPES[3/*string*/]);
    int yearInt = 2016;
    int monthInt = 1;
    int dayInt = 1;
    yearInt = ::g::Android::java::lang::Integer::parseInt(::g::Android::java::lang::String::op_Implicit1(year));
    monthInt = ::g::Android::java::lang::Integer::parseInt(::g::Android::java::lang::String::op_Implicit1(month));
    dayInt = ::g::Android::java::lang::Integer::parseInt(::g::Android::java::lang::String::op_Implicit1(day));
    ::g::Android::java::util::Calendar* cal = ::g::Android::java::util::Calendar::getInstance();
    uPtr(cal)->set2(yearInt, monthInt, dayInt, 9, 0);
    ::g::Android::android::content::Intent* intent = ::g::Android::android::content::Intent::New9(::g::Android::android::content::Intent::ACTION_EDIT());
    intent->setType(::g::Android::java::lang::String::op_Implicit1(::STRINGS[2/*"vnd.android...*/]));
    intent->putExtra21(::g::Android::java::lang::String::op_Implicit1(::STRINGS[3/*"beginTime"*/]), cal->getTimeInMillis());
    intent->putExtra16(::g::Android::java::lang::String::op_Implicit1(::STRINGS[4/*"allDay"*/]), true);
    intent->putExtra21(::g::Android::java::lang::String::op_Implicit1(::STRINGS[5/*"endTime"*/]), cal->getTimeInMillis() + 1800000LL);
    intent->putExtra4(::g::Android::java::lang::String::op_Implicit1(::STRINGS[6/*"title"*/]), ::g::Android::java::lang::String::op_Implicit1(title));
    intent->addFlags(::g::Android::android::content::Intent::FLAG_ACTIVITY_NEW_TASK());
    uPtr(uPtr(uPtr(::g::Android::android::app::Activity::GetAppActivity())->getApplication())->getApplicationContext())->startActivity(intent);
    return NULL;
}

// private object ToastIt(Fuse.Scripting.Context c, object[] args) [instance] :63
uObject* SystemSounds::ToastIt(::g::Fuse::Scripting::Context* c, uArray* args)
{
    m_text = uAs<uString*>(uPtr(args)->Strong<uObject*>(0), ::TYPES[3/*string*/]);
    ::g::Fuse::UpdateManager::PostAction(uDelegate::New(::TYPES[5/*Uno.Action*/], (void*)SystemSounds__ToastMakeText_fn, this));
    return NULL;
}

// public extern void ToastMakeText() [instance] :73
void SystemSounds::ToastMakeText()
{
    ::g::Android::java::lang::String* myCs = ::g::Android::java::lang::String::op_Implicit1(m_text);
    ::g::Android::android::content::Context* context = uPtr(uPtr(::g::Android::android::app::Activity::GetAppActivity())->getApplication())->getApplicationContext();
    uPtr(::g::Android::android::widget::Toast::makeText(context, (uObject*)myCs, ::g::Android::android::widget::Toast::LENGTH_LONG()))->show();
}

// public SystemSounds New() [static] :20
SystemSounds* SystemSounds::New2()
{
    SystemSounds* obj1 = (SystemSounds*)uNew(SystemSounds_typeof());
    obj1->ctor_2();
    return obj1;
}
// }

} // ::g
