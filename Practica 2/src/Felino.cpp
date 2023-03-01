#include "Felino.h"
#include "Mamifero.h"

Felino::Felino(){
    Mamifero();
    Raza="";
}
void Felino::print(){
    Mamifero::print();
    std::cout<<"\n La Raza es: " << Raza <<std::endl;
}
void Felino::set_Raza(std::string R){
    Raza=R;
}
bool Felino::operator==(Felino & F1){
    return (Raza==F1.Raza)&&(Felino::get_anio()==F1.get_anio())&&(Felino::get_Dieta()==F1.get_Dieta())&&(Felino::get_LugarNacimiento()==F1.get_LugarNacimiento())&&(Felino::get_Nombre()==F1.get_Nombre());
}
bool Felino::operator<(Felino & F1){
    return (Raza<F1.Raza)&&(Felino::get_anio()<F1.get_anio())&&(Felino::get_Dieta()<F1.get_Dieta())&&(Felino::get_LugarNacimiento()<F1.get_LugarNacimiento())&&(Felino::get_Nombre()<F1.get_Nombre());
}
bool Felino::operator!=(Felino & F1){
    return (Raza!=F1.Raza)&&(Felino::get_anio()!=F1.get_anio())&&(Felino::get_Dieta()!=F1.get_Dieta())&&(Felino::get_LugarNacimiento()!=F1.get_LugarNacimiento())&&(Felino::get_Nombre()!=F1.get_Nombre());
}
bool Felino::operator>(Felino & F1){
    return (Raza>F1.Raza)&&(Felino::get_anio()>F1.get_anio())&&(Felino::get_Dieta()>F1.get_Dieta())&&(Felino::get_LugarNacimiento()>F1.get_LugarNacimiento())&&(Felino::get_Nombre()>F1.get_Nombre());
}
bool Felino::operator+(Felino & F1){
    return (Raza+F1.Raza)&&(Felino::get_anio()+F1.get_anio())&&(Felino::get_Dieta()+F1.get_Dieta())&&(Felino::get_LugarNacimiento()+F1.get_LugarNacimiento())&&(Felino::get_Nombre()+F1.get_Nombre());
}
