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
    std::cout << "-----명품 커피 자판기 켭니다.-----" << std::endl;
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
        if (num == 3) { // 채우기 
            for (int i = 0; i < 5; i++) {
                mat[i]->setAmount(3);
            }
            cout << "모든 통을 채웁니다~~" << endl;
            showCoffeeMachineState();
            cout << endl;
            continue;
        }
        else if (num == 4) { // 종료 
            cout << "프로그램을 종료합니다..." << endl;
            exit(0);
        }

        if (mat[0]->subAmount(1) == false) { // coffee-1
            cout << "재료가 부족합니다." << endl;
            showCoffeeMachineState();
            continue;
        }
        if (mat[3]->subAmount(1) == false) { // water-1
            cout << "재료가 부족합니다." << endl;
            showCoffeeMachineState();
            continue;
        }
        if (mat[4]->subAmount(1) == false) { // cup-1
            cout << "재료가 부족합니다." << endl;
            showCoffeeMachineState();
            continue;
        }
        // 기본 재료가 부족하지 않으면 실행 
        switch (num) {
        case 0: // 보통 커피는 cream 추가 소모 
            if (mat[2]->subAmount(1) == false) { // cream-1
                cout << "재료가 부족합니다." << endl;
                showCoffeeMachineState();
                continue;
            }
            cout << "맛있는 보통 커피 나왔습니다~~" << endl;
            showCoffeeMachineState();
            cout << endl;
            break;
        case 1: // 설탕 커피는 sugar 추가 소모 
            if (mat[1]->subAmount(1) == false) { // sugar-1
                cout << "재료가 부족합니다." << endl;
                showCoffeeMachineState();
                continue;
            }
            cout << "맛있는 설탕 커피 나왔습니다~~" << endl;
            showCoffeeMachineState();
            cout << endl;
            break;
        case 2: // 블랙 커피는 추가 소모 없음 
            cout << "맛있는 블랙 커피 나왔습니다~~" << endl;
            showCoffeeMachineState();
            break;
        default: // 잘못 입력
            cout << "잘못 입력 하셨습니다." << endl << endl;
            break;
        }
    }
}


void CoffeeMachine::showMenu() {
    std::cout << "보통 커피:0, 설탕 커피:1, 블랙 커피:2, 채우기:3, 종료:4 >> ";
}

int CoffeeMachine::selectMenu() {
    int num;
    std::cin >> num;
    return num;
}
