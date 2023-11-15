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
        cout << "인덱스를 잘못 입력하셨습니다." << endl;
}

void GraphicEditor::call() {
    bool exit = true;
    cout << "그래픽 에디터입니다." << endl;
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
    cout << "삽입:1, 삭제:2, 모두보기:3, 종료:4 >> ";
    cin >> n;
    return n;
}

int UI::one_menu() {
    int n;
    cout << "선:1, 원:2, 사각형:3 >> ";
    cin >> n;
    return n;
}

int UI::two_menu() {
    int n;
    cout << "삭제하고자 하는 도형의 인덱스 >> ";
    cin >> n;
    return n;
}
