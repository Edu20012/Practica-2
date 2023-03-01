#ifndef GATODOMESTICO_H
#define GATODOMESTICO_H
#include "Mamifero.h"
#include<iostream>

class GatoDomestico: public Mamifero{
    private:
        std::string Raza;
    public:
        GatoDomestico();
        void set_Raza(std::string);
        void print();
        bool operator==(GatoDomestico & );
        bool operator!=(GatoDomestico & );
        bool operator<(GatoDomestico & );
        bool operator>(GatoDomestico & );
        bool operator+(GatoDomestico & );

};

#endif // GATODOMESTICO_H
