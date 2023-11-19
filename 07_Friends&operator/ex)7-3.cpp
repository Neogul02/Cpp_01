#include <iostream>
using namespace std;

class Rect; // Rect Ŭ���� �̸� ����

class RectManager {
public:
bool equals(Rect r, Rect s) {
	if (r.width == s.width && r.height == s.height) {
		return true;
	}
	else return false;
};
void copy(Rect& dest, Rect& src) {
	dest.width = src.width;
	dest.height = src.height;
};
};

class Rect { // Rect Ŭ���� ����
	int width, height;
public:
	Rect(int width, int height) { // ������ ����
		this->width = width;
		this->height = height;
	} 
	friend RectManager; //friend�Լ��� �ش� Ŭ������ ģ���� ����, �ش� Ŭ������ private ����� ���� ����
	// 
};

int main() {
	Rect a(3, 4), b(5, 6);
	RectManager man;

	man.copy(b, a); // a�� b�� ����
	if(man.equals(a,b)) cout << "equal" << endl;
	else cout << "not equal" << endl;
}