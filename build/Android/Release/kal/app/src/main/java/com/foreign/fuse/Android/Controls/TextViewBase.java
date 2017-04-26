package com.foreign.Fuse.Android.Controls;

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

public class TextViewBase
{
    static void debug_log(Object message)
    {
        android.util.Log.d("kal", (message==null ? "null" : message.toString()));
    }

    public static void SetTypeface55(final Object textViewHandle,final Object typefaceHandle)
    {
        android.widget.TextView textView = (android.widget.TextView)textViewHandle;
        android.graphics.Typeface typeface = (android.graphics.Typeface)typefaceHandle;
        textView.setTypeface(typeface);
    }
    
}
