/* ISystem.c generated by valac 0.34.4, the Vala compiler
 * generated from ISystem.vala, do not modify */


#include <glib.h>
#include <glib-object.h>


#define ENTITAS_TYPE_ISYSTEM (entitas_isystem_get_type ())
#define ENTITAS_ISYSTEM(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), ENTITAS_TYPE_ISYSTEM, EntitasISystem))
#define ENTITAS_IS_ISYSTEM(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), ENTITAS_TYPE_ISYSTEM))
#define ENTITAS_ISYSTEM_GET_INTERFACE(obj) (G_TYPE_INSTANCE_GET_INTERFACE ((obj), ENTITAS_TYPE_ISYSTEM, EntitasISystemIface))

typedef struct _EntitasISystem EntitasISystem;
typedef struct _EntitasISystemIface EntitasISystemIface;

#define ENTITAS_TYPE_ISET_WORLD (entitas_iset_world_get_type ())
#define ENTITAS_ISET_WORLD(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), ENTITAS_TYPE_ISET_WORLD, EntitasISetWorld))
#define ENTITAS_IS_ISET_WORLD(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), ENTITAS_TYPE_ISET_WORLD))
#define ENTITAS_ISET_WORLD_GET_INTERFACE(obj) (G_TYPE_INSTANCE_GET_INTERFACE ((obj), ENTITAS_TYPE_ISET_WORLD, EntitasISetWorldIface))

typedef struct _EntitasISetWorld EntitasISetWorld;
typedef struct _EntitasISetWorldIface EntitasISetWorldIface;

#define ENTITAS_TYPE_WORLD (entitas_world_get_type ())
#define ENTITAS_WORLD(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), ENTITAS_TYPE_WORLD, EntitasWorld))
#define ENTITAS_WORLD_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), ENTITAS_TYPE_WORLD, EntitasWorldClass))
#define ENTITAS_IS_WORLD(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), ENTITAS_TYPE_WORLD))
#define ENTITAS_IS_WORLD_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), ENTITAS_TYPE_WORLD))
#define ENTITAS_WORLD_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), ENTITAS_TYPE_WORLD, EntitasWorldClass))

typedef struct _EntitasWorld EntitasWorld;
typedef struct _EntitasWorldClass EntitasWorldClass;

#define ENTITAS_TYPE_IEXECUTE_SYSTEM (entitas_iexecute_system_get_type ())
#define ENTITAS_IEXECUTE_SYSTEM(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), ENTITAS_TYPE_IEXECUTE_SYSTEM, EntitasIExecuteSystem))
#define ENTITAS_IS_IEXECUTE_SYSTEM(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), ENTITAS_TYPE_IEXECUTE_SYSTEM))
#define ENTITAS_IEXECUTE_SYSTEM_GET_INTERFACE(obj) (G_TYPE_INSTANCE_GET_INTERFACE ((obj), ENTITAS_TYPE_IEXECUTE_SYSTEM, EntitasIExecuteSystemIface))

typedef struct _EntitasIExecuteSystem EntitasIExecuteSystem;
typedef struct _EntitasIExecuteSystemIface EntitasIExecuteSystemIface;

#define ENTITAS_TYPE_IINITIALIZE_SYSTEM (entitas_iinitialize_system_get_type ())
#define ENTITAS_IINITIALIZE_SYSTEM(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), ENTITAS_TYPE_IINITIALIZE_SYSTEM, EntitasIInitializeSystem))
#define ENTITAS_IS_IINITIALIZE_SYSTEM(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), ENTITAS_TYPE_IINITIALIZE_SYSTEM))
#define ENTITAS_IINITIALIZE_SYSTEM_GET_INTERFACE(obj) (G_TYPE_INSTANCE_GET_INTERFACE ((obj), ENTITAS_TYPE_IINITIALIZE_SYSTEM, EntitasIInitializeSystemIface))

typedef struct _EntitasIInitializeSystem EntitasIInitializeSystem;
typedef struct _EntitasIInitializeSystemIface EntitasIInitializeSystemIface;

struct _EntitasISystemIface {
	GTypeInterface parent_iface;
};

struct _EntitasISetWorldIface {
	GTypeInterface parent_iface;
	void (*setWorld) (EntitasISetWorld* self, EntitasWorld* world);
};

struct _EntitasIExecuteSystemIface {
	GTypeInterface parent_iface;
	void (*execute) (EntitasIExecuteSystem* self);
};

struct _EntitasIInitializeSystemIface {
	GTypeInterface parent_iface;
	void (*initialize) (EntitasIInitializeSystem* self);
};



GType entitas_isystem_get_type (void) G_GNUC_CONST;
GType entitas_world_get_type (void) G_GNUC_CONST;
GType entitas_iset_world_get_type (void) G_GNUC_CONST;
void entitas_iset_world_setWorld (EntitasISetWorld* self, EntitasWorld* world);
GType entitas_iexecute_system_get_type (void) G_GNUC_CONST;
void entitas_iexecute_system_execute (EntitasIExecuteSystem* self);
GType entitas_iinitialize_system_get_type (void) G_GNUC_CONST;
void entitas_iinitialize_system_initialize (EntitasIInitializeSystem* self);


static void entitas_isystem_base_init (EntitasISystemIface * iface) {
	static gboolean initialized = FALSE;
	if (!initialized) {
		initialized = TRUE;
	}
}


