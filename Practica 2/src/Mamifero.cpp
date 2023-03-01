#include "Mamifero.h"

Mamifero::Mamifero(){
    Dieta="";
    LugarNacimiento="";
    Nombre="";
    anio=0;
}

void Mamifero::set_Dieta(std::string D){
    Dieta=D;
}
std::string Mamifero::get_Dieta(){
    return Dieta;
}
void Mamifero::set_LugarNacimiento(std::string L){
    LugarNacimiento=L;
}
std::string Mamifero::get_LugarNacimiento(){
    return LugarNacimiento;
}
void Mamifero::set_Nombre(std::string N){
    Nombre=N;
}
std::string Mamifero::get_Nombre(){
    return Nombre;
}
int Mamifero::get_anio(){
    return anio;
}
void Mamifero::print(){
    std::cout<<"\n La Dieta es: " << Dieta <<std::endl;
    std::cout<<"\n El Lugar de Nacimiento es: " << LugarNacimiento <<std::endl;
    std::cout<<"\n El Nombre es: " << Nombre <<std::endl;
    std::cout<<"\n Año de nacimiento: " << anio <<std::endl;
}


