#ifndef SHAPE_H
#define SHAPE_H

class Shape {
    Shape* next;
protected:
    virtual void draw() = 0;
public:
    Shape();
    virtual ~Shape();
    void paint();
    Shape* add(Shape* p);
    Shape* getNext();
    void setNext(Shape* p);
};

#endif // SHAPE_H
