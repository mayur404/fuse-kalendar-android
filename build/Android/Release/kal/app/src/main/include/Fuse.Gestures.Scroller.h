// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Controls/0.27.10/Gestures/$.uno#3'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Behavior.h>
#include <Fuse.IChildObject.h>
#include <Uno.Float2.h>
namespace g{namespace Experimental{namespace Physics{struct PointerVelocity;}}}
namespace g{namespace Fuse{namespace Controls{struct ScrollPositionChangedArgs;}}}
namespace g{namespace Fuse{namespace Controls{struct ScrollView;}}}
namespace g{namespace Fuse{namespace Gestures{struct Scroller;}}}
namespace g{namespace Fuse{namespace Gestures{struct SwipeGestureHelper;}}}
namespace g{namespace Fuse{namespace Input{struct PointerEventArgs;}}}
namespace g{namespace Fuse{namespace Input{struct PointerMovedArgs;}}}
namespace g{namespace Fuse{namespace Input{struct PointerPressedArgs;}}}
namespace g{namespace Fuse{namespace Input{struct PointerReleasedArgs;}}}
namespace g{namespace Fuse{struct Node;}}
namespace g{namespace Fuse{struct RequestBringIntoViewArgs;}}

namespace g{
namespace Fuse{
namespace Gestures{

// public sealed class Scroller :498
// {
::g::Fuse::Behavior_type* Scroller_typeof();
void Scroller__ctor_1_fn(Scroller* __this);
void Scroller__CheckLimits_fn(Scroller* __this);
void Scroller__CheckNeedUpdated_fn(Scroller* __this, bool* off);
void Scroller__EndInteraction_fn(Scroller* __this);
void Scroller__FromWindow_fn(Scroller* __this, ::g::Uno::Float2* p, ::g::Uno::Float2* __retval);
void Scroller__Goto_fn(Scroller* __this, ::g::Uno::Float2* position);
void Scroller__HardCapture_fn(Scroller* __this, ::g::Fuse::Input::PointerEventArgs* args, bool* __retval);
void Scroller__MoveUser_fn(Scroller* __this, int* flags, double* time);
void Scroller__New1_fn(Scroller** __retval);
void Scroller__OnLostCapture_fn(Scroller* __this);
void Scroller__OnPointerMoved_fn(Scroller* __this, uObject* sender, ::g::Fuse::Input::PointerMovedArgs* args);
void Scroller__OnPointerPressed_fn(Scroller* __this, uObject* sender, ::g::Fuse::Input::PointerPressedArgs* args);
void Scroller__OnPointerReleased_fn(Scroller* __this, uObject* sender, ::g::Fuse::Input::PointerReleasedArgs* args);
void Scroller__OnRequestBringIntoView_fn(Scroller* __this, uObject* sender, ::g::Fuse::RequestBringIntoViewArgs* args);
void Scroller__OnRooted_fn(Scroller* __this, ::g::Fuse::Node* parentNode);
void Scroller__OnScrollPositionChanged_fn(Scroller* __this, uObject* s, ::g::Fuse::Controls::ScrollPositionChangedArgs* args);
void Scroller__OnUnrooted_fn(Scroller* __this, ::g::Fuse::Node* parentNode);
void Scroller__OnUpdated_fn(Scroller* __this);
void Scroller__get_OverflowExtent_fn(Scroller* __this, ::g::Uno::Float2* __retval);
void Scroller__PerformBringIntoView_fn(Scroller* __this);
void Scroller__UpdatePointerEvents_fn(Scroller* __this, bool* forceOff);
void Scroller__UpdateScrollMax_fn(Scroller* __this);
void Scroller__get_UserScroll_fn(Scroller* __this, bool* __retval);
void Scroller__set_UserScroll_fn(Scroller* __this, bool* value);

struct Scroller : ::g::Fuse::Behavior
{
    bool _delayStart;
    int _down;
    bool _hasUpdated;
    static uSStrong< ::g::Fuse::Gestures::SwipeGestureHelper*> _horizontalGesture_;
    static uSStrong< ::g::Fuse::Gestures::SwipeGestureHelper*>& _horizontalGesture() { return Scroller_typeof()->Init(), _horizontalGesture_; }
    bool _isHardCapture;
    uStrong< ::g::Fuse::Node*> _pendingBringIntoView;
    bool _pointerListening;
    ::g::Uno::Float2 _pointerPos;
    ::g::Uno::Float2 _prevPos;
    double _prevTime;
    uStrong<uObject*> _region;
    uStrong< ::g::Fuse::Controls::ScrollView*> _scrollable;
    ::g::Uno::Float2 _softCaptureCurrent;
    ::g::Uno::Float2 _softCaptureStart;
    ::g::Uno::Float2 _startPos;
    bool _updateFirstFrame;
    bool _userScroll;
    uStrong< ::g::Experimental::Physics::PointerVelocity*> _velocity;
    static uSStrong< ::g::Fuse::Gestures::SwipeGestureHelper*> _verticalGesture_;
    static uSStrong< ::g::Fuse::Gestures::SwipeGestureHelper*>& _verticalGesture() { return Scroller_typeof()->Init(), _verticalGesture_; }

    void ctor_1();
    void CheckLimits();
    void CheckNeedUpdated(bool off);
    void EndInteraction();
    ::g::Uno::Float2 FromWindow(::g::Uno::Float2 p);
    void Goto(::g::Uno::Float2 position);
    bool HardCapture(::g::Fuse::Input::PointerEventArgs* args);
    void MoveUser(int flags, double time);
    void OnLostCapture();
    void OnPointerMoved(uObject* sender, ::g::Fuse::Input::PointerMovedArgs* args);
    void OnPointerPressed(uObject* sender, ::g::Fuse::Input::PointerPressedArgs* args);
    void OnPointerReleased(uObject* sender, ::g::Fuse::Input::PointerReleasedArgs* args);
    void OnRequestBringIntoView(uObject* sender, ::g::Fuse::RequestBringIntoViewArgs* args);
    void OnScrollPositionChanged(uObject* s, ::g::Fuse::Controls::ScrollPositionChangedArgs* args);
    void OnUpdated();
    ::g::Uno::Float2 OverflowExtent();
    void PerformBringIntoView();
    void UpdatePointerEvents(bool forceOff);
    void UpdateScrollMax();
    bool UserScroll();
    void UserScroll(bool value);
    static Scroller* New1();
};
// }

}}} // ::g::Fuse::Gestures
