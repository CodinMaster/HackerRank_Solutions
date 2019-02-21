#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, pairCount=0;
    cin>>n;

    int a[n];

    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }

    sort(a, a+n);

    for(int i=0; i<n; )
    {
        if(a[i]==a[i+1])
        {
            pairCount++;
            i += 2;
        }
        else
            i++;    
    }
    cout<<pairCount;

    return 0;
}