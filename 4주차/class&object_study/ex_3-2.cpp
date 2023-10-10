#include <iostream>
using namespace std;

class Rectangle{
    public:
        int width; // 멤버 변수
        int height;
        double getArea();
};

double Rectangle::getArea(){
    return width*height; // 멤버 함수
}

int main(){

    Rectangle rect;
    rect.width = 3;
    rect.height = 5;
    double rectArea = rect.getArea();

    cout << "사각형의 면적은 " << rectArea << endl;
    return 0;
}