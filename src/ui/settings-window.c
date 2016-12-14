/* settings-window.c generated by valac 0.34.3, the Vala compiler
 * generated from settings-window.vala, do not modify */

/* This file is part of Gradio.
 *
 * Gradio is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * Gradio is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with Gradio.  If not, see <http://www.gnu.org/licenses/>.
 */

#include <glib.h>
#include <glib-object.h>
#include <gtk/gtk.h>


#define GRADIO_TYPE_SETTINGS_WINDOW (gradio_settings_window_get_type ())
#define GRADIO_SETTINGS_WINDOW(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), GRADIO_TYPE_SETTINGS_WINDOW, GradioSettingsWindow))
#define GRADIO_SETTINGS_WINDOW_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), GRADIO_TYPE_SETTINGS_WINDOW, GradioSettingsWindowClass))
#define GRADIO_IS_SETTINGS_WINDOW(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), GRADIO_TYPE_SETTINGS_WINDOW))
#define GRADIO_IS_SETTINGS_WINDOW_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), GRADIO_TYPE_SETTINGS_WINDOW))
#define GRADIO_SETTINGS_WINDOW_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), GRADIO_TYPE_SETTINGS_WINDOW, GradioSettingsWindowClass))

typedef struct _GradioSettingsWindow GradioSettingsWindow;
typedef struct _GradioSettingsWindowClass GradioSettingsWindowClass;
typedef struct _GradioSettingsWindowPrivate GradioSettingsWindowPrivate;
#define _g_object_unref0(var) ((var == NULL) ? NULL : (var = (g_object_unref (var), NULL)))

struct _GradioSettingsWindow {
	GtkDialog parent_instance;
	GradioSettingsWindowPrivate * priv;
};

struct _GradioSettingsWindowClass {
	GtkDialogClass parent_class;
};

struct _GradioSettingsWindowPrivate {
	GtkCheckButton* EnableNotifications;
	GtkCheckButton* EnableMPRIS;
	GtkCheckButton* UseDarkDesign;
	GtkCheckButton* EnableBackgroundPlayback;
	GtkCheckButton* EnableMinimizeToTray;
	GtkCheckButton* ShowLanguagesC;
	GtkCheckButton* ShowCodecsC;
	GtkCheckButton* ShowCountriesC;
	GtkCheckButton* ShowTagsC;
	GtkCheckButton* ShowStatesC;
	GtkCheckButton* ShowStationIcons;
	GtkCheckButton* HideBrokenStations;
	GtkCheckButton* ResumePlaybackOnStartup;
};


static gpointer gradio_settings_window_parent_class = NULL;

