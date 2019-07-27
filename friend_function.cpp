#include "iostream"
using namespace std;

class B;

class A{
    int a;
    public:
        A(){
            a = 0;
        }
        A(int x){
            a = x;
        }
        friend void sum(A, B);

};

class B{
    int b;
    public:
        B(){
            b = 0;
        }
        B(int x){
            b = x;
        }
        friend void sum(A, B);
};


void sum(A ob, B ob1){
    cout << "sum: "  << ob.a + ob1.b << "\n";
}

class Complex{
    int x, y;
    public:
        Complex(){
            x = 0;
            y = 0;
        }
        Complex(int xx, int yy){
            x = xx;
            y = yy;
        }
        void display();
        friend Complex operator+(Complex, Complex);
        friend ostream& operator<<(ostream&, Complex);
        friend istream& operator>>(istream&, Complex&);
};

ostream& operator<<(ostream& cout, Complex c){
    cout << c.x << " " << c.y;
    return cout;
}

istream& operator>>(istream& cin, Complex &c){
    cin >> c.x >>  c.y;
    return cin;
}

void Complex :: display(){
    cout << x << " " << y << "\n";
}
Complex operator+(Complex a, Complex b){
    Complex temp;
    temp.x = a.x + b.x;
    temp.y = a.y + b.y;
    return temp;
}

class Car{
    int brand;
    public:
        Car(){
            brand = 1;
        }
        void set_data(int x){
            brand = x;
        }
        void display(){
            cout << brand << "\n";
        }

};

class Jeep{
    int type;
    public:
        Jeep(){
            type = 1;
        }
   // friend void Car::set_data(int x);
};



int main(){
    A ob(1);
    B ob1(2);
    sum(ob, ob1);
    Complex c1(1, 2), c2(3, 4);
    c1 = c1 + c2;
    cout << c1 << "\n";
    cin >> c1;
    cout << c1 << "\n";
    Car ca;
    Jeep jp;
    //jp.set_data(1);
    ca.display();
}