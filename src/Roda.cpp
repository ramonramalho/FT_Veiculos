/* Unicamp - Universidade Estadual de Campinas
   FT - Faculdade de Tecnologia
   Limeira - SP
   Prof. Dr. Andre F. de Angelis
   Maio/2015
*/

#include <string>
#include "Roda.h"
#include "ItemVenda.h"

using namespace std;

Roda::Roda(string aro,string marca, double valor) : ItemVenda(valor)
   {
   this->aro = aro;
   this->marca = marca;
   };
   
string Roda::getDescricao()
   { 
   return ("Roda " +marca+ " Aro: " + aro +" Valor: "); 
   };
   
/* fim de arquivo */