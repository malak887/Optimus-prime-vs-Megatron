
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
int Robots::attack(Weopon we) {
  if(we.shot(we.get_accuracy())){
   
    return health-we.get_demage();;
  }
  else return health ;
}