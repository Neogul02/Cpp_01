#include <iostream>
#include "Ram.h"
using namespace std;

Ram::Ram() { //������
    mem[100 * 1024] = { 0 }; // 0 ���� �ʱ�ȭ
    size = 100 * 1024; // size �ʱ�ȭ
};
Ram::~Ram() { // �Ҹ���
    cout << "�޸� ���ŵ�." << endl;
};

char Ram::read(int address) {
    return mem[address]; // address �� ����� ���� ��ȯ
};

void Ram::write(int address, char value) {
    mem[address] = value; // address �� value ����
};
