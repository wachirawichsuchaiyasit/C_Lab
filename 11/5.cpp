#include <iostream>
#include <string.h>
#include <vector>

using namespace std;

class Material {
private:
    string name;
    int quality;
    vector<string> compatibleTypes;

public:
    Material(string name, int quality);
    string getName();
    int getQuality();
    void addCompatibleType(string type);
    bool isCompatibleWith(string weaponType);
    int getUpgradeValue();
};

Material::Material(string name,int quality) {
    this->name = name ;
    if (quality < 1) {
        this->quality = 1 ;
    } else if (quality > 5) {
        this->quality = 5 ;
    } else {
        this->quality = quality ;
    }
 
} ;

string Material::getName() {
    return this->name ;
}

int Material::getQuality() {
    return this->quality;
}

void Material::addCompatibleType(string type) {
    this->compatibleTypes.push_back(type);
}

bool Material::isCompatibleWith(string weaponType) {
    for (int i = 0; i < this->compatibleTypes.size(); i++) {
        if (this->compatibleTypes[i] == weaponType) {
            return true;
        }
    }
    return false;
}

int Material::getUpgradeValue() {
    return this->quality * 5 ;
}

class Weapon {
private:
    int durability;
    int damage;
    string weaponType;

public:
    Weapon(int durability, int damage, string weaponType);
    int getDurability();
    int getDamage();
    string getWeaponType();
    int attack();
    bool upgrade(Material material);
    void repair();
    void showStatus();
};

Weapon::Weapon(int durability , int damage , string weaponType) {
    if (durability < 0 ) {
        this->durability = 0 ;
    } else if (durability > 100) {
        this->durability = 100;
    } else {
        this->durability = durability ;
    }
    this->weaponType = weaponType;

    this->damage = ( damage <= 0 ? 0 : damage);
}

int Weapon::getDurability() {
    return this->durability;
}

int Weapon::getDamage() {
    return this->damage;
}

string Weapon::getWeaponType() {
    return this->weaponType ;
}

int Weapon::attack() {
    if (this->durability <= 0 ) {
        return 0 ;
    } 
    if (this->durability < 2) {
        this->durability -= this->durability ;
        
    }else {
        this->durability -= 2 ;
    }
    return damage ;
}

bool Weapon::upgrade(Material material) {
    if (material.isCompatibleWith(this->getWeaponType())) {
        this->damage += material.getUpgradeValue() ;
        return true;
    }
    return false ;
}

void Weapon::repair() {
    this->durability = 100 ;
}

void Weapon::showStatus() {
    cout << this->durability << " " << this->damage << " " << this->weaponType << endl;
}


class Sword : public Weapon {
private:
    double criticalMultiplier;

public:
    Sword(int durability, int damage, double criticalMultiplier);
    double getCriticalMultiplier();
    void setCriticalMultiplier(double multiplier);
    int attack();
    void showStatus();
};

Sword::Sword(int durability , int damage , double criticalMultiplier) : Weapon(durability,damage,"Sword") {
    this->criticalMultiplier = (criticalMultiplier <= 1.0 ? 1.0 : criticalMultiplier) ;
}    

double Sword::getCriticalMultiplier() {
    return this->criticalMultiplier ;
}

void Sword::setCriticalMultiplier(double multiplier) {
    this->criticalMultiplier = (multiplier <= 1.0 ? 1.0 : multiplier) ;
}

int Sword::attack() {
    return Weapon::attack() * this->criticalMultiplier ;
}

void Sword::showStatus() {
    cout << Sword::getDurability() << " " << Sword::getDamage() << " " << Sword::getWeaponType() << " " << this->criticalMultiplier ;
}

int main() {
    // เขียน main function เพื่อทดสอบเอง
}
