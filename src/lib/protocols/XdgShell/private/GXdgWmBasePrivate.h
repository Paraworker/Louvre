#ifndef GXDGWMBASEPRIVATE_H
#define GXDGWMBASEPRIVATE_H

#include <protocols/XdgShell/GXdgWmBase.h>
#include <protocols/XdgShell/xdg-shell.h>

using namespace Louvre::Protocols::XdgShell;
using namespace std;

LPRIVATE_CLASS(GXdgWmBase)
    static void bind(wl_client *client, void *compositor, UInt32 version, UInt32 id);
    static void resource_destroy(wl_resource *resource);
    static void destroy(wl_client *client, wl_resource *resource);
    static void create_positioner(wl_client *client, wl_resource *resource, UInt32 id);
    static void get_xdg_surface(wl_client *client, wl_resource *resource, UInt32 id, wl_resource *surface);
    static void pong(wl_client *client, wl_resource *resource, UInt32 serial);

    list<RXdgSurface*> xdgSurfaces;
    list<GXdgWmBase*>::iterator clientLink;
};

#endif // GXDGWMBASEPRIVATE_H
