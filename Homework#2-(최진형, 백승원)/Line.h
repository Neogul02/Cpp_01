#ifndef LINE_H
#define LINE_H

#include "Shape.h"

class Line : public Shape {
protected:
    virtual void draw() override;
};

#endif // LINE_H
