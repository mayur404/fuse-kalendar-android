// This file was generated based on '(multiple files)'.
// WARNING: Changes might be lost if you edit this file directly.

#include <Fuse.Controls.IWebView.h>
#include <Fuse.Controls.Panel.h>
#include <Fuse.Controls.ParentControl.h>
#include <Fuse.Diagnostics.h>
#include <Fuse.Elements.Element.h>
#include <Fuse.Input.Focus.h>
#include <Fuse.Internal.Blender-1.h>
#include <Fuse.Launcher.h>
#include <Fuse.Node.CancelInteractionsType.h>
#include <Fuse.Node.h>
#include <Fuse.NodeEvent-2.h>
#include <Fuse.NodeEventArgs.h>
#include <Fuse.NodeEventHandler.h>
#include <Fuse.NodeEventMode.h>
#include <Fuse.Scripting.IEventSerializer.h>
#include <Fuse.Triggers.Actions.BringIntoView.h>
#include <Fuse.Triggers.Actions.BringToFront.h>
#include <Fuse.Triggers.Actions.Call.h>
#include <Fuse.Triggers.Actions.Callback.h>
#include <Fuse.Triggers.Actions.CancelInteractions.h>
#include <Fuse.Triggers.Actions.Collapse.h>
#include <Fuse.Triggers.Actions.DebugAction.h>
#include <Fuse.Triggers.Actions.EvaluateJS.h>
#include <Fuse.Triggers.Actions.GiveFocus.h>
#include <Fuse.Triggers.Actions.Hide.h>
#include <Fuse.Triggers.Actions.ICollapse.h>
#include <Fuse.Triggers.Actions.IHide.h>
#include <Fuse.Triggers.Actions.IShow.h>
#include <Fuse.Triggers.Actions.ITaggedDebugProperty.h>
#include <Fuse.Triggers.Actions.JSEventArgs.h>
#include <Fuse.Triggers.Actions.JSEventHandler.h>
#include <Fuse.Triggers.Actions.LaunchEmail.h>
#include <Fuse.Triggers.Actions.LaunchMaps.h>
#include <Fuse.Triggers.Actions.LaunchUri.h>
#include <Fuse.Triggers.Actions.LoadHtml.h>
#include <Fuse.Triggers.Actions.LoadUrl.h>
#include <Fuse.Triggers.Actions.Pause.h>
#include <Fuse.Triggers.Actions.PlaybackAction.h>
#include <Fuse.Triggers.Actions.PlayTo.h>
#include <Fuse.Triggers.Actions.Pulse.h>
#include <Fuse.Triggers.Actions.PulseBackward.h>
#include <Fuse.Triggers.Actions.PulseForward.h>
#include <Fuse.Triggers.Actions.RaiseUserEvent.h>
#include <Fuse.Triggers.Actions.ReleaseFocus.h>
#include <Fuse.Triggers.Actions.Reload.h>
#include <Fuse.Triggers.Actions.Resume.h>
#include <Fuse.Triggers.Actions.SendToBack.h>
#include <Fuse.Triggers.Actions.Set-1.h>
#include <Fuse.Triggers.Actions.Show.h>
#include <Fuse.Triggers.Actions.Stop.h>
#include <Fuse.Triggers.Actions.StopLoading.h>
#include <Fuse.Triggers.Actions.TransitionLayout.h>
#include <Fuse.Triggers.Actions.TransitionState.h>
#include <Fuse.Triggers.Actions.TransitionStateType.h>
#include <Fuse.Triggers.Actions.TriggerAction.h>
#include <Fuse.Triggers.Actions.TriggerDirection.h>
#include <Fuse.Triggers.Actions.UserEventArg.h>
#include <Fuse.Triggers.Actions.WebViewNavAction.h>
#include <Fuse.Triggers.IPlayback.h>
#include <Fuse.Triggers.IPulseTrigger.h>
#include <Fuse.Triggers.LayoutTransition.h>
#include <Fuse.Triggers.LayoutTransitionedArgs.h>
#include <Fuse.Triggers.LayoutTransitionedHandler.h>
#include <Fuse.Triggers.StateGroup.h>
#include <Fuse.Triggers.Timeline.h>
#include <Fuse.UpdateManager.h>
#include <Fuse.UpdateStage.h>
#include <Fuse.UserEvent.h>
#include <Uno.Action.h>
#include <Uno.Action-1.h>
#include <Uno.ArgumentNullException.h>
#include <Uno.Bool.h>
#include <Uno.Collections.Dictionary-2.h>
#include <Uno.Collections.ICollection-1.h>
#include <Uno.Collections.IEnumerable-1.h>
#include <Uno.Collections.IEnumerator.h>
#include <Uno.Collections.IEnumerator-1.h>
#include <Uno.Collections.IList-1.h>
#include <Uno.Collections.List-1.Enumerator.h>
#include <Uno.Collections.List-1.h>
#include <Uno.Delegate.h>
#include <Uno.Double.h>
#include <Uno.Float.h>
#include <Uno.Float2.h>
#include <Uno.Float3.h>
#include <Uno.Float4x4.h>
#include <Uno.Int.h>
#include <Uno.Matrix.h>
#include <Uno.Net.Http.Uri.h>
#include <Uno.Object.h>
#include <Uno.String.h>
#include <Uno.UX.Expression-1.h>
#include <Uno.UX.Property-1.h>
static uString* STRINGS[6];
static uType* TYPES[25];

