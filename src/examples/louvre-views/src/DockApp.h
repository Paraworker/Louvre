#ifndef DOCKAPP_H
#define DOCKAPP_H

#include "UITextureView.h"

using namespace Louvre;

class App;
class Dock;

class DockApp : public LTextureView
{
public:
    DockApp(App *app, Dock *dock);
    ~DockApp();

    void pointerEnterEvent(const LPoint &) override;
    void pointerButtonEvent(LPointer::Button button, LPointer::ButtonState state) override;

    std::list<DockApp*>::iterator appLink;
    App *app = nullptr;
    Dock *dock = nullptr;
    UITextureView dot;
};

#endif // DOCKAPP_H
