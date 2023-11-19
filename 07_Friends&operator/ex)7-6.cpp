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
	Power operator+=(Power op2) {
		Power tem;

		tem.kick = this->kick + op2.kick;
		tem.punch = this->punch + op2.punch;

		return tem;

	}; // Power 클래스의 객체를 반환하는 == 연산자 함수
};
int main() {
	Power a(3, 5), b(3, 6);

	Power c = a += b; // Power c = a.operator+=(b)와 동일
	c.show();

}