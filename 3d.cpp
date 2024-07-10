#include<iostream>
using namespace std;
class student
{
public:
    int roll,a,b,c,d,e,total,aver;

};
class test:public student
{
public:
    void input()
    {
        cin>>roll>>a>>b>>c>>d>>e;
    }
};
class result:public test
{
public:
    void display()
    {
        total=a+b+c+d+e;
        aver=total/5;
        cout<<roll<<' '<<total<<' '<<aver;
    }
};
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        result ob;
        ob.input();
        ob.display();
    }
}
