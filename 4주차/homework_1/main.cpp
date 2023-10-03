#include <iostream>
#include "Ram.h"
using namespace std;

int main() {
    Ram ram;
    ram.write(100, 20); // mem[100] �� 20 ����
    ram.write(101, 30); // mem[101] �� 30 ����
    char add = ram.read(100) + ram.read(101); //mem[100], mem[101]
    ram.write(102, add); // mem[102] �� mem[100] + mem[101] ����
    cout << "102 ������ �� = " << ram.read(102) << endl; // mem[102] ���
};