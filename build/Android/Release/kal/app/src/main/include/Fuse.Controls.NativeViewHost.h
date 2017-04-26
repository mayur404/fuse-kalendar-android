// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Controls/0.27.10/$.uno#18'.
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
namespace g{namespace Fuse{namespace Controls{struct NativeViewHost;}}}
namespace g{namespace Fuse{struct DrawContext;}}

namespace g{
namespace Fuse{
namespace Controls{

// public sealed class NativeViewHost :1670
// {
::g::Fuse::Controls::ParentControl_type* NativeViewHost_typeof();
void NativeViewHost__ctor_5_fn(NativeViewHost* __this);
void NativeViewHost__Draw_fn(NativeViewHost* __this, ::g::Fuse::DrawContext* dc);
void NativeViewHost__New3_fn(NativeViewHost** __retval);
void NativeViewHost__OnApplyStyle_fn(NativeViewHost* __this, uObject* target);
void NativeViewHost__OnRenderToTextureChanged_fn(NativeViewHost* __this);
void NativeViewHost__add_Redraw_fn(NativeViewHost* __this, uDelegate* value);
void NativeViewHost__remove_Redraw_fn(NativeViewHost* __this, uDelegate* value);
void NativeViewHost__get_RenderToTexture_fn(NativeViewHost* __this, bool* __retval);
void NativeViewHost__set_RenderToTexture_fn(NativeViewHost* __this, bool* value);
void NativeViewHost__add_RenderToTextureChanged_fn(NativeViewHost* __this, uDelegate* value);
void NativeViewHost__remove_RenderToTextureChanged_fn(NativeViewHost* __this, uDelegate* value);

struct NativeViewHost : ::g::Fuse::Controls::Panel
{
    bool _renderToTexture;
    uStrong<uDelegate*> Redraw1;
    uStrong<uDelegate*> RenderToTextureChanged1;

    void ctor_5();
    void OnRenderToTextureChanged();
    void add_Redraw(uDelegate* value);
    void remove_Redraw(uDelegate* value);
    bool RenderToTexture();
    void RenderToTexture(bool value);
    void add_RenderToTextureChanged(uDelegate* value);
    void remove_RenderToTextureChanged(uDelegate* value);
    static NativeViewHost* New3();
};
// }

}}} // ::g::Fuse::Controls
