#include <bits/stdc++.h>

using namespace std;

int main()
{
    int x1, v1, x2, v2;
    int yes=0;
    cin>>x1>>v1>>x2>>v2;

    if(v1<=v2)
        yes=0;
    else
    {
        if((x2 - x1)%(v1 - v2) == 0)
            yes=1;
    }

    if(yes==1)
        cout<<"YES";
    else
        cout<<"NO";

    return 0;
}