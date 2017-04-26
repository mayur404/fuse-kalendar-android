package com.foreign.Fuse.Controls;

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

public class AndroidHelpers
{
    static void debug_log(Object message)
    {
        android.util.Log.d("kal", (message==null ? "null" : message.toString()));
    }

    public static int GetNavigationBarWidth30()
    {
        android.content.Context c = com.littleboat.kalendar.kal.GetRootActivity();
        android.content.res.Resources r = c.getResources();
        
        boolean navigationBarVisible = false;
        
        int showNavigationBarId = r.getIdentifier("config_showNavigationBar", "bool", "android");
        if (showNavigationBarId > 0)
        	navigationBarVisible = r.getBoolean(showNavigationBarId);
        else
        {
        	boolean hasMenuKey = android.view.ViewConfiguration.get(c).hasPermanentMenuKey();
        	boolean hasBackKey = android.view.KeyCharacterMap.deviceHasKey(android.view.KeyEvent.KEYCODE_BACK);
        
        	navigationBarVisible = !hasMenuKey || !hasBackKey;
        }
        
        if (navigationBarVisible)
        {
        	int navigationBarWidthId = r.getIdentifier("navigation_bar_width", "dimen", "android");
        	if (navigationBarWidthId > 0)
        		return r.getDimensionPixelSize(navigationBarWidthId);
        }
        
        return 0;
    }
    
    public static boolean IsDisplayLandscape31()
    {
        android.content.Context context = com.littleboat.kalendar.kal.GetRootActivity();
        android.content.res.Configuration config = context.getResources().getConfiguration();
        return config.orientation == android.content.res.Configuration.ORIENTATION_LANDSCAPE;
    }
    
}
