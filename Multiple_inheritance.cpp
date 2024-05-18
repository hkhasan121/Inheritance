#include<bits/stdc++.h>
using namespace std;

class Animal{
    public:
    int age;
    int height;

    public:
    void bark()
    {
        cout<<"Barking"<<endl;
    }
};

class Human{
    public:
    string name;
    int age;
    int height;

    public:
    void speak()
    {
       cout<< "Speaking"<<endl;
    }
};


//Multiple inheritanec
class Hybrid : public Animal , public Human {
    public:

};

int main()
{
    Hybrid obj1;
    obj1.speak();
    obj1.bark();
}