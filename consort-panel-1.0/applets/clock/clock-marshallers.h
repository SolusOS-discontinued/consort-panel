
#ifndef ___clock_marshal_MARSHAL_H__
#define ___clock_marshal_MARSHAL_H__

#include	<glib-object.h>

G_BEGIN_DECLS

/* POINTER:VOID (clock-marshallers.list:1) */
G_GNUC_INTERNAL void _clock_marshal_POINTER__VOID (GClosure     *closure,
                                                   GValue       *return_value,
                                                   guint         n_param_values,
                                                   const GValue *param_values,
                                                   gpointer      invocation_hint,
                                                   gpointer      marshal_data);

/* VOID:OBJECT,STRING (clock-marshallers.list:2) */
G_GNUC_INTERNAL void _clock_marshal_VOID__OBJECT_STRING (GClosure     *closure,
                                                         GValue       *return_value,
                                                         guint         n_param_values,
                                                         const GValue *param_values,
                                                         gpointer      invocation_hint,
                                                         gpointer      marshal_data);

/* INT:VOID (clock-marshallers.list:3) */
G_GNUC_INTERNAL void _clock_marshal_INT__VOID (GClosure     *closure,
                                               GValue       *return_value,
                                               guint         n_param_values,
                                               const GValue *param_values,
                                               gpointer      invocation_hint,
                                               gpointer      marshal_data);

G_END_DECLS

#endif /* ___clock_marshal_MARSHAL_H__ */

