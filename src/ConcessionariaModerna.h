
#ifndef  CONCESSONARIAMODERNA_H 

#define CONCESSONARIAMODERNA_H

#include <string>
#include "Concessionaria.h"

using namespace std;

class ConcessionariaModerna : public Concessionaria {
private:
    string site;
    string facebook;
    string tweeter;
    string whatsapp;


public:
    ConcessionariaModerna(
      string site, string facebook, string teweeter, string whatsapp,
      string nome, string endereco, string cidade, string estado, string telefone
    );

    const virtual string getSite();
    const virtual string getFacebook();
    const virtual string getTweeter();
    const virtual string getWhatsapp();

};

#endif

/* fim de arquivo */