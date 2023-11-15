#ifndef GRAPHICEDITOR_H
#define GRAPHICEDITOR_H

#include "Shape.h"

class UI {
public:
    static int main_menu();
    static int one_menu();
    static int two_menu();
};

class GraphicEditor {
    Shape* pStart;
    Shape* pLast;
    int count;
public:
    GraphicEditor();
    void create(int num);
    void indelete(int num);
    void call();
};

#endif // !GRAPHICEDITOR_H