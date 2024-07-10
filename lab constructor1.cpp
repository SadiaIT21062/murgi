#include<iostream>
using namespace std;
class student
{
    public:
    string name,id,dept,session,faculty;

    void display()
    {
        cout<<name<<endl<<id<<endl<<dept<<endl<<session<<endl<<faculty;
    }
    student(string nm,string i,string dep,string ses,string fa)
        {
            name=nm;
            id=i;
            dept=dep;
            session=ses;
            faculty=fa;
        }
};
int main()
{
    string name,id,dept,session,faculty;

    cin>>name>>id>>dept>>session>>faculty;
    student st(name,id,dept,session,faculty);
    st.display();
}

