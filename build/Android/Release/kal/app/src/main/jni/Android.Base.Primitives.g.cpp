// This file was generated based on '(multiple files)'.
// WARNING: Changes might be lost if you edit this file directly.

#include <Android.Base.JNI.h>
#include <Android.Base.Primitives.ConstCharPtr.h>
#include <Android.Base.Primitives.JavaVMPtr.h>
#include <Android.Base.Primitives.jfieldID.h>
#include <Android.Base.Primitives.jmethodID.h>
#include <Android.Base.Primitives.JNIEnvPtr.h>
#include <Android.Base.Primitives.JNINativeMethod.h>
#include <Android.Base.Primitives.jweak.h>
#include <Android.Base.Primitives.ujboolean.h>
#include <Android.Base.Primitives.ujbyte.h>
#include <Android.Base.Primitives.ujchar.h>
#include <Android.Base.Primitives.ujclass.h>
#include <Android.Base.Primitives.ujdouble.h>
#include <Android.Base.Primitives.ujfloat.h>
#include <Android.Base.Primitives.ujint.h>
#include <Android.Base.Primitives.ujlong.h>
#include <Android.Base.Primitives.ujobject.h>
#include <Android.Base.Primitives.ujshort.h>
#include <Android.Base.Primitives.ujstring.h>
#include <Android.Base.Primitives.ujvalue.h>
#include <Android.Base.Primitives.uweakptr.h>
#include <Uno.Bool.h>
#include <Uno.Long.h>
static uType* TYPES[1];

