// This file was generated based on '(multiple files)'.
// WARNING: Changes might be lost if you edit this file directly.

#include <Android.android.content.ComponentName.h>
#include <Android.android.content.Context.h>
#include <Android.android.content.ContextWrapper.h>
#include <Android.android.content.Intent.h>
#include <Android.android.content.res.AssetManager.h>
#include <Android.android.content.res.Resources.h>
#include <Android.android.net.Uri.h>
#include <Android.Base.AndroidBindingMacros.h>
#include <Android.Base.JNI.h>
#include <Android.Base.Primitives.jfieldID.h>
#include <Android.Base.Primitives.jmethodID.h>
#include <Android.Base.Primitives.ujclass.h>
#include <Android.Base.Primitives.ujobject.h>
#include <Android.Base.Wrappers.JWrapper.h>
#include <Android.Fallbacks.Android_android_content_Context.h>
#include <Android.java.lang.Object.h>
#include <Android.java.lang.String.h>
#include <Uno.Bool.h>
#include <Uno.Exception.h>
#include <Uno.Int.h>
#include <Uno.Long.h>
#include <Uno.Type.h>
static uType* TYPES[7];

namespace g{
namespace Android{
namespace android{
namespace content{

// /usr/local/share/uno/Packages/Android/0.27.4/Android/android/content/$.uno#18
// -----------------------------------------------------------------------------

// public sealed extern class ComponentName :10556
// {
::g::Android::java::lang::Object_type* ComponentName_typeof()
{
    static uSStrong< ::g::Android::java::lang::Object_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 8;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(ComponentName);
    options.TypeSize = sizeof(::g::Android::java::lang::Object_type);
    type = (::g::Android::java::lang::Object_type*)uClassType::New("Android.android.content.ComponentName", options);
    type->SetBase(::g::Android::java::lang::Object_typeof());
    type->fp_hashCode1 = (void(*)(::g::Android::java::lang::Object*, int*))ComponentName__hashCode1_fn;
    type->fp_toString = (void(*)(::g::Android::java::lang::Object*, ::g::Android::java::lang::String**))ComponentName__toString_fn;
    type->interface0.fp__GetJavaObject = (void(*)(uObject*, jobject*))::g::Android::Base::Wrappers::JWrapper___GetJavaObject_fn;
    type->interface0.fp__IsSubclassed = (void(*)(uObject*, bool*))::g::Android::Base::Wrappers::JWrapper___IsSubclassed_fn;
    type->interface1.fp_Dispose = (void(*)(uObject*))::g::Android::Base::Wrappers::JWrapper__UnoIDisposableDispose_fn;
    ::TYPES[0] = ::g::Android::Base::Wrappers::JWrapper_typeof();
    ::TYPES[1] = ::g::Android::java::lang::String_typeof();
    type->SetInterfaces(
        ::g::Android::Base::Wrappers::IJWrapper_typeof(), offsetof(::g::Android::java::lang::Object_type, interface0),
        ::g::Uno::IDisposable_typeof(), offsetof(::g::Android::java::lang::Object_type, interface1));
    type->SetFields(5,
        ::g::Android::Base::Primitives::ujclass_typeof(), (uintptr_t)&::g::Android::android::content::ComponentName::_javaClass2_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::content::ComponentName::hashCode_3882_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::content::ComponentName::toString_3880_ID_, uFieldFlagsStatic);
    return type;
}

// public static extern new void _Init() :10560
void ComponentName___Init2_fn()
{
    ComponentName::_Init2();
}

// public override sealed int hashCode() :10708
void ComponentName__hashCode1_fn(ComponentName* __this, int* __retval)
{
    return *__retval = ComponentName::hashCode_IMPL_3882(__this->_subclassed, __this->_javaObject), void();
}

// public static extern int hashCode_IMPL_3882(bool arg0, Android.Base.Primitives.ujobject arg1) :10785
void ComponentName__hashCode_IMPL_3882_fn(bool* arg0_, jobject* arg1_, int* __retval)
{
    *__retval = ComponentName::hashCode_IMPL_3882(*arg0_, *arg1_);
}

// public override sealed Android.java.lang.String toString() :10696
void ComponentName__toString_fn(ComponentName* __this, ::g::Android::java::lang::String** __retval)
{
    return *__retval = uCast< ::g::Android::java::lang::String*>(ComponentName::toString_IMPL_3880(__this->_subclassed, __this->_javaObject), ::TYPES[1/*Android.java.lang.String*/]), void();
}

// public static extern Android.Base.Wrappers.IJWrapper toString_IMPL_3880(bool arg0, Android.Base.Primitives.ujobject arg1) :10779
void ComponentName__toString_IMPL_3880_fn(bool* arg0_, jobject* arg1_, uObject** __retval)
{
    *__retval = ComponentName::toString_IMPL_3880(*arg0_, *arg1_);
}

jclass ComponentName::_javaClass2_;
jmethodID ComponentName::hashCode_3882_ID_;
jmethodID ComponentName::toString_3880_ID_;

// public static extern new void _Init() [static] :10560
void ComponentName::_Init2()
{
    if (ComponentName::_javaClass2()) { return; }
    INIT_JNI;
    ComponentName::_javaClass2() = NEW_GLOBAL_REF(jclass,LOAD_SYS_CLASS("android/content/ComponentName"));
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    if (!ComponentName::_javaClass2()) { THROW_UNO_EXCEPTION("Unable to cache class 'android.content.ComponentName'", 53);; }
}

// public static extern int hashCode_IMPL_3882(bool arg0, Android.Base.Primitives.ujobject arg1) [static] :10785
int ComponentName::hashCode_IMPL_3882(bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CLASS_INIT(ComponentName::_javaClass2(),ComponentName::_Init2());
    
    int result;
    CACHE_METHOD(ComponentName::hashCode_3882_ID(),ComponentName::_javaClass2(),"hashCode","()I",GetMethodID,"Id for fallback method android.content.ComponentName.hashCode could not be cached",81);
    if (arg0_) {
        result = ((int)U_JNIVAR->CallNonvirtualIntMethod(arg1_, ComponentName::_javaClass2(), ComponentName::hashCode_3882_ID()));
    }
    else
    {
        result = ((int)U_JNIVAR->CallIntMethod(arg1_, ComponentName::hashCode_3882_ID()));
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}

// public static extern Android.Base.Wrappers.IJWrapper toString_IMPL_3880(bool arg0, Android.Base.Primitives.ujobject arg1) [static] :10779
uObject* ComponentName::toString_IMPL_3880(bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CLASS_INIT(ComponentName::_javaClass2(),ComponentName::_Init2());
    
    uObject* result;
    CACHE_METHOD(ComponentName::toString_3880_ID(),ComponentName::_javaClass2(),"toString","()Ljava/lang/String;",GetMethodID,"Id for fallback method android.content.ComponentName.toString could not be cached",81);
    if (arg0_) {
        NEW_UNO(U_JNIVAR->CallNonvirtualObjectMethod(arg1_, ComponentName::_javaClass2(), ComponentName::toString_3880_ID()),result,::g::Android::java::lang::String_typeof(),::g::Android::java::lang::String*,false,true);
    }
    else
    {
        NEW_UNO(U_JNIVAR->CallObjectMethod(arg1_, ComponentName::toString_3880_ID()),result,::g::Android::java::lang::String_typeof(),::g::Android::java::lang::String*,false,true);
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}
// }

// /usr/local/share/uno/Packages/Android/0.27.4/Android/android/content/$.uno
// --------------------------------------------------------------------------

// public abstract extern class Context :11
// {
Context_type* Context_typeof()
{
    static uSStrong<Context_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 9;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(Context);
    options.TypeSize = sizeof(Context_type);
    type = (Context_type*)uClassType::New("Android.android.content.Context", options);
    type->SetBase(::g::Android::java::lang::Object_typeof());
    type->interface1.fp_Dispose = (void(*)(uObject*))::g::Android::Base::Wrappers::JWrapper__UnoIDisposableDispose_fn;
    type->interface0.fp__GetJavaObject = (void(*)(uObject*, jobject*))::g::Android::Base::Wrappers::JWrapper___GetJavaObject_fn;
    type->interface0.fp__IsSubclassed = (void(*)(uObject*, bool*))::g::Android::Base::Wrappers::JWrapper___IsSubclassed_fn;
    ::TYPES[1] = ::g::Android::java::lang::String_typeof();
    type->SetInterfaces(
        ::g::Android::Base::Wrappers::IJWrapper_typeof(), offsetof(Context_type, interface0),
        ::g::Uno::IDisposable_typeof(), offsetof(Context_type, interface1));
    type->SetFields(5,
        ::g::Android::Base::Primitives::ujclass_typeof(), (uintptr_t)&::g::Android::android::content::Context::_javaClass2_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jfieldID_typeof(), (uintptr_t)&::g::Android::android::content::Context::INPUT_METHOD_SERVICE_4144_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jfieldID_typeof(), (uintptr_t)&::g::Android::android::content::Context::LOCATION_SERVICE_4130_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jfieldID_typeof(), (uintptr_t)&::g::Android::android::content::Context::VIBRATOR_SERVICE_4135_ID_, uFieldFlagsStatic);
    return type;
}

// protected Context(Android.Base.Primitives.ujobject obj, Uno.Type utype, bool hasFallbackClass, bool resolveType) :16
void Context__ctor_6_fn(Context* __this, jobject* obj, uType* utype, bool* hasFallbackClass, bool* resolveType)
{
    __this->ctor_6(*obj, utype, *hasFallbackClass, *resolveType);
}

// public static extern new void _Init() :15
void Context___Init2_fn()
{
    Context::_Init2();
}

// public static Android.java.lang.String get_INPUT_METHOD_SERVICE() :666
void Context__get_INPUT_METHOD_SERVICE_fn(::g::Android::java::lang::String** __retval)
{
    *__retval = Context::INPUT_METHOD_SERVICE();
}

// public static Android.java.lang.String get_LOCATION_SERVICE() :428
void Context__get_LOCATION_SERVICE_fn(::g::Android::java::lang::String** __retval)
{
    *__retval = Context::LOCATION_SERVICE();
}

// public static Android.java.lang.String get_VIBRATOR_SERVICE() :513
void Context__get_VIBRATOR_SERVICE_fn(::g::Android::java::lang::String** __retval)
{
    *__retval = Context::VIBRATOR_SERVICE();
}

jclass Context::_javaClass2_;
jfieldID Context::INPUT_METHOD_SERVICE_4144_ID_;
jfieldID Context::LOCATION_SERVICE_4130_ID_;
jfieldID Context::VIBRATOR_SERVICE_4135_ID_;

// protected Context(Android.Base.Primitives.ujobject obj, Uno.Type utype, bool hasFallbackClass, bool resolveType) [instance] :16
void Context::ctor_6(jobject obj, uType* utype, bool hasFallbackClass, bool resolveType)
{
    ctor_4(obj, utype, hasFallbackClass, resolveType);
}

// public static extern new void _Init() [static] :15
void Context::_Init2()
{
    if (Context::_javaClass2()) { return; }
    INIT_JNI;
    Context::_javaClass2() = NEW_GLOBAL_REF(jclass,LOAD_SYS_CLASS("android/content/Context"));
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    if (!Context::_javaClass2()) { THROW_UNO_EXCEPTION("Unable to cache class 'android.content.Context'", 47);; }
}

// public static Android.java.lang.String get_INPUT_METHOD_SERVICE() [static] :666
::g::Android::java::lang::String* Context::INPUT_METHOD_SERVICE()
{
    INIT_JNI;
    CLASS_INIT(Context::_javaClass2(),Context::_Init2());
    if (::uEnterCriticalIfNull(&Context::INPUT_METHOD_SERVICE_4144_ID())) {;
    CACHE_FIELD(Context::INPUT_METHOD_SERVICE_4144_ID(),Context::_javaClass2(),"INPUT_METHOD_SERVICE","Ljava/lang/String;",GetStaticFieldID,"Id for field Context.INPUT_METHOD_SERVICE could not be cached",61);
    ::uExitCritical();;
    };
    ::g::Android::java::lang::String* result;;
    NEW_UNO(U_JNIVAR->GetStaticObjectField(Context::_javaClass2(), Context::INPUT_METHOD_SERVICE_4144_ID()),result,::g::Android::java::lang::String_typeof(),::g::Android::java::lang::String*,false,true);;
    return uCast< ::g::Android::java::lang::String*>(result, ::TYPES[1/*Android.java.lang.String*/]);
}

// public static Android.java.lang.String get_LOCATION_SERVICE() [static] :428
::g::Android::java::lang::String* Context::LOCATION_SERVICE()
{
    INIT_JNI;
    CLASS_INIT(Context::_javaClass2(),Context::_Init2());
    if (::uEnterCriticalIfNull(&Context::LOCATION_SERVICE_4130_ID())) {;
    CACHE_FIELD(Context::LOCATION_SERVICE_4130_ID(),Context::_javaClass2(),"LOCATION_SERVICE","Ljava/lang/String;",GetStaticFieldID,"Id for field Context.LOCATION_SERVICE could not be cached",57);
    ::uExitCritical();;
    };
    ::g::Android::java::lang::String* result;;
    NEW_UNO(U_JNIVAR->GetStaticObjectField(Context::_javaClass2(), Context::LOCATION_SERVICE_4130_ID()),result,::g::Android::java::lang::String_typeof(),::g::Android::java::lang::String*,false,true);;
    return uCast< ::g::Android::java::lang::String*>(result, ::TYPES[1/*Android.java.lang.String*/]);
}

// public static Android.java.lang.String get_VIBRATOR_SERVICE() [static] :513
::g::Android::java::lang::String* Context::VIBRATOR_SERVICE()
{
    INIT_JNI;
    CLASS_INIT(Context::_javaClass2(),Context::_Init2());
    if (::uEnterCriticalIfNull(&Context::VIBRATOR_SERVICE_4135_ID())) {;
    CACHE_FIELD(Context::VIBRATOR_SERVICE_4135_ID(),Context::_javaClass2(),"VIBRATOR_SERVICE","Ljava/lang/String;",GetStaticFieldID,"Id for field Context.VIBRATOR_SERVICE could not be cached",57);
    ::uExitCritical();;
    };
    ::g::Android::java::lang::String* result;;
    NEW_UNO(U_JNIVAR->GetStaticObjectField(Context::_javaClass2(), Context::VIBRATOR_SERVICE_4135_ID()),result,::g::Android::java::lang::String_typeof(),::g::Android::java::lang::String*,false,true);;
    return uCast< ::g::Android::java::lang::String*>(result, ::TYPES[1/*Android.java.lang.String*/]);
}
// }

// /usr/local/share/uno/Packages/Android/0.27.4/Android/android/content/$.uno#1
// ----------------------------------------------------------------------------

// public extern class ContextWrapper :1351
// {
::g::Android::android::content::Context_type* ContextWrapper_typeof()
{
    static uSStrong< ::g::Android::android::content::Context_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 11;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(ContextWrapper);
    options.TypeSize = sizeof(::g::Android::android::content::Context_type);
    type = (::g::Android::android::content::Context_type*)uClassType::New("Android.android.content.ContextWrapper", options);
    type->SetBase(::g::Android::android::content::Context_typeof());
    type->fp_getResources = (void(*)(::g::Android::android::content::Context*, ::g::Android::android::content::res::Resources**))ContextWrapper__getResources_fn;
    type->fp_getSystemService = (void(*)(::g::Android::android::content::Context*, ::g::Android::java::lang::String*, ::g::Android::java::lang::Object**))ContextWrapper__getSystemService_fn;
    type->fp_startActivity = (void(*)(::g::Android::android::content::Context*, ::g::Android::android::content::Intent*))ContextWrapper__startActivity_fn;
    type->interface1.fp_Dispose = (void(*)(uObject*))::g::Android::Base::Wrappers::JWrapper__UnoIDisposableDispose_fn;
    type->interface0.fp__GetJavaObject = (void(*)(uObject*, jobject*))::g::Android::Base::Wrappers::JWrapper___GetJavaObject_fn;
    type->interface0.fp__IsSubclassed = (void(*)(uObject*, bool*))::g::Android::Base::Wrappers::JWrapper___IsSubclassed_fn;
    ::TYPES[2] = ::g::Android::android::content::Context_typeof();
    ::TYPES[0] = ::g::Android::Base::Wrappers::JWrapper_typeof();
    ::TYPES[3] = ::g::Android::android::content::res::AssetManager_typeof();
    ::TYPES[4] = ::g::Android::android::content::res::Resources_typeof();
    ::TYPES[5] = ::g::Android::java::lang::Object_typeof();
    ::TYPES[6] = ::g::Android::Base::Wrappers::IJWrapper_typeof();
    type->SetInterfaces(
        ::g::Android::Base::Wrappers::IJWrapper_typeof(), offsetof(::g::Android::android::content::Context_type, interface0),
        ::g::Uno::IDisposable_typeof(), offsetof(::g::Android::android::content::Context_type, interface1));
    type->SetFields(5,
        ::g::Android::Base::Primitives::ujclass_typeof(), (uintptr_t)&::g::Android::android::content::ContextWrapper::_javaClass3_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::content::ContextWrapper::getApplicationContext_4268_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::content::ContextWrapper::getAssets_4263_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::content::ContextWrapper::getResources_4264_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::content::ContextWrapper::getSystemService_4330_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::content::ContextWrapper::startActivity_4303_ID_, uFieldFlagsStatic);
    return type;
}

// public ContextWrapper(Android.Base.Primitives.ujobject obj, Uno.Type utype, bool hasFallbackClass, bool resolveType) :1356
void ContextWrapper__ctor_8_fn(ContextWrapper* __this, jobject* obj, uType* utype, bool* hasFallbackClass, bool* resolveType)
{
    __this->ctor_8(*obj, utype, *hasFallbackClass, *resolveType);
}

// public static extern new void _Init() :1355
void ContextWrapper___Init3_fn()
{
    ContextWrapper::_Init3();
}

// public Android.android.content.Context getApplicationContext() :1416
void ContextWrapper__getApplicationContext_fn(ContextWrapper* __this, ::g::Android::android::content::Context** __retval)
{
    *__retval = __this->getApplicationContext();
}

// public static extern Android.Base.Wrappers.IJWrapper getApplicationContext_IMPL_4268(bool arg0, Android.Base.Primitives.ujobject arg1) :1937
void ContextWrapper__getApplicationContext_IMPL_4268_fn(bool* arg0_, jobject* arg1_, uObject** __retval)
{
    *__retval = ContextWrapper::getApplicationContext_IMPL_4268(*arg0_, *arg1_);
}

// public Android.android.content.res.AssetManager getAssets() :1386
void ContextWrapper__getAssets_fn(ContextWrapper* __this, ::g::Android::android::content::res::AssetManager** __retval)
{
    *__retval = __this->getAssets();
}

// public static extern Android.Base.Wrappers.IJWrapper getAssets_IMPL_4263(bool arg0, Android.Base.Primitives.ujobject arg1) :1922
void ContextWrapper__getAssets_IMPL_4263_fn(bool* arg0_, jobject* arg1_, uObject** __retval)
{
    *__retval = ContextWrapper::getAssets_IMPL_4263(*arg0_, *arg1_);
}

// public override Android.android.content.res.Resources getResources() :1392
void ContextWrapper__getResources_fn(ContextWrapper* __this, ::g::Android::android::content::res::Resources** __retval)
{
    return *__retval = uCast< ::g::Android::android::content::res::Resources*>(ContextWrapper::getResources_IMPL_4264(__this->_subclassed, __this->_javaObject), ::TYPES[4/*Android.android.content.res.Resources*/]), void();
}

// public static extern Android.Base.Wrappers.IJWrapper getResources_IMPL_4264(bool arg0, Android.Base.Primitives.ujobject arg1) :1925
void ContextWrapper__getResources_IMPL_4264_fn(bool* arg0_, jobject* arg1_, uObject** __retval)
{
    *__retval = ContextWrapper::getResources_IMPL_4264(*arg0_, *arg1_);
}

// public override Android.java.lang.Object getSystemService(Android.java.lang.String arg0) :1788
void ContextWrapper__getSystemService_fn(ContextWrapper* __this, ::g::Android::java::lang::String* arg0, ::g::Android::java::lang::Object** __retval)
{
    return *__retval = uCast< ::g::Android::java::lang::Object*>(ContextWrapper::getSystemService_IMPL_4330(__this->_subclassed, __this->_javaObject, (uObject*)arg0), ::TYPES[5/*Android.java.lang.Object*/]), void();
}

// public static extern Android.Base.Wrappers.IJWrapper getSystemService_IMPL_4330(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2) :2123
void ContextWrapper__getSystemService_IMPL_4330_fn(bool* arg0_, jobject* arg1_, uObject* arg2_, uObject** __retval)
{
    *__retval = ContextWrapper::getSystemService_IMPL_4330(*arg0_, *arg1_, arg2_);
}

// public override void startActivity(Android.android.content.Intent arg0) :1626
void ContextWrapper__startActivity_fn(ContextWrapper* __this, ::g::Android::android::content::Intent* arg0)
{
    ContextWrapper::startActivity_IMPL_4303(__this->_subclassed, __this->_javaObject, (uObject*)arg0);
}

// public static extern void startActivity_IMPL_4303(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2) :2042
void ContextWrapper__startActivity_IMPL_4303_fn(bool* arg0_, jobject* arg1_, uObject* arg2_)
{
    ContextWrapper::startActivity_IMPL_4303(*arg0_, *arg1_, arg2_);
}

jclass ContextWrapper::_javaClass3_;
jmethodID ContextWrapper::getApplicationContext_4268_ID_;
jmethodID ContextWrapper::getAssets_4263_ID_;
jmethodID ContextWrapper::getResources_4264_ID_;
jmethodID ContextWrapper::getSystemService_4330_ID_;
jmethodID ContextWrapper::startActivity_4303_ID_;

// public ContextWrapper(Android.Base.Primitives.ujobject obj, Uno.Type utype, bool hasFallbackClass, bool resolveType) [instance] :1356
void ContextWrapper::ctor_8(jobject obj, uType* utype, bool hasFallbackClass, bool resolveType)
{
    ctor_6(obj, utype, hasFallbackClass, resolveType);
}

// public Android.android.content.Context getApplicationContext() [instance] :1416
::g::Android::android::content::Context* ContextWrapper::getApplicationContext()
{
    return uCast< ::g::Android::android::content::Context*>(ContextWrapper::getApplicationContext_IMPL_4268(_subclassed, _javaObject), ::TYPES[2/*Android.android.content.Context*/]);
}

// public Android.android.content.res.AssetManager getAssets() [instance] :1386
::g::Android::android::content::res::AssetManager* ContextWrapper::getAssets()
{
    return uCast< ::g::Android::android::content::res::AssetManager*>(ContextWrapper::getAssets_IMPL_4263(_subclassed, _javaObject), ::TYPES[3/*Android.android.content.res.AssetManager*/]);
}

// public static extern new void _Init() [static] :1355
void ContextWrapper::_Init3()
{
    if (ContextWrapper::_javaClass3()) { return; }
    INIT_JNI;
    ContextWrapper::_javaClass3() = NEW_GLOBAL_REF(jclass,LOAD_SYS_CLASS("android/content/ContextWrapper"));
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    if (!ContextWrapper::_javaClass3()) { THROW_UNO_EXCEPTION("Unable to cache class 'android.content.ContextWrapper'", 54);; }
}

// public static extern Android.Base.Wrappers.IJWrapper getApplicationContext_IMPL_4268(bool arg0, Android.Base.Primitives.ujobject arg1) [static] :1937
uObject* ContextWrapper::getApplicationContext_IMPL_4268(bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CLASS_INIT(ContextWrapper::_javaClass3(),ContextWrapper::_Init3());
    
    uObject* result;
    CACHE_METHOD(ContextWrapper::getApplicationContext_4268_ID(),ContextWrapper::_javaClass3(),"getApplicationContext","()Landroid/content/Context;",GetMethodID,"Id for fallback method android.content.ContextWrapper.getApplicationContext could not be cached",95);
    if (arg0_) {
        NEW_UNO(U_JNIVAR->CallNonvirtualObjectMethod(arg1_, ContextWrapper::_javaClass3(), ContextWrapper::getApplicationContext_4268_ID()),result,::g::Android::Fallbacks::Android_android_content_Context_typeof(),::g::Android::android::content::Context*,true,true);
    }
    else
    {
        NEW_UNO(U_JNIVAR->CallObjectMethod(arg1_, ContextWrapper::getApplicationContext_4268_ID()),result,::g::Android::Fallbacks::Android_android_content_Context_typeof(),::g::Android::android::content::Context*,true,true);
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}

// public static extern Android.Base.Wrappers.IJWrapper getAssets_IMPL_4263(bool arg0, Android.Base.Primitives.ujobject arg1) [static] :1922
uObject* ContextWrapper::getAssets_IMPL_4263(bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CLASS_INIT(ContextWrapper::_javaClass3(),ContextWrapper::_Init3());
    
    uObject* result;
    CACHE_METHOD(ContextWrapper::getAssets_4263_ID(),ContextWrapper::_javaClass3(),"getAssets","()Landroid/content/res/AssetManager;",GetMethodID,"Id for fallback method android.content.ContextWrapper.getAssets could not be cached",83);
    if (arg0_) {
        NEW_UNO(U_JNIVAR->CallNonvirtualObjectMethod(arg1_, ContextWrapper::_javaClass3(), ContextWrapper::getAssets_4263_ID()),result,::g::Android::android::content::res::AssetManager_typeof(),::g::Android::android::content::res::AssetManager*,false,true);
    }
    else
    {
        NEW_UNO(U_JNIVAR->CallObjectMethod(arg1_, ContextWrapper::getAssets_4263_ID()),result,::g::Android::android::content::res::AssetManager_typeof(),::g::Android::android::content::res::AssetManager*,false,true);
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}

// public static extern Android.Base.Wrappers.IJWrapper getResources_IMPL_4264(bool arg0, Android.Base.Primitives.ujobject arg1) [static] :1925
uObject* ContextWrapper::getResources_IMPL_4264(bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CLASS_INIT(ContextWrapper::_javaClass3(),ContextWrapper::_Init3());
    
    uObject* result;
    CACHE_METHOD(ContextWrapper::getResources_4264_ID(),ContextWrapper::_javaClass3(),"getResources","()Landroid/content/res/Resources;",GetMethodID,"Id for fallback method android.content.ContextWrapper.getResources could not be cached",86);
    if (arg0_) {
        NEW_UNO(U_JNIVAR->CallNonvirtualObjectMethod(arg1_, ContextWrapper::_javaClass3(), ContextWrapper::getResources_4264_ID()),result,::g::Android::android::content::res::Resources_typeof(),::g::Android::android::content::res::Resources*,false,true);
    }
    else
    {
        NEW_UNO(U_JNIVAR->CallObjectMethod(arg1_, ContextWrapper::getResources_4264_ID()),result,::g::Android::android::content::res::Resources_typeof(),::g::Android::android::content::res::Resources*,false,true);
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}

// public static extern Android.Base.Wrappers.IJWrapper getSystemService_IMPL_4330(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2) [static] :2123
uObject* ContextWrapper::getSystemService_IMPL_4330(bool arg0_, jobject arg1_, uObject* arg2_)
{
    INIT_JNI;
    CLASS_INIT(ContextWrapper::_javaClass3(),ContextWrapper::_Init3());
    jobject _obArg2 = ((!arg2_) ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(arg2_, ::g::Android::Base::Wrappers::IJWrapper_typeof())));
    uObject* result;
    CACHE_METHOD(ContextWrapper::getSystemService_4330_ID(),ContextWrapper::_javaClass3(),"getSystemService","(Ljava/lang/String;)Ljava/lang/Object;",GetMethodID,"Id for fallback method android.content.ContextWrapper.getSystemService could not be cached",90);
    if (arg0_) {
        NEW_UNO(U_JNIVAR->CallNonvirtualObjectMethod(arg1_, ContextWrapper::_javaClass3(), ContextWrapper::getSystemService_4330_ID(), _obArg2),result,::g::Android::java::lang::Object_typeof(),::g::Android::java::lang::Object*,false,true);
    }
    else
    {
        NEW_UNO(U_JNIVAR->CallObjectMethod(arg1_, ContextWrapper::getSystemService_4330_ID(), _obArg2),result,::g::Android::java::lang::Object_typeof(),::g::Android::java::lang::Object*,false,true);
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}

// public static extern void startActivity_IMPL_4303(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2) [static] :2042
void ContextWrapper::startActivity_IMPL_4303(bool arg0_, jobject arg1_, uObject* arg2_)
{
    INIT_JNI;
    CLASS_INIT(ContextWrapper::_javaClass3(),ContextWrapper::_Init3());
    jobject _obArg2 = ((!arg2_) ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(arg2_, ::g::Android::Base::Wrappers::IJWrapper_typeof())));
    CACHE_METHOD(ContextWrapper::startActivity_4303_ID(),ContextWrapper::_javaClass3(),"startActivity","(Landroid/content/Intent;)V",GetMethodID,"Id for fallback method android.content.ContextWrapper.startActivity could not be cached",87);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, ContextWrapper::_javaClass3(), ContextWrapper::startActivity_4303_ID(), _obArg2);
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, ContextWrapper::startActivity_4303_ID(), _obArg2);
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
}
// }

// /usr/local/share/uno/Packages/Android/0.27.4/Android/android/content/$.uno#9
// ----------------------------------------------------------------------------

// public sealed extern class Intent :4242
// {
::g::Android::java::lang::Object_type* Intent_typeof()
{
    static uSStrong< ::g::Android::java::lang::Object_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 20;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(Intent);
    options.TypeSize = sizeof(::g::Android::java::lang::Object_type);
    type = (::g::Android::java::lang::Object_type*)uClassType::New("Android.android.content.Intent", options);
    type->SetBase(::g::Android::java::lang::Object_typeof());
    type->fp_toString = (void(*)(::g::Android::java::lang::Object*, ::g::Android::java::lang::String**))Intent__toString_fn;
    type->interface0.fp__GetJavaObject = (void(*)(uObject*, jobject*))::g::Android::Base::Wrappers::JWrapper___GetJavaObject_fn;
    type->interface0.fp__IsSubclassed = (void(*)(uObject*, bool*))::g::Android::Base::Wrappers::JWrapper___IsSubclassed_fn;
    type->interface1.fp_Dispose = (void(*)(uObject*))::g::Android::Base::Wrappers::JWrapper__UnoIDisposableDispose_fn;
    ::TYPES[0] = ::g::Android::Base::Wrappers::JWrapper_typeof();
    ::TYPES[6] = ::g::Android::Base::Wrappers::IJWrapper_typeof();
    ::TYPES[1] = ::g::Android::java::lang::String_typeof();
    type->SetInterfaces(
        ::g::Android::Base::Wrappers::IJWrapper_typeof(), offsetof(::g::Android::java::lang::Object_type, interface0),
        ::g::Uno::IDisposable_typeof(), offsetof(::g::Android::java::lang::Object_type, interface1));
    type->SetFields(5,
        ::g::Android::Base::Primitives::ujclass_typeof(), (uintptr_t)&::g::Android::android::content::Intent::_javaClass2_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jfieldID_typeof(), (uintptr_t)&::g::Android::android::content::Intent::ACTION_CALL_4422_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jfieldID_typeof(), (uintptr_t)&::g::Android::android::content::Intent::ACTION_EDIT_4411_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jfieldID_typeof(), (uintptr_t)&::g::Android::android::content::Intent::ACTION_SENDTO_4423_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jfieldID_typeof(), (uintptr_t)&::g::Android::android::content::Intent::ACTION_VIEW_4408_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::content::Intent::addFlags_4745_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jfieldID_typeof(), (uintptr_t)&::g::Android::android::content::Intent::FLAG_ACTIVITY_NEW_TASK_4606_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::content::Intent::Intent_4637_ID_c_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::content::Intent::putExtra_4711_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::content::Intent::putExtra_4716_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::content::Intent::putExtra_4719_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::content::Intent::setClassName_4749_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::content::Intent::setData_4701_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::content::Intent::setType_4703_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::content::Intent::toString_4755_ID_, uFieldFlagsStatic);
    return type;
}

// public Intent(Android.java.lang.String arg0) :8157
void Intent__ctor_9_fn(Intent* __this, ::g::Android::java::lang::String* arg0)
{
    __this->ctor_9(arg0);
}

// public static extern new void _Init() :4246
void Intent___Init2_fn()
{
    Intent::_Init2();
}

// public static Android.java.lang.String get_ACTION_CALL() :4506
void Intent__get_ACTION_CALL_fn(::g::Android::java::lang::String** __retval)
{
    *__retval = Intent::ACTION_CALL();
}

// public static Android.java.lang.String get_ACTION_EDIT() :4319
void Intent__get_ACTION_EDIT_fn(::g::Android::java::lang::String** __retval)
{
    *__retval = Intent::ACTION_EDIT();
}

// public static Android.java.lang.String get_ACTION_SENDTO() :4523
void Intent__get_ACTION_SENDTO_fn(::g::Android::java::lang::String** __retval)
{
    *__retval = Intent::ACTION_SENDTO();
}

// public static Android.java.lang.String get_ACTION_VIEW() :4268
void Intent__get_ACTION_VIEW_fn(::g::Android::java::lang::String** __retval)
{
    *__retval = Intent::ACTION_VIEW();
}

// public Android.android.content.Intent addFlags(int arg0) :8850
void Intent__addFlags_fn(Intent* __this, int* arg0, Intent** __retval)
{
    *__retval = __this->addFlags(*arg0);
}

// public static extern Android.Base.Wrappers.IJWrapper addFlags_IMPL_4745(bool arg0, Android.Base.Primitives.ujobject arg1, int arg2) :9277
void Intent__addFlags_IMPL_4745_fn(bool* arg0_, jobject* arg1_, int* arg2_, uObject** __retval)
{
    *__retval = Intent::addFlags_IMPL_4745(*arg0_, *arg1_, *arg2_);
}

// public static int get_FLAG_ACTIVITY_NEW_TASK() :7634
void Intent__get_FLAG_ACTIVITY_NEW_TASK_fn(int* __retval)
{
    *__retval = Intent::FLAG_ACTIVITY_NEW_TASK();
}

// public Intent New(Android.java.lang.String arg0) :8157
void Intent__New9_fn(::g::Android::java::lang::String* arg0, Intent** __retval)
{
    *__retval = Intent::New9(arg0);
}

// public Android.android.content.Intent putExtra(Android.java.lang.String arg0, Android.java.lang.String arg1) :8694
void Intent__putExtra4_fn(Intent* __this, ::g::Android::java::lang::String* arg0, ::g::Android::java::lang::String* arg1, Intent** __retval)
{
    *__retval = __this->putExtra4(arg0, arg1);
}

// public Android.android.content.Intent putExtra(Android.java.lang.String arg0, bool arg1) :8646
void Intent__putExtra16_fn(Intent* __this, ::g::Android::java::lang::String* arg0, bool* arg1, Intent** __retval)
{
    *__retval = __this->putExtra16(arg0, *arg1);
}

// public Android.android.content.Intent putExtra(Android.java.lang.String arg0, long arg1) :8676
void Intent__putExtra21_fn(Intent* __this, ::g::Android::java::lang::String* arg0, int64_t* arg1, Intent** __retval)
{
    *__retval = __this->putExtra21(arg0, *arg1);
}

// public static extern Android.Base.Wrappers.IJWrapper putExtra_IMPL_4711(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2, bool arg3) :9175
void Intent__putExtra_IMPL_4711_fn(bool* arg0_, jobject* arg1_, uObject* arg2_, bool* arg3_, uObject** __retval)
{
    *__retval = Intent::putExtra_IMPL_4711(*arg0_, *arg1_, arg2_, *arg3_);
}

// public static extern Android.Base.Wrappers.IJWrapper putExtra_IMPL_4716(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2, long arg3) :9190
void Intent__putExtra_IMPL_4716_fn(bool* arg0_, jobject* arg1_, uObject* arg2_, int64_t* arg3_, uObject** __retval)
{
    *__retval = Intent::putExtra_IMPL_4716(*arg0_, *arg1_, arg2_, *arg3_);
}

// public static extern Android.Base.Wrappers.IJWrapper putExtra_IMPL_4719(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2, Android.Base.Wrappers.IJWrapper arg3) :9199
void Intent__putExtra_IMPL_4719_fn(bool* arg0_, jobject* arg1_, uObject* arg2_, uObject* arg3_, uObject** __retval)
{
    *__retval = Intent::putExtra_IMPL_4719(*arg0_, *arg1_, arg2_, arg3_);
}

// public Android.android.content.Intent setClassName(Android.java.lang.String arg0, Android.java.lang.String arg1) :8874
void Intent__setClassName1_fn(Intent* __this, ::g::Android::java::lang::String* arg0, ::g::Android::java::lang::String* arg1, Intent** __retval)
{
    *__retval = __this->setClassName1(arg0, arg1);
}

// public static extern Android.Base.Wrappers.IJWrapper setClassName_IMPL_4749(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2, Android.Base.Wrappers.IJWrapper arg3) :9289
void Intent__setClassName_IMPL_4749_fn(bool* arg0_, jobject* arg1_, uObject* arg2_, uObject* arg3_, uObject** __retval)
{
    *__retval = Intent::setClassName_IMPL_4749(*arg0_, *arg1_, arg2_, arg3_);
}

// public Android.android.content.Intent setData(Android.android.net.Uri arg0) :8586
void Intent__setData_fn(Intent* __this, ::g::Android::android::net::Uri* arg0, Intent** __retval)
{
    *__retval = __this->setData(arg0);
}

// public static extern Android.Base.Wrappers.IJWrapper setData_IMPL_4701(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2) :9145
void Intent__setData_IMPL_4701_fn(bool* arg0_, jobject* arg1_, uObject* arg2_, uObject** __retval)
{
    *__retval = Intent::setData_IMPL_4701(*arg0_, *arg1_, arg2_);
}

// public Android.android.content.Intent setType(Android.java.lang.String arg0) :8598
void Intent__setType_fn(Intent* __this, ::g::Android::java::lang::String* arg0, Intent** __retval)
{
    *__retval = __this->setType(arg0);
}

// public static extern Android.Base.Wrappers.IJWrapper setType_IMPL_4703(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2) :9151
void Intent__setType_IMPL_4703_fn(bool* arg0_, jobject* arg1_, uObject* arg2_, uObject** __retval)
{
    *__retval = Intent::setType_IMPL_4703(*arg0_, *arg1_, arg2_);
}

// public override sealed Android.java.lang.String toString() :8910
void Intent__toString_fn(Intent* __this, ::g::Android::java::lang::String** __retval)
{
    return *__retval = uCast< ::g::Android::java::lang::String*>(Intent::toString_IMPL_4755(__this->_subclassed, __this->_javaObject), ::TYPES[1/*Android.java.lang.String*/]), void();
}

// public static extern Android.Base.Wrappers.IJWrapper toString_IMPL_4755(bool arg0, Android.Base.Primitives.ujobject arg1) :9307
void Intent__toString_IMPL_4755_fn(bool* arg0_, jobject* arg1_, uObject** __retval)
{
    *__retval = Intent::toString_IMPL_4755(*arg0_, *arg1_);
}

jclass Intent::_javaClass2_;
jfieldID Intent::ACTION_CALL_4422_ID_;
jfieldID Intent::ACTION_EDIT_4411_ID_;
jfieldID Intent::ACTION_SENDTO_4423_ID_;
jfieldID Intent::ACTION_VIEW_4408_ID_;
jmethodID Intent::addFlags_4745_ID_;
jfieldID Intent::FLAG_ACTIVITY_NEW_TASK_4606_ID_;
jmethodID Intent::Intent_4637_ID_c_;
jmethodID Intent::putExtra_4711_ID_;
jmethodID Intent::putExtra_4716_ID_;
jmethodID Intent::putExtra_4719_ID_;
jmethodID Intent::setClassName_4749_ID_;
jmethodID Intent::setData_4701_ID_;
jmethodID Intent::setType_4703_ID_;
jmethodID Intent::toString_4755_ID_;

// public Intent(Android.java.lang.String arg0) [instance] :8157
void Intent::ctor_9(::g::Android::java::lang::String* arg0)
{
    ctor_4(::g::Android::Base::JNI::GetDefaultObject(), ::g::Android::Base::JNI::GetDefaultType(), false, false);
    INIT_JNI;;
    CLASS_INIT(Intent::_javaClass2(),Intent::_Init2());;
    CACHE_METHOD(Intent::Intent_4637_ID_c(),Intent::_javaClass2(),"<init>","(Ljava/lang/String;)V",GetMethodID,"Id for fallback method android.content.Intent.<init> could not be cached",72);;
    jobject _obArg0 = ((!arg0) ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(arg0, ::g::Android::Base::Wrappers::IJWrapper_typeof())));;
    jobject result;;
    jobject _tmp;;
    _tmp = U_JNIVAR->NewObject(Intent::_javaClass2(), Intent::Intent_4637_ID_c(), _obArg0);;
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);;
    _javaObject = NEW_GLOBAL_REF(jobject,_tmp);;
    U_JNIVAR->DeleteLocalRef(_tmp);;
}

// public Android.android.content.Intent addFlags(int arg0) [instance] :8850
Intent* Intent::addFlags(int arg0)
{
    int arg0_ = arg0;
    return uCast<Intent*>(Intent::addFlags_IMPL_4745(_subclassed, _javaObject, arg0_), Intent_typeof());
}

// public Android.android.content.Intent putExtra(Android.java.lang.String arg0, Android.java.lang.String arg1) [instance] :8694
Intent* Intent::putExtra4(::g::Android::java::lang::String* arg0, ::g::Android::java::lang::String* arg1)
{
    return uCast<Intent*>(Intent::putExtra_IMPL_4719(_subclassed, _javaObject, (uObject*)arg0, (uObject*)arg1), Intent_typeof());
}

// public Android.android.content.Intent putExtra(Android.java.lang.String arg0, bool arg1) [instance] :8646
Intent* Intent::putExtra16(::g::Android::java::lang::String* arg0, bool arg1)
{
    bool arg1_ = arg1;
    return uCast<Intent*>(Intent::putExtra_IMPL_4711(_subclassed, _javaObject, (uObject*)arg0, arg1_), Intent_typeof());
}

// public Android.android.content.Intent putExtra(Android.java.lang.String arg0, long arg1) [instance] :8676
Intent* Intent::putExtra21(::g::Android::java::lang::String* arg0, int64_t arg1)
{
    int64_t arg1_ = arg1;
    return uCast<Intent*>(Intent::putExtra_IMPL_4716(_subclassed, _javaObject, (uObject*)arg0, arg1_), Intent_typeof());
}

// public Android.android.content.Intent setClassName(Android.java.lang.String arg0, Android.java.lang.String arg1) [instance] :8874
Intent* Intent::setClassName1(::g::Android::java::lang::String* arg0, ::g::Android::java::lang::String* arg1)
{
    return uCast<Intent*>(Intent::setClassName_IMPL_4749(_subclassed, _javaObject, (uObject*)arg0, (uObject*)arg1), Intent_typeof());
}

// public Android.android.content.Intent setData(Android.android.net.Uri arg0) [instance] :8586
Intent* Intent::setData(::g::Android::android::net::Uri* arg0)
{
    return uCast<Intent*>(Intent::setData_IMPL_4701(_subclassed, _javaObject, (uObject*)arg0), Intent_typeof());
}

// public Android.android.content.Intent setType(Android.java.lang.String arg0) [instance] :8598
Intent* Intent::setType(::g::Android::java::lang::String* arg0)
{
    return uCast<Intent*>(Intent::setType_IMPL_4703(_subclassed, _javaObject, (uObject*)arg0), Intent_typeof());
}

// public static extern new void _Init() [static] :4246
void Intent::_Init2()
{
    if (Intent::_javaClass2()) { return; }
    INIT_JNI;
    Intent::_javaClass2() = NEW_GLOBAL_REF(jclass,LOAD_SYS_CLASS("android/content/Intent"));
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    if (!Intent::_javaClass2()) { THROW_UNO_EXCEPTION("Unable to cache class 'android.content.Intent'", 46);; }
}

// public static extern Android.Base.Wrappers.IJWrapper addFlags_IMPL_4745(bool arg0, Android.Base.Primitives.ujobject arg1, int arg2) [static] :9277
uObject* Intent::addFlags_IMPL_4745(bool arg0_, jobject arg1_, int arg2_)
{
    INIT_JNI;
    CLASS_INIT(Intent::_javaClass2(),Intent::_Init2());
    
    uObject* result;
    CACHE_METHOD(Intent::addFlags_4745_ID(),Intent::_javaClass2(),"addFlags","(I)Landroid/content/Intent;",GetMethodID,"Id for fallback method android.content.Intent.addFlags could not be cached",74);
    if (arg0_) {
        NEW_UNO(U_JNIVAR->CallNonvirtualObjectMethod(arg1_, Intent::_javaClass2(), Intent::addFlags_4745_ID(), ((jint)arg2_)),result,Intent_typeof(),Intent*,false,true);
    }
    else
    {
        NEW_UNO(U_JNIVAR->CallObjectMethod(arg1_, Intent::addFlags_4745_ID(), ((jint)arg2_)),result,Intent_typeof(),Intent*,false,true);
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}

// public Intent New(Android.java.lang.String arg0) [static] :8157
Intent* Intent::New9(::g::Android::java::lang::String* arg0)
{
    Intent* obj4 = (Intent*)uNew(Intent_typeof());
    obj4->ctor_9(arg0);
    return obj4;
}

// public static extern Android.Base.Wrappers.IJWrapper putExtra_IMPL_4711(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2, bool arg3) [static] :9175
uObject* Intent::putExtra_IMPL_4711(bool arg0_, jobject arg1_, uObject* arg2_, bool arg3_)
{
    INIT_JNI;
    CLASS_INIT(Intent::_javaClass2(),Intent::_Init2());
    jobject _obArg2 = ((!arg2_) ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(arg2_, ::g::Android::Base::Wrappers::IJWrapper_typeof())));
    uObject* result;
    CACHE_METHOD(Intent::putExtra_4711_ID(),Intent::_javaClass2(),"putExtra","(Ljava/lang/String;Z)Landroid/content/Intent;",GetMethodID,"Id for fallback method android.content.Intent.putExtra could not be cached",74);
    if (arg0_) {
        NEW_UNO(U_JNIVAR->CallNonvirtualObjectMethod(arg1_, Intent::_javaClass2(), Intent::putExtra_4711_ID(), _obArg2, ((jboolean)arg3_)),result,Intent_typeof(),Intent*,false,true);
    }
    else
    {
        NEW_UNO(U_JNIVAR->CallObjectMethod(arg1_, Intent::putExtra_4711_ID(), _obArg2, ((jboolean)arg3_)),result,Intent_typeof(),Intent*,false,true);
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}

// public static extern Android.Base.Wrappers.IJWrapper putExtra_IMPL_4716(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2, long arg3) [static] :9190
uObject* Intent::putExtra_IMPL_4716(bool arg0_, jobject arg1_, uObject* arg2_, int64_t arg3_)
{
    INIT_JNI;
    CLASS_INIT(Intent::_javaClass2(),Intent::_Init2());
    jobject _obArg2 = ((!arg2_) ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(arg2_, ::g::Android::Base::Wrappers::IJWrapper_typeof())));
    uObject* result;
    CACHE_METHOD(Intent::putExtra_4716_ID(),Intent::_javaClass2(),"putExtra","(Ljava/lang/String;J)Landroid/content/Intent;",GetMethodID,"Id for fallback method android.content.Intent.putExtra could not be cached",74);
    if (arg0_) {
        NEW_UNO(U_JNIVAR->CallNonvirtualObjectMethod(arg1_, Intent::_javaClass2(), Intent::putExtra_4716_ID(), _obArg2, ((jlong)arg3_)),result,Intent_typeof(),Intent*,false,true);
    }
    else
    {
        NEW_UNO(U_JNIVAR->CallObjectMethod(arg1_, Intent::putExtra_4716_ID(), _obArg2, ((jlong)arg3_)),result,Intent_typeof(),Intent*,false,true);
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}

// public static extern Android.Base.Wrappers.IJWrapper putExtra_IMPL_4719(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2, Android.Base.Wrappers.IJWrapper arg3) [static] :9199
uObject* Intent::putExtra_IMPL_4719(bool arg0_, jobject arg1_, uObject* arg2_, uObject* arg3_)
{
    INIT_JNI;
    CLASS_INIT(Intent::_javaClass2(),Intent::_Init2());
    jobject _obArg2 = ((!arg2_) ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(arg2_, ::g::Android::Base::Wrappers::IJWrapper_typeof())));
    jobject _obArg3 = ((!arg3_) ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(arg3_, ::g::Android::Base::Wrappers::IJWrapper_typeof())));
    uObject* result;
    CACHE_METHOD(Intent::putExtra_4719_ID(),Intent::_javaClass2(),"putExtra","(Ljava/lang/String;Ljava/lang/String;)Landroid/content/Intent;",GetMethodID,"Id for fallback method android.content.Intent.putExtra could not be cached",74);
    if (arg0_) {
        NEW_UNO(U_JNIVAR->CallNonvirtualObjectMethod(arg1_, Intent::_javaClass2(), Intent::putExtra_4719_ID(), _obArg2, _obArg3),result,Intent_typeof(),Intent*,false,true);
    }
    else
    {
        NEW_UNO(U_JNIVAR->CallObjectMethod(arg1_, Intent::putExtra_4719_ID(), _obArg2, _obArg3),result,Intent_typeof(),Intent*,false,true);
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}

// public static extern Android.Base.Wrappers.IJWrapper setClassName_IMPL_4749(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2, Android.Base.Wrappers.IJWrapper arg3) [static] :9289
uObject* Intent::setClassName_IMPL_4749(bool arg0_, jobject arg1_, uObject* arg2_, uObject* arg3_)
{
    INIT_JNI;
    CLASS_INIT(Intent::_javaClass2(),Intent::_Init2());
    jobject _obArg2 = ((!arg2_) ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(arg2_, ::g::Android::Base::Wrappers::IJWrapper_typeof())));
    jobject _obArg3 = ((!arg3_) ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(arg3_, ::g::Android::Base::Wrappers::IJWrapper_typeof())));
    uObject* result;
    CACHE_METHOD(Intent::setClassName_4749_ID(),Intent::_javaClass2(),"setClassName","(Ljava/lang/String;Ljava/lang/String;)Landroid/content/Intent;",GetMethodID,"Id for fallback method android.content.Intent.setClassName could not be cached",78);
    if (arg0_) {
        NEW_UNO(U_JNIVAR->CallNonvirtualObjectMethod(arg1_, Intent::_javaClass2(), Intent::setClassName_4749_ID(), _obArg2, _obArg3),result,Intent_typeof(),Intent*,false,true);
    }
    else
    {
        NEW_UNO(U_JNIVAR->CallObjectMethod(arg1_, Intent::setClassName_4749_ID(), _obArg2, _obArg3),result,Intent_typeof(),Intent*,false,true);
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}

// public static extern Android.Base.Wrappers.IJWrapper setData_IMPL_4701(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2) [static] :9145
uObject* Intent::setData_IMPL_4701(bool arg0_, jobject arg1_, uObject* arg2_)
{
    INIT_JNI;
    CLASS_INIT(Intent::_javaClass2(),Intent::_Init2());
    jobject _obArg2 = ((!arg2_) ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(arg2_, ::g::Android::Base::Wrappers::IJWrapper_typeof())));
    uObject* result;
    CACHE_METHOD(Intent::setData_4701_ID(),Intent::_javaClass2(),"setData","(Landroid/net/Uri;)Landroid/content/Intent;",GetMethodID,"Id for fallback method android.content.Intent.setData could not be cached",73);
    if (arg0_) {
        NEW_UNO(U_JNIVAR->CallNonvirtualObjectMethod(arg1_, Intent::_javaClass2(), Intent::setData_4701_ID(), _obArg2),result,Intent_typeof(),Intent*,false,true);
    }
    else
    {
        NEW_UNO(U_JNIVAR->CallObjectMethod(arg1_, Intent::setData_4701_ID(), _obArg2),result,Intent_typeof(),Intent*,false,true);
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}

// public static extern Android.Base.Wrappers.IJWrapper setType_IMPL_4703(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2) [static] :9151
uObject* Intent::setType_IMPL_4703(bool arg0_, jobject arg1_, uObject* arg2_)
{
    INIT_JNI;
    CLASS_INIT(Intent::_javaClass2(),Intent::_Init2());
    jobject _obArg2 = ((!arg2_) ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(arg2_, ::g::Android::Base::Wrappers::IJWrapper_typeof())));
    uObject* result;
    CACHE_METHOD(Intent::setType_4703_ID(),Intent::_javaClass2(),"setType","(Ljava/lang/String;)Landroid/content/Intent;",GetMethodID,"Id for fallback method android.content.Intent.setType could not be cached",73);
    if (arg0_) {
        NEW_UNO(U_JNIVAR->CallNonvirtualObjectMethod(arg1_, Intent::_javaClass2(), Intent::setType_4703_ID(), _obArg2),result,Intent_typeof(),Intent*,false,true);
    }
    else
    {
        NEW_UNO(U_JNIVAR->CallObjectMethod(arg1_, Intent::setType_4703_ID(), _obArg2),result,Intent_typeof(),Intent*,false,true);
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}

// public static extern Android.Base.Wrappers.IJWrapper toString_IMPL_4755(bool arg0, Android.Base.Primitives.ujobject arg1) [static] :9307
uObject* Intent::toString_IMPL_4755(bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CLASS_INIT(Intent::_javaClass2(),Intent::_Init2());
    
    uObject* result;
    CACHE_METHOD(Intent::toString_4755_ID(),Intent::_javaClass2(),"toString","()Ljava/lang/String;",GetMethodID,"Id for fallback method android.content.Intent.toString could not be cached",74);
    if (arg0_) {
        NEW_UNO(U_JNIVAR->CallNonvirtualObjectMethod(arg1_, Intent::_javaClass2(), Intent::toString_4755_ID()),result,::g::Android::java::lang::String_typeof(),::g::Android::java::lang::String*,false,true);
    }
    else
    {
        NEW_UNO(U_JNIVAR->CallObjectMethod(arg1_, Intent::toString_4755_ID()),result,::g::Android::java::lang::String_typeof(),::g::Android::java::lang::String*,false,true);
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}

// public static Android.java.lang.String get_ACTION_CALL() [static] :4506
::g::Android::java::lang::String* Intent::ACTION_CALL()
{
    INIT_JNI;
    CLASS_INIT(Intent::_javaClass2(),Intent::_Init2());
    if (::uEnterCriticalIfNull(&Intent::ACTION_CALL_4422_ID())) {;
    CACHE_FIELD(Intent::ACTION_CALL_4422_ID(),Intent::_javaClass2(),"ACTION_CALL","Ljava/lang/String;",GetStaticFieldID,"Id for field Intent.ACTION_CALL could not be cached",51);
    ::uExitCritical();;
    };
    ::g::Android::java::lang::String* result;;
    NEW_UNO(U_JNIVAR->GetStaticObjectField(Intent::_javaClass2(), Intent::ACTION_CALL_4422_ID()),result,::g::Android::java::lang::String_typeof(),::g::Android::java::lang::String*,false,true);;
    return uCast< ::g::Android::java::lang::String*>(result, ::TYPES[1/*Android.java.lang.String*/]);
}

// public static Android.java.lang.String get_ACTION_EDIT() [static] :4319
::g::Android::java::lang::String* Intent::ACTION_EDIT()
{
    INIT_JNI;
    CLASS_INIT(Intent::_javaClass2(),Intent::_Init2());
    if (::uEnterCriticalIfNull(&Intent::ACTION_EDIT_4411_ID())) {;
    CACHE_FIELD(Intent::ACTION_EDIT_4411_ID(),Intent::_javaClass2(),"ACTION_EDIT","Ljava/lang/String;",GetStaticFieldID,"Id for field Intent.ACTION_EDIT could not be cached",51);
    ::uExitCritical();;
    };
    ::g::Android::java::lang::String* result;;
    NEW_UNO(U_JNIVAR->GetStaticObjectField(Intent::_javaClass2(), Intent::ACTION_EDIT_4411_ID()),result,::g::Android::java::lang::String_typeof(),::g::Android::java::lang::String*,false,true);;
    return uCast< ::g::Android::java::lang::String*>(result, ::TYPES[1/*Android.java.lang.String*/]);
}

// public static Android.java.lang.String get_ACTION_SENDTO() [static] :4523
::g::Android::java::lang::String* Intent::ACTION_SENDTO()
{
    INIT_JNI;
    CLASS_INIT(Intent::_javaClass2(),Intent::_Init2());
    if (::uEnterCriticalIfNull(&Intent::ACTION_SENDTO_4423_ID())) {;
    CACHE_FIELD(Intent::ACTION_SENDTO_4423_ID(),Intent::_javaClass2(),"ACTION_SENDTO","Ljava/lang/String;",GetStaticFieldID,"Id for field Intent.ACTION_SENDTO could not be cached",53);
    ::uExitCritical();;
    };
    ::g::Android::java::lang::String* result;;
    NEW_UNO(U_JNIVAR->GetStaticObjectField(Intent::_javaClass2(), Intent::ACTION_SENDTO_4423_ID()),result,::g::Android::java::lang::String_typeof(),::g::Android::java::lang::String*,false,true);;
    return uCast< ::g::Android::java::lang::String*>(result, ::TYPES[1/*Android.java.lang.String*/]);
}

// public static Android.java.lang.String get_ACTION_VIEW() [static] :4268
::g::Android::java::lang::String* Intent::ACTION_VIEW()
{
    INIT_JNI;
    CLASS_INIT(Intent::_javaClass2(),Intent::_Init2());
    if (::uEnterCriticalIfNull(&Intent::ACTION_VIEW_4408_ID())) {;
    CACHE_FIELD(Intent::ACTION_VIEW_4408_ID(),Intent::_javaClass2(),"ACTION_VIEW","Ljava/lang/String;",GetStaticFieldID,"Id for field Intent.ACTION_VIEW could not be cached",51);
    ::uExitCritical();;
    };
    ::g::Android::java::lang::String* result;;
    NEW_UNO(U_JNIVAR->GetStaticObjectField(Intent::_javaClass2(), Intent::ACTION_VIEW_4408_ID()),result,::g::Android::java::lang::String_typeof(),::g::Android::java::lang::String*,false,true);;
    return uCast< ::g::Android::java::lang::String*>(result, ::TYPES[1/*Android.java.lang.String*/]);
}

// public static int get_FLAG_ACTIVITY_NEW_TASK() [static] :7634
int Intent::FLAG_ACTIVITY_NEW_TASK()
{
    INIT_JNI;
    CLASS_INIT(Intent::_javaClass2(),Intent::_Init2());
    if (::uEnterCriticalIfNull(&Intent::FLAG_ACTIVITY_NEW_TASK_4606_ID())) {;
    CACHE_FIELD(Intent::FLAG_ACTIVITY_NEW_TASK_4606_ID(),Intent::_javaClass2(),"FLAG_ACTIVITY_NEW_TASK","I",GetStaticFieldID,"Id for field Intent.FLAG_ACTIVITY_NEW_TASK could not be cached",62);
    ::uExitCritical();;
    };
    int result;;
    result = ((int)U_JNIVAR->GetStaticIntField(Intent::_javaClass2(), Intent::FLAG_ACTIVITY_NEW_TASK_4606_ID()));;
    return result;
}
// }

}}}} // ::g::Android::android::content
