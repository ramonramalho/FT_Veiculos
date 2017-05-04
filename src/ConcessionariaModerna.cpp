/* Unicamp - Universidade Estadual de Campinas
   FT - Faculdade de Tecnologia
   Limeira - SP
   Prof. Dr. Andre F. de Angelis
   Maio/2015
 */

#include <string>
#include "ConcessionariaModerna.h" 
#include "Concessionaria.h"

using namespace std;

ConcessionariaModerna::ConcessionariaModerna(
  string site, string facebook, string tweeter, string whatsapp,
  string nome, string endereco, string cidade, string estado, string telefone
) : Concessionaria(nome, endereco, cidade, estado, telefone)
{
    this->site = site;
    this->facebook = facebook;
    this->tweeter = tweeter;
    this->whatsapp = whatsapp;
};

const string ConcessionariaModerna::getSite() {
    return (site);
};

const string ConcessionariaModerna::getFacebook() {
    return (facebook);
};

const string ConcessionariaModerna::getTweeter() {
    return (tweeter);
};

const string ConcessionariaModerna::getWhatsapp() {
    return (whatsapp);
};





