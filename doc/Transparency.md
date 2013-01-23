Consort Panel Transparency
=======================

Design is very simple. Firstly we need to get around the bug in GTK whereby background-image doesn't
actually work. This means we first need to switch to a _dedicated drawing method_

**TODO**
--------
 * Make applet background work, and finally make them transparent

**DONE**
--------
 * PanelBackgroundMonitor aware of compositing state
 * Add awareness for whether or not the desktop is composited, and connect appropriate signals
 * Install RGBA visuals and cleanup when needed (on composite switches)
 * Finally we'll use the is_rgba and alpha booleans to determine whether to blank the background
 * Switch to a Cairo draw method, for all PanelBackground calls
