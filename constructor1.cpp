#include<iostream>
using namespace std;
class student
{
   public:
      int m,n;
      void input()
        {
            cin>>m>>n;
        }
        void show()
        {
            cout<<"m="<<m<<endl<<"n="<<n<<endl;
        }
};
int main()
{
    student obj1,obj2;
    obj1.input();
    obj1.show();

    obj2.input();
    obj2.show();
}