GType gradio_settings_window_get_type (void) G_GNUC_CONST;
#define GRADIO_SETTINGS_WINDOW_GET_PRIVATE(o) (G_TYPE_INSTANCE_GET_PRIVATE ((o), GRADIO_TYPE_SETTINGS_WINDOW, GradioSettingsWindowPrivate))
enum  {
	GRADIO_SETTINGS_WINDOW_DUMMY_PROPERTY
};
GradioSettingsWindow* gradio_settings_window_new (void);
GradioSettingsWindow* gradio_settings_window_construct (GType object_type);
static void gradio_settings_window_load_settings (GradioSettingsWindow* self);
static void __lambda82_ (GradioSettingsWindow* self);
gboolean gradio_settings_get_show_notifications (void);
void gradio_settings_set_show_notifications (gboolean value);
static void ___lambda82__gtk_toggle_button_toggled (GtkToggleButton* _sender, gpointer self);
static void __lambda83_ (GradioSettingsWindow* self);
gboolean gradio_settings_get_enable_mpris (void);
void gradio_settings_set_enable_mpris (gboolean value);
static void ___lambda83__gtk_toggle_button_toggled (GtkToggleButton* _sender, gpointer self);
static void __lambda84_ (GradioSettingsWindow* self);
gboolean gradio_settings_get_enable_dark_design (void);
void gradio_settings_set_enable_dark_design (gboolean value);
static void ___lambda84__gtk_toggle_button_toggled (GtkToggleButton* _sender, gpointer self);
static void __lambda85_ (GradioSettingsWindow* self);
gboolean gradio_settings_get_enable_background_playback (void);
void gradio_settings_set_enable_background_playback (gboolean value);
static void ___lambda85__gtk_toggle_button_toggled (GtkToggleButton* _sender, gpointer self);
static void __lambda86_ (GradioSettingsWindow* self);
gboolean gradio_settings_get_enable_close_to_tray (void);
void gradio_settings_set_enable_close_to_tray (gboolean value);
static void ___lambda86__gtk_toggle_button_toggled (GtkToggleButton* _sender, gpointer self);
static void __lambda87_ (GradioSettingsWindow* self);
gboolean gradio_settings_get_show_languages_c (void);
void gradio_settings_set_show_languages_c (gboolean value);
static void ___lambda87__gtk_toggle_button_toggled (GtkToggleButton* _sender, gpointer self);
static void __lambda88_ (GradioSettingsWindow* self);
gboolean gradio_settings_get_show_codecs_c (void);
void gradio_settings_set_show_codecs_c (gboolean value);
static void ___lambda88__gtk_toggle_button_toggled (GtkToggleButton* _sender, gpointer self);
static void __lambda89_ (GradioSettingsWindow* self);
gboolean gradio_settings_get_show_countries_c (void);
void gradio_settings_set_show_countries_c (gboolean value);
static void ___lambda89__gtk_toggle_button_toggled (GtkToggleButton* _sender, gpointer self);
static void __lambda90_ (GradioSettingsWindow* self);
gboolean gradio_settings_get_show_tags_c (void);
void gradio_settings_set_show_tags_c (gboolean value);
static void ___lambda90__gtk_toggle_button_toggled (GtkToggleButton* _sender, gpointer self);
static void __lambda91_ (GradioSettingsWindow* self);
gboolean gradio_settings_get_show_states_c (void);
void gradio_settings_set_show_states_c (gboolean value);
static void ___lambda91__gtk_toggle_button_toggled (GtkToggleButton* _sender, gpointer self);
static void __lambda92_ (GradioSettingsWindow* self);
gboolean gradio_settings_get_show_station_icons (void);
void gradio_settings_set_show_station_icons (gboolean value);
static void ___lambda92__gtk_toggle_button_toggled (GtkToggleButton* _sender, gpointer self);
static void __lambda93_ (GradioSettingsWindow* self);
gboolean gradio_settings_get_hide_broken_stations (void);
void gradio_settings_set_hide_broken_stations (gboolean value);
static void ___lambda93__gtk_toggle_button_toggled (GtkToggleButton* _sender, gpointer self);
static void __lambda94_ (GradioSettingsWindow* self);
gboolean gradio_settings_get_resume_playback_on_startup (void);
void gradio_settings_set_resume_playback_on_startup (gboolean value);
static void ___lambda94__gtk_toggle_button_toggled (GtkToggleButton* _sender, gpointer self);
static void gradio_settings_window_finalize (GObject* obj);


static void __lambda82_ (GradioSettingsWindow* self) {
	gboolean _tmp0_ = FALSE;
	gboolean _tmp1_ = FALSE;
	GtkCheckButton* _tmp2_ = NULL;
	gboolean _tmp3_ = FALSE;
	_tmp0_ = gradio_settings_get_show_notifications ();
	_tmp1_ = _tmp0_;
	_tmp2_ = self->priv->EnableNotifications;
	_tmp3_ = gtk_toggle_button_get_active ((GtkToggleButton*) _tmp2_);
	gradio_settings_set_show_notifications (_tmp3_);
}


static void ___lambda82__gtk_toggle_button_toggled (GtkToggleButton* _sender, gpointer self) {
	__lambda82_ ((GradioSettingsWindow*) self);
}


static void __lambda83_ (GradioSettingsWindow* self) {
	gboolean _tmp0_ = FALSE;
	gboolean _tmp1_ = FALSE;
	GtkCheckButton* _tmp2_ = NULL;
	gboolean _tmp3_ = FALSE;
	_tmp0_ = gradio_settings_get_enable_mpris ();
	_tmp1_ = _tmp0_;
	_tmp2_ = self->priv->EnableMPRIS;
	_tmp3_ = gtk_toggle_button_get_active ((GtkToggleButton*) _tmp2_);
	gradio_settings_set_enable_mpris (_tmp3_);
}


