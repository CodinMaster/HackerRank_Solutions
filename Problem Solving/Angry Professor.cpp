#include <bits/stdc++.h>

using namespace std;

int main()
{   
    int t;
    cin>>t;

    for(int z=0; z<t; z++)
    {
        int n, k, classCancel=0, onTime=0;
        cin>>n>>k;
        int a[n];

        for(int i=0; i<n; i++)
        {
            cin>>a[i];
            
            if(a[i]<=0)
                onTime++;
        }
        if(onTime < k)
            cout<<"YES";
        else
            cout<<"NO";

        cout<<"\n";
    }


    return 0;
}