namespace g{
namespace Fuse{
namespace Triggers{
namespace Actions{

// /usr/local/share/uno/Packages/Fuse.Elements/0.27.10/Triggers/Actions/$.uno
// --------------------------------------------------------------------------

// public sealed class BringIntoView :9
// {
::g::Fuse::Triggers::Actions::TriggerAction_type* BringIntoView_typeof()
{
    static uSStrong< ::g::Fuse::Triggers::Actions::TriggerAction_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 7;
    options.ObjectSize = sizeof(BringIntoView);
    options.TypeSize = sizeof(::g::Fuse::Triggers::Actions::TriggerAction_type);
    type = (::g::Fuse::Triggers::Actions::TriggerAction_type*)uClassType::New("Fuse.Triggers.Actions.BringIntoView", options);
    type->SetBase(::g::Fuse::Triggers::Actions::TriggerAction_typeof());
    type->fp_Perform = (void(*)(::g::Fuse::Triggers::Actions::TriggerAction*, ::g::Fuse::Node*))BringIntoView__Perform_fn;
    ::TYPES[0] = ::g::Fuse::Elements::Element_typeof();
    type->SetFields(7);
    return type;
}

// protected override sealed void Perform(Fuse.Node target) :11
void BringIntoView__Perform_fn(BringIntoView* __this, ::g::Fuse::Node* target)
{
    ::g::Fuse::Elements::Element* elm = uAs< ::g::Fuse::Elements::Element*>(target, ::TYPES[0/*Fuse.Elements.Element*/]);

    if (elm != NULL)
        uPtr(elm)->BringIntoView();
}
// }

// /usr/local/share/uno/Packages/Fuse.Controls/0.27.10/Triggers/$.uno
// ------------------------------------------------------------------

// public sealed class BringToFront :10
// {
::g::Fuse::Triggers::Actions::TriggerAction_type* BringToFront_typeof()
{
    static uSStrong< ::g::Fuse::Triggers::Actions::TriggerAction_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 8;
    options.ObjectSize = sizeof(BringToFront);
    options.TypeSize = sizeof(::g::Fuse::Triggers::Actions::TriggerAction_type);
    type = (::g::Fuse::Triggers::Actions::TriggerAction_type*)uClassType::New("Fuse.Triggers.Actions.BringToFront", options);
    type->SetBase(::g::Fuse::Triggers::Actions::TriggerAction_typeof());
    type->fp_Perform = (void(*)(::g::Fuse::Triggers::Actions::TriggerAction*, ::g::Fuse::Node*))BringToFront__Perform_fn;
    ::TYPES[1] = ::g::Fuse::Controls::Panel_typeof();
    ::TYPES[2] = ::g::Fuse::Node_typeof();
    type->SetFields(7,
        ::g::Fuse::Node_typeof(), offsetof(::g::Fuse::Triggers::Actions::BringToFront, _Target), 0);
    return type;
}

// protected override sealed void Perform(Fuse.Node target) :14
void BringToFront__Perform_fn(BringToFront* __this, ::g::Fuse::Node* target)
{
    ::g::Fuse::Node* ind1 = __this->Target();
    ::g::Fuse::Node* elm = (ind1 != NULL) ? ind1 : target;

    if (elm != NULL)
    {
        ::g::Fuse::Controls::Panel* panel = uAs< ::g::Fuse::Controls::Panel*>(uPtr(elm)->Parent(), ::TYPES[1/*Fuse.Controls.Panel*/]);

        if (panel != NULL)
            uPtr(panel)->BringToFront(elm);
    }
}

// public generated Fuse.Node get_Target() :12
void BringToFront__get_Target_fn(BringToFront* __this, ::g::Fuse::Node** __retval)
{
    *__retval = __this->Target();
}

// public generated void set_Target(Fuse.Node value) :12
void BringToFront__set_Target_fn(BringToFront* __this, ::g::Fuse::Node* value)
{
    __this->Target(value);
}

// public generated Fuse.Node get_Target() [instance] :12
::g::Fuse::Node* BringToFront::Target()
{
    return _Target;
}

// public generated void set_Target(Fuse.Node value) [instance] :12
void BringToFront::Target(::g::Fuse::Node* value)
{
    _Target = value;
}
// }

// /usr/local/share/uno/Packages/Fuse.Launcher/0.27.10/$.uno#1
// -----------------------------------------------------------

// public sealed class Call :190
// {
::g::Fuse::Triggers::Actions::TriggerAction_type* Call_typeof()
{
    static uSStrong< ::g::Fuse::Triggers::Actions::TriggerAction_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 8;
    options.ObjectSize = sizeof(Call);
    options.TypeSize = sizeof(::g::Fuse::Triggers::Actions::TriggerAction_type);
    type = (::g::Fuse::Triggers::Actions::TriggerAction_type*)uClassType::New("Fuse.Triggers.Actions.Call", options);
    type->SetBase(::g::Fuse::Triggers::Actions::TriggerAction_typeof());
    type->fp_Perform = (void(*)(::g::Fuse::Triggers::Actions::TriggerAction*, ::g::Fuse::Node*))Call__Perform_fn;
    type->SetFields(7,
        ::g::Uno::String_typeof(), offsetof(::g::Fuse::Triggers::Actions::Call, _Number), 0);
    return type;
}

// public generated string get_Number() :192
void Call__get_Number_fn(Call* __this, uString** __retval)
{
    *__retval = __this->Number();
}

// public generated void set_Number(string value) :192
void Call__set_Number_fn(Call* __this, uString* value)
{
    __this->Number(value);
}

// protected override sealed void Perform(Fuse.Node target) :194
void Call__Perform_fn(Call* __this, ::g::Fuse::Node* target)
{
    ::g::Fuse::Launcher::LaunchCall(__this->Number());
}

// public generated string get_Number() [instance] :192
uString* Call::Number()
{
    return _Number;
}

// public generated void set_Number(string value) [instance] :192
void Call::Number(uString* value)
{
    _Number = value;
}
// }

// /usr/local/share/uno/Packages/Fuse.Triggers/0.27.10/Actions/$.uno
// -----------------------------------------------------------------

// public sealed class Callback :7
// {
::g::Fuse::Triggers::Actions::TriggerAction_type* Callback_typeof()
{
    static uSStrong< ::g::Fuse::Triggers::Actions::TriggerAction_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 9;
    options.ObjectSize = sizeof(Callback);
    options.TypeSize = sizeof(::g::Fuse::Triggers::Actions::TriggerAction_type);
    type = (::g::Fuse::Triggers::Actions::TriggerAction_type*)uClassType::New("Fuse.Triggers.Actions.Callback", options);
    type->SetBase(::g::Fuse::Triggers::Actions::TriggerAction_typeof());
    type->fp_ctor_ = (void*)Callback__New1_fn;
    type->fp_Perform = (void(*)(::g::Fuse::Triggers::Actions::TriggerAction*, ::g::Fuse::Node*))Callback__Perform_fn;
    ::TYPES[3] = ::g::Uno::Delegate_typeof();
    ::TYPES[4] = ::g::Uno::Action_typeof();
    ::TYPES[5] = ::g::Fuse::NodeEventHandler_typeof();
    ::TYPES[6] = uObject_typeof();
    type->SetFields(7,
        ::g::Uno::Action_typeof(), offsetof(::g::Fuse::Triggers::Actions::Callback, _Action), 0,
        ::g::Fuse::NodeEventHandler_typeof(), offsetof(::g::Fuse::Triggers::Actions::Callback, Handler1), 0);
    return type;
}

// public generated Callback() :7
void Callback__ctor_1_fn(Callback* __this)
{
    __this->ctor_1();
}

// public generated Uno.Action get_Action() :9
void Callback__get_Action_fn(Callback* __this, uDelegate** __retval)
{
    *__retval = __this->Action();
}

// public generated void set_Action(Uno.Action value) :9
void Callback__set_Action_fn(Callback* __this, uDelegate* value)
{
    __this->Action(value);
}

// public generated void add_Handler(Fuse.NodeEventHandler value) :11
void Callback__add_Handler_fn(Callback* __this, uDelegate* value)
{
    __this->add_Handler(value);
}

// public generated void remove_Handler(Fuse.NodeEventHandler value) :11
void Callback__remove_Handler_fn(Callback* __this, uDelegate* value)
{
    __this->remove_Handler(value);
}

// public generated Callback New() :7
void Callback__New1_fn(Callback** __retval)
{
    *__retval = Callback::New1();
}

// protected override sealed void Perform(Fuse.Node target) :13
void Callback__Perform_fn(Callback* __this, ::g::Fuse::Node* target)
{
    if (::g::Uno::Delegate::op_Inequality(__this->Action(), NULL))
        uPtr(__this->Action())->InvokeVoid();

    if (::g::Uno::Delegate::op_Inequality(__this->Handler1, NULL))
        uPtr(__this->Handler1)->Invoke(2, __this, (::g::Fuse::NodeEventArgs*)::g::Fuse::NodeEventArgs::New2(target));
}

// public generated Callback() [instance] :7
void Callback::ctor_1()
{
    ctor_();
}

// public generated Uno.Action get_Action() [instance] :9
uDelegate* Callback::Action()
{
    return _Action;
}

// public generated void set_Action(Uno.Action value) [instance] :9
void Callback::Action(uDelegate* value)
{
    _Action = value;
}

// public generated void add_Handler(Fuse.NodeEventHandler value) [instance] :11
void Callback::add_Handler(uDelegate* value)
{
    Handler1 = uCast<uDelegate*>(::g::Uno::Delegate::Combine(Handler1, value), ::TYPES[5/*Fuse.NodeEventHandler*/]);
}

// public generated void remove_Handler(Fuse.NodeEventHandler value) [instance] :11
void Callback::remove_Handler(uDelegate* value)
{
    Handler1 = uCast<uDelegate*>(::g::Uno::Delegate::Remove(Handler1, value), ::TYPES[5/*Fuse.NodeEventHandler*/]);
}

// public generated Callback New() [static] :7
Callback* Callback::New1()
{
    Callback* obj1 = (Callback*)uNew(Callback_typeof());
    obj1->ctor_1();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Triggers/0.27.10/Actions/$.uno#1
// -------------------------------------------------------------------

// public sealed class CancelInteractions :30
// {
::g::Fuse::Triggers::Actions::TriggerAction_type* CancelInteractions_typeof()
{
    static uSStrong< ::g::Fuse::Triggers::Actions::TriggerAction_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 8;
    options.ObjectSize = sizeof(CancelInteractions);
    options.TypeSize = sizeof(::g::Fuse::Triggers::Actions::TriggerAction_type);
    type = (::g::Fuse::Triggers::Actions::TriggerAction_type*)uClassType::New("Fuse.Triggers.Actions.CancelInteractions", options);
    type->SetBase(::g::Fuse::Triggers::Actions::TriggerAction_typeof());
    type->fp_Perform = (void(*)(::g::Fuse::Triggers::Actions::TriggerAction*, ::g::Fuse::Node*))CancelInteractions__Perform_fn;
    type->SetFields(7,
        ::g::Fuse::Node_typeof(), offsetof(::g::Fuse::Triggers::Actions::CancelInteractions, _Target), 0);
    return type;
}

// protected override sealed void Perform(Fuse.Node target) :34
void CancelInteractions__Perform_fn(CancelInteractions* __this, ::g::Fuse::Node* target)
{
    ::g::Fuse::Node* ind1 = __this->Target();
    ::g::Fuse::Node* t = (ind1 != NULL) ? ind1 : target;

    if (t != NULL)
        uPtr(t)->CancelInteractions(1);
}

// public generated Fuse.Node get_Target() :32
void CancelInteractions__get_Target_fn(CancelInteractions* __this, ::g::Fuse::Node** __retval)
{
    *__retval = __this->Target();
}

// public generated void set_Target(Fuse.Node value) :32
void CancelInteractions__set_Target_fn(CancelInteractions* __this, ::g::Fuse::Node* value)
{
    __this->Target(value);
}

// public generated Fuse.Node get_Target() [instance] :32
::g::Fuse::Node* CancelInteractions::Target()
{
    return _Target;
}

// public generated void set_Target(Fuse.Node value) [instance] :32
void CancelInteractions::Target(::g::Fuse::Node* value)
{
    _Target = value;
}
// }

// /usr/local/share/uno/Packages/Fuse.Triggers/0.27.10/Actions/$.uno#10
// --------------------------------------------------------------------

// public sealed class Collapse :538
// {
::g::Fuse::Triggers::Actions::TriggerAction_type* Collapse_typeof()
{
    static uSStrong< ::g::Fuse::Triggers::Actions::TriggerAction_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 7;
    options.ObjectSize = sizeof(Collapse);
    options.TypeSize = sizeof(::g::Fuse::Triggers::Actions::TriggerAction_type);
    type = (::g::Fuse::Triggers::Actions::TriggerAction_type*)uClassType::New("Fuse.Triggers.Actions.Collapse", options);
    type->SetBase(::g::Fuse::Triggers::Actions::TriggerAction_typeof());
    type->fp_Perform = (void(*)(::g::Fuse::Triggers::Actions::TriggerAction*, ::g::Fuse::Node*))Collapse__Perform_fn;
    ::TYPES[7] = ::g::Fuse::Triggers::Actions::ICollapse_typeof();
    type->SetFields(7);
    return type;
}

// protected override sealed void Perform(Fuse.Node target) :540
void Collapse__Perform_fn(Collapse* __this, ::g::Fuse::Node* target)
{
    if (uIs(target, ::TYPES[7/*Fuse.Triggers.Actions.ICollapse*/]))
        ::g::Fuse::Triggers::Actions::ICollapse::Collapse(uInterface(uPtr((uObject*)target), ::TYPES[7/*Fuse.Triggers.Actions.ICollapse*/]));
}
// }

// /usr/local/share/uno/Packages/Fuse.Triggers/0.27.10/Actions/$.uno#2
// -------------------------------------------------------------------

// public sealed class DebugAction :54
// {
::g::Fuse::Triggers::Actions::TriggerAction_type* DebugAction_typeof()
{
    static uSStrong< ::g::Fuse::Triggers::Actions::TriggerAction_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 9;
    options.ObjectSize = sizeof(DebugAction);
    options.TypeSize = sizeof(::g::Fuse::Triggers::Actions::TriggerAction_type);
    type = (::g::Fuse::Triggers::Actions::TriggerAction_type*)uClassType::New("Fuse.Triggers.Actions.DebugAction", options);
    type->SetBase(::g::Fuse::Triggers::Actions::TriggerAction_typeof());
    type->fp_Perform = (void(*)(::g::Fuse::Triggers::Actions::TriggerAction*, ::g::Fuse::Node*))DebugAction__Perform_fn;
    ::TYPES[8] = ::g::Uno::Collections::List__Enumerator_typeof()->MakeType(::g::Fuse::Triggers::Actions::ITaggedDebugProperty_typeof());
    type->SetFields(7,
        ::g::Uno::Collections::List_typeof()->MakeType(::g::Fuse::Triggers::Actions::ITaggedDebugProperty_typeof()), offsetof(::g::Fuse::Triggers::Actions::DebugAction, _props), 0,
        ::g::Uno::String_typeof(), offsetof(::g::Fuse::Triggers::Actions::DebugAction, _Message), 0);
    return type;
}

// public generated string get_Message() :56
void DebugAction__get_Message_fn(DebugAction* __this, uString** __retval)
{
    *__retval = __this->Message();
}

// public generated void set_Message(string value) :56
void DebugAction__set_Message_fn(DebugAction* __this, uString* value)
{
    __this->Message(value);
}

// protected override sealed void Perform(Fuse.Node target) :70
void DebugAction__Perform_fn(DebugAction* __this, ::g::Fuse::Node* target)
{
    ::g::Uno::Collections::List__Enumerator<uStrong<uObject*> > ret3;

    if (::g::Uno::String::op_Inequality(__this->Message(), NULL))
        ;

    if (__this->_props != NULL)

        for (::g::Uno::Collections::List__Enumerator<uStrong<uObject*> > enum1 = (::g::Uno::Collections::List__GetEnumerator_fn(uPtr(__this->_props), &ret3), ret3); enum1.MoveNext(::TYPES[8/*Uno.Collections.List<Fuse.Triggers.Actions.ITaggedDebugProperty>.Enumerator*/]); )
        {
            uObject* prop = enum1.Current(::TYPES[8/*Uno.Collections.List<Fuse.Triggers.Actions.ITaggedDebugProperty>.Enumerator*/]);
        }
}

// public generated string get_Message() [instance] :56
uString* DebugAction::Message()
{
    return _Message;
}

// public generated void set_Message(string value) [instance] :56
void DebugAction::Message(uString* value)
{
    _Message = value;
}
// }

// /usr/local/share/uno/Packages/Fuse.Controls/0.27.10/WebView/$.uno
// -----------------------------------------------------------------

// public sealed class EvaluateJS :27
// {
::g::Fuse::Triggers::Actions::TriggerAction_type* EvaluateJS_typeof()
{
    static uSStrong< ::g::Fuse::Triggers::Actions::TriggerAction_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 11;
    options.ObjectSize = sizeof(EvaluateJS);
    options.TypeSize = sizeof(::g::Fuse::Triggers::Actions::TriggerAction_type);
    type = (::g::Fuse::Triggers::Actions::TriggerAction_type*)uClassType::New("Fuse.Triggers.Actions.EvaluateJS", options);
    type->SetBase(::g::Fuse::Triggers::Actions::TriggerAction_typeof());
    type->fp_Perform = (void(*)(::g::Fuse::Triggers::Actions::TriggerAction*, ::g::Fuse::Node*))EvaluateJS__Perform_fn;
    ::STRINGS[0] = uString::Const("");
    ::TYPES[9] = ::g::Uno::Action1_typeof()->MakeType(::g::Uno::String_typeof());
    ::TYPES[10] = ::g::Fuse::Controls::IWebView_typeof();
    ::TYPES[3] = ::g::Uno::Delegate_typeof();
    ::TYPES[11] = ::g::Fuse::Triggers::Actions::JSEventHandler_typeof();
    ::TYPES[6] = uObject_typeof();
    type->SetFields(7,
        ::g::Uno::String_typeof(), offsetof(::g::Fuse::Triggers::Actions::EvaluateJS, _processedSource), 0,
        ::g::Uno::String_typeof(), offsetof(::g::Fuse::Triggers::Actions::EvaluateJS, _rawSource), 0,
        ::g::Fuse::Controls::IWebView_typeof(), offsetof(::g::Fuse::Triggers::Actions::EvaluateJS, _target), 0,
        ::g::Fuse::Triggers::Actions::JSEventHandler_typeof(), offsetof(::g::Fuse::Triggers::Actions::EvaluateJS, Handler1), 0);
    return type;
}

// private void Execute() :71
void EvaluateJS__Execute_fn(EvaluateJS* __this)
{
    __this->Execute();
}

// public generated void add_Handler(Fuse.Triggers.Actions.JSEventHandler value) :33
void EvaluateJS__add_Handler_fn(EvaluateJS* __this, uDelegate* value)
{
    __this->add_Handler(value);
}

// public generated void remove_Handler(Fuse.Triggers.Actions.JSEventHandler value) :33
void EvaluateJS__remove_Handler_fn(EvaluateJS* __this, uDelegate* value)
{
    __this->remove_Handler(value);
}

// protected override sealed void Perform(Fuse.Node target) :58
void EvaluateJS__Perform_fn(EvaluateJS* __this, ::g::Fuse::Node* target)
{
    if ((__this->_target == NULL) && uIs(target, ::TYPES[10/*Fuse.Controls.IWebView*/]))
        __this->_target = uAs<uObject*>(target, ::TYPES[10/*Fuse.Controls.IWebView*/]);

    if ((__this->_target != NULL) && ::g::Uno::String::op_Inequality(__this->_rawSource, ::STRINGS[0/*""*/]))
        __this->Execute();
}

// private void ResultHandler(string result) :76
void EvaluateJS__ResultHandler_fn(EvaluateJS* __this, uString* result)
{
    __this->ResultHandler(result);
}

// public Fuse.Controls.IWebView get_WebView() :36
void EvaluateJS__get_WebView_fn(EvaluateJS* __this, uObject** __retval)
{
    *__retval = __this->WebView();
}

// public void set_WebView(Fuse.Controls.IWebView value) :37
void EvaluateJS__set_WebView_fn(EvaluateJS* __this, uObject* value)
{
    __this->WebView(value);
}

// private void Execute() [instance] :71
void EvaluateJS::Execute()
{
    ::g::Fuse::Controls::IWebView::Eval1(uInterface(uPtr(WebView()), ::TYPES[10/*Fuse.Controls.IWebView*/]), _processedSource, uDelegate::New(::TYPES[9/*Uno.Action<string>*/], (void*)EvaluateJS__ResultHandler_fn, this));
}

// public generated void add_Handler(Fuse.Triggers.Actions.JSEventHandler value) [instance] :33
void EvaluateJS::add_Handler(uDelegate* value)
{
    Handler1 = uCast<uDelegate*>(::g::Uno::Delegate::Combine(Handler1, value), ::TYPES[11/*Fuse.Triggers.Actions.JSEventHandler*/]);
}

// public generated void remove_Handler(Fuse.Triggers.Actions.JSEventHandler value) [instance] :33
void EvaluateJS::remove_Handler(uDelegate* value)
{
    Handler1 = uCast<uDelegate*>(::g::Uno::Delegate::Remove(Handler1, value), ::TYPES[11/*Fuse.Triggers.Actions.JSEventHandler*/]);
}

// private void ResultHandler(string result) [instance] :76
void EvaluateJS::ResultHandler(uString* result)
{
    if (::g::Uno::Delegate::op_Inequality(Handler1, NULL))
        uPtr(Handler1)->Invoke(2, this, (::g::Fuse::Triggers::Actions::JSEventArgs*)::g::Fuse::Triggers::Actions::JSEventArgs::New2(result));
}

// public Fuse.Controls.IWebView get_WebView() [instance] :36
uObject* EvaluateJS::WebView()
{
    return _target;
}

// public void set_WebView(Fuse.Controls.IWebView value) [instance] :37
void EvaluateJS::WebView(uObject* value)
{
    _target = value;
}
// }

// /usr/local/share/uno/Packages/Fuse.Triggers/0.27.10/Actions/$.uno#4
// -------------------------------------------------------------------

// public sealed class GiveFocus :166
// {
// static GiveFocus() :166
static void GiveFocus__cctor__fn(uType* __type)
{
    GiveFocus::Singleton_ = GiveFocus::New1();
}

::g::Fuse::Triggers::Actions::TriggerAction_type* GiveFocus_typeof()
{
    static uSStrong< ::g::Fuse::Triggers::Actions::TriggerAction_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 9;
    options.ObjectSize = sizeof(GiveFocus);
    options.TypeSize = sizeof(::g::Fuse::Triggers::Actions::TriggerAction_type);
    type = (::g::Fuse::Triggers::Actions::TriggerAction_type*)uClassType::New("Fuse.Triggers.Actions.GiveFocus", options);
    type->SetBase(::g::Fuse::Triggers::Actions::TriggerAction_typeof());
    type->fp_ctor_ = (void*)GiveFocus__New1_fn;
    type->fp_cctor_ = GiveFocus__cctor__fn;
    type->fp_Perform = (void(*)(::g::Fuse::Triggers::Actions::TriggerAction*, ::g::Fuse::Node*))GiveFocus__Perform_fn;
    ::TYPES[12] = ::g::Fuse::Triggers::Actions::TriggerAction_typeof();
    type->SetFields(7,
        ::g::Fuse::Node_typeof(), offsetof(::g::Fuse::Triggers::Actions::GiveFocus, _Target), 0,
        ::g::Fuse::Triggers::Actions::TriggerAction_typeof(), (uintptr_t)&::g::Fuse::Triggers::Actions::GiveFocus::Singleton_, uFieldFlagsStatic);
    return type;
}

// public generated GiveFocus() :166
void GiveFocus__ctor_1_fn(GiveFocus* __this)
{
    __this->ctor_1();
}

// public generated GiveFocus New() :166
void GiveFocus__New1_fn(GiveFocus** __retval)
{
    *__retval = GiveFocus::New1();
}

// protected override sealed void Perform(Fuse.Node target) :170
void GiveFocus__Perform_fn(GiveFocus* __this, ::g::Fuse::Node* target)
{
    ::g::Fuse::Node* ind1;
    ::g::Fuse::Input::Focus::GiveTo((ind1 = __this->Target(), (ind1 != NULL) ? ind1 : target));
}

// public generated Fuse.Node get_Target() :168
void GiveFocus__get_Target_fn(GiveFocus* __this, ::g::Fuse::Node** __retval)
{
    *__retval = __this->Target();
}

// public generated void set_Target(Fuse.Node value) :168
void GiveFocus__set_Target_fn(GiveFocus* __this, ::g::Fuse::Node* value)
{
    __this->Target(value);
}

uSStrong< ::g::Fuse::Triggers::Actions::TriggerAction*> GiveFocus::Singleton_;

// public generated GiveFocus() [instance] :166
void GiveFocus::ctor_1()
{
    ctor_();
}

// public generated Fuse.Node get_Target() [instance] :168
::g::Fuse::Node* GiveFocus::Target()
{
    return _Target;
}

// public generated void set_Target(Fuse.Node value) [instance] :168
void GiveFocus::Target(::g::Fuse::Node* value)
{
    _Target = value;
}

// public generated GiveFocus New() [static] :166
GiveFocus* GiveFocus::New1()
{
    GiveFocus* obj2 = (GiveFocus*)uNew(GiveFocus_typeof());
    obj2->ctor_1();
    return obj2;
}
// }

// /usr/local/share/uno/Packages/Fuse.Triggers/0.27.10/Actions/$.uno#10
// --------------------------------------------------------------------

// public sealed class Hide :525
// {
::g::Fuse::Triggers::Actions::TriggerAction_type* Hide_typeof()
{
    static uSStrong< ::g::Fuse::Triggers::Actions::TriggerAction_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 7;
    options.ObjectSize = sizeof(Hide);
    options.TypeSize = sizeof(::g::Fuse::Triggers::Actions::TriggerAction_type);
    type = (::g::Fuse::Triggers::Actions::TriggerAction_type*)uClassType::New("Fuse.Triggers.Actions.Hide", options);
    type->SetBase(::g::Fuse::Triggers::Actions::TriggerAction_typeof());
    type->fp_Perform = (void(*)(::g::Fuse::Triggers::Actions::TriggerAction*, ::g::Fuse::Node*))Hide__Perform_fn;
    ::TYPES[13] = ::g::Fuse::Triggers::Actions::IHide_typeof();
    type->SetFields(7);
    return type;
}

// protected override sealed void Perform(Fuse.Node target) :527
void Hide__Perform_fn(Hide* __this, ::g::Fuse::Node* target)
{
    if (uIs(target, ::TYPES[13/*Fuse.Triggers.Actions.IHide*/]))
        ::g::Fuse::Triggers::Actions::IHide::Hide(uInterface(uPtr((uObject*)target), ::TYPES[13/*Fuse.Triggers.Actions.IHide*/]));
}
// }

// /usr/local/share/uno/Packages/Fuse.Triggers/0.27.10/Actions/$.uno#10
// --------------------------------------------------------------------

// public abstract interface ICollapse :533
// {
uInterfaceType* ICollapse_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Fuse.Triggers.Actions.ICollapse", 0, 0);
    return type;
}
// }

// /usr/local/share/uno/Packages/Fuse.Triggers/0.27.10/Actions/$.uno#10
// --------------------------------------------------------------------

// public abstract interface IHide :520
// {
uInterfaceType* IHide_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Fuse.Triggers.Actions.IHide", 0, 0);
    return type;
}
// }

// /usr/local/share/uno/Packages/Fuse.Triggers/0.27.10/Actions/$.uno#10
// --------------------------------------------------------------------

// public abstract interface IShow :507
// {
uInterfaceType* IShow_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Fuse.Triggers.Actions.IShow", 0, 0);
    return type;
}
// }

// /usr/local/share/uno/Packages/Fuse.Triggers/0.27.10/Actions/$.uno#3
// -------------------------------------------------------------------

// public abstract interface ITaggedDebugProperty :92
// {
uInterfaceType* ITaggedDebugProperty_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Fuse.Triggers.Actions.ITaggedDebugProperty", 0, 0);
    return type;
}
// }

// /usr/local/share/uno/Packages/Fuse.Controls/0.27.10/WebView/$.uno
// -----------------------------------------------------------------

// public sealed class JSEventArgs :11
// {
JSEventArgs_type* JSEventArgs_typeof()
{
    static uSStrong<JSEventArgs_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(JSEventArgs);
    options.TypeSize = sizeof(JSEventArgs_type);
    type = (JSEventArgs_type*)uClassType::New("Fuse.Triggers.Actions.JSEventArgs", options);
    type->SetBase(::g::Uno::EventArgs_typeof());
    type->interface0.fp_Serialize = (void(*)(uObject*, uObject*))JSEventArgs__FuseScriptingIScriptEventSerialize_fn;
    ::STRINGS[1] = uString::Const("json");
    type->SetInterfaces(
        ::g::Fuse::Scripting::IScriptEvent_typeof(), offsetof(JSEventArgs_type, interface0));
    type->SetFields(0,
        ::g::Uno::String_typeof(), offsetof(::g::Fuse::Triggers::Actions::JSEventArgs, ResultJson), 0);
    return type;
}

// public JSEventArgs(string resultJson) :14
void JSEventArgs__ctor_1_fn(JSEventArgs* __this, uString* resultJson)
{
    __this->ctor_1(resultJson);
}

// private void Fuse.Scripting.IScriptEvent.Serialize(Fuse.Scripting.IEventSerializer s) :19
void JSEventArgs__FuseScriptingIScriptEventSerialize_fn(JSEventArgs* __this, uObject* s)
{
    ::g::Fuse::Scripting::IEventSerializer::AddString(uInterface(uPtr(s), ::g::Fuse::Scripting::IEventSerializer_typeof()), ::STRINGS[1/*"json"*/], __this->ResultJson);
}

// public JSEventArgs New(string resultJson) :14
void JSEventArgs__New2_fn(uString* resultJson, JSEventArgs** __retval)
{
    *__retval = JSEventArgs::New2(resultJson);
}

// public JSEventArgs(string resultJson) [instance] :14
void JSEventArgs::ctor_1(uString* resultJson)
{
    ctor_();
    ResultJson = resultJson;
}

// public JSEventArgs New(string resultJson) [static] :14
JSEventArgs* JSEventArgs::New2(uString* resultJson)
{
    JSEventArgs* obj1 = (JSEventArgs*)uNew(JSEventArgs_typeof());
    obj1->ctor_1(resultJson);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Controls/0.27.10/WebView/$.uno
// -----------------------------------------------------------------

// public delegate void JSEventHandler(object sender, Fuse.Triggers.Actions.JSEventArgs args) :25
uDelegateType* JSEventHandler_typeof()
{
    static uSStrong<uDelegateType*> type;
    if (type != NULL) return type;

    type = uDelegateType::New("Fuse.Triggers.Actions.JSEventHandler", 2, 0);
    type->SetSignature(uVoid_typeof(),
        uObject_typeof(),
        ::g::Fuse::Triggers::Actions::JSEventArgs_typeof());
    return type;
}

// /usr/local/share/uno/Packages/Fuse.Launcher/0.27.10/$.uno#1
// -----------------------------------------------------------

// public sealed class LaunchEmail :224
// {
::g::Fuse::Triggers::Actions::TriggerAction_type* LaunchEmail_typeof()
{
    static uSStrong< ::g::Fuse::Triggers::Actions::TriggerAction_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 12;
    options.ObjectSize = sizeof(LaunchEmail);
    options.TypeSize = sizeof(::g::Fuse::Triggers::Actions::TriggerAction_type);
    type = (::g::Fuse::Triggers::Actions::TriggerAction_type*)uClassType::New("Fuse.Triggers.Actions.LaunchEmail", options);
    type->SetBase(::g::Fuse::Triggers::Actions::TriggerAction_typeof());
    type->fp_Perform = (void(*)(::g::Fuse::Triggers::Actions::TriggerAction*, ::g::Fuse::Node*))LaunchEmail__Perform_fn;
    type->SetFields(7,
        ::g::Uno::String_typeof(), offsetof(::g::Fuse::Triggers::Actions::LaunchEmail, _BlindCarbonCopy), 0,
        ::g::Uno::String_typeof(), offsetof(::g::Fuse::Triggers::Actions::LaunchEmail, _CarbonCopy), 0,
        ::g::Uno::String_typeof(), offsetof(::g::Fuse::Triggers::Actions::LaunchEmail, _Message), 0,
        ::g::Uno::String_typeof(), offsetof(::g::Fuse::Triggers::Actions::LaunchEmail, _Subject), 0,
        ::g::Uno::String_typeof(), offsetof(::g::Fuse::Triggers::Actions::LaunchEmail, _To), 0);
    return type;
}

// public generated string get_BlindCarbonCopy() :228
void LaunchEmail__get_BlindCarbonCopy_fn(LaunchEmail* __this, uString** __retval)
{
    *__retval = __this->BlindCarbonCopy();
}

// public generated void set_BlindCarbonCopy(string value) :228
void LaunchEmail__set_BlindCarbonCopy_fn(LaunchEmail* __this, uString* value)
{
    __this->BlindCarbonCopy(value);
}

// public generated string get_CarbonCopy() :227
void LaunchEmail__get_CarbonCopy_fn(LaunchEmail* __this, uString** __retval)
{
    *__retval = __this->CarbonCopy();
}

// public generated void set_CarbonCopy(string value) :227
void LaunchEmail__set_CarbonCopy_fn(LaunchEmail* __this, uString* value)
{
    __this->CarbonCopy(value);
}

// public generated string get_Message() :230
void LaunchEmail__get_Message_fn(LaunchEmail* __this, uString** __retval)
{
    *__retval = __this->Message();
}

// public generated void set_Message(string value) :230
void LaunchEmail__set_Message_fn(LaunchEmail* __this, uString* value)
{
    __this->Message(value);
}

// protected override sealed void Perform(Fuse.Node target) :232
void LaunchEmail__Perform_fn(LaunchEmail* __this, ::g::Fuse::Node* target)
{
    ::g::Fuse::Launcher::LaunchEmail(__this->To(), __this->CarbonCopy(), __this->BlindCarbonCopy(), __this->Subject(), __this->Message());
}

// public generated string get_Subject() :229
void LaunchEmail__get_Subject_fn(LaunchEmail* __this, uString** __retval)
{
    *__retval = __this->Subject();
}

// public generated void set_Subject(string value) :229
void LaunchEmail__set_Subject_fn(LaunchEmail* __this, uString* value)
{
    __this->Subject(value);
}

// public generated string get_To() :226
void LaunchEmail__get_To_fn(LaunchEmail* __this, uString** __retval)
{
    *__retval = __this->To();
}

// public generated void set_To(string value) :226
void LaunchEmail__set_To_fn(LaunchEmail* __this, uString* value)
{
    __this->To(value);
}

// public generated string get_BlindCarbonCopy() [instance] :228
uString* LaunchEmail::BlindCarbonCopy()
{
    return _BlindCarbonCopy;
}

// public generated void set_BlindCarbonCopy(string value) [instance] :228
void LaunchEmail::BlindCarbonCopy(uString* value)
{
    _BlindCarbonCopy = value;
}

// public generated string get_CarbonCopy() [instance] :227
uString* LaunchEmail::CarbonCopy()
{
    return _CarbonCopy;
}

// public generated void set_CarbonCopy(string value) [instance] :227
void LaunchEmail::CarbonCopy(uString* value)
{
    _CarbonCopy = value;
}

// public generated string get_Message() [instance] :230
uString* LaunchEmail::Message()
{
    return _Message;
}

// public generated void set_Message(string value) [instance] :230
void LaunchEmail::Message(uString* value)
{
    _Message = value;
}

// public generated string get_Subject() [instance] :229
uString* LaunchEmail::Subject()
{
    return _Subject;
}

// public generated void set_Subject(string value) [instance] :229
void LaunchEmail::Subject(uString* value)
{
    _Subject = value;
}

// public generated string get_To() [instance] :226
uString* LaunchEmail::To()
{
    return _To;
}

// public generated void set_To(string value) [instance] :226
void LaunchEmail::To(uString* value)
{
    _To = value;
}
// }

// /usr/local/share/uno/Packages/Fuse.Launcher/0.27.10/$.uno#1
// -----------------------------------------------------------

// public sealed class LaunchMaps :200
// {
::g::Fuse::Triggers::Actions::TriggerAction_type* LaunchMaps_typeof()
{
    static uSStrong< ::g::Fuse::Triggers::Actions::TriggerAction_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 9;
    options.ObjectSize = sizeof(LaunchMaps);
    options.TypeSize = sizeof(::g::Fuse::Triggers::Actions::TriggerAction_type);
    type = (::g::Fuse::Triggers::Actions::TriggerAction_type*)uClassType::New("Fuse.Triggers.Actions.LaunchMaps", options);
    type->SetBase(::g::Fuse::Triggers::Actions::TriggerAction_typeof());
    type->fp_Perform = (void(*)(::g::Fuse::Triggers::Actions::TriggerAction*, ::g::Fuse::Node*))LaunchMaps__Perform_fn;
    type->SetFields(7,
        ::g::Uno::String_typeof(), offsetof(::g::Fuse::Triggers::Actions::LaunchMaps, _Latitude), 0,
        ::g::Uno::String_typeof(), offsetof(::g::Fuse::Triggers::Actions::LaunchMaps, _Longitude), 0);
    return type;
}

// public generated string get_Latitude() :202
void LaunchMaps__get_Latitude_fn(LaunchMaps* __this, uString** __retval)
{
    *__retval = __this->Latitude();
}

// public generated void set_Latitude(string value) :202
void LaunchMaps__set_Latitude_fn(LaunchMaps* __this, uString* value)
{
    __this->Latitude(value);
}

// public generated string get_Longitude() :203
void LaunchMaps__get_Longitude_fn(LaunchMaps* __this, uString** __retval)
{
    *__retval = __this->Longitude();
}

// public generated void set_Longitude(string value) :203
void LaunchMaps__set_Longitude_fn(LaunchMaps* __this, uString* value)
{
    __this->Longitude(value);
}

// protected override sealed void Perform(Fuse.Node target) :205
void LaunchMaps__Perform_fn(LaunchMaps* __this, ::g::Fuse::Node* target)
{
    double lat = 0.0;
    double lon = 0.0;

    if (::g::Uno::Double::TryParse(__this->Latitude(), &lat) && ::g::Uno::Double::TryParse(__this->Longitude(), &lon))
        ::g::Fuse::Launcher::LaunchMaps(lat, lon);
}

// public generated string get_Latitude() [instance] :202
uString* LaunchMaps::Latitude()
{
    return _Latitude;
}

// public generated void set_Latitude(string value) [instance] :202
void LaunchMaps::Latitude(uString* value)
{
    _Latitude = value;
}

// public generated string get_Longitude() [instance] :203
uString* LaunchMaps::Longitude()
{
    return _Longitude;
}

// public generated void set_Longitude(string value) [instance] :203
void LaunchMaps::Longitude(uString* value)
{
    _Longitude = value;
}
// }

// /usr/local/share/uno/Packages/Fuse.Launcher/0.27.10/$.uno#1
// -----------------------------------------------------------

// public sealed class LaunchUri :214
// {
::g::Fuse::Triggers::Actions::TriggerAction_type* LaunchUri_typeof()
{
    static uSStrong< ::g::Fuse::Triggers::Actions::TriggerAction_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 8;
    options.ObjectSize = sizeof(LaunchUri);
    options.TypeSize = sizeof(::g::Fuse::Triggers::Actions::TriggerAction_type);
    type = (::g::Fuse::Triggers::Actions::TriggerAction_type*)uClassType::New("Fuse.Triggers.Actions.LaunchUri", options);
    type->SetBase(::g::Fuse::Triggers::Actions::TriggerAction_typeof());
    type->fp_Perform = (void(*)(::g::Fuse::Triggers::Actions::TriggerAction*, ::g::Fuse::Node*))LaunchUri__Perform_fn;
    type->SetFields(7,
        ::g::Uno::String_typeof(), offsetof(::g::Fuse::Triggers::Actions::LaunchUri, _Uri), 0);
    return type;
}

// protected override sealed void Perform(Fuse.Node target) :218
void LaunchUri__Perform_fn(LaunchUri* __this, ::g::Fuse::Node* target)
{
    ::g::Fuse::Launcher::LaunchUri(::g::Uno::Net::Http::Uri::New1(__this->Uri()));
}

// public generated string get_Uri() :216
void LaunchUri__get_Uri_fn(LaunchUri* __this, uString** __retval)
{
    *__retval = __this->Uri();
}

// public generated void set_Uri(string value) :216
void LaunchUri__set_Uri_fn(LaunchUri* __this, uString* value)
{
    __this->Uri(value);
}

// public generated string get_Uri() [instance] :216
uString* LaunchUri::Uri()
{
    return _Uri;
}

// public generated void set_Uri(string value) [instance] :216
void LaunchUri::Uri(uString* value)
{
    _Uri = value;
}
// }

// /usr/local/share/uno/Packages/Fuse.Controls/0.27.10/WebView/$.uno#3
// -------------------------------------------------------------------

// public sealed class LoadHtml :220
// {
LoadHtml_type* LoadHtml_typeof()
{
    static uSStrong<LoadHtml_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 9;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(LoadHtml);
    options.TypeSize = sizeof(LoadHtml_type);
    type = (LoadHtml_type*)uClassType::New("Fuse.Triggers.Actions.LoadHtml", options);
    type->SetBase(::g::Fuse::Triggers::Actions::WebViewNavAction_typeof());
    type->fp_Execute = (void(*)(::g::Fuse::Triggers::Actions::WebViewNavAction*, uObject*))LoadHtml__Execute_fn;
    type->interface0.fp_get_Source = (void(*)(uObject*, uString**))LoadHtml__get_Source_fn;
    type->interface0.fp_set_Source = (void(*)(uObject*, uString*))LoadHtml__set_Source_fn;
    ::STRINGS[0] = uString::Const("");
    type->SetInterfaces(
        ::g::Fuse::Controls::ISourceReceiver_typeof(), offsetof(LoadHtml_type, interface0));
    type->SetFields(7,
        ::g::Uno::String_typeof(), offsetof(::g::Fuse::Triggers::Actions::LoadHtml, _BaseUrl), 0,
        ::g::Uno::String_typeof(), offsetof(::g::Fuse::Triggers::Actions::LoadHtml, _Source), 0);
    return type;
}

// public generated string get_BaseUrl() :239
void LoadHtml__get_BaseUrl_fn(LoadHtml* __this, uString** __retval)
{
    *__retval = __this->BaseUrl();
}

// public generated void set_BaseUrl(string value) :239
void LoadHtml__set_BaseUrl_fn(LoadHtml* __this, uString* value)
{
    __this->BaseUrl(value);
}

// private override sealed void Execute(Fuse.Controls.IWebView webview) :241
void LoadHtml__Execute_fn(LoadHtml* __this, uObject* webview)
{
    if (::g::Uno::String::op_Inequality(__this->Source(), ::STRINGS[0/*""*/]))
        ::g::Fuse::Controls::IWebView::LoadHtml1(uInterface(uPtr(webview), ::TYPES[10/*Fuse.Controls.IWebView*/]), __this->Source(), __this->BaseUrl());
}

// public generated string get_Source() :224
void LoadHtml__get_Source_fn(LoadHtml* __this, uString** __retval)
{
    *__retval = __this->Source();
}

// public generated void set_Source(string value) :224
void LoadHtml__set_Source_fn(LoadHtml* __this, uString* value)
{
    __this->Source(value);
}

// public generated string get_BaseUrl() [instance] :239
uString* LoadHtml::BaseUrl()
{
    return _BaseUrl;
}

// public generated void set_BaseUrl(string value) [instance] :239
void LoadHtml::BaseUrl(uString* value)
{
    _BaseUrl = value;
}

// public generated string get_Source() [instance] :224
uString* LoadHtml::Source()
{
    return _Source;
}

// public generated void set_Source(string value) [instance] :224
void LoadHtml::Source(uString* value)
{
    _Source = value;
}
// }

// /usr/local/share/uno/Packages/Fuse.Controls/0.27.10/WebView/$.uno#3
// -------------------------------------------------------------------

// public sealed class LoadUrl :206
// {
::g::Fuse::Triggers::Actions::WebViewNavAction_type* LoadUrl_typeof()
{
    static uSStrong< ::g::Fuse::Triggers::Actions::WebViewNavAction_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 8;
    options.ObjectSize = sizeof(LoadUrl);
    options.TypeSize = sizeof(::g::Fuse::Triggers::Actions::WebViewNavAction_type);
    type = (::g::Fuse::Triggers::Actions::WebViewNavAction_type*)uClassType::New("Fuse.Triggers.Actions.LoadUrl", options);
    type->SetBase(::g::Fuse::Triggers::Actions::WebViewNavAction_typeof());
    type->fp_Execute = (void(*)(::g::Fuse::Triggers::Actions::WebViewNavAction*, uObject*))LoadUrl__Execute_fn;
    ::STRINGS[0] = uString::Const("");
    type->SetFields(7,
        ::g::Uno::String_typeof(), offsetof(::g::Fuse::Triggers::Actions::LoadUrl, _Url), 0);
    return type;
}

// private override sealed void Execute(Fuse.Controls.IWebView webview) :211
void LoadUrl__Execute_fn(LoadUrl* __this, uObject* webview)
{
    if (::g::Uno::String::op_Inequality(__this->Url(), ::STRINGS[0/*""*/]))
        ::g::Fuse::Controls::IWebView::LoadUrl(uInterface(uPtr(webview), ::TYPES[10/*Fuse.Controls.IWebView*/]), __this->Url());
}

// public generated string get_Url() :209
void LoadUrl__get_Url_fn(LoadUrl* __this, uString** __retval)
{
    *__retval = __this->Url();
}

// public generated void set_Url(string value) :209
void LoadUrl__set_Url_fn(LoadUrl* __this, uString* value)
{
    __this->Url(value);
}

// public generated string get_Url() [instance] :209
uString* LoadUrl::Url()
{
    return _Url;
}

// public generated void set_Url(string value) [instance] :209
void LoadUrl::Url(uString* value)
{
    _Url = value;
}
// }

// /usr/local/share/uno/Packages/Fuse.Triggers/0.27.10/Actions/$.uno#5
// -------------------------------------------------------------------

// public sealed class Pause :236
// {
::g::Fuse::Triggers::Actions::TriggerAction_type* Pause_typeof()
{
    static uSStrong< ::g::Fuse::Triggers::Actions::TriggerAction_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 8;
    options.ObjectSize = sizeof(Pause);
    options.TypeSize = sizeof(::g::Fuse::Triggers::Actions::TriggerAction_type);
    type = (::g::Fuse::Triggers::Actions::TriggerAction_type*)uClassType::New("Fuse.Triggers.Actions.Pause", options);
    type->SetBase(::g::Fuse::Triggers::Actions::PlaybackAction_typeof());
    type->fp_Perform = (void(*)(::g::Fuse::Triggers::Actions::TriggerAction*, ::g::Fuse::Node*))Pause__Perform_fn;
    ::TYPES[14] = ::g::Fuse::Triggers::Actions::PlaybackAction_typeof();
    ::TYPES[15] = ::g::Fuse::Triggers::IPlayback_typeof();
    type->SetFields(8);
    return type;
}

// protected override sealed void Perform(Fuse.Node target) :238
void Pause__Perform_fn(Pause* __this, ::g::Fuse::Node* target)
{
    uObject* ind1 = __this->Target();
    uObject* t = (ind1 != NULL) ? ind1 : uAs<uObject*>(target, ::TYPES[15/*Fuse.Triggers.IPlayback*/]);

    if (t != NULL)
    {
        if (::g::Fuse::Triggers::IPlayback::CanPause(uInterface(uPtr(t), ::TYPES[15/*Fuse.Triggers.IPlayback*/])))
            ::g::Fuse::Triggers::IPlayback::Pause(uInterface(uPtr(t), ::TYPES[15/*Fuse.Triggers.IPlayback*/]));
    }
}
// }

// /usr/local/share/uno/Packages/Fuse.Triggers/0.27.10/Actions/$.uno#5
// -------------------------------------------------------------------

// public abstract class PlaybackAction :218
// {
::g::Fuse::Triggers::Actions::TriggerAction_type* PlaybackAction_typeof()
{
    static uSStrong< ::g::Fuse::Triggers::Actions::TriggerAction_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 8;
    options.ObjectSize = sizeof(PlaybackAction);
    options.TypeSize = sizeof(::g::Fuse::Triggers::Actions::TriggerAction_type);
    type = (::g::Fuse::Triggers::Actions::TriggerAction_type*)uClassType::New("Fuse.Triggers.Actions.PlaybackAction", options);
    type->SetBase(::g::Fuse::Triggers::Actions::TriggerAction_typeof());
    type->SetFields(7,
        ::g::Fuse::Triggers::IPlayback_typeof(), offsetof(::g::Fuse::Triggers::Actions::PlaybackAction, _Target), 0);
    return type;
}

// public generated Fuse.Triggers.IPlayback get_Target() :220
void PlaybackAction__get_Target_fn(PlaybackAction* __this, uObject** __retval)
{
    *__retval = __this->Target();
}

// public generated void set_Target(Fuse.Triggers.IPlayback value) :220
void PlaybackAction__set_Target_fn(PlaybackAction* __this, uObject* value)
{
    __this->Target(value);
}

// public generated Fuse.Triggers.IPlayback get_Target() [instance] :220
uObject* PlaybackAction::Target()
{
    return _Target;
}

// public generated void set_Target(Fuse.Triggers.IPlayback value) [instance] :220
void PlaybackAction::Target(uObject* value)
{
    _Target = value;
}
// }

// /usr/local/share/uno/Packages/Fuse.Triggers/0.27.10/Actions/$.uno#5
// -------------------------------------------------------------------

// public sealed class PlayTo :258
// {
::g::Fuse::Triggers::Actions::TriggerAction_type* PlayTo_typeof()
{
    static uSStrong< ::g::Fuse::Triggers::Actions::TriggerAction_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 9;
    options.ObjectSize = sizeof(PlayTo);
    options.TypeSize = sizeof(::g::Fuse::Triggers::Actions::TriggerAction_type);
    type = (::g::Fuse::Triggers::Actions::TriggerAction_type*)uClassType::New("Fuse.Triggers.Actions.PlayTo", options);
    type->SetBase(::g::Fuse::Triggers::Actions::PlaybackAction_typeof());
    type->fp_Perform = (void(*)(::g::Fuse::Triggers::Actions::TriggerAction*, ::g::Fuse::Node*))PlayTo__Perform_fn;
    ::TYPES[14] = ::g::Fuse::Triggers::Actions::PlaybackAction_typeof();
    ::TYPES[15] = ::g::Fuse::Triggers::IPlayback_typeof();
    type->SetFields(8,
        ::g::Uno::Double_typeof(), offsetof(::g::Fuse::Triggers::Actions::PlayTo, _Progress), 0);
    return type;
}

// protected override sealed void Perform(Fuse.Node target) :262
void PlayTo__Perform_fn(PlayTo* __this, ::g::Fuse::Node* target)
{
    uObject* ind1 = __this->Target();
    uObject* t = (ind1 != NULL) ? ind1 : uAs<uObject*>(target, ::TYPES[15/*Fuse.Triggers.IPlayback*/]);

    if (t != NULL)
    {
        if (::g::Fuse::Triggers::IPlayback::CanPlayTo(uInterface(uPtr(t), ::TYPES[15/*Fuse.Triggers.IPlayback*/])))
            ::g::Fuse::Triggers::IPlayback::PlayTo(uInterface(uPtr(t), ::TYPES[15/*Fuse.Triggers.IPlayback*/]), __this->Progress());
    }
}

// public generated double get_Progress() :260
void PlayTo__get_Progress_fn(PlayTo* __this, double* __retval)
{
    *__retval = __this->Progress();
}

// public generated void set_Progress(double value) :260
void PlayTo__set_Progress_fn(PlayTo* __this, double* value)
{
    __this->Progress(*value);
}

// public generated double get_Progress() [instance] :260
double PlayTo::Progress()
{
    return _Progress;
}

// public generated void set_Progress(double value) [instance] :260
void PlayTo::Progress(double value)
{
    _Progress = value;
}
// }

// /usr/local/share/uno/Packages/Fuse.Triggers/0.27.10/Actions/$.uno#6
// -------------------------------------------------------------------

// public sealed class Pulse :280
// {
::g::Fuse::Triggers::Actions::TriggerAction_type* Pulse_typeof()
{
    static uSStrong< ::g::Fuse::Triggers::Actions::TriggerAction_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 8;
    options.ObjectSize = sizeof(Pulse);
    options.TypeSize = sizeof(::g::Fuse::Triggers::Actions::TriggerAction_type);
    type = (::g::Fuse::Triggers::Actions::TriggerAction_type*)uClassType::New("Fuse.Triggers.Actions.Pulse", options);
    type->SetBase(::g::Fuse::Triggers::Actions::TriggerAction_typeof());
    type->fp_Perform = (void(*)(::g::Fuse::Triggers::Actions::TriggerAction*, ::g::Fuse::Node*))Pulse__Perform_fn;
    type->SetFields(7,
        ::g::Fuse::Triggers::IPulseTrigger_typeof(), offsetof(::g::Fuse::Triggers::Actions::Pulse, _Target), 0);
    return type;
}

// protected override sealed void Perform(Fuse.Node target) :284
void Pulse__Perform_fn(Pulse* __this, ::g::Fuse::Node* target)
{
    uObject* t = __this->Target();

    if (t != NULL)
        ::g::Fuse::Triggers::IPulseTrigger::Pulse(uInterface(uPtr(t), ::g::Fuse::Triggers::IPulseTrigger_typeof()));
}

// public generated Fuse.Triggers.IPulseTrigger get_Target() :282
void Pulse__get_Target_fn(Pulse* __this, uObject** __retval)
{
    *__retval = __this->Target();
}

// public generated void set_Target(Fuse.Triggers.IPulseTrigger value) :282
void Pulse__set_Target_fn(Pulse* __this, uObject* value)
{
    __this->Target(value);
}

// public generated Fuse.Triggers.IPulseTrigger get_Target() [instance] :282
uObject* Pulse::Target()
{
    return _Target;
}

// public generated void set_Target(Fuse.Triggers.IPulseTrigger value) [instance] :282
void Pulse::Target(uObject* value)
{
    _Target = value;
}
// }

// /usr/local/share/uno/Packages/Fuse.Triggers/0.27.10/Actions/$.uno#6
// -------------------------------------------------------------------

// public sealed class PulseBackward :292
// {
::g::Fuse::Triggers::Actions::TriggerAction_type* PulseBackward_typeof()
{
    static uSStrong< ::g::Fuse::Triggers::Actions::TriggerAction_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 8;
    options.ObjectSize = sizeof(PulseBackward);
    options.TypeSize = sizeof(::g::Fuse::Triggers::Actions::TriggerAction_type);
    type = (::g::Fuse::Triggers::Actions::TriggerAction_type*)uClassType::New("Fuse.Triggers.Actions.PulseBackward", options);
    type->SetBase(::g::Fuse::Triggers::Actions::TriggerAction_typeof());
    type->fp_Perform = (void(*)(::g::Fuse::Triggers::Actions::TriggerAction*, ::g::Fuse::Node*))PulseBackward__Perform_fn;
    type->SetFields(7,
        ::g::Fuse::Triggers::Timeline_typeof(), offsetof(::g::Fuse::Triggers::Actions::PulseBackward, _Target), 0);
    return type;
}

// protected override sealed void Perform(Fuse.Node target) :296
void PulseBackward__Perform_fn(PulseBackward* __this, ::g::Fuse::Node* target)
{
    ::g::Fuse::Triggers::Timeline* t = __this->Target();

    if (t != NULL)
        uPtr(t)->PulseBackward();
}

// public generated Fuse.Triggers.Timeline get_Target() :294
void PulseBackward__get_Target_fn(PulseBackward* __this, ::g::Fuse::Triggers::Timeline** __retval)
{
    *__retval = __this->Target();
}

// public generated void set_Target(Fuse.Triggers.Timeline value) :294
void PulseBackward__set_Target_fn(PulseBackward* __this, ::g::Fuse::Triggers::Timeline* value)
{
    __this->Target(value);
}

// public generated Fuse.Triggers.Timeline get_Target() [instance] :294
::g::Fuse::Triggers::Timeline* PulseBackward::Target()
{
    return _Target;
}

// public generated void set_Target(Fuse.Triggers.Timeline value) [instance] :294
void PulseBackward::Target(::g::Fuse::Triggers::Timeline* value)
{
    _Target = value;
}
// }

// /usr/local/share/uno/Packages/Fuse.Triggers/0.27.10/Actions/$.uno#6
// -------------------------------------------------------------------

// public sealed class PulseForward :304
// {
::g::Fuse::Triggers::Actions::TriggerAction_type* PulseForward_typeof()
{
    static uSStrong< ::g::Fuse::Triggers::Actions::TriggerAction_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 8;
    options.ObjectSize = sizeof(PulseForward);
    options.TypeSize = sizeof(::g::Fuse::Triggers::Actions::TriggerAction_type);
    type = (::g::Fuse::Triggers::Actions::TriggerAction_type*)uClassType::New("Fuse.Triggers.Actions.PulseForward", options);
    type->SetBase(::g::Fuse::Triggers::Actions::TriggerAction_typeof());
    type->fp_Perform = (void(*)(::g::Fuse::Triggers::Actions::TriggerAction*, ::g::Fuse::Node*))PulseForward__Perform_fn;
    type->SetFields(7,
        ::g::Fuse::Triggers::Timeline_typeof(), offsetof(::g::Fuse::Triggers::Actions::PulseForward, _Target), 0);
    return type;
}

// protected override sealed void Perform(Fuse.Node target) :308
void PulseForward__Perform_fn(PulseForward* __this, ::g::Fuse::Node* target)
{
    ::g::Fuse::Triggers::Timeline* t = __this->Target();

    if (t != NULL)
        uPtr(t)->PulseForward();
}

// public generated Fuse.Triggers.Timeline get_Target() :306
void PulseForward__get_Target_fn(PulseForward* __this, ::g::Fuse::Triggers::Timeline** __retval)
{
    *__retval = __this->Target();
}

// public generated void set_Target(Fuse.Triggers.Timeline value) :306
void PulseForward__set_Target_fn(PulseForward* __this, ::g::Fuse::Triggers::Timeline* value)
{
    __this->Target(value);
}

// public generated Fuse.Triggers.Timeline get_Target() [instance] :306
::g::Fuse::Triggers::Timeline* PulseForward::Target()
{
    return _Target;
}

// public generated void set_Target(Fuse.Triggers.Timeline value) [instance] :306
void PulseForward::Target(::g::Fuse::Triggers::Timeline* value)
{
    _Target = value;
}
// }

// /usr/local/share/uno/Packages/Fuse.UserEvents/0.27.10/$.uno#1
// -------------------------------------------------------------

// public sealed class RaiseUserEvent :85
// {
::g::Fuse::Triggers::Actions::TriggerAction_type* RaiseUserEvent_typeof()
{
    static uSStrong< ::g::Fuse::Triggers::Actions::TriggerAction_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 11;
    options.ObjectSize = sizeof(RaiseUserEvent);
    options.TypeSize = sizeof(::g::Fuse::Triggers::Actions::TriggerAction_type);
    type = (::g::Fuse::Triggers::Actions::TriggerAction_type*)uClassType::New("Fuse.Triggers.Actions.RaiseUserEvent", options);
    type->SetBase(::g::Fuse::Triggers::Actions::TriggerAction_typeof());
    type->fp_Perform = (void(*)(::g::Fuse::Triggers::Actions::TriggerAction*, ::g::Fuse::Node*))RaiseUserEvent__Perform_fn;
    ::STRINGS[2] = uString::Const("no UserEvent found: ");
    ::STRINGS[3] = uString::Const("/usr/local/share/uno/Packages/Fuse.UserEvents/0.27.10/$.uno#1");
    ::STRINGS[4] = uString::Const("Perform");
    ::TYPES[16] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Triggers::Actions::UserEventArg_typeof());
    ::TYPES[17] = ::g::Uno::Collections::Dictionary_typeof()->MakeType(::g::Uno::String_typeof(), uObject_typeof());
    ::TYPES[18] = ::g::Uno::Collections::IEnumerator1_typeof()->MakeType(::g::Fuse::Triggers::Actions::UserEventArg_typeof());
    ::TYPES[19] = ::g::Fuse::Triggers::Actions::UserEventArg_typeof();
    type->SetFields(7,
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Triggers::Actions::UserEventArg_typeof()), offsetof(::g::Fuse::Triggers::Actions::RaiseUserEvent, _args), 0,
        ::g::Fuse::UserEvent_typeof(), offsetof(::g::Fuse::Triggers::Actions::RaiseUserEvent, _event), 0,
        ::g::Fuse::Node_typeof(), offsetof(::g::Fuse::Triggers::Actions::RaiseUserEvent, _eventTarget), 0,
        ::g::Uno::String_typeof(), offsetof(::g::Fuse::Triggers::Actions::RaiseUserEvent, _name), 0);
    return type;
}

