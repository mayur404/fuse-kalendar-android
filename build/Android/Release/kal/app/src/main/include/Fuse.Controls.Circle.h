// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Controls/0.27.10/$.uno#2'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Animations.IResize.h>
#include <Fuse.Controls.IVisualDraw.h>
#include <Fuse.Controls.Shape.h>
#include <Fuse.IActualPlacement.h>
#include <Fuse.IChildObject.h>
#include <Fuse.IDataContext.h>
#include <Fuse.IObjectContainer.h>
#include <Fuse.Navigation.INavigationPanel.h>
#include <Fuse.Triggers.Actions.ICollapse.h>
#include <Fuse.Triggers.Actions.IHide.h>
#include <Fuse.Triggers.Actions.IShow.h>
namespace g{namespace Fuse{namespace Controls{struct Circle;}}}
namespace g{namespace Fuse{namespace Drawing{struct Brush;}}}
namespace g{namespace Fuse{namespace Drawing{struct Stroke;}}}
namespace g{namespace Fuse{struct DrawContext;}}
namespace g{namespace Fuse{struct HitTestContext;}}

namespace g{
namespace Fuse{
namespace Controls{

// public partial sealed class Circle :161
// {
::g::Fuse::Controls::Shape_type* Circle_typeof();
void Circle__ctor_6_fn(Circle* __this);
void Circle__AngleInRange_fn(float* angle, float* start, float* end, bool* __retval);
void Circle__DrawFill_fn(Circle* __this, ::g::Fuse::DrawContext* dc, ::g::Fuse::Drawing::Brush* fill);
void Circle__DrawStroke_fn(Circle* __this, ::g::Fuse::DrawContext* dc, ::g::Fuse::Drawing::Stroke* stroke);
void Circle__get_EffectiveEndAngle_fn(Circle* __this, float* __retval);
void Circle__get_EffectiveEndAngleDegrees_fn(Circle* __this, float* __retval);
void Circle__New3_fn(Circle** __retval);
void Circle__OnHitTestLocalVisual_fn(Circle* __this, ::g::Fuse::HitTestContext* htc);
void Circle__get_Radius_fn(Circle* __this, float* __retval);
void Circle__get_StartAngle_fn(Circle* __this, float* __retval);
void Circle__set_StartAngle_fn(Circle* __this, float* value);
void Circle__get_StartAngleDegrees_fn(Circle* __this, float* __retval);
void Circle__set_StartAngleDegrees_fn(Circle* __this, float* value);
void Circle__get_UseAngle_fn(Circle* __this, bool* __retval);

struct Circle : ::g::Fuse::Controls::Shape
{
    float _endAngle;
    bool _hasAngle;
    bool _hasLengthAngle;
    float _lengthAngle;
    float _startAngle;

    void ctor_6();
    float EffectiveEndAngle();
    float EffectiveEndAngleDegrees();
    float Radius();
    float StartAngle();
    void StartAngle(float value);
    float StartAngleDegrees();
    void StartAngleDegrees(float value);
    bool UseAngle();
    static bool AngleInRange(float angle, float start, float end);
    static Circle* New3();
};
// }

}}} // ::g::Fuse::Controls
