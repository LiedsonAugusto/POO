#include "Cupom.h"
#include <iostream>

using std::cout;
using std::endl;

Cupom::Cupom(string id_usuario, string descricao_usuario, int quantidade_usuario, float preco_usuario)
//construtor
{
    setId(id_usuario);
    setDescricao(descricao_usuario);
    setQuantidade(quantidade_usuario);
    setPreco(preco_usuario);
}

void Cupom::setId(string id_usuario)
//set id
{
    id = id_usuario;
}

void Cupom::setDescricao(string descricao_usuario)
//set descricao
{
    descricao = descricao_usuario;
}

void Cupom::setQuantidade(int quantidade_descricao)
//set quantidade
{
    if (quantidade_descricao < 0)
        quantidade = 0;
    else
        quantidade = quantidade_descricao;
}

void Cupom::setPreco(float preco_usuario)
//set preco
{
    if (preco_usuario < 0)
        preco = 0;
    else
        preco = preco_usuario;
}

string Cupom::getId()
//get id
{
    return id;
}

string Cupom::getDescricao()
//get descricao
{
    return descricao;
}

int Cupom::getQuantidade()
//get quantidade
{
    return quantidade;
}

float Cupom::getPreco()
//get preco
{
    return preco;
}

void Cupom::calculaCupom()
//calcula cupom
{
    cout << "Valor total: " << preco*quantidade << endl;
}