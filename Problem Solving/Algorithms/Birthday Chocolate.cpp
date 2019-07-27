#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, d, m, count=0;
    cin>>n;
    int a[n];

    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }
    cin>>d>>m;

    int tsum;

    for(int i=0; i<n; i++)
    {
        tsum = a[i];
        for(int j=i+1; j<i+m; j++)
        {
            tsum += a[j];
        }

        if(tsum == d)
            count++;
    }

    cout<<count;

    return 0;
}