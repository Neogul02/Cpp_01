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
	bool operator==(Power op2) {

		if (kick == op2.kick && punch == op2.punch) return true;
		else return false;

	}; // Power Ŭ������ ��ü�� ��ȯ�ϴ� == ������ �Լ�
};
int main() {
	Power a(3, 5), b(3, 6);
	if (a == b) cout << "a�� b�� ����" << endl;
	else cout << "a�� b�� �ٸ���" << endl;

}