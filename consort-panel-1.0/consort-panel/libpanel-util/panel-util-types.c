


#include <glib-object.h>
#include "panel-util-types.h"


/* enumerations from "./panel-session-manager.h" */
#include "./panel-session-manager.h"
static const GEnumValue _panel_session_manager_logout_type_values[] = {
  { PANEL_SESSION_MANAGER_LOGOUT_MODE_NORMAL, "PANEL_SESSION_MANAGER_LOGOUT_MODE_NORMAL", "normal" },
  { PANEL_SESSION_MANAGER_LOGOUT_MODE_NO_CONFIRMATION, "PANEL_SESSION_MANAGER_LOGOUT_MODE_NO_CONFIRMATION", "no-confirmation" },
  { PANEL_SESSION_MANAGER_LOGOUT_MODE_FORCE, "PANEL_SESSION_MANAGER_LOGOUT_MODE_FORCE", "force" },
  { 0, NULL, NULL }
};

GType
panel_session_manager_logout_type_get_type (void)
{
  static GType type = 0;

  if (!type)
    type = g_enum_register_static ("PanelSessionManagerLogoutType", _panel_session_manager_logout_type_values);

  return type;
}

static const GEnumValue _panel_session_manager_presence_type_values[] = {
  { PANEL_SESSION_MANAGER_PRESENCE_AVAILABLE, "PANEL_SESSION_MANAGER_PRESENCE_AVAILABLE", "available" },
  { PANEL_SESSION_MANAGER_PRESENCE_INVISIBLE, "PANEL_SESSION_MANAGER_PRESENCE_INVISIBLE", "invisible" },
  { PANEL_SESSION_MANAGER_PRESENCE_BUSY, "PANEL_SESSION_MANAGER_PRESENCE_BUSY", "busy" },
  { PANEL_SESSION_MANAGER_PRESENCE_IDLE, "PANEL_SESSION_MANAGER_PRESENCE_IDLE", "idle" },
  { 0, NULL, NULL }
};

GType
panel_session_manager_presence_type_get_type (void)
{
  static GType type = 0;

  if (!type)
    type = g_enum_register_static ("PanelSessionManagerPresenceType", _panel_session_manager_presence_type_values);

  return type;
}




