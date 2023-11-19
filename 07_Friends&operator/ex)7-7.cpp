#include <iostream>
using namespace std;

class Power {
	int kick;
	int punch;
public:
	Power(int kick = 0, int punch = 0) { // 매개변수가 2개인 생성자 정의
		this->kick = kick;
		this->punch = punch;
	}
	void show() {
		cout << "kick = " << kick << ',' << "punch = " << punch << endl;
	};
	Power operator+(int op2) { //int 타입의 매개변수를 받는 + 연산자 함수 정의

		Power tmp; // 임시 tmp 객체 생성 후 반환
		tmp.kick = this->kick + op2;
		tmp.punch = this->punch + op2;
		return tmp;

		// tem 선언 안하고 return *this; // 이렇게 해도 됨

	}; // Power 클래스의 객체를 반환하는 + 연산자 함수
};
int main() {
	Power a(3, 5), b;
	a.show();
	b.show();

	b = a + 2; // Power b = a.operator+(2)와 동일
	a.show();
	b.show();
}