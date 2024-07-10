#include<iostream>
using namespace std;
class student
{
    public:
    string roll,name;
    void getdata()
    {
        cin>>roll>>name;

    }
    void display()
    {
        cout<<roll<<" ";
    }
};
class grades:public student{
  public:
  string roll,grade;
  void getdata()
  {
      student::getdata();
      cin>>grade;
  }
  void display()
  {
      cout<<name<<" "<<grade;
  }


};
int main()
{
    grades obj;
    obj.grades::getdata();
    obj.student::display();
    obj.grades::display();
}
