#include<iostream>
using namespace std;
class rectangle
{
    public:

    int area(int x,int y)
   {
       return x*y;
   }
};
int main()
{
    rectangle rec1;
    rectangle rec2;
    cout<<rec1.area(4,5)<<endl;
    cout<<rec2.area(5,8)<<endl;
}
