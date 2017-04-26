// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Android/0.27.10/NativeViews/$.uno#4'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Android.NativeViews.ParentNativeView-1.h>
#include <Fuse.Controls.NativeViewHost.h>
#include <Fuse.IChildObject.h>
namespace g{namespace Android{namespace android{namespace view{struct View;}}}}
namespace g{namespace Android{namespace android{namespace widget{struct RelativeLayout;}}}}
namespace g{namespace Fuse{namespace Android{namespace NativeViews{struct NativeView;}}}}
namespace g{namespace Fuse{namespace Android{namespace NativeViews{struct NativeViewHost;}}}}
namespace g{namespace Fuse{struct DrawContext;}}
namespace g{namespace Fuse{struct Node;}}
namespace g{namespace Uno{struct EventArgs;}}
namespace g{namespace Uno{struct Float4x4;}}

namespace g{
namespace Fuse{
namespace Android{
namespace NativeViews{

// public sealed extern class NativeViewHost :576
// {
::g::Fuse::Android::NativeViews::ParentNativeView_type* NativeViewHost_typeof();
void NativeViewHost__ctor_3_fn(NativeViewHost* __this);
void NativeViewHost__ChildRooted_fn(NativeViewHost* __this, ::g::Fuse::Android::NativeViews::NativeView* child);
void NativeViewHost__ChildUnrooted_fn(NativeViewHost* __this, ::g::Fuse::Android::NativeViews::NativeView* child);
void NativeViewHost__CreateInternal_fn(NativeViewHost* __this, ::g::Android::android::view::View** __retval);
void NativeViewHost__DeleteTexture_fn(NativeViewHost* __this);
void NativeViewHost__Invalidate_fn(NativeViewHost* __this);
void NativeViewHost__New1_fn(NativeViewHost** __retval);
void NativeViewHost__NotifyNewSize_fn(NativeViewHost* __this, ::g::Fuse::Android::NativeViews::NativeView* child);
void NativeViewHost__OnRedraw_fn(NativeViewHost* __this, uObject* sender, ::g::Fuse::DrawContext* dc);
void NativeViewHost__OnRenderToTextureChanged_fn(NativeViewHost* __this, uObject* sender, ::g::Uno::EventArgs* args);
void NativeViewHost__OnRooted_fn(NativeViewHost* __this, ::g::Fuse::Node* parentNode);
void NativeViewHost__OnUnrooted_fn(NativeViewHost* __this, ::g::Fuse::Node* parentNode);
void NativeViewHost__get_Parent_fn(NativeViewHost* __this, ::g::Fuse::Android::NativeViews::NativeView** __retval);
void NativeViewHost__get_Transform_fn(NativeViewHost* __this, ::g::Uno::Float4x4* __retval);
void NativeViewHost__Update_fn(NativeViewHost* __this);
void NativeViewHost__set_Visible_fn(NativeViewHost* __this, bool* value);

struct NativeViewHost : ::g::Fuse::Android::NativeViews::ParentNativeView
{
    uStrong< ::g::Android::android::widget::RelativeLayout*> _relativeLayout;
    uint32_t _texture;
    int _updateWorldTransformVersion;
    bool _visualValid;

    void ctor_3();
    void DeleteTexture();
    void Invalidate();
    void OnRedraw(uObject* sender, ::g::Fuse::DrawContext* dc);
    void OnRenderToTextureChanged(uObject* sender, ::g::Uno::EventArgs* args);
    void Update();
    static NativeViewHost* New1();
};
// }

}}}} // ::g::Fuse::Android::NativeViews
