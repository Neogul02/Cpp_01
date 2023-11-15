#include "GraphicEditor.h"
#include <iostream>
#include "Line.h"
#include "Circle.h"
#include "Rect.h"

using namespace std;

GraphicEditor::GraphicEditor() { pStart = nullptr; count = 0; }

void GraphicEditor::create(int num) {
    switch (num) {
    case 1:
        if (count == 0) {
            pStart = new Line();
            pLast = pStart;
        }
        else
            pLast = pLast->add(new Line());
        count++;
        break;

    case 2:
        if (count == 0) {
            pStart = new Circle();
            pLast = pStart;
        }
        else
            pLast = pLast->add(new Circle());
        count++;
        break;

    case 3:
        if (count == 0) {
            pStart = new Rect();
            pLast = pStart;
        }
        else
            pLast = pLast->add(new Rect());
        count++;
        break;
    }
}

void GraphicEditor::indelete(int num) {
    Shape* p = pStart;
    Shape* del = pStart;

    if (num < count) {
        for (int i = 0; i < num; i++) {
            p = del;
            del = del->getNext();
        }
        if (num == 0)
            pStart = p->getNext();
        else
            p->setNext(del);
        count--;
        if (count == 1)
            pLast = pStart;
        delete del;
    }
    else
        cout << "�ε����� �߸� �Է��ϼ̽��ϴ�." << endl;
}

void GraphicEditor::call() {
    bool exit = true;
    cout << "�׷��� �������Դϴ�." << endl;
    while (exit) {
        switch (UI::main_menu()) {
        case 1:
            create(UI::one_menu());
            break;
        case 2:
            indelete(UI::two_menu());
            break;
        case 3: {
            Shape* p = pStart;
            for (int i = 0; i < count; i++) {
                cout << i << ": ";
                p->paint();
                p = p->getNext();
            }
            break;
        }
        case 4:
            exit = false;
            break;
        }
    }
}

int UI::main_menu() {
    int n;
    cout << "����:1, ����:2, ��κ���:3, ����:4 >> ";
    cin >> n;
    return n;
}

int UI::one_menu() {
    int n;
    cout << "��:1, ��:2, �簢��:3 >> ";
    cin >> n;
    return n;
}

int UI::two_menu() {
    int n;
    cout << "�����ϰ��� �ϴ� ������ �ε��� >> ";
    cin >> n;
    return n;
}
