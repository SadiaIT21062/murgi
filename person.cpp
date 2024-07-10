#include<iostream>
using namespace std;
class person
{
    public:
    string name,age;

    void display()
    {
        cout<<name<<" "<<age<<endl;
    }
};
int main()
{
    person obj;
    obj.name="Sadia";
    obj.age="20";
    obj.display();
}
