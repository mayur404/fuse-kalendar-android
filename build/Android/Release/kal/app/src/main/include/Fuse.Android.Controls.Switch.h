// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Android/0.27.10/Controls/$.uno#2'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Android.Controls.CompoundButton.h>
#include <Fuse.IChildObject.h>
#include <Fuse.IDataContext.h>
namespace g{namespace Android{namespace android{namespace widget{struct CompoundButton;}}}}
namespace g{namespace Fuse{namespace Android{namespace Controls{struct Switch;}}}}

namespace g{
namespace Fuse{
namespace Android{
namespace Controls{

// public sealed extern class Switch :271
// {
::g::Fuse::Android::Controls::CompoundButton_type* Switch_typeof();
void Switch__ctor_4_fn(Switch* __this);
void Switch__CreateCompoundButton_fn(Switch* __this, ::g::Android::android::widget::CompoundButton** __retval);
void Switch__New1_fn(Switch** __retval);

struct Switch : ::g::Fuse::Android::Controls::CompoundButton
{
    void ctor_4();
    static Switch* New1();
};
// }

}}}} // ::g::Fuse::Android::Controls