// private Uno.Collections.Dictionary<string, object> ConvertArgs() :128
void RaiseUserEvent__ConvertArgs_fn(RaiseUserEvent* __this, ::g::Uno::Collections::Dictionary** __retval)
{
    *__retval = __this->ConvertArgs();
}

// public string get_Name() :90
void RaiseUserEvent__get_Name_fn(RaiseUserEvent* __this, uString** __retval)
{
    *__retval = __this->Name();
}

// public void set_Name(string value) :91
void RaiseUserEvent__set_Name_fn(RaiseUserEvent* __this, uString* value)
{
    __this->Name(value);
}

// protected override sealed void Perform(Fuse.Node target) :113
void RaiseUserEvent__Perform_fn(RaiseUserEvent* __this, ::g::Fuse::Node* target)
{
    if ((__this->_event == NULL) || (__this->_eventTarget != target))
    {
        ::g::Fuse::Node* n;
        __this->_event = ::g::Fuse::UserEvent::ScanTree(target, __this->Name(), &n);
        __this->_eventTarget = target;
    }

    if (__this->_event == NULL)
        ::g::Fuse::Diagnostics::Error(::g::Uno::String::op_Addition2(::STRINGS[2/*"no UserEven...*/], __this->Name()), NULL, ::STRINGS[3/*"/usr/local/...*/], 123, ::STRINGS[4/*"Perform"*/]);
    else
        uPtr(__this->_event)->Raise(__this->ConvertArgs());
}

