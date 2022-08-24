#include <iostream>
#include "ExtensoesGerais/ExtensoesGerais.h"



int main(){
    setlocale(LC_ALL, "Portuguese");
    Banco bancoJS("Liedson", "1234", "abc", "lied", "bancoJS");
    UsuaryInterface us(&bancoJS);
    us.ClienteOuFuncionario();
    try{
        us.loopFuncionalidades();
        us.printDespedida();
    } catch (BancoExcecao &e){
        std::cout << "Erro! " << e.what() << '\n';
    } catch (ContaExcecao &e) {
        std::cout << "Erro! " << e.what() << '\n';
    } catch (std::exception &e){
        std::cout << "Erro inesperado.\n";
    }

    return 0;
}