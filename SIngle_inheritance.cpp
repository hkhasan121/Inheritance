#include<bits/stdc++.h>
using namespace std;

class Animal{
    public:
    int age;
    int weight;
    int color;
    public:
    void speak()
    {
        cout<<"Barking"<<endl;
    }

};

class Dog : public Animal{
    public:

};

int main()
{
    Dog d;
    d.speak();
    cout<<d.age;
}