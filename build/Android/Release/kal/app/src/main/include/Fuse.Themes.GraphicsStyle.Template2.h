// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Themes/0.27.10/.uno/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Controls.ScrollView.h>
#include <Uno.UX.ITemplate.h>
#include <Uno.UX.Template-1.h>
namespace g{namespace Fuse{namespace Themes{struct GraphicsStyle;}}}
namespace g{namespace Fuse{namespace Themes{struct GraphicsStyle__Template2;}}}
namespace g{struct FuseThemes_FuseControlsScrollView_KeepFocusInView_Property;}
namespace g{struct FuseThemes_FuseControlsScrollView_UserScroll_Property;}
namespace g{struct FuseThemes_FuseGesturesScroller_UserScroll_Property;}
namespace g{struct FuseThemes_FuseTriggersWhileTrue_Value_Property;}

namespace g{
namespace Fuse{
namespace Themes{

// public partial sealed class GraphicsStyle.Template2 :38
// {
::g::Uno::UX::Template_type* GraphicsStyle__Template2_typeof();
void GraphicsStyle__Template2__ctor_1_fn(GraphicsStyle__Template2* __this, ::g::Fuse::Themes::GraphicsStyle* parent);
void GraphicsStyle__Template2__New1_fn(::g::Fuse::Themes::GraphicsStyle* parent, GraphicsStyle__Template2** __retval);
void GraphicsStyle__Template2__OnApply_fn(GraphicsStyle__Template2* __this, ::g::Fuse::Controls::ScrollView* self);

struct GraphicsStyle__Template2 : ::g::Uno::UX::Template
{
    uStrong< ::g::Fuse::Themes::GraphicsStyle*> __parent1;
    uStrong< ::g::FuseThemes_FuseControlsScrollView_KeepFocusInView_Property*> self_KeepFocusInView_inst;
    uStrong< ::g::FuseThemes_FuseControlsScrollView_UserScroll_Property*> self_UserScroll_inst;
    uStrong< ::g::FuseThemes_FuseGesturesScroller_UserScroll_Property*> temp_UserScroll_inst;
    uStrong< ::g::FuseThemes_FuseTriggersWhileTrue_Value_Property*> temp1_Value_inst;

    void ctor_1(::g::Fuse::Themes::GraphicsStyle* parent);
    static GraphicsStyle__Template2* New1(::g::Fuse::Themes::GraphicsStyle* parent);
};
// }

}}} // ::g::Fuse::Themes
