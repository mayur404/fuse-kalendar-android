// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Controls/0.27.10/$.uno#35'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>

namespace g{
namespace Fuse{
namespace Controls{

// internal abstract interface IVisualDraw :3499
// {
uInterfaceType* IVisualDraw_typeof();

struct IVisualDraw
{
    void(*fp_get_VisualEnabled)(uObject*, bool*);
    void(*fp_set_VisualEnabled)(uObject*, bool*);
    static bool VisualEnabled(const uInterface& __this) { bool __retval; return __this.VTable<IVisualDraw>()->fp_get_VisualEnabled(__this, &__retval), __retval; }
    static void VisualEnabled(const uInterface& __this, bool value) { __this.VTable<IVisualDraw>()->fp_set_VisualEnabled(__this, &value); }
};
// }

}}} // ::g::Fuse::Controls
