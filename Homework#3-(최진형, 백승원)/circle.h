#ifndef CIRCLE_H
#define CIRCLE_H

#include "shape.h"
#include <iostream>

class Circle : public Shape {
protected:
    virtual void draw();
};

#endif // CIRCLE_H
