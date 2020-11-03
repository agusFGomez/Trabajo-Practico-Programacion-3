#ifndef CLIENTE_H_INCLUDED
#define CLIENTE_H_INCLUDED

#include<fstream>
#include<string>
using namespace std;

class Cliente{
public:
    Cliente(string="", string="", int=0, int=0,string="");
    ~Cliente();
    void setDni(int);
    void setNombre(string);
    void setApellido(string);
    void setTelefono(int);
    void setDireccion(string);
    void setBorrado(int);
    void buscar(fstream &);
    int getBorrado();
    string getNombre();
    string getApellido();
    string getDireccion();
    int getTelefono();
    int getDni();
private:
    char nombre[25],apellido[25],direccion[30];
    int telefono,dni,borrado;
};

#endif // CLIENTE_H_INCLUDED
