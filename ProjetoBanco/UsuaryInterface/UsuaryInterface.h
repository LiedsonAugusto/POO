
#ifndef PROJETOBANCO_USUARYINTERFACE_H
#define PROJETOBANCO_USUARYINTERFACE_H

#include "../HierarquiaBanco/Banco.h"

class UsuaryInterface {
public:
    explicit UsuaryInterface(Banco *b){banco = b; clienteOuFuncionario = -1; escolhas = -1;}

    void ClienteOuFuncionario();
    void loopFuncionalidades();
    void funcaoFuncionario(int);
    void funcaoCliente(int);
    void printDespedida();
    int getClienteOuFuncionario() const {return this->clienteOuFuncionario;}

private:
     Banco *banco;
     int clienteOuFuncionario;
     int escolhas;
     static void printLogoBanco() ;
     static void printOpcoesCliente() ;
     static void printOpcoesFuncionario();
};

#endif //PROJETOBANCO_USUARYINTERFACE_H
