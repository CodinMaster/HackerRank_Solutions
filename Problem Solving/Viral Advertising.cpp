#include <bits/stdc++.h>

using namespace std;

int main()
{
    int p=5, n, l=0;
    cin>>n;

    for(int i=1; i<=n; i++)
    {
        l += p/2;


        p = (p/2)*3;
    }

    cout<<l;


    return 0;
}
