#include<iostream>
using namespace std;
class student{

  public:
      string name;
      int roll;
};
int main()
{
    student n;
    n.name="John";
    n.roll=2;
    cout<<n.name<<' '<<n.roll<<endl;
}