GType entitas_isystem_get_type (void) {
	static volatile gsize entitas_isystem_type_id__volatile = 0;
	if (g_once_init_enter (&entitas_isystem_type_id__volatile)) {
		static const GTypeInfo g_define_type_info = { sizeof (EntitasISystemIface), (GBaseInitFunc) entitas_isystem_base_init, (GBaseFinalizeFunc) NULL, (GClassInitFunc) NULL, (GClassFinalizeFunc) NULL, NULL, 0, 0, (GInstanceInitFunc) NULL, NULL };
		GType entitas_isystem_type_id;
		entitas_isystem_type_id = g_type_register_static (G_TYPE_INTERFACE, "EntitasISystem", &g_define_type_info, 0);
		g_type_interface_add_prerequisite (entitas_isystem_type_id, G_TYPE_OBJECT);
		g_once_init_leave (&entitas_isystem_type_id__volatile, entitas_isystem_type_id);
	}
	return entitas_isystem_type_id__volatile;
}


void entitas_iset_world_setWorld (EntitasISetWorld* self, EntitasWorld* world) {
	g_return_if_fail (self != NULL);
	ENTITAS_ISET_WORLD_GET_INTERFACE (self)->setWorld (self, world);
}


static void entitas_iset_world_base_init (EntitasISetWorldIface * iface) {
	static gboolean initialized = FALSE;
	if (!initialized) {
		initialized = TRUE;
	}
}


GType entitas_iset_world_get_type (void) {
	static volatile gsize entitas_iset_world_type_id__volatile = 0;
	if (g_once_init_enter (&entitas_iset_world_type_id__volatile)) {
		static const GTypeInfo g_define_type_info = { sizeof (EntitasISetWorldIface), (GBaseInitFunc) entitas_iset_world_base_init, (GBaseFinalizeFunc) NULL, (GClassInitFunc) NULL, (GClassFinalizeFunc) NULL, NULL, 0, 0, (GInstanceInitFunc) NULL, NULL };
		GType entitas_iset_world_type_id;
		entitas_iset_world_type_id = g_type_register_static (G_TYPE_INTERFACE, "EntitasISetWorld", &g_define_type_info, 0);
		g_type_interface_add_prerequisite (entitas_iset_world_type_id, G_TYPE_OBJECT);
		g_once_init_leave (&entitas_iset_world_type_id__volatile, entitas_iset_world_type_id);
	}
	return entitas_iset_world_type_id__volatile;
}


void entitas_iexecute_system_execute (EntitasIExecuteSystem* self) {
	g_return_if_fail (self != NULL);
	ENTITAS_IEXECUTE_SYSTEM_GET_INTERFACE (self)->execute (self);
}


static void entitas_iexecute_system_base_init (EntitasIExecuteSystemIface * iface) {
	static gboolean initialized = FALSE;
	if (!initialized) {
		initialized = TRUE;
	}
}


GType entitas_iexecute_system_get_type (void) {
	static volatile gsize entitas_iexecute_system_type_id__volatile = 0;
	if (g_once_init_enter (&entitas_iexecute_system_type_id__volatile)) {
		static const GTypeInfo g_define_type_info = { sizeof (EntitasIExecuteSystemIface), (GBaseInitFunc) entitas_iexecute_system_base_init, (GBaseFinalizeFunc) NULL, (GClassInitFunc) NULL, (GClassFinalizeFunc) NULL, NULL, 0, 0, (GInstanceInitFunc) NULL, NULL };
		GType entitas_iexecute_system_type_id;
		entitas_iexecute_system_type_id = g_type_register_static (G_TYPE_INTERFACE, "EntitasIExecuteSystem", &g_define_type_info, 0);
		g_type_interface_add_prerequisite (entitas_iexecute_system_type_id, G_TYPE_OBJECT);
		g_once_init_leave (&entitas_iexecute_system_type_id__volatile, entitas_iexecute_system_type_id);
	}
	return entitas_iexecute_system_type_id__volatile;
}


void entitas_iinitialize_system_initialize (EntitasIInitializeSystem* self) {
	g_return_if_fail (self != NULL);
	ENTITAS_IINITIALIZE_SYSTEM_GET_INTERFACE (self)->initialize (self);
}


static void entitas_iinitialize_system_base_init (EntitasIInitializeSystemIface * iface) {
	static gboolean initialized = FALSE;
	if (!initialized) {
		initialized = TRUE;
	}
}


GType entitas_iinitialize_system_get_type (void) {
	static volatile gsize entitas_iinitialize_system_type_id__volatile = 0;
	if (g_once_init_enter (&entitas_iinitialize_system_type_id__volatile)) {
		static const GTypeInfo g_define_type_info = { sizeof (EntitasIInitializeSystemIface), (GBaseInitFunc) entitas_iinitialize_system_base_init, (GBaseFinalizeFunc) NULL, (GClassInitFunc) NULL, (GClassFinalizeFunc) NULL, NULL, 0, 0, (GInstanceInitFunc) NULL, NULL };
		GType entitas_iinitialize_system_type_id;
		entitas_iinitialize_system_type_id = g_type_register_static (G_TYPE_INTERFACE, "EntitasIInitializeSystem", &g_define_type_info, 0);
		g_type_interface_add_prerequisite (entitas_iinitialize_system_type_id, G_TYPE_OBJECT);
		g_once_init_leave (&entitas_iinitialize_system_type_id__volatile, entitas_iinitialize_system_type_id);
	}
	return entitas_iinitialize_system_type_id__volatile;
}



