#include <iostream>
using namespace std;

//Base class vehicle
class Vehicle{
    public:
       void vehicle(){
          cout<<"I am a vehicle"<<endl;
       }
};

//Derived class Twowheeler (inherites from vehicle)
class Twowheeler: public Vehicle {
    public:
       void twoWheeler(){
          cout<<"I am a twowheeler"<<endl;
       }
};

//Derived class bike(inheritence from twowheeler)
class Bike:public Twowheeler {
    public:
       void bike() {
          cout<<"I am a bike"<<endl;
       }
};

int main() 
{
    //Create an object of class bike 
    Bike mybike;
    
    //Calling methods of bike,twoWheeler,and vehicle through bike object 
    mybike.bike();
    mybike.twoWheeler();
    mybike.vehicle();
    
    return 0;
}