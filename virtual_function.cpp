#include "iostream"
using namespace std;

class Car{
    protected:
        int gear;
    public:
        Car(){
            gear = -1;
        }
        void shift_gear(){
            gear = 2;
            cout << gear << " ";
            cout << "Parent Class Function\n";
        }

};

class sportsCar: public Car{    
    public:
        virtual void shift_gear(){
            gear = 3;
            cout << gear << " ";
            cout << "Child Class Function\n";
        }
};

class customCar: public sportsCar{
    public:
        void shift_gear(){
            gear = 4;
            cout << gear << " ";
            cout << "Grand Child Function\n";
        }
};

int main(){
    Car *pt;
    sportsCar sC;
    pt = &sC;
    pt->shift_gear();
    customCar cC;
    pt = &cC;
    pt->shift_gear();
    sportsCar *pt1;
    pt1 = &cC;
    pt1->shift_gear();
}