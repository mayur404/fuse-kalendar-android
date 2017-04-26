// This file was generated based on '(multiple files)'.
// WARNING: Changes might be lost if you edit this file directly.

#include <duktape_helpers.h>
#include <Fuse.Scripting.Callback.h>
#include <Fuse.Scripting.Duktape.Array.h>
#include <Fuse.Scripting.Duktape.Context.h>
#include <Fuse.Scripting.Duktape.duk_context.h>
#include <Fuse.Scripting.Duktape.duktape.h>
#include <Fuse.Scripting.Duktape.Function.h>
#include <Fuse.Scripting.Duktape.Object.h>
#include <Fuse.Scripting.Duktape.RawCallback.h>
#include <Fuse.Scripting.External.h>
#include <Fuse.Scripting.Function.h>
#include <Fuse.Scripting.Object.h>
#include <Fuse.Scripting.ScriptException.h>
#include <Uno.Action-1.h>
#include <Uno.Bool.h>
#include <Uno.Collections.List-1.h>
#include <Uno.Delegate.h>
#include <Uno.Double.h>
#include <Uno.Exception.h>
#include <Uno.Float.h>
#include <Uno.Int.h>
#include <Uno.IntPtr.h>
#include <Uno.Long.h>
#include <Uno.Object.h>
#include <Uno.String.h>
#include <Uno.Threading.ConcurrentQueue-1.h>
#include <Uno.UInt.h>
static uString* STRINGS[8];
static uType* TYPES[21];

