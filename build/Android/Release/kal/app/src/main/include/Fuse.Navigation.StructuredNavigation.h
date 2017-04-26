// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Navigation/0.27.10/$.uno#8'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.IChildObject.h>
#include <Fuse.Navigation.IBaseNavigation.h>
#include <Fuse.Navigation.INavigation.h>
#include <Fuse.Navigation.Navigation.h>
namespace g{namespace Fuse{namespace Navigation{struct EndSeekArgs;}}}
namespace g{namespace Fuse{namespace Navigation{struct NavigationTween;}}}
namespace g{namespace Fuse{namespace Navigation{struct StructuredNavigation;}}}
namespace g{namespace Fuse{namespace Navigation{struct UpdateSeekArgs;}}}
namespace g{namespace Fuse{struct Node;}}
namespace g{namespace Uno{struct Float2;}}

namespace g{
namespace Fuse{
namespace Navigation{

// public interfacemodifiers class StructuredNavigation :1231
// {
::g::Fuse::Navigation::Navigation_type* StructuredNavigation_typeof();
void StructuredNavigation__ctor_2_fn(StructuredNavigation* __this, int* mode);
void StructuredNavigation__get_Active_fn(StructuredNavigation* __this, ::g::Fuse::Node** __retval);
void StructuredNavigation__set_Active_fn(StructuredNavigation* __this, ::g::Fuse::Node* value);
void StructuredNavigation__AnimatorDoneCallback_fn(StructuredNavigation* __this);
void StructuredNavigation__get_Back_fn(StructuredNavigation* __this, ::g::Fuse::Node** __retval);
void StructuredNavigation__BeginSeek_fn(StructuredNavigation* __this);
void StructuredNavigation__get_CanGoBack_fn(StructuredNavigation* __this, bool* __retval);
void StructuredNavigation__get_CanGoForward_fn(StructuredNavigation* __this, bool* __retval);
void StructuredNavigation__ClampProgress1_fn(StructuredNavigation* __this, int* progress, int* __retval);
void StructuredNavigation__ClearForwardHistory_fn(StructuredNavigation* __this);
void StructuredNavigation__get_Duration_fn(StructuredNavigation* __this, double* __retval);
void StructuredNavigation__set_Duration_fn(StructuredNavigation* __this, double* value);
void StructuredNavigation__get_Easing_fn(StructuredNavigation* __this, int* __retval);
void StructuredNavigation__set_Easing_fn(StructuredNavigation* __this, int* value);
void StructuredNavigation__EndSeek_fn(StructuredNavigation* __this, ::g::Fuse::Navigation::EndSeekArgs* args);
void StructuredNavigation__EnsureChildAnimationState_fn(StructuredNavigation* __this);
void StructuredNavigation__get_Front_fn(StructuredNavigation* __this, ::g::Fuse::Node** __retval);
void StructuredNavigation__GetAnimators_fn(StructuredNavigation* __this, uObject** __retval);
void StructuredNavigation__GoBack_fn(StructuredNavigation* __this);
void StructuredNavigation__GoForward_fn(StructuredNavigation* __this);
void StructuredNavigation__Goto_fn(StructuredNavigation* __this, ::g::Fuse::Node* element, int* mode);
void StructuredNavigation__GotoImpl_fn(StructuredNavigation* __this, ::g::Fuse::Node* element, int* mode);
void StructuredNavigation__get_MaxIndex_fn(StructuredNavigation* __this, int* __retval);
void StructuredNavigation__get_Mode_fn(StructuredNavigation* __this, int* __retval);
void StructuredNavigation__set_Mode_fn(StructuredNavigation* __this, int* value);
void StructuredNavigation__get_Next_fn(StructuredNavigation* __this, ::g::Fuse::Node** __retval);
void StructuredNavigation__OnChildAdded_fn(StructuredNavigation* __this, uObject* s, ::g::Fuse::Node* child);
void StructuredNavigation__OnChildRemoved_fn(StructuredNavigation* __this, uObject* s, ::g::Fuse::Node* child);
void StructuredNavigation__OnPlaced_fn(StructuredNavigation* __this, uObject* s, uObject* a);
void StructuredNavigation__OnRooted_fn(StructuredNavigation* __this, ::g::Fuse::Node* parentNode);
void StructuredNavigation__OnUnrooted_fn(StructuredNavigation* __this, ::g::Fuse::Node* parentNode);
void StructuredNavigation__get_PageProgress_fn(StructuredNavigation* __this, double* __retval);
void StructuredNavigation__get_Previous_fn(StructuredNavigation* __this, ::g::Fuse::Node** __retval);
void StructuredNavigation__get_Progress_fn(StructuredNavigation* __this, double* __retval);
void StructuredNavigation__set_Progress_fn(StructuredNavigation* __this, double* value);
void StructuredNavigation__ProgressGetterCallback_fn(StructuredNavigation* __this, double* __retval);
void StructuredNavigation__ProgressSetterCallback_fn(StructuredNavigation* __this, double* newProgress);
void StructuredNavigation__Seek_fn(StructuredNavigation* __this, ::g::Fuse::Navigation::UpdateSeekArgs* args);
void StructuredNavigation__get_SeekRange_fn(StructuredNavigation* __this, ::g::Uno::Float2* __retval);
void StructuredNavigation__TransitionToChild_fn(StructuredNavigation* __this, ::g::Fuse::Node* element, bool* bypass);
void StructuredNavigation__Update_fn(StructuredNavigation* __this);

struct StructuredNavigation : ::g::Fuse::Navigation::Navigation
{
    uStrong< ::g::Fuse::Node*> _active;
    uStrong<uObject*> _currentAnimatorPlayer;
    uStrong< ::g::Fuse::Navigation::NavigationTween*> _navigationTween;
    double _progress;
    double _progressBase;
    bool _queueClearForwardHistory;
    bool _reuseExistingNode;
    int _Mode;

    void ctor_2(int mode);
    ::g::Fuse::Node* Active();
    void Active(::g::Fuse::Node* value);
    void AnimatorDoneCallback();
    ::g::Fuse::Node* Back();
    void BeginSeek();
    int ClampProgress1(int progress);
    void ClearForwardHistory();
    double Duration();
    void Duration(double value);
    int Easing();
    void Easing(int value);
    void EndSeek(::g::Fuse::Navigation::EndSeekArgs* args);
    void EnsureChildAnimationState();
    ::g::Fuse::Node* Front();
    uObject* GetAnimators();
    void GotoImpl(::g::Fuse::Node* element, int mode);
    int MaxIndex();
    int Mode();
    void Mode(int value);
    ::g::Fuse::Node* Next();
    void OnPlaced(uObject* s, uObject* a);
    ::g::Fuse::Node* Previous();
    double Progress();
    void Progress(double value);
    double ProgressGetterCallback();
    void ProgressSetterCallback(double newProgress);
    void Seek(::g::Fuse::Navigation::UpdateSeekArgs* args);
    ::g::Uno::Float2 SeekRange();
    void TransitionToChild(::g::Fuse::Node* element, bool bypass);
    void Update();
};
// }

}}} // ::g::Fuse::Navigation