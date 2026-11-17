
#include "../include/camion.hpp"
#include "../include/Excepciones.hpp"
Camion::~Camion()
{
    cout << "   Destruyendo desde clase Camion a: " << getPlaca() << endl;
}

void Camion::agregarEjes(int cant)
{
    ejes += cant;
}

Camion::Camion(string placa, int ejes, string categoria, Propietario *propietario) : Vehiculo(placa, propietario, categoria)
{
    try
    {
        if (ejes >= 2)
        {
            this->ejes = ejes;
        }
        else
        {
            throw ExcepcionDatosInvalidos("<Cantidad ejes Invalida> - Cantidad de ejes menor que 2");
        }
    }
    catch (const ExcepcionDatosInvalidos &e)
    {
        cerr << e.what() << '\n';
    }