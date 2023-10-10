#include <iostream>
using namespace std;

class circle{   //class 선언부
    public:
        int radius;
        double getArea();
};

double circle::getArea(){ // class 구현부
    return 3.14*radius*radius;
};

int main(){
    circle donut;
    donut.radius = 1;
    double donutArea = donut.getArea();
    cout << "도넛의 넓이는" << donutArea << endl; 

    circle pizza;
    pizza.radius = 15;
    double pizzaArea = pizza.getArea();

    cout<< "pizza의 넓이는" << pizzaArea << endl;
    return 0;
};