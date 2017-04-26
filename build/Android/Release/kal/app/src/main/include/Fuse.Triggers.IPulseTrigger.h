// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Triggers/0.27.10/$.uno#13'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>

namespace g{
namespace Fuse{
namespace Triggers{

// public abstract interface IPulseTrigger :798
// {
uInterfaceType* IPulseTrigger_typeof();

struct IPulseTrigger
{
    void(*fp_Pulse)(uObject*);
    static void Pulse(const uInterface& __this) { __this.VTable<IPulseTrigger>()->fp_Pulse(__this); }
};
// }

}}} // ::g::Fuse::Triggers
