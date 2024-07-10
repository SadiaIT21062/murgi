#include<bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int countWord(string str)
    {
        stringstream s(str);
        string word;
        int count = 0;
        while(s >> word) count++;
        return count;
    }
};
int main()
{
    string s;
    getline(cin,s);
    Solution ob;
    cout<<ob.countWord(s);

}
