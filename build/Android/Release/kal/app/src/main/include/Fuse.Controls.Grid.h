// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Controls/0.27.10/$.uno#13'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Animations.IResize.h>
#include <Fuse.Controls.Panel.h>
#include <Fuse.IActualPlacement.h>
#include <Fuse.IChildObject.h>
#include <Fuse.IDataContext.h>
#include <Fuse.IObjectContainer.h>
#include <Fuse.Navigation.INavigationPanel.h>
#include <Fuse.Triggers.Actions.ICollapse.h>
#include <Fuse.Triggers.Actions.IHide.h>
#include <Fuse.Triggers.Actions.IShow.h>
namespace g{namespace Fuse{namespace Controls{struct Grid;}}}
namespace g{namespace Fuse{namespace Layouts{struct GridLayout;}}}
namespace g{namespace Fuse{struct StyleProperty1;}}

namespace g{
namespace Fuse{
namespace Controls{

// public sealed class Grid :891
// {
::g::Fuse::Controls::ParentControl_type* Grid_typeof();
void Grid__get_CellSpacing_fn(Grid* __this, float* __retval);
void Grid__set_CellSpacing_fn(Grid* __this, float* value);
void Grid__get_ContentAlignment_fn(Grid* __this, int* __retval);
void Grid__set_ContentAlignment_fn(Grid* __this, int* value);
void Grid__OnCellSpacingChanged_fn(Grid* p);
void Grid__OnContentAlignmentChanged_fn(Grid* p);

struct Grid : ::g::Fuse::Controls::Panel
{
    uStrong< ::g::Fuse::Layouts::GridLayout*> _gridLayout;
    static uSStrong< ::g::Fuse::StyleProperty1*> CellSpacingProperty_;
    static uSStrong< ::g::Fuse::StyleProperty1*>& CellSpacingProperty() { return Grid_typeof()->Init(), CellSpacingProperty_; }
    static uSStrong< ::g::Fuse::StyleProperty1*> ContentAlignmentProperty_;
    static uSStrong< ::g::Fuse::StyleProperty1*>& ContentAlignmentProperty() { return Grid_typeof()->Init(), ContentAlignmentProperty_; }

    float CellSpacing();
    void CellSpacing(float value);
    int ContentAlignment();
    void ContentAlignment(int value);
    static void OnCellSpacingChanged(Grid* p);
    static void OnContentAlignmentChanged(Grid* p);
};
// }

}}} // ::g::Fuse::Controls
