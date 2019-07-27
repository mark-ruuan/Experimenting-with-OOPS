#include "iostream"
using namespace std;

class student{
    int age, rollno;
    public:
        void show_data(){
            cout << age << " " << rollno << "\n";
        }
};

class student1{
    int age, rollno;
    public:
        student1(){
            age = 0;
            rollno = 0;
        }
        student1(int x, int y){
            age = x;
            rollno = y;
        }
        student1(int x){
            age = x;
            rollno = 0;
        }
        void show_data(){
            cout << age << " " << rollno << "\n";
        }
};

class student2{
    int a, b;
    public:
        student2(){
            a = 0;
            b = 0;
        }
        student2(int x, int y){
            a = x;
            b = y;
        }
        student2( student2 &s){
            a = s.a;
            b = s.b;
        }
        void show_data(){
            cout << a << " " << b << "\n";
        }
};

int main(){
    student a;
    a.show_data();
    student1 s1;
    s1.show_data();
    student1 s2(1);
    student1 s3(1, 2);
    s2.show_data();
    s3.show_data();
    student1 s4(s3);
    s4.show_data();
    student2 s5(3, 4);
    s5.show_data();
    student2 s6(s5);
    s6.show_data();

    
}