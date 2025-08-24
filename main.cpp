#include<iostream>
#include "characters.h"
#include "Weopon.h"
using namespace std;
int main() { 
    Robots Optimus("Optimus Prime", Weopon("Ion rifl", 6, 100), Weopon("Energon swords", 12, 80), Weopon("Shoulder canon", 45, 25));
    Robots Megatron("Megatron", Weopon("Fusion cannon", 9, 90), Weopon("Tank Mode", 60, 15), Weopon("Fusion Sword", 60, 15));
   cout<<"Welcome to the battle between Optimus Prime and Megatron!"<<endl;
   cout<<"Each robot has 3 weopons to choose from:"<<endl; 
    cout<<"1. "<<Optimus.w[0].get_name()<<" (Damage: "<<Optimus.w[0].get_demage()<<", Accuracy: "<<Optimus.w[0].get_accuracy()<<"%)"<<endl;
    cout<<"2. "<<Optimus.w[1].get_name()<<" (Damage: "<<Optimus.w[1].get_demage()<<", Accuracy: "<<Optimus.w[1].get_accuracy()<<"%)"<<endl;
    cout<<"3. "<<Optimus.w[2].get_name()<<" (Damage: "<<Optimus.w[2].get_demage()<<", Accuracy: "<<Optimus.w[2].get_accuracy()<<"%)"<<endl;
    cout<<"-----------------------------------------------"<<endl;
    cout<<"1. "<<Megatron.w[0].get_name()<<" (Damage: "<<Megatron.w[0].get_demage()<<", Accuracy: "<<Megatron.w[0].get_accuracy()<<"%)"<<endl;
    cout<<"2. "<<Megatron.w[1].get_name()<<" (Damage: "<<Megatron.w[1].get_demage()<<", Accuracy: "<<Megatron.w[1].get_accuracy()<<"%)"<<endl;
    cout<<"3. "<<Megatron.w[2].get_name()<<" (Damage: "<<Megatron.w[2].get_demage()<<", Accuracy: "<<Megatron.w[2].get_accuracy()<<"%)"<<endl;
    cout<<"-----------------------------------------------"<<endl;  
return 0;

}