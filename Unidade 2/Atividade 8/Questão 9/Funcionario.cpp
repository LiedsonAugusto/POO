#include "Funcionario.h"

ostream &operator<<(ostream &out, const Funcionario &f1){
  out << "Nome: " << f1.getNome() << std::endl;
  out << "Cpf: " << f1.getCpf() << std::endl;
  out << "Matricula: " << f1.getMatricula() << std::endl;
  out << "Salário: " << f1.getSalario() << std::endl;
  out << "Carga Horária: " << f1.getCargaHoraria() << std::endl;
  out << "Horário Mensal: " << f1.getHorarioMensal() << std::endl;
  out << "Salário Bruto: " << f1.calcularSalarioBruto() << std::endl;

  return out;
}

Funcionario::Funcionario(string nome, string cpf, int matricula, double salario, int cargaHoraria, int horarioMensal) : PessoaFisica(nome, cpf), matricula(matricula), salario(salario){

  setCargaHoraria(cargaHoraria);
  setHorarioMensal(horarioMensal);
  
}

void Funcionario::setMatricula(int matricula){
  this->matricula = matricula;
}

void Funcionario::setSalario(double salario){
  this->salario = salario;
}

void Funcionario::setCargaHoraria(int cargaHoraria){
  this->cargaHoraria = ((cargaHoraria > 0) && (cargaHoraria > this->horarioMensal)) ? cargaHoraria : 0;
}

void Funcionario::setHorarioMensal(int horarioMensal){
  this->horarioMensal = (horarioMensal > 0) ? horarioMensal : 0;
}

double Funcionario::calcularSalarioBruto() const {
  return getSalario() + (getSalario() * getCargaHoraria()/getHorarioMensal());
}