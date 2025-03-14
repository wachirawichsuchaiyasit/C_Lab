#ifndef MATERIAL_H
#define MATERIAL_H

#include <string>
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
        for (string weapon : this->compatibleTypes) {
            if (weapon == weaponType) {
                return 1;
            }
        };
        return 0;
    }
    
    int Material::getUpgradeValue() {
        return this->quality * 5 ;
    }

#endif