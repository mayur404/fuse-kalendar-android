using Uno;
using Uno.Collections;
using Fuse;
using Fuse.Scripting;
using Fuse.Reactive;
using Uno.Compiler.ExportTargetInterop;


using Android.android.app;
using Android.android.provider;
using Android.android.content;
using Android.android.widget;
using Android.java.util;
using Android.java.lang;

public class SystemSounds : NativeModule
{


	public SystemSounds()
	{

		AddMember(new NativeFunction("addEventOther",(NativeCallback)AddEventOther));
		AddMember(new NativeFunction("toastIt",(NativeCallback)ToastIt));
	}


		object AddEventOther(Fuse.Scripting.Context c,object[] args)
    {

					if defined(Android){
					debug_log("Inside Add Event");
					string year = args[0] as string;
					string month = args[1] as string;
					string day = args[2] as string;
					string title = args[3] as string;
					int yearInt = 2016;
					int monthInt = 1;
					int dayInt = 1;

					yearInt = Integer.parseInt(year);
					monthInt = Integer.parseInt(month);
					dayInt = Integer.parseInt(day);


			        Android.java.util.Calendar cal = Android.java.util.Calendar.getInstance();
							cal.set(yearInt,monthInt,dayInt,9,00);
			        Android.android.content.Intent intent = new Android.android.content.Intent(Android.android.content.Intent.ACTION_EDIT);
							intent.setType("vnd.android.cursor.item/event");
						  intent.putExtra("beginTime", cal.getTimeInMillis());
						  intent.putExtra("allDay", true);
					    intent.putExtra("endTime", cal.getTimeInMillis()+60*60*500);
					 	  intent.putExtra("title", title);
							intent.addFlags(Android.android.content.Intent.FLAG_ACTIVITY_NEW_TASK);
							Activity.GetAppActivity().getApplication().getApplicationContext().startActivity(intent);

			    }​
			    return null;
			}

			string m_text;
​
	    object ToastIt(Fuse.Scripting.Context c, object[] args)
	    {
	        m_text = args[0] as string;
	        if defined(Android)
	        {
	            UpdateManager.PostAction(ToastMakeText);
	        }
	        return null;
	    }
	    extern(Android)
	    public void ToastMakeText() {
	        Android.java.lang.String myCs = m_text;
	        var context = Activity.GetAppActivity().getApplication().getApplicationContext();
	        Toast.makeText( context, myCs, Toast.LENGTH_LONG).show();
	    }



}
