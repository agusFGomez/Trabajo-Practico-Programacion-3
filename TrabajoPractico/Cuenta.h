#ifndef CUENTA_H_INCLUDED
#define CUENTA_H_INCLUDED
#include<fstream>
#include<string>
using namespace std;

class Cuenta{
public:
    Cuenta(int=0,int=0,string="", double= 0.0);
    ~Cuenta();
    void setDni(int);
    void setNro(int);
    void setTipo(string);
    void setSaldo(double);
    void setBorrado(int);
    void Deposito(double);
    void Extracion(double);
    void buscar(fstream &);
    int getDni();
    int getNro();
    double getSaldo();
    string getTipo();
private:
    int nrodeCuenta,dniC,borrado;
    double Saldo;
    char tipodeCuenta[2];
    static float interes;
};

#endif // CUENTA_H_INCLUDED
