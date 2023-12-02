// Material.cpp
#include "Material.h"

std::string Material::getName() {
    return name;
}

int Material::getAmount() {
    return amount;
}

void Material::setAmount(int amount) {
    this->amount = amount;
}

bool Material::subAmount(int amount) {
    if (this->amount <= 0)
        return false;
    else
        this->amount -= amount;
    return true;
}
