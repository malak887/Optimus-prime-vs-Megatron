#ifndef CHARACTERS_H   
#define CHARACTERS_H
#include <iostream>
#include <cstdlib>  
#include <ctime>  
#include <string>
using namespace std;

class Characters {
protected:
    string name;

public:
    Characters();   
    Characters(string name); 

    string get_name();  
   virtual void attack() = 0;
   
};

class Robots : public Characters{
private:
int health=100;

public:
Robots ();
Robots(string name);

int get_health();
string get_name();
};


class Weopon {
private:
int damage;
int accuracy;
public:
string name;

Weopon (string name ,int demage,int accuracy){};
bool shot (int accuracy){};
};
#endif
