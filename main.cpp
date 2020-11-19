#include"libOne.h"
void gmain() {
    window(640, 360);
    while (notQuit) {
        clear(240, 200, 200);
        circle(50, 50, 100);
        rect(100, 0, 100, 100);
        line(0, 0, 640, 360);
    }
}