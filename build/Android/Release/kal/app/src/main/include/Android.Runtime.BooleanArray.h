// This file was generated based on '/usr/local/share/uno/Packages/Android/0.27.4/$.uno#3'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Android.Base.Wrappers.IJWrapper.h>
#include <Android.java.lang.Object.h>
#include <Uno.Bool.h>
#include <Uno.Collections.IEnumerable-1.h>
#include <Uno.IDisposable.h>
namespace g{namespace Android{namespace Runtime{struct BooleanArray;}}}

namespace g{
namespace Android{
namespace Runtime{

// public sealed extern class BooleanArray :843
// {
struct BooleanArray_type : ::g::Android::java::lang::Object_type
{
    ::g::Uno::Collections::IEnumerable interface2;
};

BooleanArray_type* BooleanArray_typeof();
void BooleanArray__GetEnumerator_fn(BooleanArray* __this, uObject** __retval);

struct BooleanArray : ::g::Android::java::lang::Object
{
    uObject* GetEnumerator();
};
// }

}}} // ::g::Android::Runtime
