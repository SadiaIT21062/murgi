#include<bits/stdc++.h>
using namespace std;
int main()
{
    int T;
    scanf("%d", &T);

    while (T--)
    {
        int hr, m;
        char temp;

        scanf("%d%c%d", &hr, &temp, &m);

        m = (60 - m) % 60;

        hr = 12 - hr;
        if (m != 0)
            hr--;

        //hr = (hr + 12) % 12;
        if (hr == 0)
            hr = 12;
        printf("%02d:%02d\n", hr, m);
    }
}
