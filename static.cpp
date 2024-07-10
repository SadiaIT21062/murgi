#include<iostream>
using namespace std;

class test
{
    public:
      static int a;
static show()
{
    cout<<a++;
}
int value;
void display()
{
    cout<<value<<endl;
}
};
int test::a;
int main()
{
    test t;
    t.value=5;
    t.display();
    cout<<test::a++<<endl;
    test::show();
    return 0;
}
