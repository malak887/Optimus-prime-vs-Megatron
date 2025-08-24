#include "characters.h"
#include <iostream>
using namespace std;

Characters::Characters(string name) {
this->name=name;
   
}

int Characters::get_health() {
   return health;
}

string Characters::get_name() {
   return name;
}

