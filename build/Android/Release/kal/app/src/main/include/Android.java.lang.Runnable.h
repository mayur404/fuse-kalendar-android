// This file was generated based on '/usr/local/share/uno/Packages/Android/0.27.4/Android/java/lang/$.uno#89'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Android.Base.Wrappers.IJWrapper.h>
#include <Uno.Object.h>

namespace g{
namespace Android{
namespace java{
namespace lang{

// public abstract extern interface Runnable :18765
// {
uInterfaceType* Runnable_typeof();

struct Runnable
{
    void(*fp_run)(uObject*);
    static void run(const uInterface& __this) { __this.VTable<Runnable>()->fp_run(__this); }
};
// }

}}}} // ::g::Android::java::lang
