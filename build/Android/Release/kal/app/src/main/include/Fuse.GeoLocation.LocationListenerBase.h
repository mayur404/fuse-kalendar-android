// This file was generated based on '/usr/local/share/uno/Packages/Fuse.GeoLocation/0.27.10/Android/$.uno#1'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Android.android.location.LocationListener.h>
#include <Android.Base.Wrappers.IJWrapper.h>
#include <Android.java.lang.Object.h>
#include <jni.h>
#include <Uno.IDisposable.h>
namespace g{namespace Android{namespace android{namespace location{struct Location;}}}}
namespace g{namespace Android{namespace android{namespace os{struct Bundle;}}}}
namespace g{namespace Android{namespace java{namespace lang{struct String;}}}}
namespace g{namespace Fuse{namespace GeoLocation{struct Location;}}}
namespace g{namespace Fuse{namespace GeoLocation{struct LocationListenerBase;}}}

namespace g{
namespace Fuse{
namespace GeoLocation{

// internal abstract extern class LocationListenerBase :161
// {
struct LocationListenerBase_type : ::g::Android::java::lang::Object_type
{
    ::g::Android::android::location::LocationListener interface2;
    void(*fp_OnLocationChanged)(::g::Fuse::GeoLocation::LocationListenerBase*, ::g::Fuse::GeoLocation::Location*);
};

LocationListenerBase_type* LocationListenerBase_typeof();
void LocationListenerBase__ctor_5_fn(LocationListenerBase* __this);
void LocationListenerBase__AndroidandroidlocationLocationListeneronLocationChanged_fn(LocationListenerBase* __this, ::g::Android::android::location::Location* location);
void LocationListenerBase__AndroidandroidlocationLocationListeneronProviderDisabled_fn(LocationListenerBase* __this, ::g::Android::java::lang::String* provider);
void LocationListenerBase__AndroidandroidlocationLocationListeneronProviderEnabled_fn(LocationListenerBase* __this, ::g::Android::java::lang::String* provider);
void LocationListenerBase__AndroidandroidlocationLocationListeneronStatusChanged_fn(LocationListenerBase* __this, ::g::Android::java::lang::String* provider, int* status, ::g::Android::android::os::Bundle* extras);

struct LocationListenerBase : ::g::Android::java::lang::Object
{
    static jclass _javaClass2_;
    static jclass& _javaClass2() { return _javaClass2_; }

    void ctor_5();
    void OnLocationChanged(::g::Fuse::GeoLocation::Location* location) { (((LocationListenerBase_type*)__type)->fp_OnLocationChanged)(this, location); }
};
// }

}}} // ::g::Fuse::GeoLocation
