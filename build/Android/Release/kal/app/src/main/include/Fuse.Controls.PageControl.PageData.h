// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Controls/0.27.10/$.uno#21'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Controls{struct PageControl__PageData;}}}
namespace g{namespace Fuse{namespace Triggers{struct Trigger;}}}

namespace g{
namespace Fuse{
namespace Controls{

// private sealed class PageControl.PageData :2092
// {
uType* PageControl__PageData_typeof();
void PageControl__PageData__ctor__fn(PageControl__PageData* __this);
void PageControl__PageData__New1_fn(PageControl__PageData** __retval);

struct PageControl__PageData : uObject
{
    bool Active;
    uStrong< ::g::Fuse::Triggers::Trigger*> Enter;
    uStrong< ::g::Fuse::Triggers::Trigger*> Exit;
    bool StateListen;

    void ctor_();
    static PageControl__PageData* New1();
};
// }

}}} // ::g::Fuse::Controls
