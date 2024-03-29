#ifndef CINFOPUEBLO_H
#define CINFOPUEBLO_H

#include <iostream>
#include <string>
#include <fstream>

#define CLSID_INFOPUEBLO 100

class cInfoPueblo {
private:
    std::string nombre;
    std::string estado;
    int MagicoDesde;
    std::string tipoClima;
    int tempMedia;
    std::string atraccPrincipal;

    cInfoPueblo();

    void serializar(std::fstream& out);

    friend class cNodo;
    friend class cLista;
    friend class cTablaHash;

public:
    cInfoPueblo(std::string nombre, std::string estado, int magicoDesde, std::string clima, int temp, std::string atraccion);

    void imprimir();
};

#endif // CINFOPUEBLO_H
