
#include "characters.h"
#include "Weopon.h"
#include<iostream>
using namespace std;

 Robots::Robots (){

}
Robots::Robots(string name) {
this->name=name;
   
}

int Robots:: get_health() {
   return health;

}
string  Robots::get_name() {
   return name;
}
int Robots::attack(Weopon w) {
  if(w.shot(w.get_accuracy())){
   
    return health-w.get_demage();;
  }
  else return health ;
}