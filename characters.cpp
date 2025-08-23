# include <iostream>
using namespace std;
class Charachters{
    protected:
    string name;
    private:
    int health =100;
    public:
    Charachters(string n) : name(n) {}
    string getName() {
        return name;
    }
    virtual void attck() = 0;
};


