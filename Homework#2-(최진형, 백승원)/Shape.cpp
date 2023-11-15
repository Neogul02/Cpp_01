#include "Shape.h"
#include <iostream>

using namespace std;

Shape::Shape() { next = nullptr; }
Shape::~Shape() { }
void Shape::paint() { draw(); }
Shape* Shape::add(Shape* p) { this->next = p; return p; }
Shape* Shape::getNext() { return next; }
void Shape::setNext(Shape* p) { this->next = p->next; }
