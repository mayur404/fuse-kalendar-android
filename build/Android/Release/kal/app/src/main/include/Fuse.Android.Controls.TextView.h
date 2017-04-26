// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Android/0.27.10/Controls/$.uno#13'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Android.Controls.TextViewBase-1.h>
#include <Fuse.Controls.TextControl.h>
#include <Fuse.IChildObject.h>
#include <Fuse.IDataContext.h>
namespace g{namespace Android{namespace android{namespace widget{struct TextView;}}}}
namespace g{namespace Fuse{namespace Android{namespace Controls{struct TextView;}}}}

namespace g{
namespace Fuse{
namespace Android{
namespace Controls{

// public sealed extern class TextView :1882
// {
::g::Fuse::Android::Controls::TextViewBase_type* TextView_typeof();
void TextView__ctor_4_fn(TextView* __this);
void TextView__CreateTextView_fn(TextView* __this, ::g::Android::android::widget::TextView** __retval);
void TextView__New1_fn(TextView** __retval);

struct TextView : ::g::Fuse::Android::Controls::TextViewBase
{
    void ctor_4();
    static TextView* New1();
};
// }

}}}} // ::g::Fuse::Android::Controls
