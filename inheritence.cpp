#include<iostream>
using namespace std;
class A{
public:
    int x=20;
    void display()
    {
       cout<<"I am from display"<<endl;

    }

   };

class B:public A{

  public:
      void display()
      {
          cout<<"I am from show"<<endl;
      }

};
int main()
{
    B st;
    cout<<st.x<<endl;
    st.B::display();
    st.A::display();
}
