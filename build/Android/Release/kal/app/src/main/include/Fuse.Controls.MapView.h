// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Controls/0.27.10/MapView/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Animations.IResize.h>
#include <Fuse.Controls.IMapView.h>
#include <Fuse.Controls.Panel.h>
#include <Fuse.IActualPlacement.h>
#include <Fuse.IChildObject.h>
#include <Fuse.IDataContext.h>
#include <Fuse.IObjectContainer.h>
#include <Fuse.Navigation.INavigationPanel.h>
#include <Fuse.Triggers.Actions.ICollapse.h>
#include <Fuse.Triggers.Actions.IHide.h>
#include <Fuse.Triggers.Actions.IShow.h>
namespace g{namespace Fuse{namespace Controls{struct MapMarker;}}}
namespace g{namespace Fuse{namespace Controls{struct MapView;}}}
namespace g{namespace Fuse{namespace Scripting{struct Array;}}}
namespace g{namespace Fuse{namespace Scripting{struct Object;}}}
namespace g{namespace Fuse{namespace Scripting{struct ScriptClass;}}}

namespace g{
namespace Fuse{
namespace Controls{

// public partial sealed class MapView :11
// {
struct MapView_type : ::g::Fuse::Controls::ParentControl_type
{
    ::g::Fuse::Controls::IMapView interface9;
};

MapView_type* MapView_typeof();
void MapView__AddMarker_fn(MapView* __this, ::g::Fuse::Controls::MapMarker* m);
void MapView__get_AllowRotate_fn(MapView* __this, bool* __retval);
void MapView__set_AllowRotate_fn(MapView* __this, bool* value);
void MapView__get_AllowTilt_fn(MapView* __this, bool* __retval);
void MapView__set_AllowTilt_fn(MapView* __this, bool* value);
void MapView__get_AllowZoom_fn(MapView* __this, bool* __retval);
void MapView__set_AllowZoom_fn(MapView* __this, bool* value);
void MapView__get_Bearing_fn(MapView* __this, double* __retval);
void MapView__set_Bearing_fn(MapView* __this, double* value);
void MapView__add_BearingChanged_fn(MapView* __this, uDelegate* value);
void MapView__remove_BearingChanged_fn(MapView* __this, uDelegate* value);
void MapView__Clamp_fn(MapView* __this, double* v, double* min, double* max, double* __retval);
void MapView__ClampZoom_fn(MapView* __this, double* value, double* __retval);
void MapView__DeferredMarkerUpdate_fn(MapView* __this);
void MapView__get_Latitude_fn(MapView* __this, double* __retval);
void MapView__set_Latitude_fn(MapView* __this, double* value);
void MapView__add_LatitudeChanged_fn(MapView* __this, uDelegate* value);
void MapView__remove_LatitudeChanged_fn(MapView* __this, uDelegate* value);
void MapView__get_Longitude_fn(MapView* __this, double* __retval);
void MapView__set_Longitude_fn(MapView* __this, double* value);
void MapView__add_LongitudeChanged_fn(MapView* __this, uDelegate* value);
void MapView__remove_LongitudeChanged_fn(MapView* __this, uDelegate* value);
void MapView__get_MapViewClient_fn(MapView* __this, uObject** __retval);
void MapView__set_MapViewClient_fn(MapView* __this, uObject* value);
void MapView__MarkerFromObject_fn(::g::Fuse::Scripting::Object* o, ::g::Fuse::Controls::MapMarker** __retval);
void MapView__get_Markers_fn(MapView* __this, uObject** __retval);
void MapView__OnBearingChanged_fn(MapView* __this, double* value, uObject* sender);
void MapView__OnLatitudeChanged_fn(MapView* __this, double* value, uObject* sender);
void MapView__OnLongitudeChanged_fn(MapView* __this, double* value, uObject* sender);
void MapView__OnMarkerAdded_fn(MapView* __this, ::g::Fuse::Controls::MapMarker* marker);
void MapView__OnMarkerRemoved_fn(MapView* __this, ::g::Fuse::Controls::MapMarker* marker);
void MapView__OnTiltChanged_fn(MapView* __this, double* value, uObject* sender);
void MapView__OnZoomChanged_fn(MapView* __this, double* value, uObject* sender);
void MapView__RemoveMarker_fn(MapView* __this, ::g::Fuse::Controls::MapMarker* m);
void MapView__setBearing_fn(MapView* view, uArray* args);
void MapView__setLocation_fn(MapView* view, uArray* args);
void MapView__setMarkers_fn(MapView* view, uArray* args);
void MapView__SetMarkersWithArray_fn(MapView* view, ::g::Fuse::Scripting::Array* a);
void MapView__setTilt_fn(MapView* view, uArray* args);
void MapView__setZoom_fn(MapView* view, uArray* args);
void MapView__get_ShowCompass_fn(MapView* __this, bool* __retval);
void MapView__set_ShowCompass_fn(MapView* __this, bool* value);
void MapView__get_ShowMyLocation_fn(MapView* __this, bool* __retval);
void MapView__set_ShowMyLocation_fn(MapView* __this, bool* value);
void MapView__get_ShowMyLocationButton_fn(MapView* __this, bool* __retval);
void MapView__set_ShowMyLocationButton_fn(MapView* __this, bool* value);
void MapView__get_Style_fn(MapView* __this, int* __retval);
void MapView__set_Style_fn(MapView* __this, int* value);
void MapView__get_Tilt_fn(MapView* __this, double* __retval);
void MapView__set_Tilt_fn(MapView* __this, double* value);
void MapView__add_TiltChanged_fn(MapView* __this, uDelegate* value);
void MapView__remove_TiltChanged_fn(MapView* __this, uDelegate* value);
void MapView__UpdateMarkers_fn(MapView* __this);
void MapView__UpdateMarkersNextFrame_fn(MapView* __this);
void MapView__get_Zoom_fn(MapView* __this, double* __retval);
void MapView__set_Zoom_fn(MapView* __this, double* value);
void MapView__add_ZoomChanged_fn(MapView* __this, uDelegate* value);
void MapView__remove_ZoomChanged_fn(MapView* __this, uDelegate* value);
void MapView__get_ZoomMax_fn(MapView* __this, double* __retval);
void MapView__set_ZoomMax_fn(MapView* __this, double* value);
void MapView__get_ZoomMin_fn(MapView* __this, double* __retval);
void MapView__set_ZoomMin_fn(MapView* __this, double* value);

struct MapView : ::g::Fuse::Controls::Panel
{
    uStrong<uObject*> _fallbackClient;
    uStrong<uObject*> _mapViewClient;
    uStrong<uObject*> _markers;
    bool _willUpdateMarkersNextFrame;
    static uSStrong< ::g::Fuse::Scripting::ScriptClass*> ScriptClass3_;
    static uSStrong< ::g::Fuse::Scripting::ScriptClass*>& ScriptClass3() { return MapView_typeof()->Init(), ScriptClass3_; }
    uStrong<uDelegate*> BearingChanged1;
    uStrong<uDelegate*> LatitudeChanged1;
    uStrong<uDelegate*> LongitudeChanged1;
    uStrong<uDelegate*> TiltChanged1;
    uStrong<uDelegate*> ZoomChanged1;

