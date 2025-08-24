
#include "characters.h"
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