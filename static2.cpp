#include<iostream>
using namespace std;
class test
{
  public:
    static int a;

    void show()
    {
        cout<<a<<endl;
    }
};
    int test::a;
    //data type class name::static variable name;

    int main()
    {
        test t1,t2;
        t1.a=5;
        t1.show();
        t2.show();
    }

