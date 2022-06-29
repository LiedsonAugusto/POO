#include "Empregado.h"

int main() {

    Empregado empregado1("Luan", "Almeida", 2355.8);
    Empregado empregado2("Clebe", "Rodrigues", -1500.0);

    empregado1.impressao();
    empregado2.impressao();

    empregado1.aumentoDezPorCento();
    empregado2.aumentoDezPorCento();

    empregado1.impressao();
    empregado2.impressao();

    return 0;
}