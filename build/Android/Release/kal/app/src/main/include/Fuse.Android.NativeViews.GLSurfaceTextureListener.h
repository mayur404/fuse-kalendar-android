// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Android/0.27.10/NativeViews/$.uno#9'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Android.android.view.TextureViewDLRSurfaceTextureListener.h>
#include <Android.Base.Wrappers.IJWrapper.h>
#include <Android.java.lang.Object.h>
#include <jni.h>
#include <Uno.IDisposable.h>
#include <Uno/Graphics/GLHelper.h>
namespace g{namespace Android{namespace android{namespace graphics{struct SurfaceTexture;}}}}
namespace g{namespace Fuse{namespace Android{namespace NativeViews{struct GLSurfaceTextureListener;}}}}
namespace g{namespace Fuse{namespace Android{namespace NativeViews{struct TextureView;}}}}

namespace g{
namespace Fuse{
namespace Android{
namespace NativeViews{

// internal sealed extern class GLSurfaceTextureListener :1111
// {
struct GLSurfaceTextureListener_type : ::g::Android::java::lang::Object_type
{
    ::g::Android::android::view::TextureViewDLRSurfaceTextureListener interface2;
};

GLSurfaceTextureListener_type* GLSurfaceTextureListener_typeof();
void GLSurfaceTextureListener__ctor_5_fn(GLSurfaceTextureListener* __this, ::g::Fuse::Android::NativeViews::TextureView* tv);
void GLSurfaceTextureListener__New5_fn(::g::Fuse::Android::NativeViews::TextureView* tv, GLSurfaceTextureListener** __retval);
void GLSurfaceTextureListener__onSurfaceTextureAvailable_fn(GLSurfaceTextureListener* __this, ::g::Android::android::graphics::SurfaceTexture* texture, int* width, int* height);
void GLSurfaceTextureListener__onSurfaceTextureDestroyed_fn(GLSurfaceTextureListener* __this, ::g::Android::android::graphics::SurfaceTexture* surface, bool* __retval);
void GLSurfaceTextureListener__onSurfaceTextureSizeChanged_fn(GLSurfaceTextureListener* __this, ::g::Android::android::graphics::SurfaceTexture* texture, int* width, int* height);
void GLSurfaceTextureListener__onSurfaceTextureUpdated_fn(GLSurfaceTextureListener* __this, ::g::Android::android::graphics::SurfaceTexture* surface);

struct GLSurfaceTextureListener : ::g::Android::java::lang::Object
{
    static jclass _javaClass2_;
    static jclass& _javaClass2() { return _javaClass2_; }
    uStrong< ::g::Android::android::graphics::SurfaceTexture*> _texture;
    uStrong< ::g::Fuse::Android::NativeViews::TextureView*> _tv;

    void ctor_5(::g::Fuse::Android::NativeViews::TextureView* tv);
    void onSurfaceTextureAvailable(::g::Android::android::graphics::SurfaceTexture* texture, int width, int height);
    bool onSurfaceTextureDestroyed(::g::Android::android::graphics::SurfaceTexture* surface);
    void onSurfaceTextureSizeChanged(::g::Android::android::graphics::SurfaceTexture* texture, int width, int height);
    void onSurfaceTextureUpdated(::g::Android::android::graphics::SurfaceTexture* surface);
    static GLSurfaceTextureListener* New5(::g::Fuse::Android::NativeViews::TextureView* tv);
};
// }

}}}} // ::g::Fuse::Android::NativeViews
