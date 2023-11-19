#include <iostream>
using namespace std;

class Rect; // Rect 클래스 미리 선언
class RectManager { // RectManager 클래스 정의
public:
	bool equals(Rect r, Rect s);
};

class Rect { // Rect 클래스 정의
	int width, height;
public:
	Rect(int width, int height) { // 생성자 정의
		this->width = width;
		this->height = height;
	}
	friend bool RectManager::equals(Rect r, Rect s); //friend로 가져오기

};

bool RectManager::equals(Rect r, Rect s) { 
	if (r.width == s.width && r.height == s.height) {
		return true;
	}
	else return false;
}

int main() {
	Rect a(3, 4), b(3, 4);
	RectManager man;
	if (man.equals(a, b)) cout << "equal" << endl;
	else cout << "not equal" << endl;
}