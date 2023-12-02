// CoffeeMachine.h
#ifndef COFFEE_MACHINE_H
#define COFFEE_MACHINE_H

#include "Material.h"

class CoffeeMachine {
    Material* mat[5];

public:
    CoffeeMachine();
    void showCoffeeMachineState();
    void start();
    void showMenu();
    int selectMenu();
};

class Coffee : public Material {
    public:
		Coffee();
};
class Sugar : public Material {
	public:
		Sugar();
};
class Cream : public Material {
	public:
		Cream();
};
class Water : public Material {
	public:
		Water();
};
class Cup : public Material {
	public:
		Cup();
};


#endif // COFFEE_MACHINE_H
