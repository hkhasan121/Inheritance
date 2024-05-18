#include<bits/stdc++.h>
using namespace std;

class A{
    public:
    void fun1()
    {
        cout<<"I am A"<<endl;
    }
};

class D 
{
    public:
    void fun4()
    {
        cout<<"I am D"<<endl;
    }
};

class B  : public A{
    public:
    void fun2()
    {
        cout<<"I am B"<<endl;
    }
};

class C :  public A , public D{
    public:
    void fun3()
    {
        cout<<"I am C"<<endl;
    }
};

int main()
{
    A a;
    a.fun1();

    B b;
    b.fun1();
    b.fun2();

    C c;
    c.fun1();
    c.fun4();
    c.fun3();

    D d;
    d.fun4();
}