static void ___lambda83__gtk_toggle_button_toggled (GtkToggleButton* _sender, gpointer self) {
	__lambda83_ ((GradioSettingsWindow*) self);
}


static void __lambda84_ (GradioSettingsWindow* self) {
	gboolean _tmp0_ = FALSE;
	gboolean _tmp1_ = FALSE;
	GtkCheckButton* _tmp2_ = NULL;
	gboolean _tmp3_ = FALSE;
	_tmp0_ = gradio_settings_get_enable_dark_design ();
	_tmp1_ = _tmp0_;
	_tmp2_ = self->priv->UseDarkDesign;
	_tmp3_ = gtk_toggle_button_get_active ((GtkToggleButton*) _tmp2_);
	gradio_settings_set_enable_dark_design (_tmp3_);
}


static void ___lambda84__gtk_toggle_button_toggled (GtkToggleButton* _sender, gpointer self) {
	__lambda84_ ((GradioSettingsWindow*) self);
}


static void __lambda85_ (GradioSettingsWindow* self) {
	gboolean _tmp0_ = FALSE;
	gboolean _tmp1_ = FALSE;
	GtkCheckButton* _tmp2_ = NULL;
	gboolean _tmp3_ = FALSE;
	_tmp0_ = gradio_settings_get_enable_background_playback ();
	_tmp1_ = _tmp0_;
	_tmp2_ = self->priv->EnableBackgroundPlayback;
	_tmp3_ = gtk_toggle_button_get_active ((GtkToggleButton*) _tmp2_);
	gradio_settings_set_enable_background_playback (_tmp3_);
}


static void ___lambda85__gtk_toggle_button_toggled (GtkToggleButton* _sender, gpointer self) {
	__lambda85_ ((GradioSettingsWindow*) self);
}


static void __lambda86_ (GradioSettingsWindow* self) {
	gboolean _tmp0_ = FALSE;
	gboolean _tmp1_ = FALSE;
	GtkCheckButton* _tmp2_ = NULL;
	gboolean _tmp3_ = FALSE;
	_tmp0_ = gradio_settings_get_enable_close_to_tray ();
	_tmp1_ = _tmp0_;
	_tmp2_ = self->priv->EnableMinimizeToTray;
	_tmp3_ = gtk_toggle_button_get_active ((GtkToggleButton*) _tmp2_);
	gradio_settings_set_enable_close_to_tray (_tmp3_);
}


static void ___lambda86__gtk_toggle_button_toggled (GtkToggleButton* _sender, gpointer self) {
	__lambda86_ ((GradioSettingsWindow*) self);
}


static void __lambda87_ (GradioSettingsWindow* self) {
	gboolean _tmp0_ = FALSE;
	gboolean _tmp1_ = FALSE;
	GtkCheckButton* _tmp2_ = NULL;
	gboolean _tmp3_ = FALSE;
	_tmp0_ = gradio_settings_get_show_languages_c ();
	_tmp1_ = _tmp0_;
	_tmp2_ = self->priv->ShowLanguagesC;
	_tmp3_ = gtk_toggle_button_get_active ((GtkToggleButton*) _tmp2_);
	gradio_settings_set_show_languages_c (_tmp3_);
}


static void ___lambda87__gtk_toggle_button_toggled (GtkToggleButton* _sender, gpointer self) {
	__lambda87_ ((GradioSettingsWindow*) self);
}


static void __lambda88_ (GradioSettingsWindow* self) {
	gboolean _tmp0_ = FALSE;
	gboolean _tmp1_ = FALSE;
	GtkCheckButton* _tmp2_ = NULL;
	gboolean _tmp3_ = FALSE;
	_tmp0_ = gradio_settings_get_show_codecs_c ();
	_tmp1_ = _tmp0_;
	_tmp2_ = self->priv->ShowCodecsC;
	_tmp3_ = gtk_toggle_button_get_active ((GtkToggleButton*) _tmp2_);
	gradio_settings_set_show_codecs_c (_tmp3_);
}


static void ___lambda88__gtk_toggle_button_toggled (GtkToggleButton* _sender, gpointer self) {
	__lambda88_ ((GradioSettingsWindow*) self);
}


