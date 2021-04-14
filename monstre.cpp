#ifndef MONSTRE_CPP
#define MONSTRE_CPP
#include "Monstre.h"
#include <iostream>
#include <algorithm>

Monstre::Monstre(std::string nom, int attaque, int pv) : nom(nom), attaque(attaque), pv(pv), dispo(true), vivant(true){}

void Monstre::affiche(){
        std::cout << nom << " Pv :  " << pv << " Attaque :  " << attaque;
        if (dispo){std::cout << " Prêt à attaquer !" << std::endl;}
        else {std::cout << " Inutilisable pendant ce tour." << std::endl;}        
    }

int Monstre::getAttaque(){
        return attaque;
    }
int Monstre::getPv(){
        return pv;
    }
void Monstre::setHp(int hp){
        pv = hp;
    }
void Monstre::setDispo(bool dispo){
        dispo = dispo;
    }
void Monstre::setVivant(bool vivant){
        vivant = vivant;
    }
void Monstre::attaque(Monstre * atk){
        pv = std::max(0,pv - atk->getAttaque());
        atk->setHp(std::max(0,atk->getPv() - attaque));
        dispo = false;
        atk->setDispo(false);
        if (pv == 0){vivant = false;}
        if (atk->getPv() == 0){atk->setVivant(false);}
    }
#endif