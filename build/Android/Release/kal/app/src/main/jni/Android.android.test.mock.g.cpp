// This file was generated based on '(multiple files)'.
// WARNING: Changes might be lost if you edit this file directly.

#include <Android.android.content.Intent.h>
#include <Android.android.content.res.Resources.h>
#include <Android.android.test.mock.MockContext.h>
#include <Android.Base.AndroidBindingMacros.h>
#include <Android.Base.JNI.h>
#include <Android.Base.Primitives.jmethodID.h>
#include <Android.Base.Primitives.ujclass.h>
#include <Android.Base.Primitives.ujobject.h>
#include <Android.Base.Wrappers.JWrapper.h>
#include <Android.java.lang.Object.h>
#include <Android.java.lang.String.h>
#include <Uno.Bool.h>
#include <Uno.Exception.h>
static uType* TYPES[4];

namespace g{
namespace Android{
namespace android{
namespace test{
namespace mock{

// /usr/local/share/uno/Packages/Android/0.27.4/Android/android/test/mock/$.uno#3
// ------------------------------------------------------------------------------

// public sealed extern class MockContext :320
// {
::g::Android::android::content::Context_type* MockContext_typeof()
{
    static uSStrong< ::g::Android::android::content::Context_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 9;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(MockContext);
    options.TypeSize = sizeof(::g::Android::android::content::Context_type);
    type = (::g::Android::android::content::Context_type*)uClassType::New("Android.android.test.mock.MockContext", options);
    type->SetBase(::g::Android::android::content::Context_typeof());
    type->fp_getResources = (void(*)(::g::Android::android::content::Context*, ::g::Android::android::content::res::Resources**))MockContext__getResources_fn;
    type->fp_getSystemService = (void(*)(::g::Android::android::content::Context*, ::g::Android::java::lang::String*, ::g::Android::java::lang::Object**))MockContext__getSystemService_fn;
    type->fp_startActivity = (void(*)(::g::Android::android::content::Context*, ::g::Android::android::content::Intent*))MockContext__startActivity_fn;
    type->interface1.fp_Dispose = (void(*)(uObject*))::g::Android::Base::Wrappers::JWrapper__UnoIDisposableDispose_fn;
    type->interface0.fp__GetJavaObject = (void(*)(uObject*, jobject*))::g::Android::Base::Wrappers::JWrapper___GetJavaObject_fn;
    type->interface0.fp__IsSubclassed = (void(*)(uObject*, bool*))::g::Android::Base::Wrappers::JWrapper___IsSubclassed_fn;
    ::TYPES[0] = ::g::Android::android::content::res::Resources_typeof();
    ::TYPES[1] = ::g::Android::Base::Wrappers::JWrapper_typeof();
    ::TYPES[2] = ::g::Android::java::lang::Object_typeof();
    ::TYPES[3] = ::g::Android::Base::Wrappers::IJWrapper_typeof();
    type->SetInterfaces(
        ::g::Android::Base::Wrappers::IJWrapper_typeof(), offsetof(::g::Android::android::content::Context_type, interface0),
        ::g::Uno::IDisposable_typeof(), offsetof(::g::Android::android::content::Context_type, interface1));
    type->SetFields(5,
        ::g::Android::Base::Primitives::ujclass_typeof(), (uintptr_t)&::g::Android::android::test::mock::MockContext::_javaClass3_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::test::mock::MockContext::getResources_18557_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::test::mock::MockContext::getSystemService_18620_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::test::mock::MockContext::startActivity_18593_ID_, uFieldFlagsStatic);
    return type;
}

// public static extern new void _Init() :324
void MockContext___Init3_fn()
{
    MockContext::_Init3();
}

// public override sealed Android.android.content.res.Resources getResources() :348
void MockContext__getResources_fn(MockContext* __this, ::g::Android::android::content::res::Resources** __retval)
{
    return *__retval = uCast< ::g::Android::android::content::res::Resources*>(MockContext::getResources_IMPL_18557(__this->_subclassed, __this->_javaObject), ::TYPES[0/*Android.android.content.res.Resources*/]), void();
}

// public static extern Android.Base.Wrappers.IJWrapper getResources_IMPL_18557(bool arg0, Android.Base.Primitives.ujobject arg1) :875
void MockContext__getResources_IMPL_18557_fn(bool* arg0_, jobject* arg1_, uObject** __retval)
{
    *__retval = MockContext::getResources_IMPL_18557(*arg0_, *arg1_);
}

// public override sealed Android.java.lang.Object getSystemService(Android.java.lang.String arg0) :726
void MockContext__getSystemService_fn(MockContext* __this, ::g::Android::java::lang::String* arg0, ::g::Android::java::lang::Object** __retval)
{
    return *__retval = uCast< ::g::Android::java::lang::Object*>(MockContext::getSystemService_IMPL_18620(__this->_subclassed, __this->_javaObject, (uObject*)arg0), ::TYPES[2/*Android.java.lang.Object*/]), void();
}

// public static extern Android.Base.Wrappers.IJWrapper getSystemService_IMPL_18620(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2) :1064
void MockContext__getSystemService_IMPL_18620_fn(bool* arg0_, jobject* arg1_, uObject* arg2_, uObject** __retval)
{
    *__retval = MockContext::getSystemService_IMPL_18620(*arg0_, *arg1_, arg2_);
}

// public override sealed void startActivity(Android.android.content.Intent arg0) :564
void MockContext__startActivity_fn(MockContext* __this, ::g::Android::android::content::Intent* arg0)
{
    MockContext::startActivity_IMPL_18593(__this->_subclassed, __this->_javaObject, (uObject*)arg0);
}

// public static extern void startActivity_IMPL_18593(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2) :983
void MockContext__startActivity_IMPL_18593_fn(bool* arg0_, jobject* arg1_, uObject* arg2_)
{
    MockContext::startActivity_IMPL_18593(*arg0_, *arg1_, arg2_);
}

jclass MockContext::_javaClass3_;
jmethodID MockContext::getResources_18557_ID_;
jmethodID MockContext::getSystemService_18620_ID_;
jmethodID MockContext::startActivity_18593_ID_;

// public static extern new void _Init() [static] :324
void MockContext::_Init3()
{
    if (MockContext::_javaClass3()) { return; }
    INIT_JNI;
    MockContext::_javaClass3() = NEW_GLOBAL_REF(jclass,LOAD_SYS_CLASS("android/test/mock/MockContext"));
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    if (!MockContext::_javaClass3()) { THROW_UNO_EXCEPTION("Unable to cache class 'android.test.mock.MockContext'", 53);; }
}

// public static extern Android.Base.Wrappers.IJWrapper getResources_IMPL_18557(bool arg0, Android.Base.Primitives.ujobject arg1) [static] :875
uObject* MockContext::getResources_IMPL_18557(bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CLASS_INIT(MockContext::_javaClass3(),MockContext::_Init3());
    
    uObject* result;
    CACHE_METHOD(MockContext::getResources_18557_ID(),MockContext::_javaClass3(),"getResources","()Landroid/content/res/Resources;",GetMethodID,"Id for fallback method android.test.mock.MockContext.getResources could not be cached",85);
    if (arg0_) {
        NEW_UNO(U_JNIVAR->CallNonvirtualObjectMethod(arg1_, MockContext::_javaClass3(), MockContext::getResources_18557_ID()),result,::g::Android::android::content::res::Resources_typeof(),::g::Android::android::content::res::Resources*,false,true);
    }
    else
    {
        NEW_UNO(U_JNIVAR->CallObjectMethod(arg1_, MockContext::getResources_18557_ID()),result,::g::Android::android::content::res::Resources_typeof(),::g::Android::android::content::res::Resources*,false,true);
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}

// public static extern Android.Base.Wrappers.IJWrapper getSystemService_IMPL_18620(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2) [static] :1064
uObject* MockContext::getSystemService_IMPL_18620(bool arg0_, jobject arg1_, uObject* arg2_)
{
    INIT_JNI;
    CLASS_INIT(MockContext::_javaClass3(),MockContext::_Init3());
    jobject _obArg2 = ((!arg2_) ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(arg2_, ::g::Android::Base::Wrappers::IJWrapper_typeof())));
    uObject* result;
    CACHE_METHOD(MockContext::getSystemService_18620_ID(),MockContext::_javaClass3(),"getSystemService","(Ljava/lang/String;)Ljava/lang/Object;",GetMethodID,"Id for fallback method android.test.mock.MockContext.getSystemService could not be cached",89);
    if (arg0_) {
        NEW_UNO(U_JNIVAR->CallNonvirtualObjectMethod(arg1_, MockContext::_javaClass3(), MockContext::getSystemService_18620_ID(), _obArg2),result,::g::Android::java::lang::Object_typeof(),::g::Android::java::lang::Object*,false,true);
    }
    else
    {
        NEW_UNO(U_JNIVAR->CallObjectMethod(arg1_, MockContext::getSystemService_18620_ID(), _obArg2),result,::g::Android::java::lang::Object_typeof(),::g::Android::java::lang::Object*,false,true);
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}

// public static extern void startActivity_IMPL_18593(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2) [static] :983
void MockContext::startActivity_IMPL_18593(bool arg0_, jobject arg1_, uObject* arg2_)
{
    INIT_JNI;
    CLASS_INIT(MockContext::_javaClass3(),MockContext::_Init3());
    jobject _obArg2 = ((!arg2_) ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(arg2_, ::g::Android::Base::Wrappers::IJWrapper_typeof())));
    CACHE_METHOD(MockContext::startActivity_18593_ID(),MockContext::_javaClass3(),"startActivity","(Landroid/content/Intent;)V",GetMethodID,"Id for fallback method android.test.mock.MockContext.startActivity could not be cached",86);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, MockContext::_javaClass3(), MockContext::startActivity_18593_ID(), _obArg2);
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, MockContext::startActivity_18593_ID(), _obArg2);
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
}
// }

}}}}} // ::g::Android::android::test::mock
