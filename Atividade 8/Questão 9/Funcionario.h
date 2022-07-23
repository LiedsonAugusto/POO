#ifndef FUNCIONARIO_H
#define FUNCIONARIO_H

#include "PessoaFisica.h"

class Funcionario : PessoaFisica{

  friend ostream &operator<<(ostream &, const Funcionario &);

  public:

    Funcionario(string, string, int, double, int, int);

    void setMatricula(int);

    void setSalario(double);

    void setCargaHoraria(int);

    void setHorarioMensal(int);

    int getMatricula() const { return this->matricula; }

    double getSalario() const { return this->salario; }

    int getCargaHoraria() const { return this->cargaHoraria; }

    int getHorarioMensal() const { return this->horarioMensal; }

    double calcularSalarioBruto() const;


  private:

    int matricula;
    double salario;
    int cargaHoraria;
    int horarioMensal;
    
};

#endif