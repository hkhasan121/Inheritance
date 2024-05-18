#include<bits/stdc++.h>
using namespace std;

class Animal{
    public:
    int age;
    int height;
    public:
    void eat()
    {
        cout<<"Eating"<<endl;
    }

};


//Dog class inherit Animal class
class Dog  : public Animal {
    public:
    void bark()
    {
        cout<<"Barking"<<endl;
    }
};


//BabyDog class inherit Dog Class
class BabyDog : public Dog{
    public:
    void weep()
    {
        cout<<"Weeping"<<endl;
    }

};


int main()
{
    BabyDog d1;
    d1.eat();
    d1.bark();
    d1.weep();
}