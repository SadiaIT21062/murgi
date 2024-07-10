#include<iostream>
using namespace std;

class person
{
    public:
    string name,age;

    ~person()
    {
        cout<<"destructor"<<endl;
    }

    void setName(string nm)
    {
       name=nm;
    }
    void setAge(string ag)
    {
        age=ag;
    }
    string getName()
    {
        return name;
    }
    string getAge()
    {
        return age;
    }
};
int main()
{
    person st;
    st.setName("Sadia");
    st.setAge("20");

    cout<<st.getName()<<endl<<st.getAge()<<endl;
}
