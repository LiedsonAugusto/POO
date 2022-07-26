#ifndef CUPOM_H
#define CUPOM_H

#include <string>
using std::string;

class Cupom{

public:
    //construtor
    Cupom(string id_usuario, string descricao_usuario, int quantidade_usuario, float preco_usuario);

    //set's
    void setId(string id_usuario);
    void setDescricao(string descricao_usuario);
    void setQuantidade(int quantidade_descricao);
    void setPreco(float preco_quantidade);

    //get's
    string getId();
    string getDescricao();
    int getQuantidade();
    float getPreco();

    //calcula cupom
    void calculaCupom();


private:
    //atributos
    string id;
    string descricao;
    int quantidade;
    float preco;
    
};


#endif