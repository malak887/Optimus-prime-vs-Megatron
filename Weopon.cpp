  
#include "characters.h"


Weopon :: Weopon (string name ,int demage,int accuracy){
    this->accuracy=accuracy;
    this->damage=demage;
    this->name=name;
}
bool Weopon:: shot (int accuracy){
 srand(time(0));
    int num = (rand() % 100) + 1;
if (num>accuracy)return false;
else true;
}