static void __lambda89_ (GradioSettingsWindow* self) {
	gboolean _tmp0_ = FALSE;
	gboolean _tmp1_ = FALSE;
	GtkCheckButton* _tmp2_ = NULL;
	gboolean _tmp3_ = FALSE;
	_tmp0_ = gradio_settings_get_show_countries_c ();
	_tmp1_ = _tmp0_;
	_tmp2_ = self->priv->ShowCountriesC;
	_tmp3_ = gtk_toggle_button_get_active ((GtkToggleButton*) _tmp2_);
	gradio_settings_set_show_countries_c (_tmp3_);
}


static void ___lambda89__gtk_toggle_button_toggled (GtkToggleButton* _sender, gpointer self) {
	__lambda89_ ((GradioSettingsWindow*) self);
}


static void __lambda90_ (GradioSettingsWindow* self) {
	gboolean _tmp0_ = FALSE;
	gboolean _tmp1_ = FALSE;
	GtkCheckButton* _tmp2_ = NULL;
	gboolean _tmp3_ = FALSE;
	_tmp0_ = gradio_settings_get_show_tags_c ();
	_tmp1_ = _tmp0_;
	_tmp2_ = self->priv->ShowTagsC;
	_tmp3_ = gtk_toggle_button_get_active ((GtkToggleButton*) _tmp2_);
	gradio_settings_set_show_tags_c (_tmp3_);
}


static void ___lambda90__gtk_toggle_button_toggled (GtkToggleButton* _sender, gpointer self) {
	__lambda90_ ((GradioSettingsWindow*) self);
}


static void __lambda91_ (GradioSettingsWindow* self) {
	gboolean _tmp0_ = FALSE;
	gboolean _tmp1_ = FALSE;
	GtkCheckButton* _tmp2_ = NULL;
	gboolean _tmp3_ = FALSE;
	_tmp0_ = gradio_settings_get_show_states_c ();
	_tmp1_ = _tmp0_;
	_tmp2_ = self->priv->ShowStatesC;
	_tmp3_ = gtk_toggle_button_get_active ((GtkToggleButton*) _tmp2_);
	gradio_settings_set_show_states_c (_tmp3_);
}


static void ___lambda91__gtk_toggle_button_toggled (GtkToggleButton* _sender, gpointer self) {
	__lambda91_ ((GradioSettingsWindow*) self);
}


static void __lambda92_ (GradioSettingsWindow* self) {
	gboolean _tmp0_ = FALSE;
	gboolean _tmp1_ = FALSE;
	GtkCheckButton* _tmp2_ = NULL;
	gboolean _tmp3_ = FALSE;
	_tmp0_ = gradio_settings_get_show_station_icons ();
	_tmp1_ = _tmp0_;
	_tmp2_ = self->priv->ShowStationIcons;
	_tmp3_ = gtk_toggle_button_get_active ((GtkToggleButton*) _tmp2_);
	gradio_settings_set_show_station_icons (_tmp3_);
}


static void ___lambda92__gtk_toggle_button_toggled (GtkToggleButton* _sender, gpointer self) {
	__lambda92_ ((GradioSettingsWindow*) self);
}


static void __lambda93_ (GradioSettingsWindow* self) {
	gboolean _tmp0_ = FALSE;
	gboolean _tmp1_ = FALSE;
	GtkCheckButton* _tmp2_ = NULL;
	gboolean _tmp3_ = FALSE;
	_tmp0_ = gradio_settings_get_hide_broken_stations ();
	_tmp1_ = _tmp0_;
	_tmp2_ = self->priv->HideBrokenStations;
	_tmp3_ = gtk_toggle_button_get_active ((GtkToggleButton*) _tmp2_);
	gradio_settings_set_hide_broken_stations (_tmp3_);
}


static void ___lambda93__gtk_toggle_button_toggled (GtkToggleButton* _sender, gpointer self) {
	__lambda93_ ((GradioSettingsWindow*) self);
}


static void __lambda94_ (GradioSettingsWindow* self) {
	gboolean _tmp0_ = FALSE;
	gboolean _tmp1_ = FALSE;
	GtkCheckButton* _tmp2_ = NULL;
	gboolean _tmp3_ = FALSE;
	_tmp0_ = gradio_settings_get_resume_playback_on_startup ();
	_tmp1_ = _tmp0_;
	_tmp2_ = self->priv->ResumePlaybackOnStartup;
	_tmp3_ = gtk_toggle_button_get_active ((GtkToggleButton*) _tmp2_);
	gradio_settings_set_resume_playback_on_startup (_tmp3_);
}