namespace g{
namespace Android{
namespace Base{
namespace Primitives{

// /usr/local/share/uno/Packages/UnoCore/0.27.15/Targets/Android/Uno/Base/$.uno#2
// ------------------------------------------------------------------------------

// public extern struct ConstCharPtr :2023
// {
uStructType* ConstCharPtr_typeof()
{
    static uSStrong<uStructType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.ValueSize = sizeof(const char*);
    options.TypeSize = sizeof(uStructType);
    type = uStructType::New("Android.Base.Primitives.ConstCharPtr", options);
    return type;
}
// }

// /usr/local/share/uno/Packages/UnoCore/0.27.15/Targets/Android/Uno/Base/$.uno#2
// ------------------------------------------------------------------------------

// public extern struct JavaVMPtr :2026
// {
uStructType* JavaVMPtr_typeof()
{
    static uSStrong<uStructType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.ValueSize = sizeof(JavaVM*);
    options.TypeSize = sizeof(uStructType);
    type = uStructType::New("Android.Base.Primitives.JavaVMPtr", options);
    return type;
}
// }

// /usr/local/share/uno/Packages/UnoCore/0.27.15/Targets/Android/Uno/Base/$.uno#2
// ------------------------------------------------------------------------------

// public extern struct jfieldID :2156
// {
uStructType* jfieldID_typeof()
{
    static uSStrong<uStructType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.ValueSize = sizeof(jfieldID);
    options.TypeSize = sizeof(uStructType);
    type = uStructType::New("Android.Base.Primitives.jfieldID", options);
    return type;
}
// }

// /usr/local/share/uno/Packages/UnoCore/0.27.15/Targets/Android/Uno/Base/$.uno#2
// ------------------------------------------------------------------------------

// public extern struct jmethodID :2153
// {
uStructType* jmethodID_typeof()
{
    static uSStrong<uStructType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.ValueSize = sizeof(jmethodID);
    options.TypeSize = sizeof(uStructType);
    type = uStructType::New("Android.Base.Primitives.jmethodID", options);
    return type;
}
// }

// /usr/local/share/uno/Packages/UnoCore/0.27.15/Targets/Android/Uno/Base/$.uno#2
// ------------------------------------------------------------------------------

// public extern struct JNIEnvPtr :2029
// {
uStructType* JNIEnvPtr_typeof()
{
    static uSStrong<uStructType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.ValueSize = sizeof(JNIEnv*);
    options.TypeSize = sizeof(uStructType);
    type = uStructType::New("Android.Base.Primitives.JNIEnvPtr", options);
    return type;
}
// }

// /usr/local/share/uno/Packages/UnoCore/0.27.15/Targets/Android/Uno/Base/$.uno#2
// ------------------------------------------------------------------------------

// public extern struct JNINativeMethod :2150
// {
uStructType* JNINativeMethod_typeof()
{
    static uSStrong<uStructType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.ValueSize = sizeof(JNINativeMethod);
    options.TypeSize = sizeof(uStructType);
    type = uStructType::New("Android.Base.Primitives.JNINativeMethod", options);
    return type;
}
// }

// /usr/local/share/uno/Packages/UnoCore/0.27.15/Targets/Android/Uno/Base/$.uno#2
// ------------------------------------------------------------------------------

// public extern struct jweak :2032
// {
uStructType* jweak_typeof()
{
    static uSStrong<uStructType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.ValueSize = sizeof(jweak);
    options.TypeSize = sizeof(uStructType);
    type = uStructType::New("Android.Base.Primitives.jweak", options);
    return type;
}
// }

// /usr/local/share/uno/Packages/UnoCore/0.27.15/Targets/Android/Uno/Base/$.uno#2
// ------------------------------------------------------------------------------

// public extern struct ujboolean :2038
// {
uStructType* ujboolean_typeof()
{
    static uSStrong<uStructType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.ValueSize = sizeof(jboolean);
    options.TypeSize = sizeof(uStructType);
    type = uStructType::New("Android.Base.Primitives.ujboolean", options);
    return type;
}
// }

// /usr/local/share/uno/Packages/UnoCore/0.27.15/Targets/Android/Uno/Base/$.uno#2
// ------------------------------------------------------------------------------

// public extern struct ujbyte :2052
// {
uStructType* ujbyte_typeof()
{
    static uSStrong<uStructType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.ValueSize = sizeof(jbyte);
    options.TypeSize = sizeof(uStructType);
    type = uStructType::New("Android.Base.Primitives.ujbyte", options);
    return type;
}
// }

// /usr/local/share/uno/Packages/UnoCore/0.27.15/Targets/Android/Uno/Base/$.uno#2
// ------------------------------------------------------------------------------

// public extern struct ujchar :2066
// {
uStructType* ujchar_typeof()
{
    static uSStrong<uStructType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.ValueSize = sizeof(jchar);
    options.TypeSize = sizeof(uStructType);
    type = uStructType::New("Android.Base.Primitives.ujchar", options);
    return type;
}
// }

// /usr/local/share/uno/Packages/UnoCore/0.27.15/Targets/Android/Uno/Base/$.uno#2
// ------------------------------------------------------------------------------

// public extern struct ujclass :2159
// {
uStructType* ujclass_typeof()
{
    static uSStrong<uStructType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.ValueSize = sizeof(jclass);
    options.TypeSize = sizeof(uStructType);
    type = uStructType::New("Android.Base.Primitives.ujclass", options);
    return type;
}

// public static Android.Base.Primitives.ujclass get_Null() :2163
void ujclass__get_Null_fn(jclass* __retval)
{
    *__retval = ujclass::Null();
}

// public static operator ==(Android.Base.Primitives.ujclass lhs, Android.Base.Primitives.ujclass rhs) :2166
void ujclass__op_Equality_fn(jclass* lhs, jclass* rhs, bool* __retval)
{
    *__retval = ujclass::op_Equality(*lhs, *rhs);
}

// public static operator ==(Android.Base.Primitives.ujclass lhs, Android.Base.Primitives.ujclass rhs) [static] :2166
bool ujclass::op_Equality(jclass lhs, jclass rhs)
{
    return ::g::Android::Base::JNI::IsSameObject(::g::Android::Base::Primitives::ujobject::op_Implicit(lhs), ::g::Android::Base::Primitives::ujobject::op_Implicit(rhs));
}

// public static Android.Base.Primitives.ujclass get_Null() [static] :2163
jclass ujclass::Null()
{
    return NULL;
}
// }

// /usr/local/share/uno/Packages/UnoCore/0.27.15/Targets/Android/Uno/Base/$.uno#2
// ------------------------------------------------------------------------------

// public extern struct ujdouble :2136
// {
uStructType* ujdouble_typeof()
{
    static uSStrong<uStructType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.ValueSize = sizeof(jdouble);
    options.TypeSize = sizeof(uStructType);
    type = uStructType::New("Android.Base.Primitives.ujdouble", options);
    return type;
}
// }

// /usr/local/share/uno/Packages/UnoCore/0.27.15/Targets/Android/Uno/Base/$.uno#2
// ------------------------------------------------------------------------------

// public extern struct ujfloat :2122
// {
uStructType* ujfloat_typeof()
{
    static uSStrong<uStructType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.ValueSize = sizeof(jfloat);
    options.TypeSize = sizeof(uStructType);
    type = uStructType::New("Android.Base.Primitives.ujfloat", options);
    return type;
}
// }

// /usr/local/share/uno/Packages/UnoCore/0.27.15/Targets/Android/Uno/Base/$.uno#2
// ------------------------------------------------------------------------------

// public extern struct ujint :2094
// {
uStructType* ujint_typeof()
{
    static uSStrong<uStructType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.ValueSize = sizeof(jint);
    options.TypeSize = sizeof(uStructType);
    type = uStructType::New("Android.Base.Primitives.ujint", options);
    return type;
}
// }

// /usr/local/share/uno/Packages/UnoCore/0.27.15/Targets/Android/Uno/Base/$.uno#2
// ------------------------------------------------------------------------------

// public extern struct ujlong :2108
// {
uStructType* ujlong_typeof()
{
    static uSStrong<uStructType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.ValueSize = sizeof(jlong);
    options.TypeSize = sizeof(uStructType);
    type = uStructType::New("Android.Base.Primitives.ujlong", options);
    return type;
}

// public static implicit operator Android.Base.Primitives.ujlong(long v) :2115
void ujlong__op_Implicit1_fn(int64_t* v, jlong* __retval)
{
    *__retval = ujlong::op_Implicit1(*v);
}

// public static implicit operator Android.Base.Primitives.ujlong(long v) [static] :2115
jlong ujlong::op_Implicit1(int64_t v)
{
    return (jlong)v;
}
// }

// /usr/local/share/uno/Packages/UnoCore/0.27.15/Targets/Android/Uno/Base/$.uno#2
// ------------------------------------------------------------------------------

// public extern struct ujobject :2187
// {
uStructType* ujobject_typeof()
{
    static uSStrong<uStructType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.ValueSize = sizeof(jobject);
    options.TypeSize = sizeof(uStructType);
    type = uStructType::New("Android.Base.Primitives.ujobject", options);
    ::TYPES[0] = ::g::Uno::Bool_typeof();
    return type;
}

// public static Android.Base.Primitives.ujobject get_Null() :2191
void ujobject__get_Null_fn(jobject* __retval)
{
    *__retval = ujobject::Null();
}

// public static operator ==(Android.Base.Primitives.ujobject lhs, Android.Base.Primitives.ujobject rhs) :2214
void ujobject__op_Equality_fn(jobject* lhs, jobject* rhs, bool* __retval)
{
    *__retval = ujobject::op_Equality(*lhs, *rhs);
}

// public static implicit operator Android.Base.Primitives.ujobject(Android.Base.Primitives.ujclass v) :2194
void ujobject__op_Implicit_fn(jclass* v, jobject* __retval)
{
    *__retval = ujobject::op_Implicit(*v);
}

// public static operator !=(Android.Base.Primitives.ujobject lhs, Android.Base.Primitives.ujobject rhs) :2219
void ujobject__op_Inequality_fn(jobject* lhs, jobject* rhs, bool* __retval)
{
    *__retval = ujobject::op_Inequality(*lhs, *rhs);
}

// public static operator ==(Android.Base.Primitives.ujobject lhs, Android.Base.Primitives.ujobject rhs) [static] :2214
bool ujobject::op_Equality(jobject lhs, jobject rhs)
{
    return ::g::Android::Base::JNI::IsSameObject(lhs, rhs);
}

// public static implicit operator Android.Base.Primitives.ujobject(Android.Base.Primitives.ujclass v) [static] :2194
jobject ujobject::op_Implicit(jclass v)
{
    return (jobject)v;
}

// public static operator !=(Android.Base.Primitives.ujobject lhs, Android.Base.Primitives.ujobject rhs) [static] :2219
bool ujobject::op_Inequality(jobject lhs, jobject rhs)
{
    return !ujobject::op_Equality(lhs, rhs);
}

// public static Android.Base.Primitives.ujobject get_Null() [static] :2191
jobject ujobject::Null()
{
    return NULL;
}
// }

// /usr/local/share/uno/Packages/UnoCore/0.27.15/Targets/Android/Uno/Base/$.uno#2
// ------------------------------------------------------------------------------

// public extern struct ujshort :2080
// {
uStructType* ujshort_typeof()
{
    static uSStrong<uStructType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.ValueSize = sizeof(jshort);
    options.TypeSize = sizeof(uStructType);
    type = uStructType::New("Android.Base.Primitives.ujshort", options);
    return type;
}
// }

// /usr/local/share/uno/Packages/UnoCore/0.27.15/Targets/Android/Uno/Base/$.uno#2
// ------------------------------------------------------------------------------

// public extern struct ujstring :2178
// {
uStructType* ujstring_typeof()
{
    static uSStrong<uStructType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.ValueSize = sizeof(jstring);
    options.TypeSize = sizeof(uStructType);
    type = uStructType::New("Android.Base.Primitives.ujstring", options);
    return type;
}
// }

// /usr/local/share/uno/Packages/UnoCore/0.27.15/Targets/Android/Uno/Base/$.uno#2
// ------------------------------------------------------------------------------

// public extern struct ujvalue :2227
// {
uStructType* ujvalue_typeof()
{
    static uSStrong<uStructType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.ValueSize = sizeof(jvalue);
    options.TypeSize = sizeof(uStructType);
    type = uStructType::New("Android.Base.Primitives.ujvalue", options);
    return type;
}

// public static implicit operator Android.Base.Primitives.ujvalue(Android.Base.Primitives.ujlong v) :2281
void ujvalue__op_Implicit7_fn(jlong* v, jvalue* __retval)
{
    *__retval = ujvalue::op_Implicit7(*v);
}

// public static implicit operator Android.Base.Primitives.ujvalue(Android.Base.Primitives.ujobject v) :2233
void ujvalue__op_Implicit8_fn(jobject* v, jvalue* __retval)
{
    *__retval = ujvalue::op_Implicit8(*v);
}

// public static implicit operator Android.Base.Primitives.ujvalue(long v) :2325
void ujvalue__op_Implicit17_fn(int64_t* v, jvalue* __retval)
{
    *__retval = ujvalue::op_Implicit17(*v);
}

// public static implicit operator Android.Base.Primitives.ujvalue(Android.Base.Primitives.ujlong v) [static] :2281
jvalue ujvalue::op_Implicit7(jlong v)
{
    jvalue r;;
    r.j = v;
    return r;
}

// public static implicit operator Android.Base.Primitives.ujvalue(Android.Base.Primitives.ujobject v) [static] :2233
jvalue ujvalue::op_Implicit8(jobject v)
{
    jvalue r;;
    r.l = v;
    return r;
}

// public static implicit operator Android.Base.Primitives.ujvalue(long v) [static] :2325
jvalue ujvalue::op_Implicit17(int64_t v)
{
    return ujvalue::op_Implicit7(::g::Android::Base::Primitives::ujlong::op_Implicit1(v));
}
// }

// /usr/local/share/uno/Packages/UnoCore/0.27.15/Targets/Android/Uno/Base/$.uno#2
// ------------------------------------------------------------------------------

// public extern struct uweakptr :2035
// {
uStructType* uweakptr_typeof()
{
    static uSStrong<uStructType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.ValueSize = sizeof(uWeakObject*);
    options.TypeSize = sizeof(uStructType);
    type = uStructType::New("Android.Base.Primitives.uweakptr", options);
    return type;
}
// }

}}}} // ::g::Android::Base::Primitives
