// This file was generated based on '(multiple files)'.
// WARNING: Changes might be lost if you edit this file directly.

#include <Android.Base.AndroidBindingMacros.h>
#include <Android.Base.JNI.h>
#include <Android.Base.Primitives.jmethodID.h>
#include <Android.Base.Primitives.ujclass.h>
#include <Android.Base.Primitives.ujobject.h>
#include <Android.Base.Wrappers.JWrapper.h>
#include <Android.Fallbacks.Android_java_util_Calendar.h>
#include <Android.Fallbacks.Android_java_util_Collection.h>
#include <Android.Fallbacks.Android_java_util_Iterator.h>
#include <Android.Fallbacks.Android_java_util_List.h>
#include <Android.Fallbacks.Android_java_util_ListIterator.h>
#include <Android.Fallbacks.Android_java_util_Observer.h>
#include <Android.java.lang.Object.h>
#include <Android.java.lang.String.h>
#include <Android.java.util.Calendar.h>
#include <Android.java.util.Collection.h>
#include <Android.java.util.Iterator.h>
#include <Android.java.util.List.h>
#include <Android.java.util.ListIterator.h>
#include <Android.java.util.Observable.h>
#include <Android.java.util.Observer.h>
#include <Android.Runtime.ObjectArray-1.h>
#include <Uno.Bool.h>
#include <Uno.Exception.h>
#include <Uno.Int.h>
#include <Uno.Long.h>
static uType* TYPES[3];

