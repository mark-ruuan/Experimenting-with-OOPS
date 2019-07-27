#include "iostream"
using namespace std;


class complex{
    int a, b;
    public: 
        complex(){
            a = 0;
            b = 0;
        }
        void set_data(int, int);
        void show_data();
        complex add(complex c){
            complex temp;
            temp.a = a + c.a;
            temp.b = b + c.b;
            return temp;
        }
        complex subtract(complex c){
            complex temp;
            temp.a = a - c.a;
            temp.b = b - c.b;
            return temp;
        }
};

void complex :: set_data(int x, int y){
    a = x;
    b = y;
    return ;
}

void complex :: show_data(){
    cout << a << " " << b << "\n";
}

int main(){
    complex C1, C2, C3;
    C1.set_data(3, 4);
    C1.show_data();
    C2.set_data(5, 6);
    C2.show_data();
    C3 = C1.add(C2);
    C3.show_data();
    C3 = C1.subtract(C2);
    C3.show_data();

    return 0;
}