/*
 * Copyright (c) 2023, 2024, Oracle and/or its affiliates. All rights reserved.
 * Copyright 2023-2024 JetBrains s.r.o.
 */

/* Generated by wayland-scanner 1.19.0 */

#ifndef GTK_CLIENT_PROTOCOL_H
#define GTK_CLIENT_PROTOCOL_H

#include <stdint.h>
#include <stddef.h>
#include "wayland-client.h"

#ifdef  __cplusplus
extern "C" {
#endif

/**
 * @page page_gtk The gtk protocol
 * @section page_ifaces_gtk Interfaces
 * - @subpage page_iface_gtk_shell1 - gtk specific extensions
 * - @subpage page_iface_gtk_surface1 - 
 */
struct gtk_shell1;
struct gtk_surface1;
struct wl_seat;
struct wl_surface;

#ifndef GTK_SHELL1_INTERFACE
#define GTK_SHELL1_INTERFACE
/**
 * @page page_iface_gtk_shell1 gtk_shell1
 * @section page_iface_gtk_shell1_desc Description
 *
 * gtk_shell is a protocol extension providing additional features for
 * clients implementing it.
 * @section page_iface_gtk_shell1_api API
 * See @ref iface_gtk_shell1.
 */
/**
 * @defgroup iface_gtk_shell1 The gtk_shell1 interface
 *
 * gtk_shell is a protocol extension providing additional features for
 * clients implementing it.
 */
extern const struct wl_interface gtk_shell1_interface;
#endif
#ifndef GTK_SURFACE1_INTERFACE
#define GTK_SURFACE1_INTERFACE
/**
 * @page page_iface_gtk_surface1 gtk_surface1
 * @section page_iface_gtk_surface1_api API
 * See @ref iface_gtk_surface1.
 */
/**
 * @defgroup iface_gtk_surface1 The gtk_surface1 interface
 */
extern const struct wl_interface gtk_surface1_interface;
#endif

#ifndef GTK_SHELL1_CAPABILITY_ENUM
#define GTK_SHELL1_CAPABILITY_ENUM
enum gtk_shell1_capability {
	GTK_SHELL1_CAPABILITY_GLOBAL_APP_MENU = 1,
	GTK_SHELL1_CAPABILITY_GLOBAL_MENU_BAR = 2,
	GTK_SHELL1_CAPABILITY_DESKTOP_ICONS = 3,
};
#endif /* GTK_SHELL1_CAPABILITY_ENUM */

/**
 * @ingroup iface_gtk_shell1
 * @struct gtk_shell1_listener
 */
struct gtk_shell1_listener {
	/**
	 */
	void (*capabilities)(void *data,
			     struct gtk_shell1 *gtk_shell1,
			     uint32_t capabilities);
};

/**
 * @ingroup iface_gtk_shell1
 */
static inline int
gtk_shell1_add_listener(struct gtk_shell1 *gtk_shell1,
			const struct gtk_shell1_listener *listener, void *data)
{
	return wl_proxy_add_listener((struct wl_proxy *) gtk_shell1,
				     (void (**)(void)) listener, data);
}

#define GTK_SHELL1_GET_GTK_SURFACE 0
#define GTK_SHELL1_SET_STARTUP_ID 1
#define GTK_SHELL1_SYSTEM_BELL 2
#define GTK_SHELL1_NOTIFY_LAUNCH 3

/**
 * @ingroup iface_gtk_shell1
 */
#define GTK_SHELL1_CAPABILITIES_SINCE_VERSION 1

/**
 * @ingroup iface_gtk_shell1
 */
#define GTK_SHELL1_GET_GTK_SURFACE_SINCE_VERSION 1
/**
 * @ingroup iface_gtk_shell1
 */
#define GTK_SHELL1_SET_STARTUP_ID_SINCE_VERSION 1
/**
 * @ingroup iface_gtk_shell1
 */
#define GTK_SHELL1_SYSTEM_BELL_SINCE_VERSION 1
/**
 * @ingroup iface_gtk_shell1
 */
#define GTK_SHELL1_NOTIFY_LAUNCH_SINCE_VERSION 3

/** @ingroup iface_gtk_shell1 */
static inline void
gtk_shell1_set_user_data(struct gtk_shell1 *gtk_shell1, void *user_data)
{
	wl_proxy_set_user_data((struct wl_proxy *) gtk_shell1, user_data);
}

/** @ingroup iface_gtk_shell1 */
static inline void *
gtk_shell1_get_user_data(struct gtk_shell1 *gtk_shell1)
{
	return wl_proxy_get_user_data((struct wl_proxy *) gtk_shell1);
}

static inline uint32_t
gtk_shell1_get_version(struct gtk_shell1 *gtk_shell1)
{
	return wl_proxy_get_version((struct wl_proxy *) gtk_shell1);
}

/** @ingroup iface_gtk_shell1 */
static inline void
gtk_shell1_destroy(struct gtk_shell1 *gtk_shell1)
{
	wl_proxy_destroy((struct wl_proxy *) gtk_shell1);
}

/**
 * @ingroup iface_gtk_shell1
 */
static inline struct gtk_surface1 *
gtk_shell1_get_gtk_surface(struct gtk_shell1 *gtk_shell1, struct wl_surface *surface)
{
	struct wl_proxy *gtk_surface;

	gtk_surface = wl_proxy_marshal_constructor((struct wl_proxy *) gtk_shell1,
			 GTK_SHELL1_GET_GTK_SURFACE, &gtk_surface1_interface, NULL, surface);

	return (struct gtk_surface1 *) gtk_surface;
}

/**
 * @ingroup iface_gtk_shell1
 */
static inline void
gtk_shell1_set_startup_id(struct gtk_shell1 *gtk_shell1, const char *startup_id)
{
	wl_proxy_marshal((struct wl_proxy *) gtk_shell1,
			 GTK_SHELL1_SET_STARTUP_ID, startup_id);
}

/**
 * @ingroup iface_gtk_shell1
 */
static inline void
gtk_shell1_system_bell(struct gtk_shell1 *gtk_shell1, struct gtk_surface1 *surface)
{
	wl_proxy_marshal((struct wl_proxy *) gtk_shell1,
			 GTK_SHELL1_SYSTEM_BELL, surface);
}

/**
 * @ingroup iface_gtk_shell1
 */
static inline void
gtk_shell1_notify_launch(struct gtk_shell1 *gtk_shell1, const char *startup_id)
{
	wl_proxy_marshal((struct wl_proxy *) gtk_shell1,
			 GTK_SHELL1_NOTIFY_LAUNCH, startup_id);
}

#ifndef GTK_SURFACE1_STATE_ENUM
#define GTK_SURFACE1_STATE_ENUM
enum gtk_surface1_state {
	GTK_SURFACE1_STATE_TILED = 1,
	/**
	 * @since 2
	 */
	GTK_SURFACE1_STATE_TILED_TOP = 2,
	/**
	 * @since 2
	 */
	GTK_SURFACE1_STATE_TILED_RIGHT = 3,
	/**
	 * @since 2
	 */
	GTK_SURFACE1_STATE_TILED_BOTTOM = 4,
	/**
	 * @since 2
	 */
	GTK_SURFACE1_STATE_TILED_LEFT = 5,
};
/**
 * @ingroup iface_gtk_surface1
 */
#define GTK_SURFACE1_STATE_TILED_TOP_SINCE_VERSION 2
/**
 * @ingroup iface_gtk_surface1
 */
#define GTK_SURFACE1_STATE_TILED_RIGHT_SINCE_VERSION 2
/**
 * @ingroup iface_gtk_surface1
 */
#define GTK_SURFACE1_STATE_TILED_BOTTOM_SINCE_VERSION 2
/**
 * @ingroup iface_gtk_surface1
 */
#define GTK_SURFACE1_STATE_TILED_LEFT_SINCE_VERSION 2
#endif /* GTK_SURFACE1_STATE_ENUM */

#ifndef GTK_SURFACE1_EDGE_CONSTRAINT_ENUM
#define GTK_SURFACE1_EDGE_CONSTRAINT_ENUM
enum gtk_surface1_edge_constraint {
	GTK_SURFACE1_EDGE_CONSTRAINT_RESIZABLE_TOP = 1,
	GTK_SURFACE1_EDGE_CONSTRAINT_RESIZABLE_RIGHT = 2,
	GTK_SURFACE1_EDGE_CONSTRAINT_RESIZABLE_BOTTOM = 3,
	GTK_SURFACE1_EDGE_CONSTRAINT_RESIZABLE_LEFT = 4,
};
#endif /* GTK_SURFACE1_EDGE_CONSTRAINT_ENUM */

#ifndef GTK_SURFACE1_GESTURE_ENUM
#define GTK_SURFACE1_GESTURE_ENUM
enum gtk_surface1_gesture {
	GTK_SURFACE1_GESTURE_DOUBLE_CLICK = 1,
	GTK_SURFACE1_GESTURE_RIGHT_CLICK = 2,
	GTK_SURFACE1_GESTURE_MIDDLE_CLICK = 3,
};
#endif /* GTK_SURFACE1_GESTURE_ENUM */

#ifndef GTK_SURFACE1_ERROR_ENUM
#define GTK_SURFACE1_ERROR_ENUM
enum gtk_surface1_error {
	GTK_SURFACE1_ERROR_INVALID_GESTURE = 0,
};
#endif /* GTK_SURFACE1_ERROR_ENUM */

/**
 * @ingroup iface_gtk_surface1
 * @struct gtk_surface1_listener
 */
struct gtk_surface1_listener {
	/**
	 */
	void (*configure)(void *data,
			  struct gtk_surface1 *gtk_surface1,
			  struct wl_array *states);
	/**
	 * @since 2
	 */
	void (*configure_edges)(void *data,
				struct gtk_surface1 *gtk_surface1,
				struct wl_array *constraints);
};

/**
 * @ingroup iface_gtk_surface1
 */
static inline int
gtk_surface1_add_listener(struct gtk_surface1 *gtk_surface1,
			  const struct gtk_surface1_listener *listener, void *data)
{
	return wl_proxy_add_listener((struct wl_proxy *) gtk_surface1,
				     (void (**)(void)) listener, data);
}

#define GTK_SURFACE1_SET_DBUS_PROPERTIES 0
#define GTK_SURFACE1_SET_MODAL 1
#define GTK_SURFACE1_UNSET_MODAL 2
#define GTK_SURFACE1_PRESENT 3
#define GTK_SURFACE1_REQUEST_FOCUS 4
#define GTK_SURFACE1_RELEASE 5
#define GTK_SURFACE1_TITLEBAR_GESTURE 6

/**
 * @ingroup iface_gtk_surface1
 */
#define GTK_SURFACE1_CONFIGURE_SINCE_VERSION 1
/**
 * @ingroup iface_gtk_surface1
 */
#define GTK_SURFACE1_CONFIGURE_EDGES_SINCE_VERSION 2

/**
 * @ingroup iface_gtk_surface1
 */
#define GTK_SURFACE1_SET_DBUS_PROPERTIES_SINCE_VERSION 1
/**
 * @ingroup iface_gtk_surface1
 */
#define GTK_SURFACE1_SET_MODAL_SINCE_VERSION 1
/**
 * @ingroup iface_gtk_surface1
 */
#define GTK_SURFACE1_UNSET_MODAL_SINCE_VERSION 1
/**
 * @ingroup iface_gtk_surface1
 */
#define GTK_SURFACE1_PRESENT_SINCE_VERSION 1
/**
 * @ingroup iface_gtk_surface1
 */
#define GTK_SURFACE1_REQUEST_FOCUS_SINCE_VERSION 3
/**
 * @ingroup iface_gtk_surface1
 */
#define GTK_SURFACE1_RELEASE_SINCE_VERSION 4
/**
 * @ingroup iface_gtk_surface1
 */
#define GTK_SURFACE1_TITLEBAR_GESTURE_SINCE_VERSION 5

/** @ingroup iface_gtk_surface1 */
static inline void
gtk_surface1_set_user_data(struct gtk_surface1 *gtk_surface1, void *user_data)
{
	wl_proxy_set_user_data((struct wl_proxy *) gtk_surface1, user_data);
}

/** @ingroup iface_gtk_surface1 */
static inline void *
gtk_surface1_get_user_data(struct gtk_surface1 *gtk_surface1)
{
	return wl_proxy_get_user_data((struct wl_proxy *) gtk_surface1);
}

static inline uint32_t
gtk_surface1_get_version(struct gtk_surface1 *gtk_surface1)
{
	return wl_proxy_get_version((struct wl_proxy *) gtk_surface1);
}

/** @ingroup iface_gtk_surface1 */
static inline void
gtk_surface1_destroy(struct gtk_surface1 *gtk_surface1)
{
	wl_proxy_destroy((struct wl_proxy *) gtk_surface1);
}

/**
 * @ingroup iface_gtk_surface1
 */
static inline void
gtk_surface1_set_dbus_properties(struct gtk_surface1 *gtk_surface1, const char *application_id, const char *app_menu_path, const char *menubar_path, const char *window_object_path, const char *application_object_path, const char *unique_bus_name)
{
	wl_proxy_marshal((struct wl_proxy *) gtk_surface1,
			 GTK_SURFACE1_SET_DBUS_PROPERTIES, application_id, app_menu_path, menubar_path, window_object_path, application_object_path, unique_bus_name);
}

/**
 * @ingroup iface_gtk_surface1
 */
static inline void
gtk_surface1_set_modal(struct gtk_surface1 *gtk_surface1)
{
	wl_proxy_marshal((struct wl_proxy *) gtk_surface1,
			 GTK_SURFACE1_SET_MODAL);
}

/**
 * @ingroup iface_gtk_surface1
 */
static inline void
gtk_surface1_unset_modal(struct gtk_surface1 *gtk_surface1)
{
	wl_proxy_marshal((struct wl_proxy *) gtk_surface1,
			 GTK_SURFACE1_UNSET_MODAL);
}

/**
 * @ingroup iface_gtk_surface1
 */
static inline void
gtk_surface1_present(struct gtk_surface1 *gtk_surface1, uint32_t time)
{
	wl_proxy_marshal((struct wl_proxy *) gtk_surface1,
			 GTK_SURFACE1_PRESENT, time);
}

/**
 * @ingroup iface_gtk_surface1
 */
static inline void
gtk_surface1_request_focus(struct gtk_surface1 *gtk_surface1, const char *startup_id)
{
	wl_proxy_marshal((struct wl_proxy *) gtk_surface1,
			 GTK_SURFACE1_REQUEST_FOCUS, startup_id);
}

/**
 * @ingroup iface_gtk_surface1
 */
static inline void
gtk_surface1_release(struct gtk_surface1 *gtk_surface1)
{
	wl_proxy_marshal((struct wl_proxy *) gtk_surface1,
			 GTK_SURFACE1_RELEASE);

	wl_proxy_destroy((struct wl_proxy *) gtk_surface1);
}

/**
 * @ingroup iface_gtk_surface1
 */
static inline void
gtk_surface1_titlebar_gesture(struct gtk_surface1 *gtk_surface1, uint32_t serial, struct wl_seat *seat, uint32_t gesture)
{
	wl_proxy_marshal((struct wl_proxy *) gtk_surface1,
			 GTK_SURFACE1_TITLEBAR_GESTURE, serial, seat, gesture);
}

#ifdef  __cplusplus
}
#endif

#endif
