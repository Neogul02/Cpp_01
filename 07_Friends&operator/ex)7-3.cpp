#include <iostream>
using namespace std;

class Rect; // Rect 클래스 미리 선언

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

class Rect { // Rect 클래스 정의
	int width, height;
public:
	Rect(int width, int height) { // 생성자 정의
		this->width = width;
		this->height = height;
	} 
	friend RectManager; //friend함수는 해당 클래스의 친구로 간주, 해당 클래스의 private 멤버에 접근 가능
	// 
};

int main() {
	Rect a(3, 4), b(5, 6);
	RectManager man;

	man.copy(b, a); // a를 b에 복사
	if(man.equals(a,b)) cout << "equal" << endl;
	else cout << "not equal" << endl;
}