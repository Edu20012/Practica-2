#ifndef FELINO_H
#define FELINO_H
#include "Mamifero.h"
#include<iostream>

class Felino: public Mamifero{
    private:
        std::string Raza;
    public:
        Felino();
        void set_Raza(std::string);
        void print();
        bool operator==(Felino & );
        bool operator!=(Felino & );
        bool operator<(Felino & );
        bool operator>(Felino & );
        bool operator+(Felino & );

};
#endif // FELINO_H
