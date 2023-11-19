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
	Power operator+(int op2) { //int Ÿ���� �Ű������� �޴� + ������ �Լ� ����

		Power tmp; // �ӽ� tmp ��ü ���� �� ��ȯ
		tmp.kick = this->kick + op2;
		tmp.punch = this->punch + op2;
		return tmp;

		// tem ���� ���ϰ� return *this; // �̷��� �ص� ��

	}; // Power Ŭ������ ��ü�� ��ȯ�ϴ� + ������ �Լ�
};
int main() {
	Power a(3, 5), b;
	a.show();
	b.show();

	b = a + 2; // Power b = a.operator+(2)�� ����
	a.show();
	b.show();
}