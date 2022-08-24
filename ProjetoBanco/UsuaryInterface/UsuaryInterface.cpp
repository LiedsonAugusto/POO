#include "UsuaryInterface.h"
#include <iostream>

using std::cout;

void UsuaryInterface::printLogoBanco() {
    cout << "\n";
    cout << "|-----------------------|\n";
    cout << "|       BANCO JS        |\n";
    cout << "|-----------------------|\n";
}

void UsuaryInterface::printOpcoesCliente() {
    cout << "[1] DÉPOSITAR\n";
    cout << "[2] RETIRAR\n";
    cout << "[3] EXTRATO BANCÁRIO\n";
    cout << "[4] TRANSFERÊNCIA\n";
    cout << "[5] TROCAR PARA FUNCIONÁRIO\n";
    cout << "[6] SAIR\n";
}

void UsuaryInterface::printOpcoesFuncionario() {
    cout << "[1] CADASTRAR PESSOA\n";
    cout << "[2] CADASTRAR CONTA\n";
    cout << "[3] REMOVER CONTA\n";
    cout << "[4] REMOVER PESSOA\n";
    cout << "[5] CONSULTAR CONTA ÚNICA\n";
    cout << "[6] CONSULTAR TODAS AS CONTAS\n";
    cout << "[7] TROCAR PARA CLIENTE\n";
    cout << "[8] SAIR\n";
}

void UsuaryInterface::printDespedida() {
    cout << "\n|-----------------------|\n";
    cout << "         OBRIGADO         \n";
    cout << "       VOLTE SEMPRE       \n";
    cout << "|-----------------------|\n";
}

void UsuaryInterface::ClienteOuFuncionario() {
    std::cout << "Deseja entrar como:\n";
    std::cout << "[1] FUNCIONÁRIO\n";
    std::cout << "[2] CLIENTE\n";
    std::cout << "Decisão: ";
    std::cin >> clienteOuFuncionario;
    while ((getClienteOuFuncionario() != 1) && (2 != getClienteOuFuncionario())){
        std::cout << "Digite opção válida\n";
        std::cout << "Decisão: ";
        std::cin >> clienteOuFuncionario;
    }
}

void UsuaryInterface::funcaoFuncionario(int escolha) {
    string cpfOuCnpj;
    int fisicaJuridica, tipoDaConta, numConta;
    switch (escolha){
        case 1:
            std::cout << "[1] JURÍDICA\n";
            std::cout << "[2] FÍSICA\n";
            std::cout << "Decisão: ";
            std::cin >> fisicaJuridica;
            while (fisicaJuridica != 1 && fisicaJuridica != 2){
                std::cout << "Digite opção válida\n";
                std::cout << "Decisão: ";
                std::cin >> fisicaJuridica;
            }
            banco->cadastraPessoa(fisicaJuridica);
            break;
        case 2:
            std::cout << "[1] COMUM\n";
            std::cout << "[2] POUPANÇA\n";
            std::cout << "[3] LIMITE\n";
            std::cout << "Decisão: ";
            std::cin >> tipoDaConta;
            while (tipoDaConta != 1 && tipoDaConta != 2 && tipoDaConta != 3){
                std::cout << "Digite opção válida\n";
                std::cout << "Decisão: ";
                std::cin >> tipoDaConta;
            }
            std::cout << "CPF OU CNPJ: ";
            std::cin >> cpfOuCnpj;
            banco->cadastrarConta(tipoDaConta, cpfOuCnpj);
            break;
        case 3:
            std::cout << "DIGITE O NÚMERO DA CONTA: ";
            std::cin >> numConta;
            banco->removeConta(numConta);
            break;
        case 4:
            std::cout << "DIGITE O CPF OU CPNJ QUE DESEJA REMOVER: ";
            std::cin >> cpfOuCnpj;
            banco->removePessoa(cpfOuCnpj);
            break;
        case 5:
            std::cout << "DIGITE O NÚMERO DA CONTA: ";
            std::cin >> numConta;
            banco->consultaUnicaConta(numConta);
            break;
        case 6:
            std::cout << "DIGITE O CPF OU CNPJ DAS CONTAS: ";
            std::cin >> cpfOuCnpj;
            banco->consultaContas(cpfOuCnpj);
            break;
        case 7:
            this->clienteOuFuncionario = (this->clienteOuFuncionario == 1) ? 2 : 1;
            break;
    }

}

void UsuaryInterface::funcaoCliente(int escolha) {
    int numConta;
    double saldo;
    string cpfOuCnpj;
    switch (escolha){
        case 1:
            std::cout << "Digite o número da conta que deseja depositar: ";
            std::cin >> numConta;
            std::cout << "\nDigite o valor do depósito: ";
            std::cin >> saldo;
            banco->depositarNaConta(numConta, saldo);
            break;
        case 3:
            std::cout << "Digite o número da conta que ver o extrato: ";
            std::cin >> numConta;
            banco->consultaUnicaConta(numConta);
            break;
        case 5:
            this->clienteOuFuncionario = (this->clienteOuFuncionario == 1) ? 2 : 1;
            break;
        case 6:
            this->escolhas = 8;
            break;
    }
}

void UsuaryInterface::loopFuncionalidades() {
    string cnpjFuncionario;
    while (this->escolhas != 8) {
        switch (this->clienteOuFuncionario){
            case 1:
                std::cout << "\nDigite o seu CNPJ: ";
                std::cin >> cnpjFuncionario;
                while (cnpjFuncionario != banco->getCpfOuCnpj()){
                    std::cout << "Erro. CNPJ não correspondente.\n";
                    std::cout << "Digite o seu CNPJ: ";
                    std::cin >> cnpjFuncionario;
                }
                printLogoBanco();
                printOpcoesFuncionario();
                std::cout << "Decisão: ";
                std::cin >> this->escolhas;
                while(this->escolhas < 1 || this->escolhas > 6){
                    std::cout << "Digite valor válido.\n";
                    std::cin >> this->escolhas;
                }
                funcaoFuncionario(this->escolhas);
                break;
            case 2:
                printLogoBanco();
                printOpcoesCliente();
                std::cout << "Decisão: ";
                std::cin >> this->escolhas;
                while(this->escolhas < 1 || this->escolhas > 6){
                    std::cout << "Digite valor válido.\n";
                    std::cin >> this->escolhas;
                }
                funcaoCliente(this->escolhas);
                break;
        }
    }
}