#ifndef RECT_H
#define RECT_H

#include "shape.h"
#include <iostream>

class Rect : public Shape {
protected:
    virtual void draw();
};

#endif // RECT_H
