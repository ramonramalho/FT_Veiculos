/* Unicamp - Universidade Estadual de Campinas
   FT - Faculdade de Tecnologia
   Limeira - SP
   Prof. Dr. Andre F. de Angelis
   Maio/2015
*/

#ifndef RODAS_H

#define RODAS_H

#include <string>
#include "ItemVenda.h"

using namespace std;

class Rodas : public ItemVenda
   {
   private:
      string aro;
      string marca;
      
      
   public:
      Rodas(string aro,string marca, double);
      virtual string getDescricao();
   };
   
#endif
   
/* fim de arquivo */