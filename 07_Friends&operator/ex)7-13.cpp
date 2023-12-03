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
	friend Power& operator++(Power& op1); // 전위연산자
	friend Power operator++(Power& op1, int x); // 후위연산자
};
Power& operator++(Power& op1){
	op1.kick++;
	op1.punch++;
	return op1;
}

Power operator++(Power& op1, int x) {
	Power tmp = op1;
	op1.kick++;
	op1.punch++;
	return tmp;
}

int main() {
	Power a(3, 5), b;
	a.show();

	b = ++a; // Power b = operator++(a);와 동일
	b.show();

	b = a++; // Power b = operator++(a, 0);와 동일
	b.show();
}