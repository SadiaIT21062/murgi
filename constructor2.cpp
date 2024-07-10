#include<iostream>
using namespace std;
class student{
    public:
       int id;
       double cgpa;
student(int x,double y)
{
    id=x;
    cgpa=y;
    cout<<id<<" "<<cgpa<<endl;
}

student()
{
    cout<<"default constructor"<<endl;
}
};
int main()
{
    student ob1(1,3.99);


    student ob2;

}
