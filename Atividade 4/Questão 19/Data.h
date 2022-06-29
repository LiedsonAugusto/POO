#ifndef  DATA_H
#define DATA_H

class Data{

public:

  //construtor
    Data(int dia_usuario, int mes_usuario, int ano_usuario);

  //métodos set's
    void setDia(int dia);
    void setMes(int mes);
    void setAno(int ano);

  //métodos get's
    int getDia();
    int getMes();
    int getAno();
  
  //Métodos mostra_data
    void mostra_data();

private:

  //atributos
    int dia;
    int mes;
    int ano;

};


#endif