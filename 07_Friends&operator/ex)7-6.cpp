#include <iostream>
using namespace std;

class Power {
	int kick;
	int punch;
public:
	Power(int kick = 0, int punch = 0) { // �Ű������� 2���� ������ ����
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

	}; // Power Ŭ������ ��ü�� ��ȯ�ϴ� == ������ �Լ�
};
int main() {
	Power a(3, 5), b(3, 6);

	Power c = a += b; // Power c = a.operator+=(b)�� ����
	c.show();

}