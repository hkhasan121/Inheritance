#include<bits/stdc++.h>
using namespace std;

class A{
    
    public:

    void display()
    {
        cout<<"I am Hasan"<<endl;
    }

    void display(string name)
    {
        cout<<"I am "<<name<<endl;
    }

    void display(string name,int n)
    {
        cout<<name;
    }

};

int main()
{
    A a;
    a.display("hasan",1);
}