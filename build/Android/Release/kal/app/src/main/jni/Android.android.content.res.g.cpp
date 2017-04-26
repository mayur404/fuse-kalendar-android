// This file was generated based on '(multiple files)'.
// WARNING: Changes might be lost if you edit this file directly.

#include <Android.android.content.res.AssetManager.h>
#include <Android.android.content.res.ColorStateList.h>
#include <Android.android.content.res.Configuration.h>
#include <Android.android.content.res.Resources.h>
#include <Android.android.graphics.drawable.Drawable.h>
#include <Android.Base.AndroidBindingMacros.h>
#include <Android.Base.JNI.h>
#include <Android.Base.Primitives.jmethodID.h>
#include <Android.Base.Primitives.ujclass.h>
#include <Android.Base.Primitives.ujobject.h>
#include <Android.Base.Wrappers.JWrapper.h>
#include <Android.Fallbacks.Android_android_graphics_drawable_Drawable.h>
#include <Android.Fallbacks.Android_java_io_InputStream.h>
#include <Android.java.io.InputStream.h>
#include <Android.java.lang.String.h>
#include <Uno.Bool.h>
#include <Uno.Exception.h>
#include <Uno.Int.h>
static uType* TYPES[5];

namespace g{
namespace Android{
namespace android{
namespace content{
namespace res{

// /usr/local/share/uno/Packages/Android/0.27.4/Android/android/content/res/$.uno#4
// --------------------------------------------------------------------------------

// public sealed extern class AssetManager :505
// {
::g::Android::java::lang::Object_type* AssetManager_typeof()
{
    static uSStrong< ::g::Android::java::lang::Object_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 7;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(AssetManager);
    options.TypeSize = sizeof(::g::Android::java::lang::Object_type);
    type = (::g::Android::java::lang::Object_type*)uClassType::New("Android.android.content.res.AssetManager", options);
    type->SetBase(::g::Android::java::lang::Object_typeof());
    type->interface1.fp_Dispose = (void(*)(uObject*))::g::Android::Base::Wrappers::JWrapper__UnoIDisposableDispose_fn;
    type->interface0.fp__GetJavaObject = (void(*)(uObject*, jobject*))::g::Android::Base::Wrappers::JWrapper___GetJavaObject_fn;
    type->interface0.fp__IsSubclassed = (void(*)(uObject*, bool*))::g::Android::Base::Wrappers::JWrapper___IsSubclassed_fn;
    ::TYPES[0] = ::g::Android::java::io::InputStream_typeof();
    ::TYPES[1] = ::g::Android::Base::Wrappers::JWrapper_typeof();
    ::TYPES[2] = ::g::Android::Base::Wrappers::IJWrapper_typeof();
    type->SetInterfaces(
        ::g::Android::Base::Wrappers::IJWrapper_typeof(), offsetof(::g::Android::java::lang::Object_type, interface0),
        ::g::Uno::IDisposable_typeof(), offsetof(::g::Android::java::lang::Object_type, interface1));
    type->SetFields(5,
        ::g::Android::Base::Primitives::ujclass_typeof(), (uintptr_t)&::g::Android::android::content::res::AssetManager::_javaClass2_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::content::res::AssetManager::open_3508_ID_, uFieldFlagsStatic);
    return type;
}

// public static extern new void _Init() :509
void AssetManager___Init2_fn()
{
    AssetManager::_Init2();
}

// public Android.java.io.InputStream open(Android.java.lang.String arg0) :586
void AssetManager__open_fn(AssetManager* __this, ::g::Android::java::lang::String* arg0, ::g::Android::java::io::InputStream** __retval)
{
    *__retval = __this->open(arg0);
}

// public static extern Android.Base.Wrappers.IJWrapper open_IMPL_3508(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2) :650
void AssetManager__open_IMPL_3508_fn(bool* arg0_, jobject* arg1_, uObject* arg2_, uObject** __retval)
{
    *__retval = AssetManager::open_IMPL_3508(*arg0_, *arg1_, arg2_);
}

jclass AssetManager::_javaClass2_;
jmethodID AssetManager::open_3508_ID_;

// public Android.java.io.InputStream open(Android.java.lang.String arg0) [instance] :586
::g::Android::java::io::InputStream* AssetManager::open(::g::Android::java::lang::String* arg0)
{
    return uCast< ::g::Android::java::io::InputStream*>(AssetManager::open_IMPL_3508(_subclassed, _javaObject, (uObject*)arg0), ::TYPES[0/*Android.java.io.InputStream*/]);
}

// public static extern new void _Init() [static] :509
void AssetManager::_Init2()
{
    if (AssetManager::_javaClass2()) { return; }
    INIT_JNI;
    AssetManager::_javaClass2() = NEW_GLOBAL_REF(jclass,LOAD_SYS_CLASS("android/content/res/AssetManager"));
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    if (!AssetManager::_javaClass2()) { THROW_UNO_EXCEPTION("Unable to cache class 'android.content.res.AssetManager'", 56);; }
}

// public static extern Android.Base.Wrappers.IJWrapper open_IMPL_3508(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2) [static] :650
uObject* AssetManager::open_IMPL_3508(bool arg0_, jobject arg1_, uObject* arg2_)
{
    INIT_JNI;
    CLASS_INIT(AssetManager::_javaClass2(),AssetManager::_Init2());
    jobject _obArg2 = ((!arg2_) ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(arg2_, ::g::Android::Base::Wrappers::IJWrapper_typeof())));
    uObject* result;
    CACHE_METHOD(AssetManager::open_3508_ID(),AssetManager::_javaClass2(),"open","(Ljava/lang/String;)Ljava/io/InputStream;",GetMethodID,"Id for fallback method android.content.res.AssetManager.open could not be cached",80);
    if (arg0_) {
        NEW_UNO(U_JNIVAR->CallNonvirtualObjectMethod(arg1_, AssetManager::_javaClass2(), AssetManager::open_3508_ID(), _obArg2),result,::g::Android::Fallbacks::Android_java_io_InputStream_typeof(),::g::Android::java::io::InputStream*,true,true);
    }
    else
    {
        NEW_UNO(U_JNIVAR->CallObjectMethod(arg1_, AssetManager::open_3508_ID(), _obArg2),result,::g::Android::Fallbacks::Android_java_io_InputStream_typeof(),::g::Android::java::io::InputStream*,true,true);
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}
// }

// /usr/local/share/uno/Packages/Android/0.27.4/Android/android/content/res/$.uno#5
// --------------------------------------------------------------------------------

// public sealed extern class ColorStateList :693
// {
::g::Android::java::lang::Object_type* ColorStateList_typeof()
{
    static uSStrong< ::g::Android::java::lang::Object_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 8;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(ColorStateList);
    options.TypeSize = sizeof(::g::Android::java::lang::Object_type);
    type = (::g::Android::java::lang::Object_type*)uClassType::New("Android.android.content.res.ColorStateList", options);
    type->SetBase(::g::Android::java::lang::Object_typeof());
    type->fp_toString = (void(*)(::g::Android::java::lang::Object*, ::g::Android::java::lang::String**))ColorStateList__toString_fn;
    type->interface0.fp__GetJavaObject = (void(*)(uObject*, jobject*))::g::Android::Base::Wrappers::JWrapper___GetJavaObject_fn;
    type->interface0.fp__IsSubclassed = (void(*)(uObject*, bool*))::g::Android::Base::Wrappers::JWrapper___IsSubclassed_fn;
    type->interface1.fp_Dispose = (void(*)(uObject*))::g::Android::Base::Wrappers::JWrapper__UnoIDisposableDispose_fn;
    ::TYPES[1] = ::g::Android::Base::Wrappers::JWrapper_typeof();
    ::TYPES[3] = ::g::Android::java::lang::String_typeof();
    type->SetInterfaces(
        ::g::Android::Base::Wrappers::IJWrapper_typeof(), offsetof(::g::Android::java::lang::Object_type, interface0),
        ::g::Uno::IDisposable_typeof(), offsetof(::g::Android::java::lang::Object_type, interface1));
    type->SetFields(5,
        ::g::Android::Base::Primitives::ujclass_typeof(), (uintptr_t)&::g::Android::android::content::res::ColorStateList::_javaClass2_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::content::res::ColorStateList::getDefaultColor_3525_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::content::res::ColorStateList::toString_3526_ID_, uFieldFlagsStatic);
    return type;
}

// public static extern new void _Init() :697
void ColorStateList___Init2_fn()
{
    ColorStateList::_Init2();
}

// public int getDefaultColor() :765
void ColorStateList__getDefaultColor_fn(ColorStateList* __this, int* __retval)
{
    *__retval = __this->getDefaultColor();
}

// public static extern int getDefaultColor_IMPL_3525(bool arg0, Android.Base.Primitives.ujobject arg1) :806
void ColorStateList__getDefaultColor_IMPL_3525_fn(bool* arg0_, jobject* arg1_, int* __retval)
{
    *__retval = ColorStateList::getDefaultColor_IMPL_3525(*arg0_, *arg1_);
}

// public override sealed Android.java.lang.String toString() :771
void ColorStateList__toString_fn(ColorStateList* __this, ::g::Android::java::lang::String** __retval)
{
    return *__retval = uCast< ::g::Android::java::lang::String*>(ColorStateList::toString_IMPL_3526(__this->_subclassed, __this->_javaObject), ::TYPES[3/*Android.java.lang.String*/]), void();
}

// public static extern Android.Base.Wrappers.IJWrapper toString_IMPL_3526(bool arg0, Android.Base.Primitives.ujobject arg1) :809
void ColorStateList__toString_IMPL_3526_fn(bool* arg0_, jobject* arg1_, uObject** __retval)
{
    *__retval = ColorStateList::toString_IMPL_3526(*arg0_, *arg1_);
}

jclass ColorStateList::_javaClass2_;
jmethodID ColorStateList::getDefaultColor_3525_ID_;
jmethodID ColorStateList::toString_3526_ID_;

// public int getDefaultColor() [instance] :765
int ColorStateList::getDefaultColor()
{
    return ColorStateList::getDefaultColor_IMPL_3525(_subclassed, _javaObject);
}

// public static extern new void _Init() [static] :697
void ColorStateList::_Init2()
{
    if (ColorStateList::_javaClass2()) { return; }
    INIT_JNI;
    ColorStateList::_javaClass2() = NEW_GLOBAL_REF(jclass,LOAD_SYS_CLASS("android/content/res/ColorStateList"));
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    if (!ColorStateList::_javaClass2()) { THROW_UNO_EXCEPTION("Unable to cache class 'android.content.res.ColorStateList'", 58);; }
}

// public static extern int getDefaultColor_IMPL_3525(bool arg0, Android.Base.Primitives.ujobject arg1) [static] :806
int ColorStateList::getDefaultColor_IMPL_3525(bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CLASS_INIT(ColorStateList::_javaClass2(),ColorStateList::_Init2());
    
    int result;
    CACHE_METHOD(ColorStateList::getDefaultColor_3525_ID(),ColorStateList::_javaClass2(),"getDefaultColor","()I",GetMethodID,"Id for fallback method android.content.res.ColorStateList.getDefaultColor could not be cached",93);
    if (arg0_) {
        result = ((int)U_JNIVAR->CallNonvirtualIntMethod(arg1_, ColorStateList::_javaClass2(), ColorStateList::getDefaultColor_3525_ID()));
    }
    else
    {
        result = ((int)U_JNIVAR->CallIntMethod(arg1_, ColorStateList::getDefaultColor_3525_ID()));
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}

// public static extern Android.Base.Wrappers.IJWrapper toString_IMPL_3526(bool arg0, Android.Base.Primitives.ujobject arg1) [static] :809
uObject* ColorStateList::toString_IMPL_3526(bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CLASS_INIT(ColorStateList::_javaClass2(),ColorStateList::_Init2());
    
    uObject* result;
    CACHE_METHOD(ColorStateList::toString_3526_ID(),ColorStateList::_javaClass2(),"toString","()Ljava/lang/String;",GetMethodID,"Id for fallback method android.content.res.ColorStateList.toString could not be cached",86);
    if (arg0_) {
        NEW_UNO(U_JNIVAR->CallNonvirtualObjectMethod(arg1_, ColorStateList::_javaClass2(), ColorStateList::toString_3526_ID()),result,::g::Android::java::lang::String_typeof(),::g::Android::java::lang::String*,false,true);
    }
    else
    {
        NEW_UNO(U_JNIVAR->CallObjectMethod(arg1_, ColorStateList::toString_3526_ID()),result,::g::Android::java::lang::String_typeof(),::g::Android::java::lang::String*,false,true);
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}
// }

// /usr/local/share/uno/Packages/Android/0.27.4/Android/android/content/res/$.uno#6
// --------------------------------------------------------------------------------

// public sealed extern class Configuration :831
// {
::g::Android::java::lang::Object_type* Configuration_typeof()
{
    static uSStrong< ::g::Android::java::lang::Object_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 8;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(Configuration);
    options.TypeSize = sizeof(::g::Android::java::lang::Object_type);
    type = (::g::Android::java::lang::Object_type*)uClassType::New("Android.android.content.res.Configuration", options);
    type->SetBase(::g::Android::java::lang::Object_typeof());
    type->fp_hashCode1 = (void(*)(::g::Android::java::lang::Object*, int*))Configuration__hashCode1_fn;
    type->fp_toString = (void(*)(::g::Android::java::lang::Object*, ::g::Android::java::lang::String**))Configuration__toString_fn;
    type->interface0.fp__GetJavaObject = (void(*)(uObject*, jobject*))::g::Android::Base::Wrappers::JWrapper___GetJavaObject_fn;
    type->interface0.fp__IsSubclassed = (void(*)(uObject*, bool*))::g::Android::Base::Wrappers::JWrapper___IsSubclassed_fn;
    type->interface1.fp_Dispose = (void(*)(uObject*))::g::Android::Base::Wrappers::JWrapper__UnoIDisposableDispose_fn;
    ::TYPES[1] = ::g::Android::Base::Wrappers::JWrapper_typeof();
    ::TYPES[3] = ::g::Android::java::lang::String_typeof();
    type->SetInterfaces(
        ::g::Android::Base::Wrappers::IJWrapper_typeof(), offsetof(::g::Android::java::lang::Object_type, interface0),
        ::g::Uno::IDisposable_typeof(), offsetof(::g::Android::java::lang::Object_type, interface1));
    type->SetFields(5,
        ::g::Android::Base::Primitives::ujclass_typeof(), (uintptr_t)&::g::Android::android::content::res::Configuration::_javaClass2_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::content::res::Configuration::hashCode_3620_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::content::res::Configuration::toString_3609_ID_, uFieldFlagsStatic);
    return type;
}

// public static extern new void _Init() :835
void Configuration___Init2_fn()
{
    Configuration::_Init2();
}

// public override sealed int hashCode() :2376
void Configuration__hashCode1_fn(Configuration* __this, int* __retval)
{
    return *__retval = Configuration::hashCode_IMPL_3620(__this->_subclassed, __this->_javaObject), void();
}

// public static extern int hashCode_IMPL_3620(bool arg0, Android.Base.Primitives.ujobject arg1) :2448
void Configuration__hashCode_IMPL_3620_fn(bool* arg0_, jobject* arg1_, int* __retval)
{
    *__retval = Configuration::hashCode_IMPL_3620(*arg0_, *arg1_);
}

// public override sealed Android.java.lang.String toString() :2310
void Configuration__toString_fn(Configuration* __this, ::g::Android::java::lang::String** __retval)
{
    return *__retval = uCast< ::g::Android::java::lang::String*>(Configuration::toString_IMPL_3609(__this->_subclassed, __this->_javaObject), ::TYPES[3/*Android.java.lang.String*/]), void();
}

// public static extern Android.Base.Wrappers.IJWrapper toString_IMPL_3609(bool arg0, Android.Base.Primitives.ujobject arg1) :2415
void Configuration__toString_IMPL_3609_fn(bool* arg0_, jobject* arg1_, uObject** __retval)
{
    *__retval = Configuration::toString_IMPL_3609(*arg0_, *arg1_);
}

jclass Configuration::_javaClass2_;
jmethodID Configuration::hashCode_3620_ID_;
jmethodID Configuration::toString_3609_ID_;

// public static extern new void _Init() [static] :835
void Configuration::_Init2()
{
    if (Configuration::_javaClass2()) { return; }
    INIT_JNI;
    Configuration::_javaClass2() = NEW_GLOBAL_REF(jclass,LOAD_SYS_CLASS("android/content/res/Configuration"));
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    if (!Configuration::_javaClass2()) { THROW_UNO_EXCEPTION("Unable to cache class 'android.content.res.Configuration'", 57);; }
}

// public static extern int hashCode_IMPL_3620(bool arg0, Android.Base.Primitives.ujobject arg1) [static] :2448
int Configuration::hashCode_IMPL_3620(bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CLASS_INIT(Configuration::_javaClass2(),Configuration::_Init2());
    
    int result;
    CACHE_METHOD(Configuration::hashCode_3620_ID(),Configuration::_javaClass2(),"hashCode","()I",GetMethodID,"Id for fallback method android.content.res.Configuration.hashCode could not be cached",85);
    if (arg0_) {
        result = ((int)U_JNIVAR->CallNonvirtualIntMethod(arg1_, Configuration::_javaClass2(), Configuration::hashCode_3620_ID()));
    }
    else
    {
        result = ((int)U_JNIVAR->CallIntMethod(arg1_, Configuration::hashCode_3620_ID()));
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}

// public static extern Android.Base.Wrappers.IJWrapper toString_IMPL_3609(bool arg0, Android.Base.Primitives.ujobject arg1) [static] :2415
uObject* Configuration::toString_IMPL_3609(bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CLASS_INIT(Configuration::_javaClass2(),Configuration::_Init2());
    
    uObject* result;
    CACHE_METHOD(Configuration::toString_3609_ID(),Configuration::_javaClass2(),"toString","()Ljava/lang/String;",GetMethodID,"Id for fallback method android.content.res.Configuration.toString could not be cached",85);
    if (arg0_) {
        NEW_UNO(U_JNIVAR->CallNonvirtualObjectMethod(arg1_, Configuration::_javaClass2(), Configuration::toString_3609_ID()),result,::g::Android::java::lang::String_typeof(),::g::Android::java::lang::String*,false,true);
    }
    else
    {
        NEW_UNO(U_JNIVAR->CallObjectMethod(arg1_, Configuration::toString_3609_ID()),result,::g::Android::java::lang::String_typeof(),::g::Android::java::lang::String*,false,true);
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}
// }

// /usr/local/share/uno/Packages/Android/0.27.4/Android/android/content/res/$.uno#11
// ---------------------------------------------------------------------------------

// public sealed extern class Resources :2836
// {
::g::Android::java::lang::Object_type* Resources_typeof()
{
    static uSStrong< ::g::Android::java::lang::Object_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 7;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(Resources);
    options.TypeSize = sizeof(::g::Android::java::lang::Object_type);
    type = (::g::Android::java::lang::Object_type*)uClassType::New("Android.android.content.res.Resources", options);
    type->SetBase(::g::Android::java::lang::Object_typeof());
    type->interface1.fp_Dispose = (void(*)(uObject*))::g::Android::Base::Wrappers::JWrapper__UnoIDisposableDispose_fn;
    type->interface0.fp__GetJavaObject = (void(*)(uObject*, jobject*))::g::Android::Base::Wrappers::JWrapper___GetJavaObject_fn;
    type->interface0.fp__IsSubclassed = (void(*)(uObject*, bool*))::g::Android::Base::Wrappers::JWrapper___IsSubclassed_fn;
    ::TYPES[4] = ::g::Android::android::graphics::drawable::Drawable_typeof();
    ::TYPES[1] = ::g::Android::Base::Wrappers::JWrapper_typeof();
    type->SetInterfaces(
        ::g::Android::Base::Wrappers::IJWrapper_typeof(), offsetof(::g::Android::java::lang::Object_type, interface0),
        ::g::Uno::IDisposable_typeof(), offsetof(::g::Android::java::lang::Object_type, interface1));
    type->SetFields(5,
        ::g::Android::Base::Primitives::ujclass_typeof(), (uintptr_t)&::g::Android::android::content::res::Resources::_javaClass2_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::content::res::Resources::getDrawable_3664_ID_, uFieldFlagsStatic);
    return type;
}

// public static extern new void _Init() :2840
void Resources___Init2_fn()
{
    Resources::_Init2();
}

// public Android.android.graphics.drawable.Drawable getDrawable(int arg0) :2957
void Resources__getDrawable_fn(Resources* __this, int* arg0, ::g::Android::android::graphics::drawable::Drawable** __retval)
{
    *__retval = __this->getDrawable(*arg0);
}

// public static extern Android.Base.Wrappers.IJWrapper getDrawable_IMPL_3664(bool arg0, Android.Base.Primitives.ujobject arg1, int arg2) :3193
void Resources__getDrawable_IMPL_3664_fn(bool* arg0_, jobject* arg1_, int* arg2_, uObject** __retval)
{
    *__retval = Resources::getDrawable_IMPL_3664(*arg0_, *arg1_, *arg2_);
}

jclass Resources::_javaClass2_;
jmethodID Resources::getDrawable_3664_ID_;

// public Android.android.graphics.drawable.Drawable getDrawable(int arg0) [instance] :2957
::g::Android::android::graphics::drawable::Drawable* Resources::getDrawable(int arg0)
{
    int arg0_ = arg0;
    return uCast< ::g::Android::android::graphics::drawable::Drawable*>(Resources::getDrawable_IMPL_3664(_subclassed, _javaObject, arg0_), ::TYPES[4/*Android.android.graphics.drawable.Drawable*/]);
}

// public static extern new void _Init() [static] :2840
void Resources::_Init2()
{
    if (Resources::_javaClass2()) { return; }
    INIT_JNI;
    Resources::_javaClass2() = NEW_GLOBAL_REF(jclass,LOAD_SYS_CLASS("android/content/res/Resources"));
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    if (!Resources::_javaClass2()) { THROW_UNO_EXCEPTION("Unable to cache class 'android.content.res.Resources'", 53);; }
}

// public static extern Android.Base.Wrappers.IJWrapper getDrawable_IMPL_3664(bool arg0, Android.Base.Primitives.ujobject arg1, int arg2) [static] :3193
uObject* Resources::getDrawable_IMPL_3664(bool arg0_, jobject arg1_, int arg2_)
{
    INIT_JNI;
    CLASS_INIT(Resources::_javaClass2(),Resources::_Init2());
    
    uObject* result;
    CACHE_METHOD(Resources::getDrawable_3664_ID(),Resources::_javaClass2(),"getDrawable","(I)Landroid/graphics/drawable/Drawable;",GetMethodID,"Id for fallback method android.content.res.Resources.getDrawable could not be cached",84);
    if (arg0_) {
        NEW_UNO(U_JNIVAR->CallNonvirtualObjectMethod(arg1_, Resources::_javaClass2(), Resources::getDrawable_3664_ID(), ((jint)arg2_)),result,::g::Android::Fallbacks::Android_android_graphics_drawable_Drawable_typeof(),::g::Android::android::graphics::drawable::Drawable*,true,true);
    }
    else
    {
        NEW_UNO(U_JNIVAR->CallObjectMethod(arg1_, Resources::getDrawable_3664_ID(), ((jint)arg2_)),result,::g::Android::Fallbacks::Android_android_graphics_drawable_Drawable_typeof(),::g::Android::android::graphics::drawable::Drawable*,true,true);
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}
// }

}}}}} // ::g::Android::android::content::res
