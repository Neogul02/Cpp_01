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
		friend Power operator+(int op1, Power op2);
		
};

Power operator+(int op1, Power op2) {
	Power tmp;
	tmp.kick = op1 + op2.kick;
	tmp.punch = op1 + op2.punch;
	return tmp;
}

int main() {
	Power a(3, 5);
	Power b = 2 + a; // Power b = operator+(2, a);와 동일

	b.show();
}