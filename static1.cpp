#include<iostream>
using namespace std;
class test
{
  public:
    int a=10;

    void show()
    {
        cout<<a<<endl;
    }
};

    int main()
    {
        test t1,t2;
        t1.show();
        t2.show();
    }
