// This file was generated based on '/usr/local/share/uno/Packages/Fuse.GeoLocation/0.27.10/Android/$.uno#2'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Android.android.location.LocationListener.h>
#include <Android.Base.Wrappers.IJWrapper.h>
#include <Fuse.GeoLocation.LocationListenerBase.h>
#include <Uno.IDisposable.h>
namespace g{namespace Android{namespace android{namespace location{struct LocationManager;}}}}
namespace g{namespace Fuse{namespace GeoLocation{struct TimeoutListener;}}}

namespace g{
namespace Fuse{
namespace GeoLocation{

// internal abstract extern class TimeoutListener :220
// {
struct TimeoutListener_type : ::g::Fuse::GeoLocation::LocationListenerBase_type
{
    void(*fp_OnTimeout)(::g::Fuse::GeoLocation::TimeoutListener*);
};

TimeoutListener_type* TimeoutListener_typeof();
void TimeoutListener__ctor_6_fn(TimeoutListener* __this, ::g::Android::android::location::LocationManager* lm, double* timeout);
void TimeoutListener__RequestUpdate_fn(TimeoutListener* __this);
void TimeoutListener__StartTimeoutAction_fn(TimeoutListener* __this, double* timeout);
void TimeoutListener__StopLocationUpdateAndTimer_fn(TimeoutListener* __this);
void TimeoutListener__TimeoutAction_fn(TimeoutListener* __this);

struct TimeoutListener : ::g::Fuse::GeoLocation::LocationListenerBase
{
    uStrong< ::g::Android::android::location::LocationManager*> _lm;

    void ctor_6(::g::Android::android::location::LocationManager* lm, double timeout);
    void OnTimeout() { (((TimeoutListener_type*)__type)->fp_OnTimeout)(this); }
    void RequestUpdate();
    void StartTimeoutAction(double timeout);
    void StopLocationUpdateAndTimer();
    void TimeoutAction();
};
// }

}}} // ::g::Fuse::GeoLocation
