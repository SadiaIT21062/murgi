#include<iostream>
using namespace std;
class employee
{
    public:
    string name,age,serviceYear,salary;
    employee(string n,string a,string ser,string s)
    {
        name=n;
        age=a;
        serviceYear=ser;
        salary=s;
    }
    ~employee()
    {
        cout<<"destructor"<<endl;
    }
    string getName()
    {
        return name;
    }
    string getAge()
    {
        return age;
    }
    string getServiceYear()
    {
       return serviceYear;
    }
    string getSalary()
    {
        return salary;
    }
};
int main()
{
    employee st("Sadia Chowdhury","20","20","0 tk only");
    cout<<st.getName()<<endl<<st.getAge()<<endl<<st.getServiceYear()<<endl<<st.getSalary()<<endl;
}