namespace g{
namespace Fuse{
namespace Scripting{
namespace Duktape{

// /usr/local/share/uno/Packages/Fuse.Scripting.Duktape/0.27.10/$.uno
// ------------------------------------------------------------------

// internal sealed extern class Array :9
// {
//  ~Array() :24
static void Array__Finalize_fn(Array* __this)
{
    ::g::Uno::Threading::ConcurrentQueue__Enqueue_fn(uPtr(uPtr(__this->_ctx)->_unstash), uCRef<int>(__this->_stashKey));
}

::g::Fuse::Scripting::Array_type* Array_typeof()
{
    static uSStrong< ::g::Fuse::Scripting::Array_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.ObjectSize = sizeof(Array);
    options.TypeSize = sizeof(::g::Fuse::Scripting::Array_type);
    type = (::g::Fuse::Scripting::Array_type*)uClassType::New("Fuse.Scripting.Duktape.Array", options);
    type->SetBase(::g::Fuse::Scripting::Array_typeof());
    type->fp_Finalize = (void(*)(uObject*))Array__Finalize_fn;
    type->fp_Equals2 = (void(*)(::g::Fuse::Scripting::Array*, ::g::Fuse::Scripting::Array*, bool*))Array__Equals2_fn;
    type->fp_GetHashCode = (void(*)(uObject*, int*))Array__GetHashCode_fn;
    type->fp_get_Item = (void(*)(::g::Fuse::Scripting::Array*, int*, uObject**))Array__get_Item_fn;
    type->fp_set_Item = (void(*)(::g::Fuse::Scripting::Array*, int*, uObject*))Array__set_Item_fn;
    type->fp_get_Length = (void(*)(::g::Fuse::Scripting::Array*, int*))Array__get_Length_fn;
    ::TYPES[0] = ::g::Fuse::Scripting::Duktape::Context_typeof();
    ::TYPES[1] = ::g::Uno::IntPtr_typeof();
    ::TYPES[2] = ::g::Uno::Int_typeof();
    type->SetFields(0,
        ::g::Fuse::Scripting::Duktape::Context_typeof(), offsetof(::g::Fuse::Scripting::Duktape::Array, _ctx), 0,
        ::g::Uno::IntPtr_typeof(), offsetof(::g::Fuse::Scripting::Duktape::Array, _handle), 0,
        ::g::Uno::Int_typeof(), offsetof(::g::Fuse::Scripting::Duktape::Array, _stashKey), 0);
    return type;
}

// public Array(Fuse.Scripting.Duktape.Context ctx, Uno.IntPtr handle) :17
void Array__ctor_1_fn(Array* __this, ::g::Fuse::Scripting::Duktape::Context* ctx, void** handle)
{
    __this->ctor_1(ctx, *handle);
}

// public override sealed bool Equals(Fuse.Scripting.Array a) :59
void Array__Equals2_fn(Array* __this, ::g::Fuse::Scripting::Array* a, bool* __retval)
{
    Array* ja = uAs<Array*>(a, Array_typeof());
    return *__retval = ((ja != NULL) && (__this->_ctx == uPtr(ja)->_ctx)) && ::g::Uno::IntPtr::op_Equality(__this->_handle, uPtr(ja)->_handle), void();
}

// public override sealed int GetHashCode() :65
void Array__GetHashCode_fn(Array* __this, int* __retval)
{
    void* ind1;
    return *__retval = ::g::Uno::IntPtr::GetHashCode((ind1 = __this->_handle, ind1), ::TYPES[1/*Uno.IntPtr*/]), void();
}

// internal Uno.IntPtr get_Handle() :11
void Array__get_Handle_fn(Array* __this, void** __retval)
{
    *__retval = __this->Handle();
}

// public override sealed object get_Item(int index) :42
void Array__get_Item_fn(Array* __this, int* index, uObject** __retval)
{
    int index_ = *index;
    int objIndex = ::g::Fuse::Scripting::Duktape::duktape::push_heapptr(uPtr(__this->_ctx)->DukContext, __this->_handle);
    ::g::Fuse::Scripting::Duktape::duktape::get_prop_index(uPtr(__this->_ctx)->DukContext, objIndex, index_);
    uObject* res = uPtr(__this->_ctx)->IndexToObject(-1);
    ::g::Fuse::Scripting::Duktape::duktape::pop_2(uPtr(__this->_ctx)->DukContext);
    return *__retval = res, void();
}

// public override sealed void set_Item(int index, object value) :50
void Array__set_Item_fn(Array* __this, int* index, uObject* value)
{
    int index_ = *index;
    int objIndex = ::g::Fuse::Scripting::Duktape::duktape::push_heapptr(uPtr(__this->_ctx)->DukContext, __this->_handle);
    uPtr(__this->_ctx)->Push(value);
    ::g::Fuse::Scripting::Duktape::duktape::put_prop_index(uPtr(__this->_ctx)->DukContext, objIndex, index_);
    ::g::Fuse::Scripting::Duktape::duktape::pop(uPtr(__this->_ctx)->DukContext);
}

// public override sealed int get_Length() :31
void Array__get_Length_fn(Array* __this, int* __retval)
{
    int index = ::g::Fuse::Scripting::Duktape::duktape::push_heapptr(uPtr(__this->_ctx)->DukContext, __this->_handle);
    int64_t l = ::g::Fuse::Scripting::Duktape::duktape::get_length(uPtr(__this->_ctx)->DukContext, index);
    ::g::Fuse::Scripting::Duktape::duktape::pop(uPtr(__this->_ctx)->DukContext);
    return *__retval = (int)l, void();
}

// public Array New(Fuse.Scripting.Duktape.Context ctx, Uno.IntPtr handle) :17
void Array__New1_fn(::g::Fuse::Scripting::Duktape::Context* ctx, void** handle, Array** __retval)
{
    *__retval = Array::New1(ctx, *handle);
}

// public Array(Fuse.Scripting.Duktape.Context ctx, Uno.IntPtr handle) [instance] :17
void Array::ctor_1(::g::Fuse::Scripting::Duktape::Context* ctx, void* handle)
{
    ctor_();
    _ctx = ctx;
    _handle = handle;
    _stashKey = uPtr(_ctx)->Stash(_handle);
}

// internal Uno.IntPtr get_Handle() [instance] :11
void* Array::Handle()
{
    return _handle;
}

// public Array New(Fuse.Scripting.Duktape.Context ctx, Uno.IntPtr handle) [static] :17
Array* Array::New1(::g::Fuse::Scripting::Duktape::Context* ctx, void* handle)
{
    Array* obj2 = (Array*)uNew(Array_typeof());
    obj2->ctor_1(ctx, handle);
    return obj2;
}
// }

// /usr/local/share/uno/Packages/Fuse.Scripting.Duktape/0.27.10/$.uno#1
// --------------------------------------------------------------------

// public sealed extern class Context :113
// {
//  ~Context() :151
static void Context__Finalize_fn(Context* __this)
{
    __this->Dispose();
}

::g::Fuse::Scripting::Context_type* Context_typeof()
{
    static uSStrong< ::g::Fuse::Scripting::Context_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 9;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(Context);
    options.TypeSize = sizeof(::g::Fuse::Scripting::Context_type);
    type = (::g::Fuse::Scripting::Context_type*)uClassType::New("Fuse.Scripting.Duktape.Context", options);
    type->SetBase(::g::Fuse::Scripting::Context_typeof());
    type->fp_Finalize = (void(*)(uObject*))Context__Finalize_fn;
    type->fp_Dispose = (void(*)(::g::Fuse::Scripting::Context*))Context__Dispose_fn;
    type->fp_Evaluate = (void(*)(::g::Fuse::Scripting::Context*, uString*, uString*, uObject**))Context__Evaluate_fn;
    type->fp_get_GlobalObject = (void(*)(::g::Fuse::Scripting::Context*, ::g::Fuse::Scripting::Object**))Context__get_GlobalObject_fn;
    type->interface0.fp_Dispose = (void(*)(uObject*))Context__Dispose_fn;
    ::STRINGS[0] = uString::Const("name");
    ::STRINGS[1] = uString::Const("message");
    ::STRINGS[2] = uString::Const("fileName");
    ::STRINGS[3] = uString::Const("lineNumber");
    ::STRINGS[4] = uString::Const("stack");
    ::STRINGS[5] = uString::Const("Object");
    ::STRINGS[6] = uString::Const("Could not convert index to object");
    ::STRINGS[7] = uString::Const("Cannot push value: ");
    ::TYPES[3] = ::g::Uno::Threading::ConcurrentQueue_typeof()->MakeType(::g::Uno::Int_typeof());
    ::TYPES[4] = uObject_typeof();
    ::TYPES[5] = ::g::Fuse::Scripting::Duktape::Object_typeof();
    ::TYPES[6] = ::g::Fuse::Scripting::Function_typeof();
    ::TYPES[2] = ::g::Uno::Int_typeof();
    ::TYPES[7] = ::g::Uno::Double_typeof();
    ::TYPES[8] = ::g::Uno::Float_typeof();
    ::TYPES[9] = ::g::Uno::String_typeof();
    ::TYPES[10] = ::g::Uno::Bool_typeof();
    ::TYPES[11] = ::g::Fuse::Scripting::Callback_typeof();
    ::TYPES[12] = ::g::Uno::Delegate_typeof();
    ::TYPES[13] = uObject_typeof()->Array();
    ::TYPES[14] = ::g::Uno::Action1_typeof()->MakeType(::g::Uno::IntPtr_typeof());
    ::TYPES[15] = ::g::Fuse::Scripting::Duktape::Function_typeof();
    ::TYPES[16] = ::g::Fuse::Scripting::Duktape::Array_typeof();
    ::TYPES[17] = ::g::Fuse::Scripting::External_typeof();
    ::TYPES[18] = ::g::Fuse::Scripting::Object_typeof();
    type->SetInterfaces(
        ::g::Uno::IDisposable_typeof(), offsetof(::g::Fuse::Scripting::Context_type, interface0));
    type->SetFields(2,
        ::g::Fuse::Scripting::Duktape::Function_typeof(), offsetof(::g::Fuse::Scripting::Duktape::Context, _callbackFactory), 0,
        ::g::Fuse::Scripting::Duktape::Function_typeof(), offsetof(::g::Fuse::Scripting::Duktape::Context, _external), 0,
        ::g::Fuse::Scripting::Duktape::Object_typeof(), offsetof(::g::Fuse::Scripting::Duktape::Context, _globalObject), 0,
        ::g::Fuse::Scripting::Duktape::Function_typeof(), offsetof(::g::Fuse::Scripting::Duktape::Context, _instanceOf), 0,
        ::g::Uno::Int_typeof(), offsetof(::g::Fuse::Scripting::Duktape::Context, _stashKey), 0,
        ::g::Uno::Threading::ConcurrentQueue_typeof()->MakeType(::g::Uno::Int_typeof()), offsetof(::g::Fuse::Scripting::Duktape::Context, _unstash), 0,
        ::g::Fuse::Scripting::Duktape::duk_context_typeof(), offsetof(::g::Fuse::Scripting::Duktape::Context, DukContext), 0);
    return type;
}

// internal void CheckError(int errorCode) :372
void Context__CheckError_fn(Context* __this, int* errorCode)
{
    __this->CheckError(*errorCode);
}

// public override sealed void Dispose() :156
void Context__Dispose_fn(Context* __this)
{
    ::g::Fuse::Scripting::Duktape::duktape::destroy_heap(__this->DukContext);
}

// public override sealed object Evaluate(string fileName, string code) :161
void Context__Evaluate_fn(Context* __this, uString* fileName, uString* code, uObject** __retval)
{
    __this->Push(code);
    __this->Push(fileName);
    __this->CheckError(::g::Fuse::Scripting::Duktape::duktape::pcompile(__this->DukContext, 0U));
    __this->CheckError(::g::Fuse::Scripting::Duktape::duktape::pcall(__this->DukContext, 0));
    uObject* result = __this->IndexToObject(-1);
    ::g::Fuse::Scripting::Duktape::duktape::pop(__this->DukContext);
    return *__retval = result, void();
}

// internal Fuse.Scripting.ScriptException GetError(int index) :324
void Context__GetError_fn(Context* __this, int* index, ::g::Fuse::Scripting::ScriptException** __retval)
{
    *__retval = __this->GetError(*index);
}

// private object GetExternalObject(Fuse.Scripting.Duktape.Object wrapper) :189
void Context__GetExternalObject_fn(Context* __this, ::g::Fuse::Scripting::Duktape::Object* wrapper, uObject** __retval)
{
    *__retval = __this->GetExternalObject(wrapper);
}

// public override sealed Fuse.Scripting.Object get_GlobalObject() :122
void Context__get_GlobalObject_fn(Context* __this, ::g::Fuse::Scripting::Object** __retval)
{
    return *__retval = __this->_globalObject, void();
}

// internal object IndexToObject(int index) :199
void Context__IndexToObject_fn(Context* __this, int* index, uObject** __retval)
{
    *__retval = __this->IndexToObject(*index);
}

// internal void Push(object value) :238
void Context__Push_fn(Context* __this, uObject* value)
{
    __this->Push(value);
}

// private void PushExternal(object o) :174
void Context__PushExternal_fn(Context* __this, uObject* o)
{
    __this->PushExternal(o);
}

// internal int Stash(Uno.IntPtr heapPtr) :315
void Context__Stash_fn(Context* __this, void** heapPtr, int* __retval)
{
    *__retval = __this->Stash(*heapPtr);
}

// internal void CheckError(int errorCode) [instance] :372
void Context::CheckError(int errorCode)
{
    bool ret2;

    if (errorCode != 0)
    {
        ::g::Fuse::Scripting::ScriptException* e = GetError(-1);
        ::g::Fuse::Scripting::Duktape::duktape::pop(DukContext);
        U_THROW(e);
    }

    if (uPtr(_unstash)->Count() > 0)
    {
        ::g::Fuse::Scripting::Duktape::duktape::push_global_stash(DukContext);
        int stashKey;

        while ((::g::Uno::Threading::ConcurrentQueue__TryDequeue_fn(uPtr(_unstash), &stashKey, &ret2), ret2))
            ::g::Fuse::Scripting::Duktape::duktape::del_prop_index(DukContext, -1, stashKey);

        ::g::Fuse::Scripting::Duktape::duktape::pop(DukContext);
    }
}

// internal Fuse.Scripting.ScriptException GetError(int index) [instance] :324
::g::Fuse::Scripting::ScriptException* Context::GetError(int index)
{
    uString* name = NULL;
    uString* message = NULL;
    uString* fileName = NULL;
    int lineNumber = -1;
    uString* stack = NULL;

    if (::g::Fuse::Scripting::Duktape::duktape::is_object(DukContext, index))
    {
        ::g::Fuse::Scripting::Duktape::duktape::get_prop_string(DukContext, index, ::STRINGS[0/*"name"*/]);

        if (::g::Fuse::Scripting::Duktape::duktape::is_string(DukContext, -1))
            name = ::g::Fuse::Scripting::Duktape::duktape::get_string(DukContext, -1);

        ::g::Fuse::Scripting::Duktape::duktape::pop(DukContext);
        ::g::Fuse::Scripting::Duktape::duktape::get_prop_string(DukContext, index, ::STRINGS[1/*"message"*/]);

        if (::g::Fuse::Scripting::Duktape::duktape::is_string(DukContext, -1))
            message = ::g::Fuse::Scripting::Duktape::duktape::get_string(DukContext, -1);

        ::g::Fuse::Scripting::Duktape::duktape::pop(DukContext);
        ::g::Fuse::Scripting::Duktape::duktape::get_prop_string(DukContext, index, ::STRINGS[2/*"fileName"*/]);

        if (::g::Fuse::Scripting::Duktape::duktape::is_string(DukContext, -1))
            fileName = ::g::Fuse::Scripting::Duktape::duktape::get_string(DukContext, -1);

        ::g::Fuse::Scripting::Duktape::duktape::pop(DukContext);
        ::g::Fuse::Scripting::Duktape::duktape::get_prop_string(DukContext, index, ::STRINGS[3/*"lineNumber"*/]);
        lineNumber = ::g::Fuse::Scripting::Duktape::duktape::get_int(DukContext, -1);
        ::g::Fuse::Scripting::Duktape::duktape::pop(DukContext);
        ::g::Fuse::Scripting::Duktape::duktape::get_prop_string(DukContext, index, ::STRINGS[4/*"stack"*/]);

        if (::g::Fuse::Scripting::Duktape::duktape::is_string(DukContext, -1))
            stack = ::g::Fuse::Scripting::Duktape::duktape::get_string(DukContext, -1);

        ::g::Fuse::Scripting::Duktape::duktape::pop(DukContext);
    }
    else
        message = ::g::Fuse::Scripting::Duktape::duktape::safe_to_string(DukContext, index);

    return ::g::Fuse::Scripting::ScriptException::New4(name, message, fileName, lineNumber, NULL, stack);
}

// private object GetExternalObject(Fuse.Scripting.Duktape.Object wrapper) [instance] :189
uObject* Context::GetExternalObject(::g::Fuse::Scripting::Duktape::Object* wrapper)
{
    ::g::Fuse::Scripting::Duktape::duktape::push_heapptr(DukContext, uPtr(wrapper)->Handle());
    ::g::Fuse::Scripting::Duktape::duktape::get_prop_string(DukContext, -1, ::STRINGS[5/*"Object"*/]);
    int size;
    uObject* result = (uObject*)::g::Fuse::Scripting::Duktape::duktape::get_buffer(DukContext, -1, &size);
    ::g::Fuse::Scripting::Duktape::duktape::pop_2(DukContext);
    return result;
}

// internal object IndexToObject(int index) [instance] :199
uObject* Context::IndexToObject(int index)
{
    if (::g::Fuse::Scripting::Duktape::duktape::is_function(DukContext, index))
        return ::g::Fuse::Scripting::Duktape::Function::New1(this, ::g::Fuse::Scripting::Duktape::duktape::get_heapptr(DukContext, index));

    if (::g::Fuse::Scripting::Duktape::duktape::is_array(DukContext, index))
        return ::g::Fuse::Scripting::Duktape::Array::New1(this, ::g::Fuse::Scripting::Duktape::duktape::get_heapptr(DukContext, index));

    if (::g::Fuse::Scripting::Duktape::duktape::is_object(DukContext, index))
    {
        ::g::Fuse::Scripting::Duktape::Object* obj = ::g::Fuse::Scripting::Duktape::Object::New1(this, ::g::Fuse::Scripting::Duktape::duktape::get_heapptr(DukContext, index));

        if (obj->InstanceOf(_external))
            return ::g::Fuse::Scripting::External::New1(GetExternalObject(obj));

        return obj;
    }

    if (::g::Fuse::Scripting::Duktape::duktape::is_number(DukContext, index))
        return uBox(::TYPES[7/*double*/], ::g::Fuse::Scripting::Duktape::duktape::get_number(DukContext, index));

    if (::g::Fuse::Scripting::Duktape::duktape::is_string(DukContext, index))
        return ::g::Fuse::Scripting::Duktape::duktape::get_string(DukContext, index);

    if (::g::Fuse::Scripting::Duktape::duktape::is_boolean(DukContext, index))
        return uBox(::TYPES[10/*bool*/], ::g::Fuse::Scripting::Duktape::duktape::get_boolean(DukContext, index));

    if (::g::Fuse::Scripting::Duktape::duktape::is_null_or_undefined(DukContext, index))
        return NULL;

    U_THROW(::g::Uno::Exception::New2(::STRINGS[6/*"Could not c...*/]));
}

// internal void Push(object value) [instance] :238
void Context::Push(uObject* value)
{
    if (uIs(value, ::TYPES[2/*int*/]))
    {
        ::g::Fuse::Scripting::Duktape::duktape::push_int(DukContext, uUnbox<int>(::TYPES[2/*int*/], value));
        return;
    }

    if (uIs(value, ::TYPES[7/*double*/]))
    {
        ::g::Fuse::Scripting::Duktape::duktape::push_number(DukContext, uUnbox<double>(::TYPES[7/*double*/], value));
        return;
    }

    if (uIs(value, ::TYPES[8/*float*/]))
    {
        ::g::Fuse::Scripting::Duktape::duktape::push_number(DukContext, (double)uUnbox<float>(::TYPES[8/*float*/], value));
        return;
    }

    if (uIs(value, ::TYPES[9/*string*/]))
    {
        ::g::Fuse::Scripting::Duktape::duktape::push_string(DukContext, uCast<uString*>(value, ::TYPES[9/*string*/]));
        return;
    }

    if (uIs(value, ::TYPES[10/*bool*/]))
    {
        ::g::Fuse::Scripting::Duktape::duktape::push_boolean(DukContext, uUnbox<bool>(::TYPES[10/*bool*/], value));
        return;
    }

    if (value == NULL)
    {
        ::g::Fuse::Scripting::Duktape::duktape::push_null(DukContext);
        return;
    }

    uDelegate* c = uAs<uDelegate*>(value, ::TYPES[11/*Fuse.Scripting.Callback*/]);

    if (::g::Uno::Delegate::op_Inequality(c, NULL))
    {
        Push(uPtr(_callbackFactory)->Call(uArray::Init<uObject*>(::TYPES[13/*object[]*/], 1, (::g::Fuse::Scripting::External*)::g::Fuse::Scripting::External::New1(uDelegate::New(::TYPES[14/*Uno.Action<Uno.IntPtr>*/], (void*)::g::Fuse::Scripting::Duktape::RawCallback__Call_fn, ::g::Fuse::Scripting::Duktape::RawCallback::New1(this, c))))));
        return;
    }

    ::g::Fuse::Scripting::Duktape::Function* f = uAs< ::g::Fuse::Scripting::Duktape::Function*>(value, ::TYPES[15/*Fuse.Scripting.Duktape.Function*/]);

    if (f != NULL)
    {
        ::g::Fuse::Scripting::Duktape::duktape::push_heapptr(DukContext, uPtr(f)->Handle());
        return;
    }

    ::g::Fuse::Scripting::Duktape::Array* a = uAs< ::g::Fuse::Scripting::Duktape::Array*>(value, ::TYPES[16/*Fuse.Scripting.Duktape.Array*/]);

    if (a != NULL)
    {
        ::g::Fuse::Scripting::Duktape::duktape::push_heapptr(DukContext, uPtr(a)->Handle());
        return;
    }

    ::g::Fuse::Scripting::Duktape::Object* o = uAs< ::g::Fuse::Scripting::Duktape::Object*>(value, ::TYPES[5/*Fuse.Scripting.Duktape.Object*/]);

    if (o != NULL)
    {
        ::g::Fuse::Scripting::Duktape::duktape::push_heapptr(DukContext, uPtr(o)->Handle());
        return;
    }

    ::g::Fuse::Scripting::External* e = uAs< ::g::Fuse::Scripting::External*>(value, ::TYPES[17/*Fuse.Scripting.External*/]);

    if (e != NULL)
    {
        PushExternal(uPtr(e)->Object);
        return;
    }

    U_THROW(::g::Uno::Exception::New2(::g::Uno::String::op_Addition1(::STRINGS[7/*"Cannot push...*/], value)));
}

// private void PushExternal(object o) [instance] :174
void Context::PushExternal(uObject* o)
{
    ::g::Fuse::Scripting::Duktape::duktape::push_heapptr(DukContext, uPtr(_external)->Handle());
    ::g::Fuse::Scripting::Duktape::duktape::push_external_buffer(DukContext);
    ::g::Fuse::Scripting::Duktape::duktape::config_buffer(DukContext, -1, o, 0);
    uRetain(o);
    ::g::Fuse::Scripting::Duktape::duktape::new_(DukContext, 1);
    ::g::Fuse::Scripting::Duktape::duktape::push_external_finalizer(DukContext);
    ::g::Fuse::Scripting::Duktape::duktape::set_finalizer(DukContext, -2);
}

// internal int Stash(Uno.IntPtr heapPtr) [instance] :315
int Context::Stash(void* heapPtr)
{
    ::g::Fuse::Scripting::Duktape::duktape::push_global_stash(DukContext);
    ::g::Fuse::Scripting::Duktape::duktape::push_heapptr(DukContext, heapPtr);
    ::g::Fuse::Scripting::Duktape::duktape::put_prop_index(DukContext, -2, _stashKey);
    ::g::Fuse::Scripting::Duktape::duktape::pop(DukContext);
    return _stashKey++;
}
// }

// /usr/local/share/uno/Packages/Fuse.Scripting.Duktape/0.27.10/$.uno#4
// --------------------------------------------------------------------

// internal extern struct duk_context :598
// {
uStructType* duk_context_typeof()
{
    static uSStrong<uStructType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.ValueSize = sizeof(::duk_context*);
    options.TypeSize = sizeof(uStructType);
    type = uStructType::New("Fuse.Scripting.Duktape.duk_context", options);
    return type;
}
// }

// /usr/local/share/uno/Packages/Fuse.Scripting.Duktape/0.27.10/$.uno#4
// --------------------------------------------------------------------

// internal static extern class duktape :605
// {
uClassType* duktape_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Fuse.Scripting.Duktape.duktape", options);
    return type;
}

// internal static void config_buffer(Fuse.Scripting.Duktape.duk_context ctx, int index, Uno.IntPtr ptr, int len) :1088
void duktape__config_buffer_fn(::duk_context** ctx, int* index, void** ptr, int* len)
{
    duktape::config_buffer(*ctx, *index, *ptr, *len);
}

// internal static bool del_prop_index(Fuse.Scripting.Duktape.duk_context ctx, int obj_index, int arr_index) :767
void duktape__del_prop_index_fn(::duk_context** ctx, int* obj_index, int* arr_index, bool* __retval)
{
    *__retval = duktape::del_prop_index(*ctx, *obj_index, *arr_index);
}

// internal static void destroy_heap(Fuse.Scripting.Duktape.duk_context ctx) :882
void duktape__destroy_heap_fn(::duk_context** ctx)
{
    duktape::destroy_heap(*ctx);
}

// internal static void enum_own_properties(Fuse.Scripting.Duktape.duk_context ctx, int index) :619
void duktape__enum_own_properties_fn(::duk_context** ctx, int* index)
{
    duktape::enum_own_properties(*ctx, *index);
}

// internal static void error(Fuse.Scripting.Duktape.duk_context ctx, string message) :810
void duktape__error_fn(::duk_context** ctx, uString* message)
{
    duktape::error(*ctx, message);
}

// internal static bool get_boolean(Fuse.Scripting.Duktape.duk_context ctx, int index) :1025
void duktape__get_boolean_fn(::duk_context** ctx, int* index, bool* __retval)
{
    *__retval = duktape::get_boolean(*ctx, *index);
}

// internal static Uno.IntPtr get_buffer(Fuse.Scripting.Duktape.duk_context ctx, int index, int& size) :1093
void duktape__get_buffer_fn(::duk_context** ctx, int* index, int* size, void** __retval)
{
    *__retval = duktape::get_buffer(*ctx, *index, size);
}

// internal static Uno.IntPtr get_heapptr(Fuse.Scripting.Duktape.duk_context ctx, int index) :995
void duktape__get_heapptr_fn(::duk_context** ctx, int* index, void** __retval)
{
    *__retval = duktape::get_heapptr(*ctx, *index);
}

// internal static int get_int(Fuse.Scripting.Duktape.duk_context ctx, int index) :1065
void duktape__get_int_fn(::duk_context** ctx, int* index, int* __retval)
{
    *__retval = duktape::get_int(*ctx, *index);
}

// internal static long get_length(Fuse.Scripting.Duktape.duk_context ctx, int index) :1010
void duktape__get_length_fn(::duk_context** ctx, int* index, int64_t* __retval)
{
    *__retval = duktape::get_length(*ctx, *index);
}

// internal static double get_number(Fuse.Scripting.Duktape.duk_context ctx, int index) :1005
void duktape__get_number_fn(::duk_context** ctx, int* index, double* __retval)
{
    *__retval = duktape::get_number(*ctx, *index);
}

// internal static bool get_prop_index(Fuse.Scripting.Duktape.duk_context ctx, int index, int arr_index) :1035
void duktape__get_prop_index_fn(::duk_context** ctx, int* index, int* arr_index, bool* __retval)
{
    *__retval = duktape::get_prop_index(*ctx, *index, *arr_index);
}

// internal static bool get_prop_string(Fuse.Scripting.Duktape.duk_context ctx, int obj_index, string key) :914
void duktape__get_prop_string_fn(::duk_context** ctx, int* obj_index, uString* key, bool* __retval)
{
    *__retval = duktape::get_prop_string(*ctx, *obj_index, key);
}

// internal static string get_string(Fuse.Scripting.Duktape.duk_context ctx, int index) :1015
void duktape__get_string_fn(::duk_context** ctx, int* index, uString** __retval)
{
    *__retval = duktape::get_string(*ctx, *index);
}

// internal static bool has_prop_string(Fuse.Scripting.Duktape.duk_context ctx, int index, string key) :1070
void duktape__has_prop_string_fn(::duk_context** ctx, int* index, uString* key, bool* __retval)
{
    *__retval = duktape::has_prop_string(*ctx, *index, key);
}

// internal static bool is_array(Fuse.Scripting.Duktape.duk_context ctx, int index) :922
void duktape__is_array_fn(::duk_context** ctx, int* index, bool* __retval)
{
    *__retval = duktape::is_array(*ctx, *index);
}

// internal static bool is_boolean(Fuse.Scripting.Duktape.duk_context ctx, int index) :927
void duktape__is_boolean_fn(::duk_context** ctx, int* index, bool* __retval)
{
    *__retval = duktape::is_boolean(*ctx, *index);
}

// internal static bool is_function(Fuse.Scripting.Duktape.duk_context ctx, int index) :937
void duktape__is_function_fn(::duk_context** ctx, int* index, bool* __retval)
{
    *__retval = duktape::is_function(*ctx, *index);
}

// internal static bool is_null_or_undefined(Fuse.Scripting.Duktape.duk_context ctx, int index) :952
void duktape__is_null_or_undefined_fn(::duk_context** ctx, int* index, bool* __retval)
{
    *__retval = duktape::is_null_or_undefined(*ctx, *index);
}

// internal static bool is_number(Fuse.Scripting.Duktape.duk_context ctx, int index) :957
void duktape__is_number_fn(::duk_context** ctx, int* index, bool* __retval)
{
    *__retval = duktape::is_number(*ctx, *index);
}

// internal static bool is_object(Fuse.Scripting.Duktape.duk_context ctx, int index) :962
void duktape__is_object_fn(::duk_context** ctx, int* index, bool* __retval)
{
    *__retval = duktape::is_object(*ctx, *index);
}

// internal static bool is_string(Fuse.Scripting.Duktape.duk_context ctx, int index) :967
void duktape__is_string_fn(::duk_context** ctx, int* index, bool* __retval)
{
    *__retval = duktape::is_string(*ctx, *index);
}

// internal static void new_(Fuse.Scripting.Duktape.duk_context ctx, int nargs) :1078
void duktape__new__fn(::duk_context** ctx, int* nargs)
{
    duktape::new_(*ctx, *nargs);
}

// internal static bool next(Fuse.Scripting.Duktape.duk_context ctx, int index, bool getValue) :624
void duktape__next_fn(::duk_context** ctx, int* index, bool* getValue, bool* __retval)
{
    *__retval = duktape::next(*ctx, *index, *getValue);
}

// internal static int pcall(Fuse.Scripting.Duktape.duk_context ctx, int nargs) :639
void duktape__pcall_fn(::duk_context** ctx, int* nargs, int* __retval)
{
    *__retval = duktape::pcall(*ctx, *nargs);
}

// internal static int pcall_method(Fuse.Scripting.Duktape.duk_context ctx, int nargs) :649
void duktape__pcall_method_fn(::duk_context** ctx, int* nargs, int* __retval)
{
    *__retval = duktape::pcall_method(*ctx, *nargs);
}

// internal static int pcompile(Fuse.Scripting.Duktape.duk_context ctx, uint flags) :728
void duktape__pcompile_fn(::duk_context** ctx, uint32_t* flags, int* __retval)
{
    *__retval = duktape::pcompile(*ctx, *flags);
}

// internal static void pop(Fuse.Scripting.Duktape.duk_context ctx) :846
void duktape__pop_fn(::duk_context** ctx)
{
    duktape::pop(*ctx);
}

// internal static void pop_2(Fuse.Scripting.Duktape.duk_context ctx) :1045
void duktape__pop_2_fn(::duk_context** ctx)
{
    duktape::pop_2(*ctx);
}

// internal static void push_boolean(Fuse.Scripting.Duktape.duk_context ctx, bool value) :1030
void duktape__push_boolean_fn(::duk_context** ctx, bool* value)
{
    duktape::push_boolean(*ctx, *value);
}

// internal static void push_external_buffer(Fuse.Scripting.Duktape.duk_context ctx) :1083
void duktape__push_external_buffer_fn(::duk_context** ctx)
{
    duktape::push_external_buffer(*ctx);
}

// internal static void push_external_finalizer(Fuse.Scripting.Duktape.duk_context ctx) :1100
void duktape__push_external_finalizer_fn(::duk_context** ctx)
{
    duktape::push_external_finalizer(*ctx);
}

// internal static void push_global_stash(Fuse.Scripting.Duktape.duk_context ctx) :1060
void duktape__push_global_stash_fn(::duk_context** ctx)
{
    duktape::push_global_stash(*ctx);
}

// internal static int push_heapptr(Fuse.Scripting.Duktape.duk_context ctx, Uno.IntPtr ptr) :990
void duktape__push_heapptr_fn(::duk_context** ctx, void** ptr, int* __retval)
{
    *__retval = duktape::push_heapptr(*ctx, *ptr);
}

// internal static void push_int(Fuse.Scripting.Duktape.duk_context ctx, int val) :902
void duktape__push_int_fn(::duk_context** ctx, int* val)
{
    duktape::push_int(*ctx, *val);
}

// internal static void push_null(Fuse.Scripting.Duktape.duk_context ctx) :1000
void duktape__push_null_fn(::duk_context** ctx)
{
    duktape::push_null(*ctx);
}

// internal static void push_number(Fuse.Scripting.Duktape.duk_context ctx, double val) :861
void duktape__push_number_fn(::duk_context** ctx, double* val)
{
    duktape::push_number(*ctx, *val);
}

// internal static void push_string(Fuse.Scripting.Duktape.duk_context ctx, string str) :907
void duktape__push_string_fn(::duk_context** ctx, uString* str)
{
    duktape::push_string(*ctx, str);
}

// internal static bool put_prop_index(Fuse.Scripting.Duktape.duk_context ctx, int index, int arr_index) :1040
void duktape__put_prop_index_fn(::duk_context** ctx, int* index, int* arr_index, bool* __retval)
{
    *__retval = duktape::put_prop_index(*ctx, *index, *arr_index);
}

// internal static bool put_prop_string(Fuse.Scripting.Duktape.duk_context ctx, int obj_index, string key) :866
void duktape__put_prop_string_fn(::duk_context** ctx, int* obj_index, uString* key, bool* __retval)
{
    *__retval = duktape::put_prop_string(*ctx, *obj_index, key);
}

// internal static string safe_to_string(Fuse.Scripting.Duktape.duk_context ctx, int index) :1020
void duktape__safe_to_string_fn(::duk_context** ctx, int* index, uString** __retval)
{
    *__retval = duktape::safe_to_string(*ctx, *index);
}

// internal static void set_finalizer(Fuse.Scripting.Duktape.duk_context ctx, int index) :1105
void duktape__set_finalizer_fn(::duk_context** ctx, int* index)
{
    duktape::set_finalizer(*ctx, *index);
}

// internal static void config_buffer(Fuse.Scripting.Duktape.duk_context ctx, int index, Uno.IntPtr ptr, int len) [static] :1088
void duktape::config_buffer(::duk_context* ctx, int index, void* ptr, int len)
{
    duk_config_buffer(ctx, index, ptr, len);
}

// internal static bool del_prop_index(Fuse.Scripting.Duktape.duk_context ctx, int obj_index, int arr_index) [static] :767
bool duktape::del_prop_index(::duk_context* ctx, int obj_index, int arr_index)
{
    return duk_del_prop_index(ctx, obj_index, arr_index);
}

// internal static void destroy_heap(Fuse.Scripting.Duktape.duk_context ctx) [static] :882
void duktape::destroy_heap(::duk_context* ctx)
{
    duk_destroy_heap(ctx);
}

// internal static void enum_own_properties(Fuse.Scripting.Duktape.duk_context ctx, int index) [static] :619
void duktape::enum_own_properties(::duk_context* ctx, int index)
{
    duk_enum(ctx, index, DUK_ENUM_OWN_PROPERTIES_ONLY);
}

// internal static void error(Fuse.Scripting.Duktape.duk_context ctx, string message) [static] :810
void duktape::error(::duk_context* ctx, uString* message)
{
    const char* cMessage = uAllocCStr(message);
    duk_error(ctx, DUK_ERR_ERROR, cMessage);
    uFreeCStr(cMessage);
}

// internal static bool get_boolean(Fuse.Scripting.Duktape.duk_context ctx, int index) [static] :1025
bool duktape::get_boolean(::duk_context* ctx, int index)
{
    return duk_get_boolean(ctx, index);
}

// internal static Uno.IntPtr get_buffer(Fuse.Scripting.Duktape.duk_context ctx, int index, int& size) [static] :1093
void* duktape::get_buffer(::duk_context* ctx, int index, int* size)
{
    duk_size_t outSize;
    return duk_get_buffer(ctx, index, &outSize);
    *size = (int)outSize;
}

// internal static Uno.IntPtr get_heapptr(Fuse.Scripting.Duktape.duk_context ctx, int index) [static] :995
void* duktape::get_heapptr(::duk_context* ctx, int index)
{
    return duk_get_heapptr(ctx, index);
}

// internal static int get_int(Fuse.Scripting.Duktape.duk_context ctx, int index) [static] :1065
int duktape::get_int(::duk_context* ctx, int index)
{
    return duk_get_int(ctx, index);
}

// internal static long get_length(Fuse.Scripting.Duktape.duk_context ctx, int index) [static] :1010
int64_t duktape::get_length(::duk_context* ctx, int index)
{
    return duk_get_length(ctx, index);
}

// internal static double get_number(Fuse.Scripting.Duktape.duk_context ctx, int index) [static] :1005
double duktape::get_number(::duk_context* ctx, int index)
{
    return duk_get_number(ctx, index);
}

// internal static bool get_prop_index(Fuse.Scripting.Duktape.duk_context ctx, int index, int arr_index) [static] :1035
bool duktape::get_prop_index(::duk_context* ctx, int index, int arr_index)
{
    return duk_get_prop_index(ctx, index, arr_index);
}

// internal static bool get_prop_string(Fuse.Scripting.Duktape.duk_context ctx, int obj_index, string key) [static] :914
bool duktape::get_prop_string(::duk_context* ctx, int obj_index, uString* key)
{
    const char* cKey = uAllocCStr(key);
    bool result = duk_get_prop_string(ctx, obj_index, cKey);
    uFreeCStr(cKey);
    return result;
}

// internal static string get_string(Fuse.Scripting.Duktape.duk_context ctx, int index) [static] :1015
uString* duktape::get_string(::duk_context* ctx, int index)
{
    return uString::Utf8(duk_get_string(ctx, index));
}

// internal static bool has_prop_string(Fuse.Scripting.Duktape.duk_context ctx, int index, string key) [static] :1070
bool duktape::has_prop_string(::duk_context* ctx, int index, uString* key)
{
    const char* cKey = uAllocCStr(key);
    bool result = duk_has_prop_string(ctx, index, cKey);
    uFreeCStr(cKey);
    return result;
}

// internal static bool is_array(Fuse.Scripting.Duktape.duk_context ctx, int index) [static] :922
bool duktape::is_array(::duk_context* ctx, int index)
{
    return duk_is_array(ctx, index);
}

// internal static bool is_boolean(Fuse.Scripting.Duktape.duk_context ctx, int index) [static] :927
bool duktape::is_boolean(::duk_context* ctx, int index)
{
    return duk_is_boolean(ctx, index);
}

// internal static bool is_function(Fuse.Scripting.Duktape.duk_context ctx, int index) [static] :937
bool duktape::is_function(::duk_context* ctx, int index)
{
    return duk_is_function(ctx, index);
}

// internal static bool is_null_or_undefined(Fuse.Scripting.Duktape.duk_context ctx, int index) [static] :952
bool duktape::is_null_or_undefined(::duk_context* ctx, int index)
{
    return duk_is_null_or_undefined(ctx, index);
}

// internal static bool is_number(Fuse.Scripting.Duktape.duk_context ctx, int index) [static] :957
bool duktape::is_number(::duk_context* ctx, int index)
{
    return duk_is_number(ctx, index);
}

// internal static bool is_object(Fuse.Scripting.Duktape.duk_context ctx, int index) [static] :962
bool duktape::is_object(::duk_context* ctx, int index)
{
    return duk_is_object(ctx, index);
}

// internal static bool is_string(Fuse.Scripting.Duktape.duk_context ctx, int index) [static] :967
bool duktape::is_string(::duk_context* ctx, int index)
{
    return duk_is_string(ctx, index);
}

// internal static void new_(Fuse.Scripting.Duktape.duk_context ctx, int nargs) [static] :1078
void duktape::new_(::duk_context* ctx, int nargs)
{
    duk_new(ctx, nargs);
}

// internal static bool next(Fuse.Scripting.Duktape.duk_context ctx, int index, bool getValue) [static] :624
bool duktape::next(::duk_context* ctx, int index, bool getValue)
{
    return duk_next(ctx, index, getValue);
}

// internal static int pcall(Fuse.Scripting.Duktape.duk_context ctx, int nargs) [static] :639
int duktape::pcall(::duk_context* ctx, int nargs)
{
    return duk_pcall(ctx, nargs);
}

// internal static int pcall_method(Fuse.Scripting.Duktape.duk_context ctx, int nargs) [static] :649
int duktape::pcall_method(::duk_context* ctx, int nargs)
{
    return duk_pcall_method(ctx, nargs);
}

// internal static int pcompile(Fuse.Scripting.Duktape.duk_context ctx, uint flags) [static] :728
int duktape::pcompile(::duk_context* ctx, uint32_t flags)
{
    return duk_pcompile(ctx, flags);
}

// internal static void pop(Fuse.Scripting.Duktape.duk_context ctx) [static] :846
void duktape::pop(::duk_context* ctx)
{
    duk_pop(ctx);
}

// internal static void pop_2(Fuse.Scripting.Duktape.duk_context ctx) [static] :1045
void duktape::pop_2(::duk_context* ctx)
{
    duk_pop_2(ctx);
}

// internal static void push_boolean(Fuse.Scripting.Duktape.duk_context ctx, bool value) [static] :1030
void duktape::push_boolean(::duk_context* ctx, bool value)
{
    duk_push_boolean(ctx, value);
}

// internal static void push_external_buffer(Fuse.Scripting.Duktape.duk_context ctx) [static] :1083
void duktape::push_external_buffer(::duk_context* ctx)
{
    duk_push_external_buffer(ctx);
}

// internal static void push_external_finalizer(Fuse.Scripting.Duktape.duk_context ctx) [static] :1100
void duktape::push_external_finalizer(::duk_context* ctx)
{
    duk_push_c_function(ctx, duk_finalize_external, 1);
}

// internal static void push_global_stash(Fuse.Scripting.Duktape.duk_context ctx) [static] :1060
void duktape::push_global_stash(::duk_context* ctx)
{
    duk_push_global_stash(ctx);
}

// internal static int push_heapptr(Fuse.Scripting.Duktape.duk_context ctx, Uno.IntPtr ptr) [static] :990
int duktape::push_heapptr(::duk_context* ctx, void* ptr)
{
    return duk_push_heapptr(ctx, ptr);
}

// internal static void push_int(Fuse.Scripting.Duktape.duk_context ctx, int val) [static] :902
void duktape::push_int(::duk_context* ctx, int val)
{
    duk_push_int(ctx, val);
}

// internal static void push_null(Fuse.Scripting.Duktape.duk_context ctx) [static] :1000
void duktape::push_null(::duk_context* ctx)
{
    duk_push_null(ctx);
}

// internal static void push_number(Fuse.Scripting.Duktape.duk_context ctx, double val) [static] :861
void duktape::push_number(::duk_context* ctx, double val)
{
    duk_push_number(ctx, val);
}

// internal static void push_string(Fuse.Scripting.Duktape.duk_context ctx, string str) [static] :907
void duktape::push_string(::duk_context* ctx, uString* str)
{
    const char* cStr = uAllocCStr(str);
    duk_push_string(ctx, cStr);
    uFreeCStr(cStr);
}

// internal static bool put_prop_index(Fuse.Scripting.Duktape.duk_context ctx, int index, int arr_index) [static] :1040
bool duktape::put_prop_index(::duk_context* ctx, int index, int arr_index)
{
    return duk_put_prop_index(ctx, index, arr_index);
}

// internal static bool put_prop_string(Fuse.Scripting.Duktape.duk_context ctx, int obj_index, string key) [static] :866
bool duktape::put_prop_string(::duk_context* ctx, int obj_index, uString* key)
{
    const char* cKey = uAllocCStr(key);
    bool result = duk_put_prop_string(ctx, obj_index, cKey);
    uFreeCStr(cKey);
    return result;
}

// internal static string safe_to_string(Fuse.Scripting.Duktape.duk_context ctx, int index) [static] :1020
uString* duktape::safe_to_string(::duk_context* ctx, int index)
{
    return uString::Utf8(duk_safe_to_string(ctx, index));
}

// internal static void set_finalizer(Fuse.Scripting.Duktape.duk_context ctx, int index) [static] :1105
void duktape::set_finalizer(::duk_context* ctx, int index)
{
    duk_set_finalizer(ctx, index);
}
// }

// /usr/local/share/uno/Packages/Fuse.Scripting.Duktape/0.27.10/$.uno#2
// --------------------------------------------------------------------

// internal sealed extern class Function :404
// {
//  ~Function() :419
static void Function__Finalize_fn(Function* __this)
{
    ::g::Uno::Threading::ConcurrentQueue__Enqueue_fn(uPtr(uPtr(__this->_ctx)->_unstash), uCRef<int>(__this->_stashKey));
}

::g::Fuse::Scripting::Function_type* Function_typeof()
{
    static uSStrong< ::g::Fuse::Scripting::Function_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.ObjectSize = sizeof(Function);
    options.TypeSize = sizeof(::g::Fuse::Scripting::Function_type);
    type = (::g::Fuse::Scripting::Function_type*)uClassType::New("Fuse.Scripting.Duktape.Function", options);
    type->SetBase(::g::Fuse::Scripting::Function_typeof());
    type->fp_Finalize = (void(*)(uObject*))Function__Finalize_fn;
    type->fp_Call = (void(*)(::g::Fuse::Scripting::Function*, uArray*, uObject**))Function__Call_fn;
    type->fp_Construct = (void(*)(::g::Fuse::Scripting::Function*, uArray*, ::g::Fuse::Scripting::Object**))Function__Construct_fn;
    type->fp_Equals2 = (void(*)(::g::Fuse::Scripting::Function*, ::g::Fuse::Scripting::Function*, bool*))Function__Equals2_fn;
    type->fp_GetHashCode = (void(*)(uObject*, int*))Function__GetHashCode_fn;
    ::TYPES[0] = ::g::Fuse::Scripting::Duktape::Context_typeof();
    ::TYPES[13] = uObject_typeof()->Array();
    ::TYPES[18] = ::g::Fuse::Scripting::Object_typeof();
    ::TYPES[5] = ::g::Fuse::Scripting::Duktape::Object_typeof();
    ::TYPES[1] = ::g::Uno::IntPtr_typeof();
    type->SetFields(0,
        ::g::Fuse::Scripting::Duktape::Context_typeof(), offsetof(::g::Fuse::Scripting::Duktape::Function, _ctx), 0,
        ::g::Uno::IntPtr_typeof(), offsetof(::g::Fuse::Scripting::Duktape::Function, _handle), 0,
        ::g::Uno::Int_typeof(), offsetof(::g::Fuse::Scripting::Duktape::Function, _stashKey), 0);
    return type;
}

// internal Function(Fuse.Scripting.Duktape.Context ctx, Uno.IntPtr handle) :412
void Function__ctor_1_fn(Function* __this, ::g::Fuse::Scripting::Duktape::Context* ctx, void** handle)
{
    __this->ctor_1(ctx, *handle);
}

// public override sealed object Call(object[] args) :449
void Function__Call_fn(Function* __this, uArray* args, uObject** __retval)
{
    ::g::Fuse::Scripting::Duktape::duktape::push_heapptr(uPtr(__this->_ctx)->DukContext, __this->_handle);
    int argc = uPtr(args)->Length();

    for (int i = 0; i < argc; i++)
        uPtr(__this->_ctx)->Push(uPtr(args)->Strong<uObject*>(i));

    int result = ::g::Fuse::Scripting::Duktape::duktape::pcall(uPtr(__this->_ctx)->DukContext, argc);
    uPtr(__this->_ctx)->CheckError(result);
    uObject* returnValue = uPtr(__this->_ctx)->IndexToObject(-1);
    ::g::Fuse::Scripting::Duktape::duktape::pop(uPtr(__this->_ctx)->DukContext);
    return *__retval = returnValue, void();
}

// public override sealed Fuse.Scripting.Object Construct(object[] args) :435
void Function__Construct_fn(Function* __this, uArray* args, ::g::Fuse::Scripting::Object** __retval)
{
    ::g::Fuse::Scripting::Duktape::duktape::push_heapptr(uPtr(__this->_ctx)->DukContext, __this->_handle);
    int argc = uPtr(args)->Length();

    for (int i = 0; i < argc; i++)
        uPtr(__this->_ctx)->Push(uPtr(args)->Strong<uObject*>(i));

    ::g::Fuse::Scripting::Duktape::duktape::new_(uPtr(__this->_ctx)->DukContext, argc);
    uObject* returnValue = uPtr(__this->_ctx)->IndexToObject(-1);
    ::g::Fuse::Scripting::Duktape::duktape::pop(uPtr(__this->_ctx)->DukContext);
    return *__retval = uCast< ::g::Fuse::Scripting::Duktape::Object*>(returnValue, ::TYPES[5/*Fuse.Scripting.Duktape.Object*/]), void();
}

// public override sealed bool Equals(Fuse.Scripting.Function a) :424
void Function__Equals2_fn(Function* __this, ::g::Fuse::Scripting::Function* a, bool* __retval)
{
    Function* f = uAs<Function*>(a, Function_typeof());
    return *__retval = ((f != NULL) && (__this->_ctx == uPtr(f)->_ctx)) && ::g::Uno::IntPtr::op_Equality(__this->_handle, uPtr(f)->_handle), void();
}

// public override sealed int GetHashCode() :430
void Function__GetHashCode_fn(Function* __this, int* __retval)
{
    void* ind1;
    return *__retval = ::g::Uno::IntPtr::GetHashCode((ind1 = __this->_handle, ind1), ::TYPES[1/*Uno.IntPtr*/]), void();
}

// internal Uno.IntPtr get_Handle() :406
void Function__get_Handle_fn(Function* __this, void** __retval)
{
    *__retval = __this->Handle();
}

// internal Function New(Fuse.Scripting.Duktape.Context ctx, Uno.IntPtr handle) :412
void Function__New1_fn(::g::Fuse::Scripting::Duktape::Context* ctx, void** handle, Function** __retval)
{
    *__retval = Function::New1(ctx, *handle);
}

// internal Function(Fuse.Scripting.Duktape.Context ctx, Uno.IntPtr handle) [instance] :412
void Function::ctor_1(::g::Fuse::Scripting::Duktape::Context* ctx, void* handle)
{
    ctor_();
    _ctx = ctx;
    _handle = handle;
    _stashKey = uPtr(_ctx)->Stash(_handle);
}

// internal Uno.IntPtr get_Handle() [instance] :406
void* Function::Handle()
{
    return _handle;
}

// internal Function New(Fuse.Scripting.Duktape.Context ctx, Uno.IntPtr handle) [static] :412
Function* Function::New1(::g::Fuse::Scripting::Duktape::Context* ctx, void* handle)
{
    Function* obj2 = (Function*)uNew(Function_typeof());
    obj2->ctor_1(ctx, handle);
    return obj2;
}
// }

// /usr/local/share/uno/Packages/Fuse.Scripting.Duktape/0.27.10/$.uno#3
// --------------------------------------------------------------------

// internal sealed extern class Object :478
// {
//  ~Object() :493
static void Object__Finalize_fn(Object* __this)
{
    ::g::Uno::Threading::ConcurrentQueue__Enqueue_fn(uPtr(uPtr(__this->_ctx)->_unstash), uCRef<int>(__this->_stashKey));
}

::g::Fuse::Scripting::Object_type* Object_typeof()
{
    static uSStrong< ::g::Fuse::Scripting::Object_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.ObjectSize = sizeof(Object);
    options.TypeSize = sizeof(::g::Fuse::Scripting::Object_type);
    type = (::g::Fuse::Scripting::Object_type*)uClassType::New("Fuse.Scripting.Duktape.Object", options);
    type->SetBase(::g::Fuse::Scripting::Object_typeof());
    type->fp_Finalize = (void(*)(uObject*))Object__Finalize_fn;
    type->fp_CallMethod = (void(*)(::g::Fuse::Scripting::Object*, uString*, uArray*, uObject**))Object__CallMethod_fn;
    type->fp_ContainsKey = (void(*)(::g::Fuse::Scripting::Object*, uString*, bool*))Object__ContainsKey_fn;
    type->fp_Equals2 = (void(*)(::g::Fuse::Scripting::Object*, ::g::Fuse::Scripting::Object*, bool*))Object__Equals2_fn;
    type->fp_GetHashCode = (void(*)(uObject*, int*))Object__GetHashCode_fn;
    type->fp_InstanceOf = (void(*)(::g::Fuse::Scripting::Object*, ::g::Fuse::Scripting::Function*, bool*))Object__InstanceOf_fn;
    type->fp_get_Item = (void(*)(::g::Fuse::Scripting::Object*, uString*, uObject**))Object__get_Item_fn;
    type->fp_set_Item = (void(*)(::g::Fuse::Scripting::Object*, uString*, uObject*))Object__set_Item_fn;
    type->fp_get_Keys = (void(*)(::g::Fuse::Scripting::Object*, uArray**))Object__get_Keys_fn;
    ::TYPES[0] = ::g::Fuse::Scripting::Duktape::Context_typeof();
    ::TYPES[13] = uObject_typeof()->Array();
    ::TYPES[1] = ::g::Uno::IntPtr_typeof();
    ::TYPES[15] = ::g::Fuse::Scripting::Duktape::Function_typeof();
    ::TYPES[10] = ::g::Uno::Bool_typeof();
    ::TYPES[4] = uObject_typeof();
    ::TYPES[19] = ::g::Uno::Collections::List_typeof()->MakeType(::g::Uno::String_typeof());
    type->SetFields(0,
        ::g::Fuse::Scripting::Duktape::Context_typeof(), offsetof(::g::Fuse::Scripting::Duktape::Object, _ctx), 0,
        ::g::Uno::IntPtr_typeof(), offsetof(::g::Fuse::Scripting::Duktape::Object, _handle), 0,
        ::g::Uno::Int_typeof(), offsetof(::g::Fuse::Scripting::Duktape::Object, _stashKey), 0);
    return type;
}

// public Object(Fuse.Scripting.Duktape.Context ctx, Uno.IntPtr handle) :486
void Object__ctor_1_fn(Object* __this, ::g::Fuse::Scripting::Duktape::Context* ctx, void** handle)
{
    __this->ctor_1(ctx, *handle);
}

// public override sealed object CallMethod(string name, object[] args) :557
void Object__CallMethod_fn(Object* __this, uString* name, uArray* args, uObject** __retval)
{
    int index = ::g::Fuse::Scripting::Duktape::duktape::push_heapptr(uPtr(__this->_ctx)->DukContext, __this->_handle);
    ::g::Fuse::Scripting::Duktape::duktape::get_prop_string(uPtr(__this->_ctx)->DukContext, index, name);
    ::g::Fuse::Scripting::Duktape::duktape::push_heapptr(uPtr(__this->_ctx)->DukContext, __this->_handle);

    for (int i = 0; i < uPtr(args)->Length(); i++)
        uPtr(__this->_ctx)->Push(uPtr(args)->Strong<uObject*>(i));

    int result = ::g::Fuse::Scripting::Duktape::duktape::pcall_method(uPtr(__this->_ctx)->DukContext, args->Length());
    uPtr(__this->_ctx)->CheckError(result);
    uObject* returnVal = uPtr(__this->_ctx)->IndexToObject(-1);
    ::g::Fuse::Scripting::Duktape::duktape::pop_2(uPtr(__this->_ctx)->DukContext);
    return *__retval = returnVal, void();
}

// public override sealed bool ContainsKey(string key) :576
void Object__ContainsKey_fn(Object* __this, uString* key, bool* __retval)
{
    int index = ::g::Fuse::Scripting::Duktape::duktape::push_heapptr(uPtr(__this->_ctx)->DukContext, __this->_handle);
    bool result = ::g::Fuse::Scripting::Duktape::duktape::has_prop_string(uPtr(__this->_ctx)->DukContext, index, key);
    ::g::Fuse::Scripting::Duktape::duktape::pop(uPtr(__this->_ctx)->DukContext);
    return *__retval = result, void();
}

// public override sealed bool Equals(Fuse.Scripting.Object obj) :498
void Object__Equals2_fn(Object* __this, ::g::Fuse::Scripting::Object* obj, bool* __retval)
{
    Object* o = uAs<Object*>(obj, Object_typeof());
    return *__retval = ((o != NULL) && (__this->_ctx == uPtr(o)->_ctx)) && ::g::Uno::IntPtr::op_Equality(__this->_handle, uPtr(o)->_handle), void();
}

// public override sealed int GetHashCode() :504
void Object__GetHashCode_fn(Object* __this, int* __retval)
{
    void* ind1;
    return *__retval = ::g::Uno::IntPtr::GetHashCode((ind1 = __this->_handle, ind1), ::TYPES[1/*Uno.IntPtr*/]), void();
}

// internal Uno.IntPtr get_Handle() :480
void Object__get_Handle_fn(Object* __this, void** __retval)
{
    *__retval = __this->Handle();
}

// public override sealed bool InstanceOf(Fuse.Scripting.Function type) :509
void Object__InstanceOf_fn(Object* __this, ::g::Fuse::Scripting::Function* type, bool* __retval)
{
    ::g::Fuse::Scripting::Duktape::Function* func = uAs< ::g::Fuse::Scripting::Duktape::Function*>(type, ::TYPES[15/*Fuse.Scripting.Duktape.Function*/]);
    return *__retval = (func != NULL) && uUnbox<bool>(::TYPES[10/*bool*/], uPtr(uPtr(__this->_ctx)->_instanceOf)->Call(uArray::Init<uObject*>(::TYPES[13/*object[]*/], 2, __this, func))), void();
}

// public override sealed object get_Item(string key) :517
void Object__get_Item_fn(Object* __this, uString* key, uObject** __retval)
{
    int objIndex = ::g::Fuse::Scripting::Duktape::duktape::push_heapptr(uPtr(__this->_ctx)->DukContext, __this->_handle);
    ::g::Fuse::Scripting::Duktape::duktape::get_prop_string(uPtr(__this->_ctx)->DukContext, objIndex, key);
    uObject* res = uPtr(__this->_ctx)->IndexToObject(-1);
    ::g::Fuse::Scripting::Duktape::duktape::pop_2(uPtr(__this->_ctx)->DukContext);
    return *__retval = res, void();
}

// public override sealed void set_Item(string key, object value) :526
void Object__set_Item_fn(Object* __this, uString* key, uObject* value)
{
    int objIndex = ::g::Fuse::Scripting::Duktape::duktape::push_heapptr(uPtr(__this->_ctx)->DukContext, __this->_handle);
    uPtr(__this->_ctx)->Push(value);
    ::g::Fuse::Scripting::Duktape::duktape::put_prop_string(uPtr(__this->_ctx)->DukContext, objIndex, key);
    ::g::Fuse::Scripting::Duktape::duktape::pop(uPtr(__this->_ctx)->DukContext);
}

// public override sealed string[] get_Keys() :537
void Object__get_Keys_fn(Object* __this, uArray** __retval)
{
    ::g::Uno::Collections::List* keys = (::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::TYPES[19/*Uno.Collections.List<string>*/]);
    int index = ::g::Fuse::Scripting::Duktape::duktape::push_heapptr(uPtr(__this->_ctx)->DukContext, __this->_handle);
    ::g::Fuse::Scripting::Duktape::duktape::enum_own_properties(uPtr(__this->_ctx)->DukContext, index);

    while (::g::Fuse::Scripting::Duktape::duktape::next(uPtr(__this->_ctx)->DukContext, -1, false))
    {
        uString* key = ::g::Fuse::Scripting::Duktape::duktape::get_string(uPtr(__this->_ctx)->DukContext, -1);
        ::g::Uno::Collections::List__Add_fn(uPtr(keys), key);
        ::g::Fuse::Scripting::Duktape::duktape::pop(uPtr(__this->_ctx)->DukContext);
    }

    ::g::Fuse::Scripting::Duktape::duktape::pop_2(uPtr(__this->_ctx)->DukContext);
    return *__retval = (uArray*)keys->ToArray(), void();
}

// public Object New(Fuse.Scripting.Duktape.Context ctx, Uno.IntPtr handle) :486
void Object__New1_fn(::g::Fuse::Scripting::Duktape::Context* ctx, void** handle, Object** __retval)
{
    *__retval = Object::New1(ctx, *handle);
}

// public Object(Fuse.Scripting.Duktape.Context ctx, Uno.IntPtr handle) [instance] :486
void Object::ctor_1(::g::Fuse::Scripting::Duktape::Context* ctx, void* handle)
{
    ctor_();
    _ctx = ctx;
    _handle = handle;
    _stashKey = uPtr(_ctx)->Stash(_handle);
}

// internal Uno.IntPtr get_Handle() [instance] :480
void* Object::Handle()
{
    return _handle;
}

// public Object New(Fuse.Scripting.Duktape.Context ctx, Uno.IntPtr handle) [static] :486
Object* Object::New1(::g::Fuse::Scripting::Duktape::Context* ctx, void* handle)
{
    Object* obj2 = (Object*)uNew(Object_typeof());
    obj2->ctor_1(ctx, handle);
    return obj2;
}
// }

// /usr/local/share/uno/Packages/Fuse.Scripting.Duktape/0.27.10/$.uno#1
// --------------------------------------------------------------------

// internal sealed extern class RawCallback :82
// {
uType* RawCallback_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.ObjectSize = sizeof(RawCallback);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Scripting.Duktape.RawCallback", options);
    ::TYPES[16] = ::g::Fuse::Scripting::Duktape::Array_typeof();
    ::TYPES[13] = uObject_typeof()->Array();
    ::TYPES[11] = ::g::Fuse::Scripting::Callback_typeof();
    ::TYPES[0] = ::g::Fuse::Scripting::Duktape::Context_typeof();
    ::TYPES[20] = ::g::Fuse::Scripting::ScriptException_typeof();
    type->SetFields(0,
        ::g::Fuse::Scripting::Callback_typeof(), offsetof(::g::Fuse::Scripting::Duktape::RawCallback, _callback), 0,
        ::g::Fuse::Scripting::Duktape::Context_typeof(), offsetof(::g::Fuse::Scripting::Duktape::RawCallback, _context), 0);
    return type;
}

// public RawCallback(Fuse.Scripting.Duktape.Context context, Fuse.Scripting.Callback callback) :87
void RawCallback__ctor__fn(RawCallback* __this, ::g::Fuse::Scripting::Duktape::Context* context, uDelegate* callback)
{
    __this->ctor_(context, callback);
}

// public void Call(Uno.IntPtr argsPtr) :93
void RawCallback__Call_fn(RawCallback* __this, void** argsPtr)
{
    __this->Call(*argsPtr);
}

// public RawCallback New(Fuse.Scripting.Duktape.Context context, Fuse.Scripting.Callback callback) :87
void RawCallback__New1_fn(::g::Fuse::Scripting::Duktape::Context* context, uDelegate* callback, RawCallback** __retval)
{
    *__retval = RawCallback::New1(context, callback);
}

// public RawCallback(Fuse.Scripting.Duktape.Context context, Fuse.Scripting.Callback callback) [instance] :87
void RawCallback::ctor_(::g::Fuse::Scripting::Duktape::Context* context, uDelegate* callback)
{
    _context = context;
    _callback = callback;
}

// public void Call(Uno.IntPtr argsPtr) [instance] :93
void RawCallback::Call(void* argsPtr)
{
    try
    {
        ::g::Fuse::Scripting::Duktape::Array* jsArgs = ::g::Fuse::Scripting::Duktape::Array::New1(_context, argsPtr);
        int len = jsArgs->Length();
        uArray* args = uArray::New(::TYPES[13/*object[]*/], len);

        for (int i = 0; i < len; ++i)
            uPtr(args)->Strong<uObject*>(i) = uPtr(jsArgs)->Item(i);

        uPtr(_context)->Push(uPtr(_callback)->Invoke(1, args));
    }
    catch (const uThrowable& __t)
    {
        if (uIs(__t.Exception, ::TYPES[20/*Fuse.Scripting.ScriptException*/]))
        {
            ::g::Fuse::Scripting::ScriptException* e = (::g::Fuse::Scripting::ScriptException*)__t.Exception;
            ::g::Fuse::Scripting::Duktape::duktape::error(uPtr(_context)->DukContext, uPtr(e)->Message());
        }
        else throw __t;
    }
}

// public RawCallback New(Fuse.Scripting.Duktape.Context context, Fuse.Scripting.Callback callback) [static] :87
RawCallback* RawCallback::New1(::g::Fuse::Scripting::Duktape::Context* context, uDelegate* callback)
{
    RawCallback* obj1 = (RawCallback*)uNew(RawCallback_typeof());
    obj1->ctor_(context, callback);
    return obj1;
}
// }

}}}} // ::g::Fuse::Scripting::Duktape
