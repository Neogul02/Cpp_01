#ifndef LINE_H
#define LINE_H

#include "shape.h"
#include <iostream>

class Line : public Shape {
protected:
    virtual void draw();
};

#endif // LINE_H