// private Uno.Collections.Dictionary<string, object> ConvertArgs() [instance] :128
::g::Uno::Collections::Dictionary* RaiseUserEvent::ConvertArgs()
{
    ::g::Fuse::Triggers::Actions::UserEventArg* ret3;

    if ((_args == NULL) || (::g::Uno::Collections::ICollection::Count(uInterface(uPtr(_args), ::TYPES[16/*Uno.Collections.ICollection<Fuse.Triggers.Actions.UserEventArg>*/])) == 0))
        return NULL;

    ::g::Uno::Collections::Dictionary* d = (::g::Uno::Collections::Dictionary*)::g::Uno::Collections::Dictionary::New1(::TYPES[17/*Uno.Collections.Dictionary<string, object>*/]);

    for (uObject* enum1 = (uObject*)::g::Uno::Collections::IEnumerable::GetEnumerator(uInterface(uPtr(_args), ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::TYPES[19/*Fuse.Triggers.Actions.UserEventArg*/]))); ::g::Uno::Collections::IEnumerator::MoveNext(uInterface(uPtr(enum1), ::g::Uno::Collections::IEnumerator_typeof())); )
    {
        ::g::Fuse::Triggers::Actions::UserEventArg* arg = (::g::Uno::Collections::IEnumerator1::get_Current_ex(uInterface(uPtr(enum1), ::TYPES[18/*Uno.Collections.IEnumerator<Fuse.Triggers.Actions.UserEventArg>*/]), &ret3), ret3);
        ::g::Uno::Collections::Dictionary__set_Item_fn(uPtr(d), uPtr(arg)->Name(), uPtr(arg)->Value());
    }

    return d;
}

