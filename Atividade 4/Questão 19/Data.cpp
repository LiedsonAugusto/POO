#include "Data.h"
#include <iostream>
using std::cout;
using std::endl;

//Implementação
Data::Data(int dia_usuario, int mes_usuario, int ano_usuario)
//Construtor
{
    setDia(dia_usuario);
    setMes(mes_usuario);
    setAno(ano_usuario);
}

void Data::setDia(int dia_usuario)
//set dia
{
    dia = dia_usuario;
}

void Data::setMes(int mes_usuario)
//set mes
{
    if ((mes_usuario < 1) || (mes_usuario > 12))
        mes = 1;
    else
        mes = mes_usuario;
}

void Data::setAno(int ano_usuario)
//set ano
{
    ano = ano_usuario;
}

int Data::getDia()
// get dia
{
    return dia;
}

int Data::getMes()
// get mes
{
    return mes;
}

int Data::getAno()
// get ano
{
    return ano;
}

void Data::mostra_data()
//Mostra a data ao usuário
{
    cout << "Data digitada: " << getDia() << "/" << getMes() << "/" << getAno() << endl;
}

