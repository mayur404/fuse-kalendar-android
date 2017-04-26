// This file was generated based on '(multiple files)'.
// WARNING: Changes might be lost if you edit this file directly.

#include <Android.android.text.Editable.h>
#include <Android.android.text.GetChars.h>
#include <Android.android.text.InputFilter.h>
#include <Android.android.text.Spannable.h>
#include <Android.android.text.Spanned.h>
#include <Android.android.text.TextUtilsDLRTruncateAt.h>
#include <Android.android.text.TextWatcher.h>
#include <Android.Base.AndroidBindingMacros.h>
#include <Android.Base.JNI.h>
#include <Android.Base.Wrappers.JWrapper.h>
#include <Android.Fallbacks.Android_android_text_Editable.h>
#include <Android.Fallbacks.Android_android_text_GetChars.h>
#include <Android.Fallbacks.Android_android_text_InputFilter.h>
#include <Android.Fallbacks.Android_android_text_Spannable.h>
#include <Android.Fallbacks.Android_android_text_Spanned.h>
#include <Android.Fallbacks.Android_android_text_TextWatcher.h>
#include <Android.java.lang.CharSequence.h>
#include <Android.java.lang.Class.h>
#include <Android.java.lang.Object.h>
#include <Android.Runtime.CharArray.h>
#include <Android.Runtime.ObjectArray-1.h>
#include <Uno.Char.h>
#include <Uno.Exception.h>
#include <Uno.Int.h>

namespace g{
namespace Android{
namespace android{
namespace text{

// /usr/local/share/uno/Packages/Android/0.27.4/Android/android/text/$.uno#40
// --------------------------------------------------------------------------

// public abstract extern interface Editable :4517
// {
uInterfaceType* Editable_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Android.android.text.Editable", 0, 0);
    return type;
}
// }

// /usr/local/share/uno/Packages/Android/0.27.4/Android/android/text/$.uno#37
// --------------------------------------------------------------------------

// public abstract extern interface GetChars :4404
// {
uInterfaceType* GetChars_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Android.android.text.GetChars", 0, 0);
    return type;
}
// }

// /usr/local/share/uno/Packages/Android/0.27.4/Android/android/text/$.uno#36
// --------------------------------------------------------------------------

// public abstract extern interface InputFilter :4387
// {
uInterfaceType* InputFilter_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Android.android.text.InputFilter", 0, 0);
    return type;
}
// }

// /usr/local/share/uno/Packages/Android/0.27.4/Android/android/text/$.uno#39
// --------------------------------------------------------------------------

// public abstract extern interface Spannable :4498
// {
uInterfaceType* Spannable_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Android.android.text.Spannable", 0, 0);
    return type;
}
// }

// /usr/local/share/uno/Packages/Android/0.27.4/Android/android/text/$.uno#38
// --------------------------------------------------------------------------

// public abstract extern interface Spanned :4421
// {
uInterfaceType* Spanned_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Android.android.text.Spanned", 0, 0);
    return type;
}
// }

// /usr/local/share/uno/Packages/Android/0.27.4/Android/android/text/$.uno#5
// -------------------------------------------------------------------------

// public sealed extern class TextUtilsDLRTruncateAt :767
// {
::g::Android::java::lang::Object_type* TextUtilsDLRTruncateAt_typeof()
{
    static uSStrong< ::g::Android::java::lang::Object_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 5;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(TextUtilsDLRTruncateAt);
    options.TypeSize = sizeof(::g::Android::java::lang::Object_type);
    type = (::g::Android::java::lang::Object_type*)uClassType::New("Android.android.text.TextUtilsDLRTruncateAt", options);
    type->SetBase(::g::Android::java::lang::Object_typeof());
    type->interface0.fp__GetJavaObject = (void(*)(uObject*, jobject*))::g::Android::Base::Wrappers::JWrapper___GetJavaObject_fn;
    type->interface0.fp__IsSubclassed = (void(*)(uObject*, bool*))::g::Android::Base::Wrappers::JWrapper___IsSubclassed_fn;
    type->interface1.fp_Dispose = (void(*)(uObject*))::g::Android::Base::Wrappers::JWrapper__UnoIDisposableDispose_fn;
    type->SetInterfaces(
        ::g::Android::Base::Wrappers::IJWrapper_typeof(), offsetof(::g::Android::java::lang::Object_type, interface0),
        ::g::Uno::IDisposable_typeof(), offsetof(::g::Android::java::lang::Object_type, interface1));
    type->SetFields(5);
    return type;
}
// }

// /usr/local/share/uno/Packages/Android/0.27.4/Android/android/text/$.uno#35
// --------------------------------------------------------------------------

// public abstract extern interface TextWatcher :4366
// {
uInterfaceType* TextWatcher_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Android.android.text.TextWatcher", 0, 0);
    return type;
}
// }

}}}} // ::g::Android::android::text
