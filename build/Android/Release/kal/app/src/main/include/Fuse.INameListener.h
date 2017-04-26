// This file was generated based on '/usr/local/share/uno/Packages/FuseCore/0.27.10/$.uno#44'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>

namespace g{
namespace Fuse{

// public abstract interface INameListener :6269
// {
uInterfaceType* INameListener_typeof();

struct INameListener
{
    void(*fp_OnNameChanged)(uObject*, uObject*, uString*);
    static void OnNameChanged(const uInterface& __this, uObject* obj, uString* name) { __this.VTable<INameListener>()->fp_OnNameChanged(__this, obj, name); }
};
// }

}} // ::g::Fuse
