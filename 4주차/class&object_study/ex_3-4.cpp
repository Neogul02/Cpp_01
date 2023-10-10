#include <iostream>
using namespace std;

class Rectangle{
    public:
        int width; // 멤버 변수
        int height;
        bool isSquare();
        Rectangle();
        Rectangle(int w);
        Rectangle(int w, int h);
};

bool Rectangle::isSquare(){
    return (width == height) ? true : false;
}

Rectangle::Rectangle(){  // 매개변수 없는 생성자
    width = height = 1;
}
Rectangle::Rectangle(int w){ // 매개변수가 하나인 생성자
    width = height = w;
}
Rectangle::Rectangle(int w, int h){  // 매개변수가 두개인 생성자
    width = w;
    height = h;
}

int main(){
    Rectangle rect1;
    Rectangle rect2(3,5);
    Rectangle rect3(3);

    if(rect1.isSquare()){
        cout << "rect1은 정사각형이다." << endl;
    };
    if(rect2.isSquare()){
        cout << "rect2은 정사각형이다." << endl;
    };
    if(rect3.isSquare()){
        cout << "rect3은 정사각형이다." << endl;
    };

}