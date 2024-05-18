#include<bits/stdc++.h>
using namespace std;

class smartPhone{
    public:
    virtual void call()
    {
        cout<<"Call"<<endl;

    }
    virtual void takeSelfie() = 0;
};

class Android : public smartPhone{
    public:

    void call() override
    {
        cout<<"Android Calling"<<endl;
    }
    void takeSelfie() override
    {
        cout<<"Android Selfie"<<endl;
    }

};

class Iphone : public smartPhone{
    public:
    void takeSelfie() override
    {
        cout<<"Iphone Selfie"<<endl;
    }
};

int main()
{
    smartPhone *m;
    m = new Android();
    m->takeSelfie();
    m->call();
    smartPhone* m2;
    m2 = new Iphone();
    m2->call();
    m2->takeSelfie();
}