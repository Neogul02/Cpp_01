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
		Power operator+(Power op2) {
			Power tmp; // �ӽ� tmp ��ü ���� �� ��ȯ
			tmp.kick = this->kick + op2.kick;
			tmp.punch = this->punch + op2.punch;
			return tmp;
		}; // Power Ŭ������ ��ü�� ��ȯ�ϴ� + ������ �Լ�
};
int main() {
	Power a(3, 5), b(4, 6), d(1);
	Power c = a + b; // Power c = a.operator+(b)�� ���� 
	a.show();
	b.show();
	c.show();
}

