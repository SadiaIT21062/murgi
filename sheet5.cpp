#include<iostream>
using namespace std;
class Quadratic
{
    public:
    int a=4,b=5,c=6;
    /*Quadratic(int x,int y,int z)
    {
        a=x;
        b=y;
        c=z;
    }*/
    int test()
    {
        int s=b*b-4*a*c;
        if(s==0)
        {
            return 1;
        }
        else if(s>0)
        {
            return 2;
        }
        else
        {
            return 0;
        }
    }
};
int main()
{
    Quadratic st;
    cout<<st.test();
}
