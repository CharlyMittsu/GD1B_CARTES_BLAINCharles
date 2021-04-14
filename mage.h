#ifndef MAGE_H
#define MAGE_H
#include <iostream>
#include <string>
#include <vector>

class Mage{

    private:
    
    std::string nomMage;
    int vieMage;
    std::vector<char> terrain;

    public:

    void getNom();
    int getVie();

    void invocation();
    
};

#endif