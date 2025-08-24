#ifndef CHARACTERS_H   
#define CHARACTERS_H

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
#endif
