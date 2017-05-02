
#ifndef DIRECAO_H

#define DIRECAO_H

#include <string>
#include "ItemVenda.h"

using namespace std;

class Direcao : public ItemVenda { 
private:
    string tipo;

public:
    Direcao(string tipo, double valor); 
    virtual string getTipo();
    virtual string getDescricao();
};

#endif

/* fim de arquivo */