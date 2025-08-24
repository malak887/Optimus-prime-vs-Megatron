#ifndef CHARACTERS_H   
#define CHARACTERS_H

#include <string>
using namespace std;

class Characters {
protected:
    string name;
    int health =100;

public:
    Characters(string name);   
    int get_health();
    string get_name();  
   virtual void attack() = 0;
   
};
#endif
