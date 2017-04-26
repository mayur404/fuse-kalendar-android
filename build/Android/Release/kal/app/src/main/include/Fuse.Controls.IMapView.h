// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Controls/0.27.10/MapView/$.uno#1'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>

namespace g{
namespace Fuse{
namespace Controls{

// internal abstract interface IMapView :288
// {
uInterfaceType* IMapView_typeof();

struct IMapView
{
    void(*fp_get_AllowRotate)(uObject*, bool*);
    void(*fp_set_AllowRotate)(uObject*, bool*);
    void(*fp_get_AllowTilt)(uObject*, bool*);
    void(*fp_set_AllowTilt)(uObject*, bool*);
    void(*fp_get_AllowZoom)(uObject*, bool*);
    void(*fp_set_AllowZoom)(uObject*, bool*);
    void(*fp_get_Bearing)(uObject*, double*);
    void(*fp_set_Bearing)(uObject*, double*);
    void(*fp_get_Latitude)(uObject*, double*);
    void(*fp_set_Latitude)(uObject*, double*);
    void(*fp_get_Longitude)(uObject*, double*);
    void(*fp_set_Longitude)(uObject*, double*);
    void(*fp_get_ShowCompass)(uObject*, bool*);
    void(*fp_set_ShowCompass)(uObject*, bool*);
    void(*fp_get_ShowMyLocation)(uObject*, bool*);
    void(*fp_set_ShowMyLocation)(uObject*, bool*);
    void(*fp_get_ShowMyLocationButton)(uObject*, bool*);
    void(*fp_set_ShowMyLocationButton)(uObject*, bool*);
    void(*fp_get_Style)(uObject*, int*);
    void(*fp_set_Style)(uObject*, int*);
    void(*fp_get_Tilt)(uObject*, double*);
    void(*fp_set_Tilt)(uObject*, double*);
    void(*fp_UpdateMarkers)(uObject*);
    void(*fp_get_Zoom)(uObject*, double*);
    void(*fp_set_Zoom)(uObject*, double*);
    void(*fp_get_ZoomMax)(uObject*, double*);
    void(*fp_set_ZoomMax)(uObject*, double*);
    void(*fp_get_ZoomMin)(uObject*, double*);
    void(*fp_set_ZoomMin)(uObject*, double*);
    static bool AllowRotate(const uInterface& __this) { bool __retval; return __this.VTable<IMapView>()->fp_get_AllowRotate(__this, &__retval), __retval; }
    static void AllowRotate(const uInterface& __this, bool value) { __this.VTable<IMapView>()->fp_set_AllowRotate(__this, &value); }
    static bool AllowTilt(const uInterface& __this) { bool __retval; return __this.VTable<IMapView>()->fp_get_AllowTilt(__this, &__retval), __retval; }
    static void AllowTilt(const uInterface& __this, bool value) { __this.VTable<IMapView>()->fp_set_AllowTilt(__this, &value); }
    static bool AllowZoom(const uInterface& __this) { bool __retval; return __this.VTable<IMapView>()->fp_get_AllowZoom(__this, &__retval), __retval; }
    static void AllowZoom(const uInterface& __this, bool value) { __this.VTable<IMapView>()->fp_set_AllowZoom(__this, &value); }
    static double Bearing(const uInterface& __this) { double __retval; return __this.VTable<IMapView>()->fp_get_Bearing(__this, &__retval), __retval; }
    static void Bearing(const uInterface& __this, double value) { __this.VTable<IMapView>()->fp_set_Bearing(__this, &value); }
    static double Latitude(const uInterface& __this) { double __retval; return __this.VTable<IMapView>()->fp_get_Latitude(__this, &__retval), __retval; }
    static void Latitude(const uInterface& __this, double value) { __this.VTable<IMapView>()->fp_set_Latitude(__this, &value); }
    static double Longitude(const uInterface& __this) { double __retval; return __this.VTable<IMapView>()->fp_get_Longitude(__this, &__retval), __retval; }
    static void Longitude(const uInterface& __this, double value) { __this.VTable<IMapView>()->fp_set_Longitude(__this, &value); }
    static bool ShowCompass(const uInterface& __this) { bool __retval; return __this.VTable<IMapView>()->fp_get_ShowCompass(__this, &__retval), __retval; }
    static void ShowCompass(const uInterface& __this, bool value) { __this.VTable<IMapView>()->fp_set_ShowCompass(__this, &value); }
    static bool ShowMyLocation(const uInterface& __this) { bool __retval; return __this.VTable<IMapView>()->fp_get_ShowMyLocation(__this, &__retval), __retval; }
    static void ShowMyLocation(const uInterface& __this, bool value) { __this.VTable<IMapView>()->fp_set_ShowMyLocation(__this, &value); }
    static bool ShowMyLocationButton(const uInterface& __this) { bool __retval; return __this.VTable<IMapView>()->fp_get_ShowMyLocationButton(__this, &__retval), __retval; }
    static void ShowMyLocationButton(const uInterface& __this, bool value) { __this.VTable<IMapView>()->fp_set_ShowMyLocationButton(__this, &value); }
    static int Style(const uInterface& __this) { int __retval; return __this.VTable<IMapView>()->fp_get_Style(__this, &__retval), __retval; }
    static void Style(const uInterface& __this, int value) { __this.VTable<IMapView>()->fp_set_Style(__this, &value); }
    static double Tilt(const uInterface& __this) { double __retval; return __this.VTable<IMapView>()->fp_get_Tilt(__this, &__retval), __retval; }
    static void Tilt(const uInterface& __this, double value) { __this.VTable<IMapView>()->fp_set_Tilt(__this, &value); }
    static void UpdateMarkers(const uInterface& __this) { __this.VTable<IMapView>()->fp_UpdateMarkers(__this); }
    static double Zoom(const uInterface& __this) { double __retval; return __this.VTable<IMapView>()->fp_get_Zoom(__this, &__retval), __retval; }
    static void Zoom(const uInterface& __this, double value) { __this.VTable<IMapView>()->fp_set_Zoom(__this, &value); }
    static double ZoomMax(const uInterface& __this) { double __retval; return __this.VTable<IMapView>()->fp_get_ZoomMax(__this, &__retval), __retval; }
    static void ZoomMax(const uInterface& __this, double value) { __this.VTable<IMapView>()->fp_set_ZoomMax(__this, &value); }
    static double ZoomMin(const uInterface& __this) { double __retval; return __this.VTable<IMapView>()->fp_get_ZoomMin(__this, &__retval), __retval; }
    static void ZoomMin(const uInterface& __this, double value) { __this.VTable<IMapView>()->fp_set_ZoomMin(__this, &value); }
};
// }

}}} // ::g::Fuse::Controls
