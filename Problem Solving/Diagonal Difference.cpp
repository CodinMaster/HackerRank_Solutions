#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, d1=0, d2=0, o;

    cin>>n;

    int arr[n][n];

    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            cin>>arr[i][j];
        }
    }

    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            if(i==j)
                d1 += arr[i][j];
            if(i == n-j-1)
                d2 += arr[i][j];
        }
    }
    o = d1 - d2;
    if(o<0)
        o *= -1;    

    cout<<o;    

    return 0;
}