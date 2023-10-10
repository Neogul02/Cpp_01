#include <iostream>
using namespace std;

class Circle {
    public:
        int radius;
        Circle();
        Circle(int r);
        ~Circle();
        double getArea();
};

double Circle::getArea(){
    return 3.14*radius*radius;
}

Circle::Circle(){
    radius = 1;
    cout << "생성자 실행 radius = " << radius << endl;
}
Circle::Circle(int r){
    radius = r;
    cout << "생성자 실행 radius = " << radius << endl;
}
Circle::~Circle(){
    cout << "소멸자 실행 radius = " << radius << endl;
};

Circle globalDonut(1000);
Circle globalPizza(2000);

void f(){
    Circle fDonut(100);
    Circle fPizza(200);
}

int main(){
    Circle mainDonut;
    Circle mainPizza(30);
    f();
}