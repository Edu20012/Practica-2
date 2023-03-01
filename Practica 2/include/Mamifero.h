#ifndef MAMIFERO_H
#define MAMIFERO_H
#include<iostream>

class Mamifero{
    private:
        std::string Dieta;
        int anio;
        std::string LugarNacimiento;
        std::string Nombre;
    public:
        Mamifero();
        void set_Dieta(std::string);
        void set_LugarNacimiento(std::string);
        void set_Nombre(std::string);
        void set_anio(int);
        std::string get_Dieta();
        std::string get_LugarNacimiento();
        std::string get_Nombre();
        int get_anio();
        void print();
};


#endif // MAMIFERO_H
