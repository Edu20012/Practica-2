#include "GatoDomestico.h"
#include "Mamifero.h"

GatoDomestico::GatoDomestico(){
    Mamifero();
    Raza="";
}
void GatoDomestico::print(){
    Mamifero::print();
    std::cout<<"\n La Raza es: " << Raza <<std::endl;
}
void GatoDomestico::set_Raza(std::string R){
    Raza=R;
}
bool GatoDomestico::operator==(GatoDomestico & G1){
    return (Raza==G1.Raza)&&(GatoDomestico::get_anio()==G1.get_anio())&&(GatoDomestico::get_Dieta()==G1.get_Dieta())&&(GatoDomestico::get_LugarNacimiento()==G1.get_LugarNacimiento())&&(GatoDomestico::get_Nombre()==G1.get_Nombre());
}
bool GatoDomestico::operator<(GatoDomestico & G1){
    return (Raza<G1.Raza)&&(GatoDomestico::get_anio()<G1.get_anio())&&(GatoDomestico::get_Dieta()<G1.get_Dieta())&&(GatoDomestico::get_LugarNacimiento()<G1.get_LugarNacimiento())&&(GatoDomestico::get_Nombre()<G1.get_Nombre());
}
bool GatoDomestico::operator!=(GatoDomestico & G1){
    return (Raza!=G1.Raza)&&(GatoDomestico::get_anio()!=G1.get_anio())&&(GatoDomestico::get_Dieta()!=G1.get_Dieta())&&(GatoDomestico::get_LugarNacimiento()!=G1.get_LugarNacimiento())&&(GatoDomestico::get_Nombre()!=G1.get_Nombre());
}
bool GatoDomestico::operator>(GatoDomestico & G1){
    return (Raza>G1.Raza)&&(GatoDomestico::get_anio()>G1.get_anio())&&(GatoDomestico::get_Dieta()>G1.get_Dieta())&&(GatoDomestico::get_LugarNacimiento()>G1.get_LugarNacimiento())>(GatoDomestico::get_Nombre()>G1.get_Nombre());
}
bool GatoDomestico::operator+(GatoDomestico & G1){
    return (Raza+G1.Raza)&&(GatoDomestico::get_anio()+G1.get_anio())&&(GatoDomestico::get_Dieta()+G1.get_Dieta())&&(GatoDomestico::get_LugarNacimiento()+G1.get_LugarNacimiento())&&(GatoDomestico::get_Nombre()+G1.get_Nombre());
}
