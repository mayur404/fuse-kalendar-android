// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Android/0.27.10/Controls/$.uno#5'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.EventArgs.h>
namespace g{namespace Fuse{namespace Android{namespace Controls{struct EditorActionArgs;}}}}

namespace g{
namespace Fuse{
namespace Android{
namespace Controls{

// internal sealed extern class EditorActionArgs :530
// {
uType* EditorActionArgs_typeof();
void EditorActionArgs__ctor_1_fn(EditorActionArgs* __this);
void EditorActionArgs__New2_fn(EditorActionArgs** __retval);

struct EditorActionArgs : ::g::Uno::EventArgs
{
    int ActionCode;

    void ctor_1();
    static EditorActionArgs* New2();
};
// }

}}}} // ::g::Fuse::Android::Controls
