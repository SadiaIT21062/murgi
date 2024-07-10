#include<iostream>
using namespace std;
class person
{
public:
    string name,age;
    void setName(string nm)
    {
        name=nm;
    }
    string getName()
    {
        return name;
    }
     void setAge(string ag)
    {
        age=ag;
    }
    string getAge()
    {
        return age;
    }
    person()
    {
        cout<<"default constructor"<<endl;
    }
    person(string nm,string ag)
    {
        name=nm;
        age=ag;
    }
    void display()
    {
        cout<<name<<endl<<age<<endl;
    }
};
int main()
{
    person p;
    p.setName("Sadia");
    p.setAge("20");
    cout<<p.getName();
    cout<<p.getAge();
    person pc("Meem","20");
    pc.display();
}
