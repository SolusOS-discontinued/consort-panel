


#include <glib-object.h>
#include "clock-typebuiltins.h"


/* enumerations from "../../applets/clock/clock-utils.h" */
#include "../../applets/clock/clock-utils.h"
static const GEnumValue _clock_format_values[] = {
  { CLOCK_FORMAT_INVALID, "CLOCK_FORMAT_INVALID", "invalid" },
  { CLOCK_FORMAT_12, "CLOCK_FORMAT_12", "12" },
  { CLOCK_FORMAT_24, "CLOCK_FORMAT_24", "24" },
  { CLOCK_FORMAT_UNIX, "CLOCK_FORMAT_UNIX", "unix" },
  { CLOCK_FORMAT_INTERNET, "CLOCK_FORMAT_INTERNET", "internet" },
  { CLOCK_FORMAT_CUSTOM, "CLOCK_FORMAT_CUSTOM", "custom" },
  { 0, NULL, NULL }
};

GType
clock_format_get_type (void)
{
  static GType type = 0;

  if (!type)
    type = g_enum_register_static ("ClockFormat", _clock_format_values);

  return type;
}




