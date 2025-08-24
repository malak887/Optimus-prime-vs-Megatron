#ifndef CHARACTERS_H   
#define CHARACTERS_H
#include <iostream>
#include <cstdlib>  
#include <ctime>  
#include <string>
#include "Weopon.h"

using namespace std;

class Characters {
protected:
    string name;

public:
    Characters();   
    Characters(string name); 

    string get_name();  
   virtual int attack(Weopon)= 0;
   
};

class Robots : public Characters{
private:
int health=100;

public:
Robots ();
Robots(string name, Weopon w1, Weopon w2, Weopon w3);
Weopon w[3];

int get_health();
string get_name();
int attack( Weopon) override;
};

#endif
