// This file was generated based on '/Users/mayur404/Dropbox/Public/Little Boat/InHouse/BlackBerry/Kalendar/Priv/fuse/.uno/kal.unoproj.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Drawing.Brush.h>
#include <Uno.UX.Property-1.h>
namespace g{namespace Fuse{namespace Controls{struct Panel;}}}
namespace g{struct kal_FuseControlsPanel_Background_Property;}

namespace g{

// internal sealed class kal_FuseControlsPanel_Background_Property :38
// {
::g::Uno::UX::Property_type* kal_FuseControlsPanel_Background_Property_typeof();
void kal_FuseControlsPanel_Background_Property__ctor_1_fn(kal_FuseControlsPanel_Background_Property* __this, ::g::Fuse::Controls::Panel* obj);
void kal_FuseControlsPanel_Background_Property__New1_fn(::g::Fuse::Controls::Panel* obj, kal_FuseControlsPanel_Background_Property** __retval);
void kal_FuseControlsPanel_Background_Property__OnGet_fn(kal_FuseControlsPanel_Background_Property* __this, ::g::Fuse::Drawing::Brush** __retval);
void kal_FuseControlsPanel_Background_Property__OnSet_fn(kal_FuseControlsPanel_Background_Property* __this, ::g::Fuse::Drawing::Brush* v, uObject* origin);

struct kal_FuseControlsPanel_Background_Property : ::g::Uno::UX::Property
{
    uStrong< ::g::Fuse::Controls::Panel*> _obj;

    void ctor_1(::g::Fuse::Controls::Panel* obj);
    static kal_FuseControlsPanel_Background_Property* New1(::g::Fuse::Controls::Panel* obj);
};
// }

} // ::g
