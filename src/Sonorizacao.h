
#ifndef SONORIZACAO_H

#define SONORIZACAO_H

#include <string>
#include "ItemVenda.h"

using namespace std;

class Sonorizacao : public ItemVenda { 
private:
    string tipo;
    string marca;

public:
    Sonorizacao(string tipo, string marca, double valor); 
    virtual string getDescricao();
};

#endif

/* fim de arquivo */