#ifndef MONSTRE_H
#define MONSTRE_H
#include <iostream>
#include <string>
#include <vector>

class Monstre {
    
    private:

    std::string nom;
    
    int attaque;
    int pv;
    bool dispo;
    bool vivant;

    public:
    
    Monstre(std::string nom, int attaque, int pv);

    void affiche();

    int getAttaque();
    int getPv();
    int getMana();

    void setHp(int hp);
    void setDispo(bool dispo);
    void setVivant(bool vivant);
    void attaque(Monstre * atk);
};

#endif