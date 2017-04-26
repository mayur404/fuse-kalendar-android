// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Controls/0.27.10/$.uno#56'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Animations.IResize.h>
#include <Fuse.Controls.Control.h>
#include <Fuse.IActualPlacement.h>
#include <Fuse.IChildObject.h>
#include <Fuse.IDataContext.h>
#include <Fuse.Triggers.Actions.ICollapse.h>
#include <Fuse.Triggers.Actions.IHide.h>
#include <Fuse.Triggers.Actions.IShow.h>
namespace g{namespace Fuse{namespace Controls{struct TopFrameBackground;}}}
namespace g{namespace Fuse{struct LayoutParams;}}
namespace g{namespace Uno{namespace Platform{struct SystemUIWillResizeEventArgs;}}}
namespace g{namespace Uno{struct Float2;}}

namespace g{
namespace Fuse{
namespace Controls{

// public class TopFrameBackground :5987
// {
::g::Fuse::Controls::Control_type* TopFrameBackground_typeof();
void TopFrameBackground__ctor_3_fn(TopFrameBackground* __this);
void TopFrameBackground__GetContentSize_fn(TopFrameBackground* __this, ::g::Fuse::LayoutParams* lp, ::g::Uno::Float2* __retval);
void TopFrameBackground__OnFrameResized_fn(TopFrameBackground* __this, uObject* sender, ::g::Uno::Platform::SystemUIWillResizeEventArgs* args);
void TopFrameBackground__OnRooted_fn(TopFrameBackground* __this);
void TopFrameBackground__OnUnrooted_fn(TopFrameBackground* __this);

struct TopFrameBackground : ::g::Fuse::Controls::Control
{
    void ctor_3();
    void OnFrameResized(uObject* sender, ::g::Uno::Platform::SystemUIWillResizeEventArgs* args);
};
// }

}}} // ::g::Fuse::Controls
