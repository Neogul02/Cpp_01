#include <iostream>
#include <vector>
#include "shape.h"
#include "circle.h"
#include "rect.h"
#include "line.h"

int selectMenu() {
    int n;
    std::cout << "삽입:1, 삭제:2, 모두보기:3, 종료:4 >> ";
    std::cin >> n;
    return n;
}

int selectShape() {
    int n;
    std::cout << "선:1, 원:2, 사각형:3 >> ";
    std::cin >> n;
    return n;
}

int selectDelIndex() {
    int n;
    std::cout << "삭제하고자 하는 도형의 인덱스 >> ";
    std::cin >> n;
    return n;
}

void showAll(std::vector<Shape*>& v, std::vector<Shape*>::iterator& it) {
    int i = 0;
    for (it = v.begin(); it != v.end(); it++, i++) {
        std::cout << i << ": ";
        v.at(i)->paint();
    }
}

class GraphicEditor {
    std::vector<Shape*> v;
    std::vector<Shape*>::iterator it;

public:
    GraphicEditor() {
        std::cout << "그래픽 에디터입니다.\n";
        start();
    }

    void start() {
        while (true) {
            int n;
            n = selectMenu();
            switch (n) {
            case 1:
                n = selectShape();
                switch (n) {
                case 1:
                    v.push_back(new Line());
                    break;
                case 2:
                    v.push_back(new Circle());
                    break;
                case 3:
                    v.push_back(new Rect());
                    break;
                default:
                    std::cout << "잘못 선택하셨습니다.\n";
                    break;
                }
                break;
            case 2: {
                n = selectDelIndex();
                if (n >= v.size() || n < 0) {
                    std::cout << "없는 인덱스 입니다.\n";
                    break;
                }
                it = v.begin();
                Shape* tmp = *(it + n);
                v.erase(it + n);
                delete tmp;
                break;
            }
            case 3:
                showAll(v, it);
                break;
            case 4:
                return;
            default:
                std::cout << "잘못 입력하셨습니다.\n";
                break;
            }
        }
    }
};

int main() {
    GraphicEditor GE;
    GE.start();
    
    return 0;
}