namespace g{
namespace Android{
namespace java{
namespace util{

// /usr/local/share/uno/Packages/Android/0.27.4/Android/java/util/$.uno#6
// ----------------------------------------------------------------------

// public abstract extern class Calendar :856
// {
::g::Android::java::lang::Object_type* Calendar_typeof()
{
    static uSStrong< ::g::Android::java::lang::Object_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 11;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(Calendar);
    options.TypeSize = sizeof(::g::Android::java::lang::Object_type);
    type = (::g::Android::java::lang::Object_type*)uClassType::New("Android.java.util.Calendar", options);
    type->SetBase(::g::Android::java::lang::Object_typeof());
    type->fp_hashCode1 = (void(*)(::g::Android::java::lang::Object*, int*))Calendar__hashCode1_fn;
    type->fp_toString = (void(*)(::g::Android::java::lang::Object*, ::g::Android::java::lang::String**))Calendar__toString_fn;
    type->interface0.fp__GetJavaObject = (void(*)(uObject*, jobject*))::g::Android::Base::Wrappers::JWrapper___GetJavaObject_fn;
    type->interface0.fp__IsSubclassed = (void(*)(uObject*, bool*))::g::Android::Base::Wrappers::JWrapper___IsSubclassed_fn;
    type->interface1.fp_Dispose = (void(*)(uObject*))::g::Android::Base::Wrappers::JWrapper__UnoIDisposableDispose_fn;
    ::TYPES[0] = ::g::Android::Base::Wrappers::JWrapper_typeof();
    ::TYPES[1] = ::g::Android::java::lang::String_typeof();
    type->SetInterfaces(
        ::g::Android::Base::Wrappers::IJWrapper_typeof(), offsetof(::g::Android::java::lang::Object_type, interface0),
        ::g::Uno::IDisposable_typeof(), offsetof(::g::Android::java::lang::Object_type, interface1));
    type->SetFields(5,
        ::g::Android::Base::Primitives::ujclass_typeof(), (uintptr_t)&::g::Android::java::util::Calendar::_javaClass2_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::java::util::Calendar::getInstance_37780_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::java::util::Calendar::getTimeInMillis_37789_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::java::util::Calendar::hashCode_37791_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::java::util::Calendar::set_37799_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::java::util::Calendar::toString_37807_ID_, uFieldFlagsStatic);
    return type;
}

// public static extern new void _Init() :860
void Calendar___Init2_fn()
{
    Calendar::_Init2();
}

// public static Android.java.util.Calendar getInstance() :1727
void Calendar__getInstance_fn(Calendar** __retval)
{
    *__retval = Calendar::getInstance();
}

// public static extern Android.Base.Wrappers.IJWrapper getInstance_IMPL_37780() :1949
void Calendar__getInstance_IMPL_37780_fn(uObject** __retval)
{
    *__retval = Calendar::getInstance_IMPL_37780();
}

// public long getTimeInMillis() :1772
void Calendar__getTimeInMillis_fn(Calendar* __this, int64_t* __retval)
{
    *__retval = __this->getTimeInMillis();
}

// public static extern long getTimeInMillis_IMPL_37789(bool arg0, Android.Base.Primitives.ujobject arg1) :1967
void Calendar__getTimeInMillis_IMPL_37789_fn(bool* arg0_, jobject* arg1_, int64_t* __retval)
{
    *__retval = Calendar::getTimeInMillis_IMPL_37789(*arg0_, *arg1_);
}

// public override sealed int hashCode() :1784
void Calendar__hashCode1_fn(Calendar* __this, int* __retval)
{
    return *__retval = Calendar::hashCode_IMPL_37791(__this->_subclassed, __this->_javaObject), void();
}

// public static extern int hashCode_IMPL_37791(bool arg0, Android.Base.Primitives.ujobject arg1) :1973
void Calendar__hashCode_IMPL_37791_fn(bool* arg0_, jobject* arg1_, int* __retval)
{
    *__retval = Calendar::hashCode_IMPL_37791(*arg0_, *arg1_);
}

// public void set(int arg0, int arg1, int arg2, int arg3, int arg4) :1829
void Calendar__set2_fn(Calendar* __this, int* arg0, int* arg1, int* arg2, int* arg3, int* arg4)
{
    __this->set2(*arg0, *arg1, *arg2, *arg3, *arg4);
}

// public static extern void set_IMPL_37799(bool arg0, Android.Base.Primitives.ujobject arg1, int arg2, int arg3, int arg4, int arg5, int arg6) :1994
void Calendar__set_IMPL_37799_fn(bool* arg0_, jobject* arg1_, int* arg2_, int* arg3_, int* arg4_, int* arg5_, int* arg6_)
{
    Calendar::set_IMPL_37799(*arg0_, *arg1_, *arg2_, *arg3_, *arg4_, *arg5_, *arg6_);
}

// public override sealed Android.java.lang.String toString() :1877
void Calendar__toString_fn(Calendar* __this, ::g::Android::java::lang::String** __retval)
{
    return *__retval = uCast< ::g::Android::java::lang::String*>(Calendar::toString_IMPL_37807(__this->_subclassed, __this->_javaObject), ::TYPES[1/*Android.java.lang.String*/]), void();
}

// public static extern Android.Base.Wrappers.IJWrapper toString_IMPL_37807(bool arg0, Android.Base.Primitives.ujobject arg1) :2018
void Calendar__toString_IMPL_37807_fn(bool* arg0_, jobject* arg1_, uObject** __retval)
{
    *__retval = Calendar::toString_IMPL_37807(*arg0_, *arg1_);
}

jclass Calendar::_javaClass2_;
jmethodID Calendar::getInstance_37780_ID_;
jmethodID Calendar::getTimeInMillis_37789_ID_;
jmethodID Calendar::hashCode_37791_ID_;
jmethodID Calendar::set_37799_ID_;
jmethodID Calendar::toString_37807_ID_;

// public long getTimeInMillis() [instance] :1772
int64_t Calendar::getTimeInMillis()
{
    return Calendar::getTimeInMillis_IMPL_37789(_subclassed, _javaObject);
}

// public void set(int arg0, int arg1, int arg2, int arg3, int arg4) [instance] :1829
void Calendar::set2(int arg0, int arg1, int arg2, int arg3, int arg4)
{
    int arg0_ = arg0;
    int arg1_ = arg1;
    int arg2_ = arg2;
    int arg3_ = arg3;
    int arg4_ = arg4;
    Calendar::set_IMPL_37799(_subclassed, _javaObject, arg0_, arg1_, arg2_, arg3_, arg4_);
}

// public static extern new void _Init() [static] :860
void Calendar::_Init2()
{
    if (Calendar::_javaClass2()) { return; }
    INIT_JNI;
    Calendar::_javaClass2() = NEW_GLOBAL_REF(jclass,LOAD_SYS_CLASS("java/util/Calendar"));
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    if (!Calendar::_javaClass2()) { THROW_UNO_EXCEPTION("Unable to cache class 'java.util.Calendar'", 42);; }
}

// public static Android.java.util.Calendar getInstance() [static] :1727
Calendar* Calendar::getInstance()
{
    return uCast<Calendar*>(Calendar::getInstance_IMPL_37780(), Calendar_typeof());
}

// public static extern Android.Base.Wrappers.IJWrapper getInstance_IMPL_37780() [static] :1949
uObject* Calendar::getInstance_IMPL_37780()
{
    INIT_JNI;
    CLASS_INIT(Calendar::_javaClass2(),Calendar::_Init2());
    
    uObject* result;
    CACHE_METHOD(Calendar::getInstance_37780_ID(),Calendar::_javaClass2(),"getInstance","()Ljava/util/Calendar;",GetStaticMethodID,"Id for fallback method java.util.Calendar.getInstance could not be cached",73);
    NEW_UNO(U_JNIVAR->CallStaticObjectMethod(Calendar::_javaClass2(), Calendar::getInstance_37780_ID()),result,::g::Android::Fallbacks::Android_java_util_Calendar_typeof(),Calendar*,true,true);
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}

// public static extern long getTimeInMillis_IMPL_37789(bool arg0, Android.Base.Primitives.ujobject arg1) [static] :1967
int64_t Calendar::getTimeInMillis_IMPL_37789(bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CLASS_INIT(Calendar::_javaClass2(),Calendar::_Init2());
    
    int64_t result;
    CACHE_METHOD(Calendar::getTimeInMillis_37789_ID(),Calendar::_javaClass2(),"getTimeInMillis","()J",GetMethodID,"Id for fallback method java.util.Calendar.getTimeInMillis could not be cached",77);
    if (arg0_) {
        result = ((int64_t)U_JNIVAR->CallNonvirtualLongMethod(arg1_, Calendar::_javaClass2(), Calendar::getTimeInMillis_37789_ID()));
    }
    else
    {
        result = ((int64_t)U_JNIVAR->CallLongMethod(arg1_, Calendar::getTimeInMillis_37789_ID()));
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}

// public static extern int hashCode_IMPL_37791(bool arg0, Android.Base.Primitives.ujobject arg1) [static] :1973
int Calendar::hashCode_IMPL_37791(bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CLASS_INIT(Calendar::_javaClass2(),Calendar::_Init2());
    
    int result;
    CACHE_METHOD(Calendar::hashCode_37791_ID(),Calendar::_javaClass2(),"hashCode","()I",GetMethodID,"Id for fallback method java.util.Calendar.hashCode could not be cached",70);
    if (arg0_) {
        result = ((int)U_JNIVAR->CallNonvirtualIntMethod(arg1_, Calendar::_javaClass2(), Calendar::hashCode_37791_ID()));
    }
    else
    {
        result = ((int)U_JNIVAR->CallIntMethod(arg1_, Calendar::hashCode_37791_ID()));
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}

// public static extern void set_IMPL_37799(bool arg0, Android.Base.Primitives.ujobject arg1, int arg2, int arg3, int arg4, int arg5, int arg6) [static] :1994
void Calendar::set_IMPL_37799(bool arg0_, jobject arg1_, int arg2_, int arg3_, int arg4_, int arg5_, int arg6_)
{
    INIT_JNI;
    CLASS_INIT(Calendar::_javaClass2(),Calendar::_Init2());
    
    CACHE_METHOD(Calendar::set_37799_ID(),Calendar::_javaClass2(),"set","(IIIII)V",GetMethodID,"Id for fallback method java.util.Calendar.set could not be cached",65);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, Calendar::_javaClass2(), Calendar::set_37799_ID(), ((jint)arg2_), ((jint)arg3_), ((jint)arg4_), ((jint)arg5_), ((jint)arg6_));
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, Calendar::set_37799_ID(), ((jint)arg2_), ((jint)arg3_), ((jint)arg4_), ((jint)arg5_), ((jint)arg6_));
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
}

// public static extern Android.Base.Wrappers.IJWrapper toString_IMPL_37807(bool arg0, Android.Base.Primitives.ujobject arg1) [static] :2018
uObject* Calendar::toString_IMPL_37807(bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CLASS_INIT(Calendar::_javaClass2(),Calendar::_Init2());
    
    uObject* result;
    CACHE_METHOD(Calendar::toString_37807_ID(),Calendar::_javaClass2(),"toString","()Ljava/lang/String;",GetMethodID,"Id for fallback method java.util.Calendar.toString could not be cached",70);
    if (arg0_) {
        NEW_UNO(U_JNIVAR->CallNonvirtualObjectMethod(arg1_, Calendar::_javaClass2(), Calendar::toString_37807_ID()),result,::g::Android::java::lang::String_typeof(),::g::Android::java::lang::String*,false,true);
    }
    else
    {
        NEW_UNO(U_JNIVAR->CallObjectMethod(arg1_, Calendar::toString_37807_ID()),result,::g::Android::java::lang::String_typeof(),::g::Android::java::lang::String*,false,true);
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}
// }

// /usr/local/share/uno/Packages/Android/0.27.4/Android/java/util/$.uno#77
// -----------------------------------------------------------------------

// public abstract extern interface Collection :14474
// {
uInterfaceType* Collection_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Android.java.util.Collection", 0, 0);
    return type;
}
// }

// /usr/local/share/uno/Packages/Android/0.27.4/Android/java/util/$.uno#84
// -----------------------------------------------------------------------

// public abstract extern interface Iterator :14733
// {
uInterfaceType* Iterator_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Android.java.util.Iterator", 0, 0);
    return type;
}
// }

// /usr/local/share/uno/Packages/Android/0.27.4/Android/java/util/$.uno#78
// -----------------------------------------------------------------------

// public abstract extern interface List :14519
// {
uInterfaceType* List_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Android.java.util.List", 0, 0);
    return type;
}
// }

// /usr/local/share/uno/Packages/Android/0.27.4/Android/java/util/$.uno#88
// -----------------------------------------------------------------------

// public abstract extern interface ListIterator :14859
// {
uInterfaceType* ListIterator_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Android.java.util.ListIterator", 0, 0);
    return type;
}
// }

// /usr/local/share/uno/Packages/Android/0.27.4/Android/java/util/$.uno#16
// -----------------------------------------------------------------------

// public sealed extern class Observable :3295
// {
::g::Android::java::lang::Object_type* Observable_typeof()
{
    static uSStrong< ::g::Android::java::lang::Object_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 8;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(Observable);
    options.TypeSize = sizeof(::g::Android::java::lang::Object_type);
    type = (::g::Android::java::lang::Object_type*)uClassType::New("Android.java.util.Observable", options);
    type->SetBase(::g::Android::java::lang::Object_typeof());
    type->interface1.fp_Dispose = (void(*)(uObject*))::g::Android::Base::Wrappers::JWrapper__UnoIDisposableDispose_fn;
    type->interface0.fp__GetJavaObject = (void(*)(uObject*, jobject*))::g::Android::Base::Wrappers::JWrapper___GetJavaObject_fn;
    type->interface0.fp__IsSubclassed = (void(*)(uObject*, bool*))::g::Android::Base::Wrappers::JWrapper___IsSubclassed_fn;
    ::TYPES[0] = ::g::Android::Base::Wrappers::JWrapper_typeof();
    ::TYPES[2] = ::g::Android::Base::Wrappers::IJWrapper_typeof();
    type->SetInterfaces(
        ::g::Android::Base::Wrappers::IJWrapper_typeof(), offsetof(::g::Android::java::lang::Object_type, interface0),
        ::g::Uno::IDisposable_typeof(), offsetof(::g::Android::java::lang::Object_type, interface1));
    type->SetFields(5,
        ::g::Android::Base::Primitives::ujclass_typeof(), (uintptr_t)&::g::Android::java::util::Observable::_javaClass2_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::java::util::Observable::notifyObservers_38389_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::java::util::Observable::notifyObservers_38390_ID_, uFieldFlagsStatic);
    return type;
}

// public static extern new void _Init() :3299
void Observable___Init2_fn()
{
    Observable::_Init2();
}

// public void notifyObservers() :3353
void Observable__notifyObservers_fn(Observable* __this)
{
    __this->notifyObservers();
}

// public void notifyObservers(Android.java.lang.Object arg0) :3359
void Observable__notifyObservers1_fn(Observable* __this, ::g::Android::java::lang::Object* arg0)
{
    __this->notifyObservers1(arg0);
}

// public static extern void notifyObservers_IMPL_38389(bool arg0, Android.Base.Primitives.ujobject arg1) :3391
void Observable__notifyObservers_IMPL_38389_fn(bool* arg0_, jobject* arg1_)
{
    Observable::notifyObservers_IMPL_38389(*arg0_, *arg1_);
}

// public static extern void notifyObservers_IMPL_38390(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2) :3394
void Observable__notifyObservers_IMPL_38390_fn(bool* arg0_, jobject* arg1_, uObject* arg2_)
{
    Observable::notifyObservers_IMPL_38390(*arg0_, *arg1_, arg2_);
}

jclass Observable::_javaClass2_;
jmethodID Observable::notifyObservers_38389_ID_;
jmethodID Observable::notifyObservers_38390_ID_;

// public void notifyObservers() [instance] :3353
void Observable::notifyObservers()
{
    Observable::notifyObservers_IMPL_38389(_subclassed, _javaObject);
}

// public void notifyObservers(Android.java.lang.Object arg0) [instance] :3359
void Observable::notifyObservers1(::g::Android::java::lang::Object* arg0)
{
    Observable::notifyObservers_IMPL_38390(_subclassed, _javaObject, (uObject*)arg0);
}

// public static extern new void _Init() [static] :3299
void Observable::_Init2()
{
    if (Observable::_javaClass2()) { return; }
    INIT_JNI;
    Observable::_javaClass2() = NEW_GLOBAL_REF(jclass,LOAD_SYS_CLASS("java/util/Observable"));
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    if (!Observable::_javaClass2()) { THROW_UNO_EXCEPTION("Unable to cache class 'java.util.Observable'", 44);; }
}

// public static extern void notifyObservers_IMPL_38389(bool arg0, Android.Base.Primitives.ujobject arg1) [static] :3391
void Observable::notifyObservers_IMPL_38389(bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CLASS_INIT(Observable::_javaClass2(),Observable::_Init2());
    
    CACHE_METHOD(Observable::notifyObservers_38389_ID(),Observable::_javaClass2(),"notifyObservers","()V",GetMethodID,"Id for fallback method java.util.Observable.notifyObservers could not be cached",79);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, Observable::_javaClass2(), Observable::notifyObservers_38389_ID());
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, Observable::notifyObservers_38389_ID());
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
}

// public static extern void notifyObservers_IMPL_38390(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2) [static] :3394
void Observable::notifyObservers_IMPL_38390(bool arg0_, jobject arg1_, uObject* arg2_)
{
    INIT_JNI;
    CLASS_INIT(Observable::_javaClass2(),Observable::_Init2());
    jobject _obArg2 = ((!arg2_) ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(arg2_, ::g::Android::Base::Wrappers::IJWrapper_typeof())));
    CACHE_METHOD(Observable::notifyObservers_38390_ID(),Observable::_javaClass2(),"notifyObservers","(Ljava/lang/Object;)V",GetMethodID,"Id for fallback method java.util.Observable.notifyObservers could not be cached",79);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, Observable::_javaClass2(), Observable::notifyObservers_38390_ID(), _obArg2);
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, Observable::notifyObservers_38390_ID(), _obArg2);
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
}
// }

// /usr/local/share/uno/Packages/Android/0.27.4/Android/java/util/$.uno#94
// -----------------------------------------------------------------------

// public abstract extern interface Observer :15073
// {
uInterfaceType* Observer_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Android.java.util.Observer", 0, 0);
    return type;
}
// }

}}}} // ::g::Android::java::util
