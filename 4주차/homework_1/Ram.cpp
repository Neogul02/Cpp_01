#include <iostream>
#include "Ram.h"
using namespace std;

Ram::Ram() { //생성자
    mem[100 * 1024] = { 0 }; // 0 으로 초기화
    size = 100 * 1024; // size 초기화
};
Ram::~Ram() { // 소멸자
    cout << "메모리 제거됨." << endl;
};

char Ram::read(int address) {
    return mem[address]; // address 에 저장된 값을 반환
};

void Ram::write(int address, char value) {
    mem[address] = value; // address 에 value 저장
};
