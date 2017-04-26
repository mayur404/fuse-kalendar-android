// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Controls/0.27.10/$.uno#51'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Animations.IResize.h>
#include <Fuse.Controls.IVisualDraw.h>
#include <Fuse.Controls.TextControl.h>
#include <Fuse.IActualPlacement.h>
#include <Fuse.IChildObject.h>
#include <Fuse.IDataContext.h>
#include <Fuse.IObjectContainer.h>
#include <Fuse.Navigation.INavigationPanel.h>
#include <Fuse.Triggers.Actions.ICollapse.h>
#include <Fuse.Triggers.Actions.IHide.h>
#include <Fuse.Triggers.Actions.IShow.h>
#include <Fuse.Triggers.IValue-1.h>
#include <Uno.String.h>
namespace g{namespace Fuse{namespace Controls{struct TextBlock;}}}
namespace g{namespace Fuse{struct DrawContext;}}
namespace g{namespace Fuse{struct HitTestContext;}}
namespace g{namespace Fuse{struct LayoutParams;}}
namespace g{namespace Fuse{struct NodeBounds;}}
namespace g{namespace Uno{struct Float2;}}
namespace g{namespace Uno{struct Rect;}}

namespace g{
namespace Fuse{
namespace Controls{

// public interfacemodifiers class TextBlock :5299
// {
struct TextBlock_type : ::g::Fuse::Controls::TextControl_type
{
    ::g::Fuse::Controls::IVisualDraw interface10;
};

TextBlock_type* TextBlock_typeof();
void TextBlock__ctor_5_fn(TextBlock* __this);
void TextBlock__ArrangePaddingBox_fn(TextBlock* __this, ::g::Fuse::LayoutParams* lp);
void TextBlock__CalcRenderBounds_fn(TextBlock* __this, ::g::Uno::Rect* __retval);
void TextBlock__DrawVisual_fn(TextBlock* __this, ::g::Fuse::DrawContext* dc);
void TextBlock__FastTrackDrawWithOpacity_fn(TextBlock* __this, ::g::Fuse::DrawContext* dc, bool* __retval);
void TextBlock__FuseControlsIVisualDrawget_VisualEnabled_fn(TextBlock* __this, bool* __retval);
void TextBlock__FuseControlsIVisualDrawset_VisualEnabled_fn(TextBlock* __this, bool* value);
void TextBlock__GetContentSize_fn(TextBlock* __this, ::g::Fuse::LayoutParams* lp, ::g::Uno::Float2* __retval);
void TextBlock__get_HitTestLocalVisualBounds_fn(TextBlock* __this, ::g::Fuse::NodeBounds** __retval);
void TextBlock__LocalInvalidateVisual_fn(TextBlock* __this);
void TextBlock__OnHitTestLocalVisual_fn(TextBlock* __this, ::g::Fuse::HitTestContext* htc);
void TextBlock__OnRooted_fn(TextBlock* __this);
void TextBlock__OnTextLayoutPropertyChanged_fn(TextBlock* __this);
void TextBlock__OnTextRenderPropertyChanged_fn(TextBlock* __this);
void TextBlock__OnUnrooted_fn(TextBlock* __this);
void TextBlock__OnValueChanged_fn(TextBlock* __this, uString* value, uObject* origin);
void TextBlock__SoftDispose_fn(TextBlock* __this);
void TextBlock__TextBlockVisualRooted_fn(TextBlock* __this);
void TextBlock__TextBlockVisualUnrooted_fn(TextBlock* __this);
void TextBlock__get_VisualEnabled_fn(TextBlock* __this, bool* __retval);

struct TextBlock : ::g::Fuse::Controls::TextControl
{
    uStrong<uObject*> _textRenderer;
    bool _VisualEnabled;

    void ctor_5();
    void LocalInvalidateVisual();
    void TextBlockVisualRooted();
    void TextBlockVisualUnrooted();
    bool VisualEnabled();
};
// }

}}} // ::g::Fuse::Controls
