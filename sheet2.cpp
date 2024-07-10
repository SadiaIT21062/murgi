#include<iostream>
#include<math.h>
using namespace std;
class triangle
{
    public:
    int firstSide,secondSide,thirdSide;

    triangle(int x,int y,int z)
    {
        if(x+y>z&&y+z>x&&x+z>y)
        {
            firstSide=x;
            secondSide=y;
            thirdSide=z;
        }
    }
    int getSides()
    {
        cout<<"firstSide is "<<firstSide<<endl;
        cout<<"secondSide is "<<secondSide<<endl;
        cout<<"thirdSide is "<<thirdSide<<endl;
    }
    int getPerimeter()
    {
        return firstSide+secondSide+thirdSide;
    }
    float getArea()
    {
        float s=(firstSide+secondSide+thirdSide)/2;
        float ar=sqrt(s*(s-firstSide)*(s-secondSide)*(s-thirdSide));
        return ar;
    }
};
int main()
{
    triangle st(3,9,8);
    st.getSides();
    cout<<"area is "<<st.getArea()<<endl<<"perimeter is "<<st.getPerimeter()<<endl;
}