static void ___lambda94__gtk_toggle_button_toggled (GtkToggleButton* _sender, gpointer self) {
	__lambda94_ ((GradioSettingsWindow*) self);
}


GradioSettingsWindow* gradio_settings_window_construct (GType object_type) {
	GradioSettingsWindow * self = NULL;
	GtkCheckButton* _tmp0_ = NULL;
	GtkCheckButton* _tmp1_ = NULL;
	GtkCheckButton* _tmp2_ = NULL;
	GtkCheckButton* _tmp3_ = NULL;
	GtkCheckButton* _tmp4_ = NULL;
	GtkCheckButton* _tmp5_ = NULL;
	GtkCheckButton* _tmp6_ = NULL;
	GtkCheckButton* _tmp7_ = NULL;
	GtkCheckButton* _tmp8_ = NULL;
	GtkCheckButton* _tmp9_ = NULL;
	GtkCheckButton* _tmp10_ = NULL;
	GtkCheckButton* _tmp11_ = NULL;
	GtkCheckButton* _tmp12_ = NULL;
	self = (GradioSettingsWindow*) g_object_new (object_type, NULL);
	gradio_settings_window_load_settings (self);
	_tmp0_ = self->priv->EnableNotifications;
	g_signal_connect_object ((GtkToggleButton*) _tmp0_, "toggled", (GCallback) ___lambda82__gtk_toggle_button_toggled, self, 0);
	_tmp1_ = self->priv->EnableMPRIS;
	g_signal_connect_object ((GtkToggleButton*) _tmp1_, "toggled", (GCallback) ___lambda83__gtk_toggle_button_toggled, self, 0);
	_tmp2_ = self->priv->UseDarkDesign;
	g_signal_connect_object ((GtkToggleButton*) _tmp2_, "toggled", (GCallback) ___lambda84__gtk_toggle_button_toggled, self, 0);
	_tmp3_ = self->priv->EnableBackgroundPlayback;
	g_signal_connect_object ((GtkToggleButton*) _tmp3_, "toggled", (GCallback) ___lambda85__gtk_toggle_button_toggled, self, 0);
	_tmp4_ = self->priv->EnableMinimizeToTray;
	g_signal_connect_object ((GtkToggleButton*) _tmp4_, "toggled", (GCallback) ___lambda86__gtk_toggle_button_toggled, self, 0);
	_tmp5_ = self->priv->ShowLanguagesC;
	g_signal_connect_object ((GtkToggleButton*) _tmp5_, "toggled", (GCallback) ___lambda87__gtk_toggle_button_toggled, self, 0);
	_tmp6_ = self->priv->ShowCodecsC;
	g_signal_connect_object ((GtkToggleButton*) _tmp6_, "toggled", (GCallback) ___lambda88__gtk_toggle_button_toggled, self, 0);
	_tmp7_ = self->priv->ShowCountriesC;
	g_signal_connect_object ((GtkToggleButton*) _tmp7_, "toggled", (GCallback) ___lambda89__gtk_toggle_button_toggled, self, 0);
	_tmp8_ = self->priv->ShowTagsC;
	g_signal_connect_object ((GtkToggleButton*) _tmp8_, "toggled", (GCallback) ___lambda90__gtk_toggle_button_toggled, self, 0);
	_tmp9_ = self->priv->ShowStatesC;
	g_signal_connect_object ((GtkToggleButton*) _tmp9_, "toggled", (GCallback) ___lambda91__gtk_toggle_button_toggled, self, 0);
	_tmp10_ = self->priv->ShowStationIcons;
	g_signal_connect_object ((GtkToggleButton*) _tmp10_, "toggled", (GCallback) ___lambda92__gtk_toggle_button_toggled, self, 0);
	_tmp11_ = self->priv->HideBrokenStations;
	g_signal_connect_object ((GtkToggleButton*) _tmp11_, "toggled", (GCallback) ___lambda93__gtk_toggle_button_toggled, self, 0);
	_tmp12_ = self->priv->ResumePlaybackOnStartup;
	g_signal_connect_object ((GtkToggleButton*) _tmp12_, "toggled", (GCallback) ___lambda94__gtk_toggle_button_toggled, self, 0);
	return self;
}