// public string get_Name() [instance] :90
uString* RaiseUserEvent::Name()
{
    return _name;
}

// public void set_Name(string value) [instance] :91
void RaiseUserEvent::Name(uString* value)
{
    _name = value;
    _event = NULL;
}
// }

// /usr/local/share/uno/Packages/Fuse.Triggers/0.27.10/Actions/$.uno#4
// -------------------------------------------------------------------

// public sealed class ReleaseFocus :178
// {
::g::Fuse::Triggers::Actions::TriggerAction_type* ReleaseFocus_typeof()
{
    static uSStrong< ::g::Fuse::Triggers::Actions::TriggerAction_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 7;
    options.ObjectSize = sizeof(ReleaseFocus);
    options.TypeSize = sizeof(::g::Fuse::Triggers::Actions::TriggerAction_type);
    type = (::g::Fuse::Triggers::Actions::TriggerAction_type*)uClassType::New("Fuse.Triggers.Actions.ReleaseFocus", options);
    type->SetBase(::g::Fuse::Triggers::Actions::TriggerAction_typeof());
    type->fp_Perform = (void(*)(::g::Fuse::Triggers::Actions::TriggerAction*, ::g::Fuse::Node*))ReleaseFocus__Perform_fn;
    type->SetFields(7);
    return type;
}

