#include<bits/stdc++.h>
using namespace std;

class A{
    public:
    int data;
    A(int data)
    {
        this->data = data;
        cout<<"Constructor call of class A"<<endl;
    }
    void printA()
    {
        cout<<"Value of data1 is "<<this->data<<endl;
    }
};

class B{
    public:
    int data;
    B(int data)
    {
        this->data = data;
        cout<<"Constructor call of class B"<<endl;
    }
    void printB()
    {
        cout<<"Value of data2 is "<<this->data<<endl;
    }

};

class C : public A , public B{
    public: 
    int data;
    C(int a, int b, int c) : A(a) , B(b)
    {
        this->data = c;
        cout<<"Constructor call of class C"<<endl;
    }
    void printC()
    {
        cout<<"Value of data3 is "<<this->data<<endl;
    }

};

int main()
{
    C c(7,8,9);
    c.printA();
    c.printB();
    c.printC();
}