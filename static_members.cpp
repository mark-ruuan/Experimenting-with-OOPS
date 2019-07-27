#include "iostream"
using namespace std;

class Account{
    int balance;
    static float roi;
    public:
        static float nwRoi;
        Account(){
            balance = 0;
        }
        void setData(int x){
            balance = x;
        }
        void setRoi(float r){
            roi = r;
        }
        static void staticSetRoi(float r){
            roi = r;
        }
        static void display(){
            cout << roi << "\n";
        }
};

float Account :: roi = 3.5f;
float Account :: nwRoi = 5.1f;

int main(){
    cout << Account :: nwRoi << "\n";
    Account :: staticSetRoi(3.3f);
    Account :: display();
    Account a;
    a.setRoi(5.5f);
    a.display();
    Account :: display();
}