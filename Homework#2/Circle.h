#ifndef CIRCLE_H
#define CIRCLE_H

#include "Shape.h"

class Circle : public Shape {
protected:
    virtual void draw() override;
};

#endif // CIRCLE_H
