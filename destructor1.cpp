#include<iostream>
using namespace std;
class name
{
    public:
        void show()
        {
            cout<<"I am from show"<<endl;
        }
        name()
        {
            cout<<"constructor created"<<endl;
        }
        ~name()
        {
            cout<<"destructor"<<endl;
        }

};
int main()
{
    name st;
    st.show();
    name st1;
    {
        cout<<"Inside the block"<<endl;
        name st2;
        cout<<"leaving the block"<<endl;
    }
}
