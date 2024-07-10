#include<iostream>
using namespace std;
class rectangle{
  public:

      int area(int length,int width)
      {
          return length*width;
      }

};
int main()
{
    rectangle rec1;
    cout<<rec1.area(4,5)<<endl;
    cout<<rec1.area(8,5)<<endl;
    return 0;
}
