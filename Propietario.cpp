#include "Persona.cpp"
#include <iostream>
#include<stdlib.h>
using namespace std;


class Propietario : Persona{
	
  private : string nit; double CUI;
  public :
  Propietario(){
  }
  Propietario(string nom,string ape,string dir,int tel,string n,double CUI) : Persona(nom,ape,dir,tel){ 
  nit = n, CUI=CUI;
  }

   
 
  void setNit(string n){nit = n;}
  void setNombres(string nom){nombres = nom;}
  void setApellidos(string ape){apellidos = ape;}
  void setDireccion(string dir){direccion = dir;}
  void setTelefono(int tel){telefono = tel;}
  void setCUI(double CUI){ CUI= CUI;}
  
  
  string getNit(){	return nit;}
  string getNombres(){	return nombres;}
  string getApellidos(){	return apellidos;}
  string getDireccion(){	return direccion;}
  int getTelefono(){	return telefono;}
  double getCUI(){ return CUI;}
  
  

void mostrar(){
	cout<<"______________________"<<endl;
	cout<<nit<<","<<nombres<<","<<apellidos<<","<<direccion<<","<<telefono<<CUI<<endl;
}
};
