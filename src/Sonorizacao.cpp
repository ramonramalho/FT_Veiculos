#include <string>
#include "ItemVenda.h"
#include "Sonorizacao.h" 

using namespace std;

Sonorizacao::Sonorizacao(string tipo, string marca, double valor) : ItemVenda(valor) {
    this->tipo = tipo;
    this->marca = marca;
    
};

 string Sonorizacao::getDescricao() {
    return (tipo+ " " +marca);
};

