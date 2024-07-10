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
}
