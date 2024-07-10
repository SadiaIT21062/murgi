#include<iostream>
using namespace std;

class student
{
public:
   string name;
   int roll;
   long long int phone;
   string ads;

   void show()
   {
       cout<<name<<" "<<roll<<" "<<phone<<" "<<ads<<endl;
   }

};
int main()
{
   student obj1,obj2;

   obj1.name="John";
   obj1.roll=2;
   obj1.phone=0176465;
   obj1.ads="Mirzapur";
   obj1.show();

   obj2.name="Sum";
   obj2.roll=3;
   obj2.phone=017731;
   obj2.ads="Tangail";
   obj2.show();
}