// protected override sealed void Perform(Fuse.Node target) :180
void ReleaseFocus__Perform_fn(ReleaseFocus* __this, ::g::Fuse::Node* target)
{
    ::g::Fuse::Input::Focus::GiveTo(NULL);
}
// }

// /usr/local/share/uno/Packages/Fuse.Controls/0.27.10/WebView/$.uno#3
// -------------------------------------------------------------------

// public sealed class Reload :190
// {
::g::Fuse::Triggers::Actions::WebViewNavAction_type* Reload_typeof()
{
    static uSStrong< ::g::Fuse::Triggers::Actions::WebViewNavAction_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 7;
    options.ObjectSize = sizeof(Reload);
    options.TypeSize = sizeof(::g::Fuse::Triggers::Actions::WebViewNavAction_type);
    type = (::g::Fuse::Triggers::Actions::WebViewNavAction_type*)uClassType::New("Fuse.Triggers.Actions.Reload", options);
    type->SetBase(::g::Fuse::Triggers::Actions::WebViewNavAction_typeof());
    type->fp_Execute = (void(*)(::g::Fuse::Triggers::Actions::WebViewNavAction*, uObject*))Reload__Execute_fn;
    type->SetFields(7);
    return type;
}

// private override sealed void Execute(Fuse.Controls.IWebView webview) :192
void Reload__Execute_fn(Reload* __this, uObject* webview)
{
    ::g::Fuse::Controls::IWebView::Reload(uInterface(uPtr(webview), ::TYPES[10/*Fuse.Controls.IWebView*/]));
}
// }

// /usr/local/share/uno/Packages/Fuse.Triggers/0.27.10/Actions/$.uno#5
// -------------------------------------------------------------------

// public sealed class Resume :247
// {
::g::Fuse::Triggers::Actions::TriggerAction_type* Resume_typeof()
{
    static uSStrong< ::g::Fuse::Triggers::Actions::TriggerAction_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 8;
    options.ObjectSize = sizeof(Resume);
    options.TypeSize = sizeof(::g::Fuse::Triggers::Actions::TriggerAction_type);
    type = (::g::Fuse::Triggers::Actions::TriggerAction_type*)uClassType::New("Fuse.Triggers.Actions.Resume", options);
    type->SetBase(::g::Fuse::Triggers::Actions::PlaybackAction_typeof());
    type->fp_Perform = (void(*)(::g::Fuse::Triggers::Actions::TriggerAction*, ::g::Fuse::Node*))Resume__Perform_fn;
    ::TYPES[14] = ::g::Fuse::Triggers::Actions::PlaybackAction_typeof();
    ::TYPES[15] = ::g::Fuse::Triggers::IPlayback_typeof();
    type->SetFields(8);
    return type;
}

// protected override sealed void Perform(Fuse.Node target) :249
void Resume__Perform_fn(Resume* __this, ::g::Fuse::Node* target)
{
    uObject* ind1 = __this->Target();
    uObject* t = (ind1 != NULL) ? ind1 : uAs<uObject*>(target, ::TYPES[15/*Fuse.Triggers.IPlayback*/]);

    if (t != NULL)
    {
        if (::g::Fuse::Triggers::IPlayback::CanResume(uInterface(uPtr(t), ::TYPES[15/*Fuse.Triggers.IPlayback*/])))
            ::g::Fuse::Triggers::IPlayback::Resume(uInterface(uPtr(t), ::TYPES[15/*Fuse.Triggers.IPlayback*/]));
    }
}
// }

// /usr/local/share/uno/Packages/Fuse.Controls/0.27.10/Triggers/$.uno
// ------------------------------------------------------------------

// public sealed class SendToBack :26
// {
::g::Fuse::Triggers::Actions::TriggerAction_type* SendToBack_typeof()
{
    static uSStrong< ::g::Fuse::Triggers::Actions::TriggerAction_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 8;
    options.ObjectSize = sizeof(SendToBack);
    options.TypeSize = sizeof(::g::Fuse::Triggers::Actions::TriggerAction_type);
    type = (::g::Fuse::Triggers::Actions::TriggerAction_type*)uClassType::New("Fuse.Triggers.Actions.SendToBack", options);
    type->SetBase(::g::Fuse::Triggers::Actions::TriggerAction_typeof());
    type->fp_Perform = (void(*)(::g::Fuse::Triggers::Actions::TriggerAction*, ::g::Fuse::Node*))SendToBack__Perform_fn;
    ::TYPES[1] = ::g::Fuse::Controls::Panel_typeof();
    ::TYPES[2] = ::g::Fuse::Node_typeof();
    type->SetFields(7,
        ::g::Fuse::Node_typeof(), offsetof(::g::Fuse::Triggers::Actions::SendToBack, _Target), 0);
    return type;
}

// protected override sealed void Perform(Fuse.Node target) :30
void SendToBack__Perform_fn(SendToBack* __this, ::g::Fuse::Node* target)
{
    ::g::Fuse::Node* ind1 = __this->Target();
    ::g::Fuse::Node* elm = (ind1 != NULL) ? ind1 : target;

    if (elm != NULL)
    {
        ::g::Fuse::Controls::Panel* panel = uAs< ::g::Fuse::Controls::Panel*>(uPtr(elm)->Parent(), ::TYPES[1/*Fuse.Controls.Panel*/]);

        if (panel != NULL)
            uPtr(panel)->SendToBack(elm);
    }
}

// public generated Fuse.Node get_Target() :28
void SendToBack__get_Target_fn(SendToBack* __this, ::g::Fuse::Node** __retval)
{
    *__retval = __this->Target();
}

// public generated void set_Target(Fuse.Node value) :28
void SendToBack__set_Target_fn(SendToBack* __this, ::g::Fuse::Node* value)
{
    __this->Target(value);
}

// public generated Fuse.Node get_Target() [instance] :28
::g::Fuse::Node* SendToBack::Target()
{
    return _Target;
}

// public generated void set_Target(Fuse.Node value) [instance] :28
void SendToBack::Target(::g::Fuse::Node* value)
{
    _Target = value;
}
// }

// /usr/local/share/uno/Packages/Fuse.Triggers/0.27.10/Actions/$.uno#7
// -------------------------------------------------------------------

// public sealed class Set<T> :331
// {
::g::Fuse::Triggers::Actions::TriggerAction_type* Set_typeof()
{
    static uSStrong< ::g::Fuse::Triggers::Actions::TriggerAction_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 14;
    options.GenericCount = 1;
    options.PrecalcCount = 1;
    options.ObjectSize = sizeof(Set);
    options.TypeSize = sizeof(::g::Fuse::Triggers::Actions::TriggerAction_type);
    type = (::g::Fuse::Triggers::Actions::TriggerAction_type*)uClassType::New("Fuse.Triggers.Actions.Set`1", options);
    type->SetBase(::g::Fuse::Triggers::Actions::TriggerAction_typeof());
    type->fp_Perform = (void(*)(::g::Fuse::Triggers::Actions::TriggerAction*, ::g::Fuse::Node*))Set__Perform_fn;
    ::STRINGS[5] = uString::Const("target");
    ::TYPES[3] = ::g::Uno::Delegate_typeof();
    ::TYPES[20] = ::g::Uno::UX::Expression_typeof();
    ::TYPES[6] = uObject_typeof();
    type->SetPrecalc(
        ::TYPES[20/*Uno.UX.Expression`1*/]->MakeType(type->T(0)));
    type->SetFields(7,
        ::g::Fuse::Internal::Blender_typeof()->MakeType(type->T(0)), offsetof(::g::Fuse::Triggers::Actions::Set, _blender), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Triggers::Actions::Set, _hasIncrement), 0,
        type->T(0), (uintptr_t)0, uFieldFlagsConstrained,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Triggers::Actions::Set, _updateRestValue), 0,
        ::g::Uno::UX::Expression_typeof()->MakeType(type->T(0)), offsetof(::g::Fuse::Triggers::Actions::Set, _Expression), 0,
        ::g::Uno::UX::Property_typeof()->MakeType(type->T(0)), offsetof(::g::Fuse::Triggers::Actions::Set, _Target), 0,
        type->T(0), (uintptr_t)0, uFieldFlagsConstrained);
    return type;
}

