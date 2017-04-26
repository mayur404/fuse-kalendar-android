sealed class kal_FuseReactiveEach_Items_Property: Uno.UX.Property<object>
{
    Fuse.Reactive.Each _obj;
    public kal_FuseReactiveEach_Items_Property(Fuse.Reactive.Each obj) { _obj = obj;  }
    protected override object OnGet() { return _obj.Items; }
    protected override void OnSet(object v, object origin) { _obj.Items = v; }
}
sealed class kal_FuseControlsText_Value_Property: Uno.UX.Property<string>
{
    Fuse.Controls.Text _obj;
    public kal_FuseControlsText_Value_Property(Fuse.Controls.Text obj) { _obj = obj; obj.ValueChanged += this.OnValueChanged; }
    protected override string OnGet() { return _obj.Value; }
    protected override void OnSet(string v, object origin) { _obj.SetValue(v, origin); }
    protected override void OnAddListener(Uno.UX.ValueChangedHandler<string> listener) { _obj.ValueChanged += listener; }
    protected override void OnRemoveListener(Uno.UX.ValueChangedHandler<string> listener) { _obj.ValueChanged -= listener; }
}
sealed class kal_FuseReactiveMatch_Value_Property: Uno.UX.Property<object>
{
    Fuse.Reactive.Match _obj;
    public kal_FuseReactiveMatch_Value_Property(Fuse.Reactive.Match obj) { _obj = obj;  }
    protected override object OnGet() { return _obj.Value; }
    protected override void OnSet(object v, object origin) { _obj.Value = v; }
}
sealed class kal_FuseControlsPanel_Opacity_Property: Uno.UX.Property<float>
{
    Fuse.Controls.Panel _obj;
    public kal_FuseControlsPanel_Opacity_Property(Fuse.Controls.Panel obj) { _obj = obj;  }
    protected override float OnGet() { return _obj.Opacity; }
    protected override void OnSet(float v, object origin) { _obj.Opacity = v; }
}
sealed class kal_FuseTriggersStateGroup_Active_Property: Uno.UX.Property<Fuse.Triggers.State>
{
    Fuse.Triggers.StateGroup _obj;
    public kal_FuseTriggersStateGroup_Active_Property(Fuse.Triggers.StateGroup obj) { _obj = obj;  }
    protected override Fuse.Triggers.State OnGet() { return _obj.Active; }
    protected override void OnSet(Fuse.Triggers.State v, object origin) { _obj.Active = v; }
}
sealed class kal_FuseControlsPanel_Background_Property: Uno.UX.Property<Fuse.Drawing.Brush>
{
    Fuse.Controls.Panel _obj;
    public kal_FuseControlsPanel_Background_Property(Fuse.Controls.Panel obj) { _obj = obj;  }
    protected override Fuse.Drawing.Brush OnGet() { return _obj.Background; }
    protected override void OnSet(Fuse.Drawing.Brush v, object origin) { _obj.Background = v; }
}
sealed class kal_FuseControlsStackPanel_Opacity_Property: Uno.UX.Property<float>
{
    Fuse.Controls.StackPanel _obj;
    public kal_FuseControlsStackPanel_Opacity_Property(Fuse.Controls.StackPanel obj) { _obj = obj;  }
    protected override float OnGet() { return _obj.Opacity; }
    protected override void OnSet(float v, object origin) { _obj.Opacity = v; }
}
sealed class kal_FuseControlsScrollView_IsEnabled_Property: Uno.UX.Property<bool>
{
    Fuse.Controls.ScrollView _obj;
    public kal_FuseControlsScrollView_IsEnabled_Property(Fuse.Controls.ScrollView obj) { _obj = obj;  }
    protected override bool OnGet() { return _obj.IsEnabled; }
    protected override void OnSet(bool v, object origin) { _obj.IsEnabled = v; }
}