GradioSettingsWindow* gradio_settings_window_new (void) {
	return gradio_settings_window_construct (GRADIO_TYPE_SETTINGS_WINDOW);
}


static void gradio_settings_window_load_settings (GradioSettingsWindow* self) {
	GtkCheckButton* _tmp0_ = NULL;
	gboolean _tmp1_ = FALSE;
	gboolean _tmp2_ = FALSE;
	GtkCheckButton* _tmp3_ = NULL;
	gboolean _tmp4_ = FALSE;
	gboolean _tmp5_ = FALSE;
	GtkCheckButton* _tmp6_ = NULL;
	gboolean _tmp7_ = FALSE;
	gboolean _tmp8_ = FALSE;
	GtkCheckButton* _tmp9_ = NULL;
	gboolean _tmp10_ = FALSE;
	gboolean _tmp11_ = FALSE;
	GtkCheckButton* _tmp12_ = NULL;
	gboolean _tmp13_ = FALSE;
	gboolean _tmp14_ = FALSE;
	GtkCheckButton* _tmp15_ = NULL;
	gboolean _tmp16_ = FALSE;
	gboolean _tmp17_ = FALSE;
	GtkCheckButton* _tmp18_ = NULL;
	gboolean _tmp19_ = FALSE;
	gboolean _tmp20_ = FALSE;
	GtkCheckButton* _tmp21_ = NULL;
	gboolean _tmp22_ = FALSE;
	gboolean _tmp23_ = FALSE;
	GtkCheckButton* _tmp24_ = NULL;
	gboolean _tmp25_ = FALSE;
	gboolean _tmp26_ = FALSE;
	GtkCheckButton* _tmp27_ = NULL;
	gboolean _tmp28_ = FALSE;
	gboolean _tmp29_ = FALSE;
	GtkCheckButton* _tmp30_ = NULL;
	gboolean _tmp31_ = FALSE;
	gboolean _tmp32_ = FALSE;
	GtkCheckButton* _tmp33_ = NULL;
	gboolean _tmp34_ = FALSE;
	gboolean _tmp35_ = FALSE;
	GtkCheckButton* _tmp36_ = NULL;
	gboolean _tmp37_ = FALSE;
	gboolean _tmp38_ = FALSE;
	g_return_if_fail (self != NULL);
	_tmp0_ = self->priv->EnableNotifications;
	_tmp1_ = gradio_settings_get_show_notifications ();
	_tmp2_ = _tmp1_;
	gtk_toggle_button_set_active ((GtkToggleButton*) _tmp0_, _tmp2_);
	_tmp3_ = self->priv->EnableMPRIS;
	_tmp4_ = gradio_settings_get_enable_mpris ();
	_tmp5_ = _tmp4_;
	gtk_toggle_button_set_active ((GtkToggleButton*) _tmp3_, _tmp5_);
	_tmp6_ = self->priv->UseDarkDesign;
	_tmp7_ = gradio_settings_get_enable_dark_design ();
	_tmp8_ = _tmp7_;
	gtk_toggle_button_set_active ((GtkToggleButton*) _tmp6_, _tmp8_);
	_tmp9_ = self->priv->EnableBackgroundPlayback;
	_tmp10_ = gradio_settings_get_enable_background_playback ();
	_tmp11_ = _tmp10_;
	gtk_toggle_button_set_active ((GtkToggleButton*) _tmp9_, _tmp11_);
	_tmp12_ = self->priv->EnableMinimizeToTray;
	_tmp13_ = gradio_settings_get_enable_close_to_tray ();
	_tmp14_ = _tmp13_;
	gtk_toggle_button_set_active ((GtkToggleButton*) _tmp12_, _tmp14_);
	_tmp15_ = self->priv->ShowLanguagesC;
	_tmp16_ = gradio_settings_get_show_languages_c ();
	_tmp17_ = _tmp16_;
	gtk_toggle_button_set_active ((GtkToggleButton*) _tmp15_, _tmp17_);
	_tmp18_ = self->priv->ShowCodecsC;
	_tmp19_ = gradio_settings_get_show_codecs_c ();
	_tmp20_ = _tmp19_;
	gtk_toggle_button_set_active ((GtkToggleButton*) _tmp18_, _tmp20_);
	_tmp21_ = self->priv->ShowCountriesC;
	_tmp22_ = gradio_settings_get_show_countries_c ();
	_tmp23_ = _tmp22_;
	gtk_toggle_button_set_active ((GtkToggleButton*) _tmp21_, _tmp23_);
	_tmp24_ = self->priv->ShowStatesC;
	_tmp25_ = gradio_settings_get_show_states_c ();
	_tmp26_ = _tmp25_;
	gtk_toggle_button_set_active ((GtkToggleButton*) _tmp24_, _tmp26_);
	_tmp27_ = self->priv->ShowTagsC;
	_tmp28_ = gradio_settings_get_show_tags_c ();
	_tmp29_ = _tmp28_;
	gtk_toggle_button_set_active ((GtkToggleButton*) _tmp27_, _tmp29_);
	_tmp30_ = self->priv->ShowStationIcons;
	_tmp31_ = gradio_settings_get_show_station_icons ();
	_tmp32_ = _tmp31_;
	gtk_toggle_button_set_active ((GtkToggleButton*) _tmp30_, _tmp32_);
	_tmp33_ = self->priv->HideBrokenStations;
	_tmp34_ = gradio_settings_get_hide_broken_stations ();
	_tmp35_ = _tmp34_;
	gtk_toggle_button_set_active ((GtkToggleButton*) _tmp33_, _tmp35_);
	_tmp36_ = self->priv->ResumePlaybackOnStartup;
	_tmp37_ = gradio_settings_get_resume_playback_on_startup ();
	_tmp38_ = _tmp37_;
	gtk_toggle_button_set_active ((GtkToggleButton*) _tmp36_, _tmp38_);
}


