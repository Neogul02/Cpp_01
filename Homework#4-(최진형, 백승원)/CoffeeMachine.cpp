// CoffeeMachine.cpp
#include "CoffeeMachine.h"
#include <iostream>
#include <iomanip>
#include <cstdlib>

using namespace std;

Coffee::Coffee() {
	name = "Coffee";
	amount = 3;
}
Sugar::Sugar() {
	name = "Sugar";
	amount = 3;
}
Cream::Cream() {
	name = "Cream";
	amount = 3;
}
Water::Water() {
	name = "Water";
	amount = 3;
}
Cup::Cup() {
	name = "Cup";
	amount = 3;
}

CoffeeMachine::CoffeeMachine() {
    std::cout << "-----��ǰ Ŀ�� ���Ǳ� �մϴ�.-----" << std::endl;
    mat[0] = new Coffee();
    mat[1] = new Sugar();
    mat[2] = new Cream();
    mat[3] = new Water();
    mat[4] = new Cup();
    showCoffeeMachineState();
    std::cout << std::endl;
}

void CoffeeMachine::showCoffeeMachineState() {
    for (int i = 0; i < 5; i++) {
        std::cout << std::setw(10) << mat[i]->getName();
        for (int j = 0; j < mat[i]->getAmount(); j++)
            std::cout << "*";
        std::cout << std::endl;
    }
}

void CoffeeMachine::start() {
    int num;
    while (true) {
        showMenu();
        num = selectMenu();
        if (num == 3) { // ä��� 
            for (int i = 0; i < 5; i++) {
                mat[i]->setAmount(3);
            }
            cout << "��� ���� ä��ϴ�~~" << endl;
            showCoffeeMachineState();
            cout << endl;
            continue;
        }
        else if (num == 4) { // ���� 
            cout << "���α׷��� �����մϴ�..." << endl;
            exit(0);
        }

        if (mat[0]->subAmount(1) == false) { // coffee-1
            cout << "��ᰡ �����մϴ�." << endl;
            showCoffeeMachineState();
            continue;
        }
        if (mat[3]->subAmount(1) == false) { // water-1
            cout << "��ᰡ �����մϴ�." << endl;
            showCoffeeMachineState();
            continue;
        }
        if (mat[4]->subAmount(1) == false) { // cup-1
            cout << "��ᰡ �����մϴ�." << endl;
            showCoffeeMachineState();
            continue;
        }
        // �⺻ ��ᰡ �������� ������ ���� 
        switch (num) {
        case 0: // ���� Ŀ�Ǵ� cream �߰� �Ҹ� 
            if (mat[2]->subAmount(1) == false) { // cream-1
                cout << "��ᰡ �����մϴ�." << endl;
                showCoffeeMachineState();
                continue;
            }
            cout << "���ִ� ���� Ŀ�� ���Խ��ϴ�~~" << endl;
            showCoffeeMachineState();
            cout << endl;
            break;
        case 1: // ���� Ŀ�Ǵ� sugar �߰� �Ҹ� 
            if (mat[1]->subAmount(1) == false) { // sugar-1
                cout << "��ᰡ �����մϴ�." << endl;
                showCoffeeMachineState();
                continue;
            }
            cout << "���ִ� ���� Ŀ�� ���Խ��ϴ�~~" << endl;
            showCoffeeMachineState();
            cout << endl;
            break;
        case 2: // �� Ŀ�Ǵ� �߰� �Ҹ� ���� 
            cout << "���ִ� �� Ŀ�� ���Խ��ϴ�~~" << endl;
            showCoffeeMachineState();
            break;
        default: // �߸� �Է�
            cout << "�߸� �Է� �ϼ̽��ϴ�." << endl << endl;
            break;
        }
    }
}


void CoffeeMachine::showMenu() {
    std::cout << "���� Ŀ��:0, ���� Ŀ��:1, �� Ŀ��:2, ä���:3, ����:4 >> ";
}

int CoffeeMachine::selectMenu() {
    int num;
    std::cin >> num;
    return num;
}
