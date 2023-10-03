#include <iostream>
#include "Ram.h"
using namespace std;

int main() {
    Ram ram;
    ram.write(100, 20); // mem[100] 에 20 저장
    ram.write(101, 30); // mem[101] 에 30 저장
    char add = ram.read(100) + ram.read(101); //mem[100], mem[101]
    ram.write(102, add); // mem[102] 에 mem[100] + mem[101] 저장
    cout << "102 번지의 값 = " << ram.read(102) << endl; // mem[102] 출력
};