// public Set(Uno.UX.Property<T> target) :346
void Set__ctor_1_fn(Set* __this, ::g::Uno::UX::Property* target)
{
    __this->ctor_1(target);
}

// public generated Uno.UX.Expression<T> get_Expression() :343
void Set__get_Expression_fn(Set* __this, uDelegate** __retval)
{
    *__retval = __this->Expression();
}

// public generated void set_Expression(Uno.UX.Expression<T> value) :343
void Set__set_Expression_fn(Set* __this, uDelegate* value)
{
    __this->Expression(value);
}

// public Set New(Uno.UX.Property<T> target) :346
void Set__New1_fn(uType* __type, ::g::Uno::UX::Property* target, Set** __retval)
{
    *__retval = Set::New1(__type, target);
}

// protected override sealed void Perform(Fuse.Node target) :361
void Set__Perform_fn(Set* __this, ::g::Fuse::Node* target)
{
    uType* __types[] = {
        __this->__type->T(0),
        __this->__type->Precalced(0/*Uno.UX.Expression<T>*/),
    };
    uT ret2(__types[0], U_ALLOCA(__types[0]->ValueSize));
    uT ret3(__types[0], U_ALLOCA(__types[0]->ValueSize));
    uT ret4(__types[0], U_ALLOCA(__types[0]->ValueSize));
    uT ret5(__types[0], U_ALLOCA(__types[0]->ValueSize));
    ;
    ;
    ;
    ;

    if (__this->_hasIncrement)
        Set__Update_fn(__this, (uPtr(__this->_blender)->Add_ex((::g::Uno::UX::Property__Get_fn(uPtr(__this->Target()), &ret3), ret3), __this->_increment(), &ret2), ret2));
    else if (::g::Uno::Delegate::op_Inequality(__this->Expression(), NULL))
        Set__Update_fn(__this, (uPtr(__this->Expression())->Invoke(&ret4), ret4));
    else
        Set__Update_fn(__this, (Set__get_Value_fn(__this, &ret5), ret5));
}

// public generated Uno.UX.Property<T> get_Target() :333
void Set__get_Target_fn(Set* __this, ::g::Uno::UX::Property** __retval)
{
    *__retval = __this->Target();
}

// private generated void set_Target(Uno.UX.Property<T> value) :333
void Set__set_Target_fn(Set* __this, ::g::Uno::UX::Property* value)
{
    __this->Target(value);
}

// private void Update(T value) :353
void Set__Update_fn(Set* __this, void* value)
{
    uType* __types[] = {
        __this->__type->T(0),
    };

    if (__this->_updateRestValue)
        ::g::Uno::UX::Property__SetRestState_fn(uPtr(__this->Target()), value, __this);
    else
        ::g::Uno::UX::Property__Set_fn(uPtr(__this->Target()), value, __this);
}

// public generated T get_Value() :334
void Set__get_Value_fn(Set* __this, uTRef __retval)
{
    return __retval.Store(__this->_Value()), void();
}

// public generated void set_Value(T value) :334
void Set__set_Value_fn(Set* __this, void* value)
{
    uType* __types[] = {
        __this->__type->T(0),
    };
    __this->_Value() = value;
}

// public Set(Uno.UX.Property<T> target) [instance] :346
void Set::ctor_1(::g::Uno::UX::Property* target)
{
    _updateRestValue = true;
    ctor_();

    if (target == NULL)
        U_THROW(::g::Uno::ArgumentNullException::New6(::STRINGS[5/*"target"*/]));

    Target(target);
}

// public generated Uno.UX.Expression<T> get_Expression() [instance] :343
uDelegate* Set::Expression()
{
    return _Expression;
}

// public generated void set_Expression(Uno.UX.Expression<T> value) [instance] :343
void Set::Expression(uDelegate* value)
{
    _Expression = value;
}

// public generated Uno.UX.Property<T> get_Target() [instance] :333
::g::Uno::UX::Property* Set::Target()
{
    return _Target;
}

// private generated void set_Target(Uno.UX.Property<T> value) [instance] :333
void Set::Target(::g::Uno::UX::Property* value)
{
    _Target = value;
}

// public Set New(Uno.UX.Property<T> target) [static] :346
Set* Set::New1(uType* __type, ::g::Uno::UX::Property* target)
{
    Set* obj1 = (Set*)uNew(__type);
    obj1->ctor_1(target);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Triggers/0.27.10/Actions/$.uno#10
// --------------------------------------------------------------------

// public sealed class Show :512
// {
::g::Fuse::Triggers::Actions::TriggerAction_type* Show_typeof()
{
    static uSStrong< ::g::Fuse::Triggers::Actions::TriggerAction_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 7;
    options.ObjectSize = sizeof(Show);
    options.TypeSize = sizeof(::g::Fuse::Triggers::Actions::TriggerAction_type);
    type = (::g::Fuse::Triggers::Actions::TriggerAction_type*)uClassType::New("Fuse.Triggers.Actions.Show", options);
    type->SetBase(::g::Fuse::Triggers::Actions::TriggerAction_typeof());
    type->fp_Perform = (void(*)(::g::Fuse::Triggers::Actions::TriggerAction*, ::g::Fuse::Node*))Show__Perform_fn;
    ::TYPES[21] = ::g::Fuse::Triggers::Actions::IShow_typeof();
    type->SetFields(7);
    return type;
}

// protected override sealed void Perform(Fuse.Node target) :514
void Show__Perform_fn(Show* __this, ::g::Fuse::Node* target)
{
    if (uIs(target, ::TYPES[21/*Fuse.Triggers.Actions.IShow*/]))
        ::g::Fuse::Triggers::Actions::IShow::Show(uInterface(uPtr((uObject*)target), ::TYPES[21/*Fuse.Triggers.Actions.IShow*/]));
}
// }

// /usr/local/share/uno/Packages/Fuse.Triggers/0.27.10/Actions/$.uno#5
// -------------------------------------------------------------------

// public sealed class Stop :225
// {
::g::Fuse::Triggers::Actions::TriggerAction_type* Stop_typeof()
{
    static uSStrong< ::g::Fuse::Triggers::Actions::TriggerAction_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 8;
    options.ObjectSize = sizeof(Stop);
    options.TypeSize = sizeof(::g::Fuse::Triggers::Actions::TriggerAction_type);
    type = (::g::Fuse::Triggers::Actions::TriggerAction_type*)uClassType::New("Fuse.Triggers.Actions.Stop", options);
    type->SetBase(::g::Fuse::Triggers::Actions::PlaybackAction_typeof());
    type->fp_Perform = (void(*)(::g::Fuse::Triggers::Actions::TriggerAction*, ::g::Fuse::Node*))Stop__Perform_fn;
    ::TYPES[14] = ::g::Fuse::Triggers::Actions::PlaybackAction_typeof();
    ::TYPES[15] = ::g::Fuse::Triggers::IPlayback_typeof();
    type->SetFields(8);
    return type;
}

// protected override sealed void Perform(Fuse.Node target) :227
void Stop__Perform_fn(Stop* __this, ::g::Fuse::Node* target)
{
    uObject* ind1 = __this->Target();
    uObject* t = (ind1 != NULL) ? ind1 : uAs<uObject*>(target, ::TYPES[15/*Fuse.Triggers.IPlayback*/]);

    if (t != NULL)
    {
        if (::g::Fuse::Triggers::IPlayback::CanStop(uInterface(uPtr(t), ::TYPES[15/*Fuse.Triggers.IPlayback*/])))
            ::g::Fuse::Triggers::IPlayback::Stop(uInterface(uPtr(t), ::TYPES[15/*Fuse.Triggers.IPlayback*/]));
    }
}
// }

// /usr/local/share/uno/Packages/Fuse.Controls/0.27.10/WebView/$.uno#3
// -------------------------------------------------------------------

// public sealed class StopLoading :198
// {
::g::Fuse::Triggers::Actions::WebViewNavAction_type* StopLoading_typeof()
{
    static uSStrong< ::g::Fuse::Triggers::Actions::WebViewNavAction_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 7;
    options.ObjectSize = sizeof(StopLoading);
    options.TypeSize = sizeof(::g::Fuse::Triggers::Actions::WebViewNavAction_type);
    type = (::g::Fuse::Triggers::Actions::WebViewNavAction_type*)uClassType::New("Fuse.Triggers.Actions.StopLoading", options);
    type->SetBase(::g::Fuse::Triggers::Actions::WebViewNavAction_typeof());
    type->fp_Execute = (void(*)(::g::Fuse::Triggers::Actions::WebViewNavAction*, uObject*))StopLoading__Execute_fn;
    type->SetFields(7);
    return type;
}

// private override sealed void Execute(Fuse.Controls.IWebView webview) :200
void StopLoading__Execute_fn(StopLoading* __this, uObject* webview)
{
    ::g::Fuse::Controls::IWebView::Stop(uInterface(uPtr(webview), ::TYPES[10/*Fuse.Controls.IWebView*/]));
}
// }

// /usr/local/share/uno/Packages/Fuse.Elements/0.27.10/Triggers/$.uno
// ------------------------------------------------------------------

// public sealed class TransitionLayout :267
// {
::g::Fuse::Triggers::Actions::TriggerAction_type* TransitionLayout_typeof()
{
    static uSStrong< ::g::Fuse::Triggers::Actions::TriggerAction_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 9;
    options.ObjectSize = sizeof(TransitionLayout);
    options.TypeSize = sizeof(::g::Fuse::Triggers::Actions::TriggerAction_type);
    type = (::g::Fuse::Triggers::Actions::TriggerAction_type*)uClassType::New("Fuse.Triggers.Actions.TransitionLayout", options);
    type->SetBase(::g::Fuse::Triggers::Actions::TriggerAction_typeof());
    type->fp_Perform = (void(*)(::g::Fuse::Triggers::Actions::TriggerAction*, ::g::Fuse::Node*))TransitionLayout__Perform_fn;
    ::TYPES[0] = ::g::Fuse::Elements::Element_typeof();
    ::TYPES[4] = ::g::Uno::Action_typeof();
    ::TYPES[2] = ::g::Fuse::Node_typeof();
    ::TYPES[22] = ::g::Uno::Float4x4_typeof();
    ::TYPES[23] = ::g::Fuse::Triggers::LayoutTransition_typeof();
    type->SetFields(7,
        ::g::Fuse::Elements::Element_typeof(), offsetof(::g::Fuse::Triggers::Actions::TransitionLayout, _perform), 0,
        ::g::Fuse::Elements::Element_typeof(), offsetof(::g::Fuse::Triggers::Actions::TransitionLayout, _From), 0);
    return type;
}

// public generated Fuse.Elements.Element get_From() :269
void TransitionLayout__get_From_fn(TransitionLayout* __this, ::g::Fuse::Elements::Element** __retval)
{
    *__retval = __this->From();
}

// public generated void set_From(Fuse.Elements.Element value) :269
void TransitionLayout__set_From_fn(TransitionLayout* __this, ::g::Fuse::Elements::Element* value)
{
    __this->From(value);
}

// protected override sealed void Perform(Fuse.Node target) :270
void TransitionLayout__Perform_fn(TransitionLayout* __this, ::g::Fuse::Node* target)
{
    __this->_perform = uAs< ::g::Fuse::Elements::Element*>(target, ::TYPES[0/*Fuse.Elements.Element*/]);

    if ((__this->_perform == NULL) || (__this->From() == NULL))
        return;

    ::g::Fuse::UpdateManager::AddDeferredAction(uDelegate::New(::TYPES[4/*Uno.Action*/], (void*)TransitionLayout__Transition_fn, __this), 2);
}

// private void Transition() :281
void TransitionLayout__Transition_fn(TransitionLayout* __this)
{
    __this->Transition();
}

// public generated Fuse.Elements.Element get_From() [instance] :269
::g::Fuse::Elements::Element* TransitionLayout::From()
{
    return _From;
}

// public generated void set_From(Fuse.Elements.Element value) [instance] :269
void TransitionLayout::From(::g::Fuse::Elements::Element* value)
{
    _From = value;
}

// private void Transition() [instance] :281
void TransitionLayout::Transition()
{
    ::g::Uno::Float4x4 ind1 = uPtr(From())->LocalTransform();
    ::g::Uno::Float2 oldPosition = ::g::Uno::Float2__New2(ind1.M41, ind1.M42);
    ::g::Uno::Float2 oldSize = uPtr(From())->ActualSize();
    ::g::Uno::Float4x4 m = ::g::Uno::Matrix::Mul8(uPtr(From())->WorldTransform(), uPtr(uPtr(_perform)->Parent())->WorldTransformInverse());
    ::g::Uno::Float3 worldChange = ::g::Uno::Float3__op_Subtraction2(::g::Uno::Float3__New2(m.M41, m.M42, m.M43), ::g::Uno::Float3__New4(uPtr(_perform)->IntendedPosition(), 0.0f));
    ::g::Fuse::Triggers::LayoutTransition::SetWorldPositionChange(_perform, worldChange);
    ::g::Fuse::Triggers::LayoutTransition::SetPositionChange(_perform, oldPosition, uPtr(_perform)->IntendedPosition());
    ::g::Fuse::Triggers::LayoutTransition::SetSizeChange(_perform, oldSize, uPtr(_perform)->IntendedSize());
    uPtr(::g::Fuse::Triggers::LayoutTransition::Transitioned())->RaiseWithoutBubble(::g::Fuse::Triggers::LayoutTransitionedArgs::New3(_perform), 0);
}
// }

// /usr/local/share/uno/Packages/Fuse.Triggers/0.27.10/Actions/$.uno#8
// -------------------------------------------------------------------

// public sealed class TransitionState :401
// {
::g::Fuse::Triggers::Actions::TriggerAction_type* TransitionState_typeof()
{
    static uSStrong< ::g::Fuse::Triggers::Actions::TriggerAction_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 9;
    options.ObjectSize = sizeof(TransitionState);
    options.TypeSize = sizeof(::g::Fuse::Triggers::Actions::TriggerAction_type);
    type = (::g::Fuse::Triggers::Actions::TriggerAction_type*)uClassType::New("Fuse.Triggers.Actions.TransitionState", options);
    type->SetBase(::g::Fuse::Triggers::Actions::TriggerAction_typeof());
    type->fp_Perform = (void(*)(::g::Fuse::Triggers::Actions::TriggerAction*, ::g::Fuse::Node*))TransitionState__Perform_fn;
    type->SetFields(7,
        ::g::Fuse::Triggers::StateGroup_typeof(), offsetof(::g::Fuse::Triggers::Actions::TransitionState, _Target), 0,
        ::g::Fuse::Triggers::Actions::TransitionStateType_typeof(), offsetof(::g::Fuse::Triggers::Actions::TransitionState, _Type), 0);
    return type;
}

// protected override sealed void Perform(Fuse.Node target) :407
void TransitionState__Perform_fn(TransitionState* __this, ::g::Fuse::Node* target)
{
    ::g::Fuse::Triggers::StateGroup* t = __this->Target();

    switch (__this->Type())
    {
        case 0:
        {
            uPtr(t)->GotoNextState();
            break;
        }
    }
}

// public generated Fuse.Triggers.StateGroup get_Target() :403
void TransitionState__get_Target_fn(TransitionState* __this, ::g::Fuse::Triggers::StateGroup** __retval)
{
    *__retval = __this->Target();
}

// public generated void set_Target(Fuse.Triggers.StateGroup value) :403
void TransitionState__set_Target_fn(TransitionState* __this, ::g::Fuse::Triggers::StateGroup* value)
{
    __this->Target(value);
}

// public generated Fuse.Triggers.Actions.TransitionStateType get_Type() :405
void TransitionState__get_Type_fn(TransitionState* __this, int* __retval)
{
    *__retval = __this->Type();
}

// public generated void set_Type(Fuse.Triggers.Actions.TransitionStateType value) :405
void TransitionState__set_Type_fn(TransitionState* __this, int* value)
{
    __this->Type(*value);
}

// public generated Fuse.Triggers.StateGroup get_Target() [instance] :403
::g::Fuse::Triggers::StateGroup* TransitionState::Target()
{
    return _Target;
}

// public generated void set_Target(Fuse.Triggers.StateGroup value) [instance] :403
void TransitionState::Target(::g::Fuse::Triggers::StateGroup* value)
{
    _Target = value;
}

// public generated Fuse.Triggers.Actions.TransitionStateType get_Type() [instance] :405
int TransitionState::Type()
{
    return _Type;
}

// public generated void set_Type(Fuse.Triggers.Actions.TransitionStateType value) [instance] :405
void TransitionState::Type(int value)
{
    _Type = value;
}
// }

// /usr/local/share/uno/Packages/Fuse.Triggers/0.27.10/Actions/$.uno#8
// -------------------------------------------------------------------

// public enum TransitionStateType :396
uEnumType* TransitionStateType_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Fuse.Triggers.Actions.TransitionStateType", ::g::Uno::Int_typeof(), 1);
    type->SetLiterals(
        "Next", 0LL);
    return type;
}

