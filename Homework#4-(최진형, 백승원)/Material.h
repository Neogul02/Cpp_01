
// Material.h
#ifndef MATERIAL_H
#define MATERIAL_H

#include <string>

class Material {
protected:
    std::string name;
    int amount;

public:
    std::string getName();
    int getAmount();
    void setAmount(int amount);
    bool subAmount(int amount);
};

#endif // MATERIAL_H
