// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Themes/0.27.10/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
#include <Uno.UX.ITemplate.h>
namespace g{namespace Fuse{namespace Themes{struct GraphicsTemplate;}}}

namespace g{
namespace Fuse{
namespace Themes{

// internal sealed class GraphicsTemplate :7
// {
struct GraphicsTemplate_type : uType
{
    ::g::Uno::UX::ITemplate interface0;
};

GraphicsTemplate_type* GraphicsTemplate_typeof();
void GraphicsTemplate__ctor__fn(GraphicsTemplate* __this);
void GraphicsTemplate__Apply_fn(GraphicsTemplate* __this, uObject* obj, bool* __retval);
void GraphicsTemplate__New1_fn(GraphicsTemplate** __retval);

struct GraphicsTemplate : uObject
{
    void ctor_();
    bool Apply(uObject* obj);
    static GraphicsTemplate* New1();
};
// }

}}} // ::g::Fuse::Themes
