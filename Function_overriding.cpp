#include<bits/stdc++.h>
using namespace std;

/*class Animal{
    public:
    void speak()
    {
        cout<<"Speaking"<<endl;
    }
};

class Dog : public Animal{
    public:
    void speak()
    {
        cout<<"Barking"<<endl;
    }
};*/

class parent{
    public:
    void printName()
    {
        cout<<"I am parent "<<endl;
    }
};

class Child1 : public parent{
    public:
    void printName()
    {
        cout<<"I am child1"<<endl;
    }
};

class Child2 : public parent{
    public:
    void printName()
    {
        cout<<"I am child2"<<endl;
    }

};

int main(){
    /*Dog d;
    d.speak();*/

    parent p;
    p.printName();

    Child1 c1;
    c1.printName();

    Child2 c2;
    c2.printName();



}