static void gradio_settings_window_class_init (GradioSettingsWindowClass * klass) {
	gint GradioSettingsWindow_private_offset;
	gradio_settings_window_parent_class = g_type_class_peek_parent (klass);
	g_type_class_add_private (klass, sizeof (GradioSettingsWindowPrivate));
	G_OBJECT_CLASS (klass)->finalize = gradio_settings_window_finalize;
	GradioSettingsWindow_private_offset = g_type_class_get_instance_private_offset (klass);
	gtk_widget_class_set_template_from_resource (GTK_WIDGET_CLASS (klass), "/de/haecker-felix/gradio/ui/settings-dialog.ui");
	gtk_widget_class_bind_template_child_full (GTK_WIDGET_CLASS (klass), "EnableNotifications", FALSE, GradioSettingsWindow_private_offset + G_STRUCT_OFFSET (GradioSettingsWindowPrivate, EnableNotifications));
	gtk_widget_class_bind_template_child_full (GTK_WIDGET_CLASS (klass), "EnableMPRIS", FALSE, GradioSettingsWindow_private_offset + G_STRUCT_OFFSET (GradioSettingsWindowPrivate, EnableMPRIS));
	gtk_widget_class_bind_template_child_full (GTK_WIDGET_CLASS (klass), "UseDarkDesign", FALSE, GradioSettingsWindow_private_offset + G_STRUCT_OFFSET (GradioSettingsWindowPrivate, UseDarkDesign));
	gtk_widget_class_bind_template_child_full (GTK_WIDGET_CLASS (klass), "EnableBackgroundPlayback", FALSE, GradioSettingsWindow_private_offset + G_STRUCT_OFFSET (GradioSettingsWindowPrivate, EnableBackgroundPlayback));
	gtk_widget_class_bind_template_child_full (GTK_WIDGET_CLASS (klass), "EnableMinimizeToTray", FALSE, GradioSettingsWindow_private_offset + G_STRUCT_OFFSET (GradioSettingsWindowPrivate, EnableMinimizeToTray));
	gtk_widget_class_bind_template_child_full (GTK_WIDGET_CLASS (klass), "ShowLanguagesC", FALSE, GradioSettingsWindow_private_offset + G_STRUCT_OFFSET (GradioSettingsWindowPrivate, ShowLanguagesC));
	gtk_widget_class_bind_template_child_full (GTK_WIDGET_CLASS (klass), "ShowCodecsC", FALSE, GradioSettingsWindow_private_offset + G_STRUCT_OFFSET (GradioSettingsWindowPrivate, ShowCodecsC));
	gtk_widget_class_bind_template_child_full (GTK_WIDGET_CLASS (klass), "ShowCountriesC", FALSE, GradioSettingsWindow_private_offset + G_STRUCT_OFFSET (GradioSettingsWindowPrivate, ShowCountriesC));
	gtk_widget_class_bind_template_child_full (GTK_WIDGET_CLASS (klass), "ShowTagsC", FALSE, GradioSettingsWindow_private_offset + G_STRUCT_OFFSET (GradioSettingsWindowPrivate, ShowTagsC));
	gtk_widget_class_bind_template_child_full (GTK_WIDGET_CLASS (klass), "ShowStatesC", FALSE, GradioSettingsWindow_private_offset + G_STRUCT_OFFSET (GradioSettingsWindowPrivate, ShowStatesC));
	gtk_widget_class_bind_template_child_full (GTK_WIDGET_CLASS (klass), "ShowStationIcons", FALSE, GradioSettingsWindow_private_offset + G_STRUCT_OFFSET (GradioSettingsWindowPrivate, ShowStationIcons));
	gtk_widget_class_bind_template_child_full (GTK_WIDGET_CLASS (klass), "HideBrokenStations", FALSE, GradioSettingsWindow_private_offset + G_STRUCT_OFFSET (GradioSettingsWindowPrivate, HideBrokenStations));
	gtk_widget_class_bind_template_child_full (GTK_WIDGET_CLASS (klass), "ResumePlaybackOnStartup", FALSE, GradioSettingsWindow_private_offset + G_STRUCT_OFFSET (GradioSettingsWindowPrivate, ResumePlaybackOnStartup));
}


