// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Controls/0.27.10/$.uno#35'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Animations.IResize.h>
#include <Fuse.Controls.IVisualDraw.h>
#include <Fuse.Controls.ParentControl.h>
#include <Fuse.IActualPlacement.h>
#include <Fuse.IChildObject.h>
#include <Fuse.IDataContext.h>
#include <Fuse.IObjectContainer.h>
#include <Fuse.Navigation.INavigationPanel.h>
#include <Fuse.Triggers.Actions.ICollapse.h>
#include <Fuse.Triggers.Actions.IHide.h>
#include <Fuse.Triggers.Actions.IShow.h>
namespace g{namespace Fuse{namespace Controls{struct Primitive;}}}

namespace g{
namespace Fuse{
namespace Controls{

// public class Primitive :3512
// {
struct Primitive_type : ::g::Fuse::Controls::ParentControl_type
{
    ::g::Fuse::Controls::IVisualDraw interface9;
};

Primitive_type* Primitive_typeof();
void Primitive__ctor_4_fn(Primitive* __this);
void Primitive__FuseControlsIVisualDrawget_VisualEnabled_fn(Primitive* __this, bool* __retval);
void Primitive__FuseControlsIVisualDrawset_VisualEnabled_fn(Primitive* __this, bool* value);
void Primitive__get_VisualEnabled_fn(Primitive* __this, bool* __retval);

struct Primitive : ::g::Fuse::Controls::ParentControl
{
    bool _VisualEnabled;

    void ctor_4();
    bool VisualEnabled();
};
// }

}}} // ::g::Fuse::Controls
