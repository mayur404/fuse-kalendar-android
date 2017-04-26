package com.fuse;

import java.util.List;
import java.util.HashMap;
import java.util.ArrayList;
import android.content.Intent;

public final class Activity
{
    public static android.app.Activity getRootActivity()
    {
        return com.littleboat.kalendar.kal.GetRootActivity();
    }

    // - - - - - - - - - - - - - - - - - - - - - - - -

    public interface LifecycleListener extends com.littleboat.kalendar.ActivityState.AndroidLifecycleListener {}

    public static void subscribeToLifecycleChange(LifecycleListener listener)
	{
        com.littleboat.kalendar.kal activity = (com.littleboat.kalendar.kal)getRootActivity();
        activity.activityState.SubscribeToLifecycleChange(listener);
	}

	public static void unsubscribeFromLifecycleChange(LifecycleListener listener)
	{
        com.littleboat.kalendar.kal activity = (com.littleboat.kalendar.kal)getRootActivity();
        activity.activityState.SubscribeToLifecycleChange(listener);
	}

    // - - - - - - - - - - - - - - - - - - - - - - - -

    public interface ResultListener
    {
        boolean onResult (int requestCode, int resultCode, Intent data);
    }

    private static final ArrayList<ResultListener> _resultListeners = new ArrayList<ResultListener>();

    public static void subscribeToResults(ResultListener listener)
	{
		_resultListeners.add(listener);
	}
	public static void unsubscribeFromResults(ResultListener listener)
	{
		_resultListeners.remove(listener);
	}

    public static void _onActivityResult(int requestCode, int resultCode, Intent data)
    {
        for (int i=0; i<_resultListeners.size(); i++) {
            if (_resultListeners.get(i).onResult(requestCode, resultCode, data))
                break;
        }
    }

        // - - - - - - - - - - - - - - - - - - - - - - - -

    public interface IntentListener
    {
        void onIntent (Intent newIntent);
    }

    private static final HashMap<String, ArrayList<IntentListener>> _intentListeners = new HashMap<String, ArrayList<IntentListener>>();

    public static void subscribeToIntents(IntentListener listener, String actionName)
	{
		if (!_intentListeners.containsKey(actionName))
            _intentListeners.put(actionName, new ArrayList<IntentListener>());
        ArrayList<IntentListener> l = _intentListeners.get(actionName);
        if (!l.contains(listener))
            l.add(listener);
	}
	public static void unsubscribeFromIntents(IntentListener toRemove)
	{
        for (List<IntentListener> listeners : _intentListeners.values()) {
            if (listeners.contains(toRemove))
                listeners.remove(toRemove);
        }
	}

    public static void _onActivityIntent(Intent newIntent)
    {
        String action = newIntent.getAction();
        if (_intentListeners.containsKey(action)) {
            ArrayList<IntentListener> l = _intentListeners.get(action);
            for (IntentListener x : l) {
                x.onIntent(newIntent);
            }
        }
    }
}
