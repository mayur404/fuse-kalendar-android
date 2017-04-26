package com.foreign.Fuse.Android;

// fuse defined imports
import com.uno.UnoObject;
import com.uno.BoolArray;
import com.uno.ByteArray;
import com.uno.CharArray;
import com.uno.DoubleArray;
import com.uno.FloatArray;
import com.uno.IntArray;
import com.uno.LongArray;
import com.uno.ObjectArray;
import com.uno.ShortArray;
import com.uno.StringArray;
import com.Bindings.UnoHelper;
import com.Bindings.UnoWrapped;
import com.Bindings.ExternedBlockHost;

public class StatusBarConfig
{
    static void debug_log(Object message)
    {
        android.util.Log.d("kal", (message==null ? "null" : message.toString()));
    }

    public static void SetNavigationBarVisible80(final Object _this, final boolean visible)
    {
        if (android.os.Build.VERSION.SDK_INT >= android.os.Build.VERSION_CODES.KITKAT)
        {
        	android.view.View decorView = com.littleboat.kalendar.kal.GetRootActivity().getWindow().getDecorView();
        
        	int uiOptions = decorView.getSystemUiVisibility();
        
        	if (visible)
        	{
        		uiOptions &= ~(android.view.View.SYSTEM_UI_FLAG_HIDE_NAVIGATION | android.view.View.SYSTEM_UI_FLAG_IMMERSIVE_STICKY);
        	}
        	else
        	{
        		uiOptions |= android.view.View.SYSTEM_UI_FLAG_HIDE_NAVIGATION | android.view.View.SYSTEM_UI_FLAG_IMMERSIVE_STICKY;
        	}
        
        	decorView.setSystemUiVisibility(uiOptions);
        }
    }
    
    public static void SetStatusBarColor181(final Object _this, final int color)
    {
        android.view.Window window = com.littleboat.kalendar.kal.GetRootActivity().getWindow();
        if (Integer.valueOf(android.os.Build.VERSION.SDK) >= 21)
        {
        	window.setStatusBarColor(color);
        }
    }
    
    public static void SetStatusBarVisible82(final Object _this, final boolean visible)
    {
        android.view.Window window = com.littleboat.kalendar.kal.GetRootActivity().getWindow();
        
        if (!visible)
        {
        	window.setFlags(
        		android.view.WindowManager.LayoutParams.FLAG_FULLSCREEN,
        		android.view.WindowManager.LayoutParams.FLAG_FULLSCREEN);
        }
        else
        {
        	window.clearFlags(
        		android.view.WindowManager.LayoutParams.FLAG_FULLSCREEN);
        }
    }
    
}