// /usr/local/share/uno/Packages/Fuse.Triggers/0.27.10/Actions/$.uno#9
// -------------------------------------------------------------------

// public abstract class TriggerAction :433
// {
TriggerAction_type* TriggerAction_typeof()
{
    static uSStrong<TriggerAction_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 7;
    options.ObjectSize = sizeof(TriggerAction);
    options.TypeSize = sizeof(TriggerAction_type);
    type = (TriggerAction_type*)uClassType::New("Fuse.Triggers.Actions.TriggerAction", options);
    type->SetFields(0,
        ::g::Uno::Float_typeof(), offsetof(::g::Fuse::Triggers::Actions::TriggerAction, _delay), 0,
        ::g::Fuse::Triggers::Actions::TriggerDirection_typeof(), offsetof(::g::Fuse::Triggers::Actions::TriggerAction, _direction), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Triggers::Actions::TriggerAction, _hasDelay), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Triggers::Actions::TriggerAction, _hasProgress), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Triggers::Actions::TriggerAction, _isActive), 0,
        ::g::Uno::Float_typeof(), offsetof(::g::Fuse::Triggers::Actions::TriggerAction, _progress), 0,
        ::g::Fuse::Node_typeof(), offsetof(::g::Fuse::Triggers::Actions::TriggerAction, _TargetNode), 0);
    return type;
}

// protected generated TriggerAction() :433
void TriggerAction__ctor__fn(TriggerAction* __this)
{
    __this->ctor_();
}

// public float get_Delay() :460
void TriggerAction__get_Delay_fn(TriggerAction* __this, float* __retval)
{
    *__retval = __this->Delay();
}

// public void set_Delay(float value) :461
void TriggerAction__set_Delay_fn(TriggerAction* __this, float* value)
{
    __this->Delay(*value);
}

// public Fuse.Triggers.Actions.TriggerDirection get_Direction() :438
void TriggerAction__get_Direction_fn(TriggerAction* __this, int* __retval)
{
    *__retval = __this->Direction();
}

// public void set_Direction(Fuse.Triggers.Actions.TriggerDirection value) :439
void TriggerAction__set_Direction_fn(TriggerAction* __this, int* value)
{
    __this->Direction(*value);
}

// public bool get_IsActive() :476
void TriggerAction__get_IsActive_fn(TriggerAction* __this, bool* __retval)
{
    *__retval = __this->IsActive();
}

// public void set_IsActive(bool value) :477
void TriggerAction__set_IsActive_fn(TriggerAction* __this, bool* value)
{
    __this->IsActive(*value);
}

// public bool get_IsProgressTriggered() :470
void TriggerAction__get_IsProgressTriggered_fn(TriggerAction* __this, bool* __retval)
{
    *__retval = __this->IsProgressTriggered();
}

// public void PerformFromNode(Fuse.Node target) :489
void TriggerAction__PerformFromNode_fn(TriggerAction* __this, ::g::Fuse::Node* target)
{
    __this->PerformFromNode(target);
}

// public float ProgressWhen(float totalDuration) :480
void TriggerAction__ProgressWhen_fn(TriggerAction* __this, float* totalDuration, float* __retval)
{
    *__retval = __this->ProgressWhen(*totalDuration);
}

// public generated Fuse.Node get_TargetNode() :442
void TriggerAction__get_TargetNode_fn(TriggerAction* __this, ::g::Fuse::Node** __retval)
{
    *__retval = __this->TargetNode();
}

// public generated void set_TargetNode(Fuse.Node value) :442
void TriggerAction__set_TargetNode_fn(TriggerAction* __this, ::g::Fuse::Node* value)
{
    __this->TargetNode(value);
}

// protected generated TriggerAction() [instance] :433
void TriggerAction::ctor_()
{
    _isActive = true;
}

// public float get_Delay() [instance] :460
float TriggerAction::Delay()
{
    return _delay;
}

// public void set_Delay(float value) [instance] :461
void TriggerAction::Delay(float value)
{
    _hasDelay = true;
    _delay = value;
}

// public Fuse.Triggers.Actions.TriggerDirection get_Direction() [instance] :438
int TriggerAction::Direction()
{
    return _direction;
}

// public void set_Direction(Fuse.Triggers.Actions.TriggerDirection value) [instance] :439
void TriggerAction::Direction(int value)
{
    _direction = value;
}

// public bool get_IsActive() [instance] :476
bool TriggerAction::IsActive()
{
    return _isActive;
}

// public void set_IsActive(bool value) [instance] :477
void TriggerAction::IsActive(bool value)
{
    _isActive = value;
}

// public bool get_IsProgressTriggered() [instance] :470
bool TriggerAction::IsProgressTriggered()
{
    return _hasProgress || _hasDelay;
}

// public void PerformFromNode(Fuse.Node target) [instance] :489
void TriggerAction::PerformFromNode(::g::Fuse::Node* target)
{
    ::g::Fuse::Node* ind1;

    if (IsActive())
        Perform((ind1 = TargetNode(), (ind1 != NULL) ? ind1 : target));
}

// public float ProgressWhen(float totalDuration) [instance] :480
float TriggerAction::ProgressWhen(float totalDuration)
{
    if (_hasProgress)
        return _progress;

    if (_hasDelay)
        return _delay / totalDuration;

    return 0.0f;
}

// public generated Fuse.Node get_TargetNode() [instance] :442
::g::Fuse::Node* TriggerAction::TargetNode()
{
    return _TargetNode;
}

// public generated void set_TargetNode(Fuse.Node value) [instance] :442
void TriggerAction::TargetNode(::g::Fuse::Node* value)
{
    _TargetNode = value;
}
// }

// /usr/local/share/uno/Packages/Fuse.Triggers/0.27.10/Actions/$.uno#9
// -------------------------------------------------------------------

// public enum TriggerDirection :426
uEnumType* TriggerDirection_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Fuse.Triggers.Actions.TriggerDirection", ::g::Uno::Int_typeof(), 3);
    type->SetLiterals(
        "Forward", 0LL,
        "Backward", 1LL,
        "Both", 2LL);
    return type;
}

// /usr/local/share/uno/Packages/Fuse.UserEvents/0.27.10/$.uno#1
// -------------------------------------------------------------

// public sealed class UserEventArg :142
// {
uType* UserEventArg_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.ObjectSize = sizeof(UserEventArg);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Triggers.Actions.UserEventArg", options);
    type->SetFields(0,
        ::g::Uno::String_typeof(), offsetof(::g::Fuse::Triggers::Actions::UserEventArg, _Name), 0,
        uObject_typeof(), offsetof(::g::Fuse::Triggers::Actions::UserEventArg, _Value), 0);
    return type;
}

// public generated string get_Name() :144
void UserEventArg__get_Name_fn(UserEventArg* __this, uString** __retval)
{
    *__retval = __this->Name();
}

// private generated void set_Name(string value) :144
void UserEventArg__set_Name_fn(UserEventArg* __this, uString* value)
{
    __this->Name(value);
}

// public generated object get_Value() :152
void UserEventArg__get_Value_fn(UserEventArg* __this, uObject** __retval)
{
    *__retval = __this->Value();
}

// public generated void set_Value(object value) :152
void UserEventArg__set_Value_fn(UserEventArg* __this, uObject* value)
{
    __this->Value(value);
}

// public generated string get_Name() [instance] :144
uString* UserEventArg::Name()
{
    return _Name;
}

// private generated void set_Name(string value) [instance] :144
void UserEventArg::Name(uString* value)
{
    _Name = value;
}

// public generated object get_Value() [instance] :152
uObject* UserEventArg::Value()
{
    return _Value;
}

// public generated void set_Value(object value) [instance] :152
void UserEventArg::Value(uObject* value)
{
    _Value = value;
}
// }

// /usr/local/share/uno/Packages/Fuse.Controls/0.27.10/WebView/$.uno#3
// -------------------------------------------------------------------

// internal abstract class WebViewNavAction :177
// {
WebViewNavAction_type* WebViewNavAction_typeof()
{
    static uSStrong<WebViewNavAction_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 7;
    options.ObjectSize = sizeof(WebViewNavAction);
    options.TypeSize = sizeof(WebViewNavAction_type);
    type = (WebViewNavAction_type*)uClassType::New("Fuse.Triggers.Actions.WebViewNavAction", options);
    type->SetBase(::g::Fuse::Triggers::Actions::TriggerAction_typeof());
    type->fp_Perform = (void(*)(::g::Fuse::Triggers::Actions::TriggerAction*, ::g::Fuse::Node*))WebViewNavAction__Perform_fn;
    ::TYPES[24] = ::g::Fuse::Node_typeof()->MakeMethod(1, ::g::Fuse::Controls::IWebView_typeof());
    type->SetFields(7);
    return type;
}

// protected override sealed void Perform(Fuse.Node target) :179
void WebViewNavAction__Perform_fn(WebViewNavAction* __this, ::g::Fuse::Node* target)
{
    uObject* webView = (uObject*)uPtr(target)->FindByType(::TYPES[24/*Fuse.Node.FindByType<Fuse.Controls.IWebView>*/]);

    if (webView != NULL)
        __this->Execute(webView);
}
// }

}}}} // ::g::Fuse::Triggers::Actions
