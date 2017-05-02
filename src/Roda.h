/* Unicamp - Universidade Estadual de Campinas
   FT - Faculdade de Tecnologia
   Limeira - SP
   Prof. Dr. Andre F. de Angelis
   Maio/2015
*/

#ifndef RODA_H

#define RODA_H

#include <string>
#include "ItemVenda.h"

using namespace std;

class Roda : public ItemVenda
   {
   private:
      string aro;
      string marca;
      
      
   public:
      Roda(string aro,string marca, double);
      virtual string getDescricao();
   };
   
#endif
   
/* fim de arquivo */