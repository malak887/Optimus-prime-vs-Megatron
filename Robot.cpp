# include <iostream>
using namespace std;
class Robots{
    protected:
    string name;
    private:
    int health =100;
    public:
    Robots(string n) : name(n) {}
    string getName() {
        return name;
    }
    virtual void attck() = 0;
};


