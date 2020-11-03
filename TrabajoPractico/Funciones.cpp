#include "Cuenta.h"
#include "Cliente.h"
#include <string.h>
#include <iostream>
using namespace std;
#include <iomanip>
#include<stdlib.h>
#include<stdio.h>

/*Definicion de la constante interes*/
float Cuenta::interes=0.05;

/*FUNCIONES PARA LA CLASE CUENTA*/
/*CONSTRUCCTOR DE LA CLASE CUENTA*/
Cuenta::Cuenta(int nro,int dni,string tipo,double saldo){
    setNro(nro);
    setDni(dni);
    setTipo(tipo);
    setSaldo(saldo);
}
/*FUNCIONES SET*/
void Cuenta::setNro(int nro){
    nrodeCuenta=nro;
}
void Cuenta::setDni(int dni){
    dniC=dni;
}
void Cuenta::setSaldo(double saldo){
    Saldo=saldo;
}
void Cuenta::setTipo(string tipo){
    const char *tipoC = tipo.data();
    strcpy(tipodeCuenta,tipoC);
}
void Cuenta::setBorrado(int b){
    if(b!=0 and b!=1)
        borrado=0;
    else
        borrado=1;
}
/*FUNCIONES GET*/
int Cuenta::getNro(){
    return nrodeCuenta;
}
int Cuenta:: getDni(){
    return dniC;
}
double Cuenta::getSaldo(){
    return Saldo;
}
string Cuenta::getTipo(){
    return tipodeCuenta;
}
/*FUNCIONES VARIAS*/
void Cuenta::Deposito(double d){
    Saldo=Saldo+d;
}
void Cuenta::Extracion(double e){
    if (e<Saldo|| Saldo<0){

    }else{
        Saldo= Saldo-e;
    }
}
void Cuenta::buscar(fstream &a){
    Cuenta reg;
    a.clear();
    a.seekg(0,ios::beg);
    a.read(reinterpret_cast<char *>(&reg),sizeof(Cuenta));
    while(!a.eof()&&reg.getNro()!=nrodeCuenta)
    {
        a.read(reinterpret_cast<char *>(&reg),sizeof(Cuenta));
    }
}
/*------------------------------------------------------------------------------*/
/*FUNCIONES PARA LA CLASE CLIENTE*/
/* construccion  de cliente*/
Cliente::Cliente(string nom, string ape, int d, int tel, string dir){
    setDni(d);
    setNombre(nom);
    setApellido(ape);
    setTelefono(tel);
    setDireccion(dir);
}

/*Funciones SET*/
void Cliente::setDni(int d){
    dni = d;
}
void Cliente::setTelefono(int tel){
    telefono=tel;
}
void Cliente::setBorrado(int b)
{
    if(b!=0 and b!=1)
        borrado=0;
    else
        borrado=1;
}

void Cliente::setNombre(string nom){
    const char *valorNombre = nom.data();
    int longitud = nom.size();
    longitud = longitud<25 ? longitud:24;
    strncpy(nombre,valorNombre,longitud);
    nombre[longitud] = '\0';
}

void Cliente::setApellido(string ape){
    const char *valorApellido = ape.data();
    int longitud = ape.size();
    longitud = longitud<25 ? longitud:24;
    strncpy(apellido,valorApellido,longitud);
    nombre[longitud] = '\0';
}

void Cliente::setDireccion(string dir){
    const char *valorDireccion = dir.data();
    int longitud = dir.size();
    longitud = longitud<30 ? longitud:29;
    strncpy(direccion,valorDireccion,longitud);
    nombre[longitud] = '\0';
}
/*FUNCONES GET*/
int Cliente::getBorrado(){
    return borrado;
}
int Cliente::getDni(){
    return dni;
}
int Cliente::getTelefono(){
    return telefono;
}
string Cliente::getApellido(){
    return apellido;
}
string Cliente::getNombre(){
    return nombre;
}
string Cliente::getDireccion(){
    return direccion;
}
/*FUNCIONES VARIAS*/
void Cliente::buscar(fstream &a){
    Cliente reg;
    a.clear();
    a.seekg(0,ios::beg);
    a.read(reinterpret_cast<char *>(&reg),sizeof(Cliente));
    while(!a.eof()&&reg.getDni()!=dni)
    {
        a.read(reinterpret_cast<char *>(&reg),sizeof(Cliente));
    }
}
/*--------------------------------------------------------------------------*/
/*FUNCIONES DE DESTRUCCION*/
Cuenta::~Cuenta(){
    delete [] tipodeCuenta;
}

Cliente::~Cliente(){
    delete [] nombre;
    delete [] apellido;
    delete [] direccion;
}