    void AddMarker(::g::Fuse::Controls::MapMarker* m);
    bool AllowRotate();
    void AllowRotate(bool value);
    bool AllowTilt();
    void AllowTilt(bool value);
    bool AllowZoom();
    void AllowZoom(bool value);
    double Bearing();
    void Bearing(double value);
    void add_BearingChanged(uDelegate* value);
    void remove_BearingChanged(uDelegate* value);
    double Clamp(double v, double min, double max);
    double ClampZoom(double value);
    void DeferredMarkerUpdate();
    double Latitude();
    void Latitude(double value);
    void add_LatitudeChanged(uDelegate* value);
    void remove_LatitudeChanged(uDelegate* value);
    double Longitude();
    void Longitude(double value);
    void add_LongitudeChanged(uDelegate* value);
    void remove_LongitudeChanged(uDelegate* value);
    uObject* MapViewClient();
    void MapViewClient(uObject* value);
    uObject* Markers();
    void OnBearingChanged(double value, uObject* sender);
    void OnLatitudeChanged(double value, uObject* sender);
    void OnLongitudeChanged(double value, uObject* sender);
    void OnMarkerAdded(::g::Fuse::Controls::MapMarker* marker);
    void OnMarkerRemoved(::g::Fuse::Controls::MapMarker* marker);
    void OnTiltChanged(double value, uObject* sender);
    void OnZoomChanged(double value, uObject* sender);
    void RemoveMarker(::g::Fuse::Controls::MapMarker* m);
    bool ShowCompass();
    void ShowCompass(bool value);
    bool ShowMyLocation();
    void ShowMyLocation(bool value);
    bool ShowMyLocationButton();
    void ShowMyLocationButton(bool value);
    int Style();
    void Style(int value);
    double Tilt();
    void Tilt(double value);
    void add_TiltChanged(uDelegate* value);
    void remove_TiltChanged(uDelegate* value);
    void UpdateMarkers();
    void UpdateMarkersNextFrame();
    double Zoom();
    void Zoom(double value);
    void add_ZoomChanged(uDelegate* value);
    void remove_ZoomChanged(uDelegate* value);
    double ZoomMax();
    void ZoomMax(double value);
    double ZoomMin();
    void ZoomMin(double value);
    static ::g::Fuse::Controls::MapMarker* MarkerFromObject(::g::Fuse::Scripting::Object* o);
    static void setBearing(MapView* view, uArray* args);
    static void setLocation(MapView* view, uArray* args);
    static void setMarkers(MapView* view, uArray* args);
    static void SetMarkersWithArray(MapView* view, ::g::Fuse::Scripting::Array* a);
    static void setTilt(MapView* view, uArray* args);
    static void setZoom(MapView* view, uArray* args);
};
// }

}}} // ::g::Fuse::Controls
