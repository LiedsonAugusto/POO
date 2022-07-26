#include <iostream>
#include "Pessoa.h"

Pessoa::Pessoa(string nome_usuario, string cpf_usuario){
    setNome(nome_usuario);
    setCpf(cpf_usuario);
}


void Pessoa::setCpf(string cpf_usuario){
    cpf = cpf_usuario;
    if (cpfigual(cpf_usuario))
        cpf_valido = false;
    else 
        validarCpf(cpf_usuario);
}

int Pessoa::cpfigual(string &cpf_usuario){
    for (auto i = 0; i < 11; i++){
        if (i + 1 != 11)
        if (cpf_usuario[i] != cpf_usuario[i+1]){return false;}
    }
    return true;
}

void Pessoa::validarCpf(string &cpf_usuario){

    int verificadorDez = 0, contador1 = 0;
    for(auto a = 10; a > 1; a--){
        verificadorDez += ((cpf_usuario[contador1] - '0')*a);
        contador1 += 1;
    }
    verificadorDez = (verificadorDez * 10) % 11;

    if (verificadorDez == 10)
        verificadorDez = 0;

    if ((cpf_usuario[9] - '0') == verificadorDez){
    
        int verificadorOnze = 0, contador2 = 0;
        for(auto b = 11; b > 1; b--){
            verificadorOnze += ((cpf_usuario[contador2] - '0')*b);
            contador2 += 1;
        }
        verificadorOnze = (verificadorOnze * 10) % 11;

        if (verificadorOnze == 10)
            verificadorOnze = 0;

        if ((cpf_usuario[10] - '0') == verificadorOnze)
            cpf_valido = true;
        else
            cpf_valido = false;

    } else {

        cpf_valido = false;
    
    }
}

void Pessoa::imprimirCpf() const {
  std::cout << "NOME: " << nome << std::endl; 
  std::cout << "CPF: " << this->cpf << std::endl;
  if (cpf_valido)
    std::cout << "CPF VÁLIDO!" << std::endl;
  else
    std::cout << "CPF INVÁLIDO!" << std::endl;
}