#include "iostream"
using namespace std;

class Car{
    protected:
    int gear;
    public:
        
        Car(){
            gear = -1;
        }
        void shift_gear(int x){
            gear = x;
            cout << gear << " ";
            cout << "Parent Class function\n";
        }
};

class sportCar : public Car{
    public:
        void shift_gear(){
            cout << gear << " ";
            cout << "Child Class function\n";
        } 
        void shift_gear(int x){
            gear = x;
            cout << gear << " ";
            cout << "Child Class function\n";
        }
};

class customCar : public sportCar{
    public:
       void shift_gear(){
            cout << gear << " ";
            cout << "GrandChild Class function\n";
        } 
        void shift_gear(int x){
            gear = x;
            cout << gear << " ";
            cout << "GrandChild Class function\n";
        } 
};

int main(){
   Car C;
   C.shift_gear(1);
   sportCar SC;
   SC.shift_gear();
   SC.shift_gear(2);
   SC.shift_gear();
   customCar CC;
   CC.shift_gear(1);
}

/*
    FINDINGS:
        1) whenver a variable is inherited then it intialized value in parent class is inherited, not the manipulated value after 
        executing the command.
        2) Method overiding hides the parent class function.
        3) Protected are accessible to child class.
 */