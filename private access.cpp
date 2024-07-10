#include<iostream>
using namespace std;
class student{
private:
    string name;
public:
    void setName(string nm)
    {
        name=nm;
    }
    string getName()
    {
        return name;
    }
};
int main()
{
    //string n;
   // cin>>n;
    student st;
    st.setName("Mazharul Sona Bow");
    cout<<st.getName();
}
