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
	bool operator==(Power op2) {

		if (kick == op2.kick && punch == op2.punch) return true;
		else return false;

	}; // Power 클래스의 객체를 반환하는 == 연산자 함수
};
int main() {
	Power a(3, 5), b(3, 6);
	if (a == b) cout << "a와 b는 같다" << endl;
	else cout << "a와 b는 다르다" << endl;

}