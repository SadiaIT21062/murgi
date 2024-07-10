#include<iostream>
using namespace std;
class vehicle{
public:
    string brand,colour;

    void getdata()
    {
        cin>>brand>>colour;
    }
    void show()
    {
        cout<<brand<<" "<<colour<<endl;
    }
};
class two_wheeler:public vehicle
{
    public:
        string horntype;
        void getdata()
        {
            vehicle::getdata();
            cin>>horntype;
        }
        void show()
        {
            vehicle::show();
            cout<<horntype;
        }
};
class three_wheeler:public vehicle
{
    public:
        int door;
        void getdata()
        {
            vehicle::getdata();
            cin>>door;

        }
        void show()
        {
            vehicle::show();
            cout<<door;
        }
};
     class four_wheeler:public vehicle
{
    public:
        string mirror;
        void getdata()
        {
            vehicle::getdata();
            cin>>mirror;

        }
        void show()
        {
            vehicle::show();
            cout<<mirror;
        }
    };



int main()
{

        two_wheeler o;
        three_wheeler ob;
        four_wheeler st;
        o.getdata();
        o.show();
        ob.getdata();
        ob.show();
        st.getdata();
        st.show();
}