static void gradio_settings_window_instance_init (GradioSettingsWindow * self) {
	self->priv = GRADIO_SETTINGS_WINDOW_GET_PRIVATE (self);
	gtk_widget_init_template (GTK_WIDGET (self));
}


static void gradio_settings_window_finalize (GObject* obj) {
	GradioSettingsWindow * self;
	self = G_TYPE_CHECK_INSTANCE_CAST (obj, GRADIO_TYPE_SETTINGS_WINDOW, GradioSettingsWindow);
	_g_object_unref0 (self->priv->EnableNotifications);
	_g_object_unref0 (self->priv->EnableMPRIS);
	_g_object_unref0 (self->priv->UseDarkDesign);
	_g_object_unref0 (self->priv->EnableBackgroundPlayback);
	_g_object_unref0 (self->priv->EnableMinimizeToTray);
	_g_object_unref0 (self->priv->ShowLanguagesC);
	_g_object_unref0 (self->priv->ShowCodecsC);
	_g_object_unref0 (self->priv->ShowCountriesC);
	_g_object_unref0 (self->priv->ShowTagsC);
	_g_object_unref0 (self->priv->ShowStatesC);
	_g_object_unref0 (self->priv->ShowStationIcons);
	_g_object_unref0 (self->priv->HideBrokenStations);
	_g_object_unref0 (self->priv->ResumePlaybackOnStartup);
	G_OBJECT_CLASS (gradio_settings_window_parent_class)->finalize (obj);
}


GType gradio_settings_window_get_type (void) {
	static volatile gsize gradio_settings_window_type_id__volatile = 0;
	if (g_once_init_enter (&gradio_settings_window_type_id__volatile)) {
		static const GTypeInfo g_define_type_info = { sizeof (GradioSettingsWindowClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) gradio_settings_window_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (GradioSettingsWindow), 0, (GInstanceInitFunc) gradio_settings_window_instance_init, NULL };
		GType gradio_settings_window_type_id;
		gradio_settings_window_type_id = g_type_register_static (gtk_dialog_get_type (), "GradioSettingsWindow", &g_define_type_info, 0);
		g_once_init_leave (&gradio_settings_window_type_id__volatile, gradio_settings_window_type_id);
	}
	return gradio_settings_window_type_id__volatile;
}


