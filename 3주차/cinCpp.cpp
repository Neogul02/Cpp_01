#include <iostream>
using namespace std;

int main(){

    cout << "너비를 입력하세요 >> ";
    int width;
    cin >> width; // cin은 키보드로부터 입력받은 값을 변수에 저장한다.
    cout << "높이를 입력하세요 >> ";
    int height;
    cin >> height;
    int area = width * height;
    cout << "면적은 " << area << endl;

    return 0;
}