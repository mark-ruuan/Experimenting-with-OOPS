#include "iostream"
using namespace std;

class Person{
    public:
      virtual void set_age() = 0;
};

class student: public Person{
    public:
        void set_age(){
            cout << "virtual function is overridden\n";
        }
};

class primaryStudent: public student{
    public:
        void set_age(){
            cout << "ps function\n";
        }

};

class Faculty: public Person{
    public:
        void new_age(){
            cout <<"new fuction\n";
        }
};

int main(){
    student st;
    primaryStudent ps;
    st.set_age();
    ps.set_age();
    Faculty ft; //error
    return 0;
}

/*
    FINDINGS:
        1) it is necessary to override pure virtual function else it will make the child class
        as abstract.
        2) once pure virtual function is overriden in its child class then we don't need to override it
        the child's sub classes.
        3) pure do nothing function must be defined as virutal functions.
 */