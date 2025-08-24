
#include "characters.h"
#include "Weopon.h"
#include<iostream>
using namespace std;

 Robots::Robots (){

}
Robots::Robots(string name, Weopon w1, Weopon w2, Weopon w3) {
this->name=name;
this->w[0]=w1;
this->w[1]=w2;  
this->w[2]=w3;
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