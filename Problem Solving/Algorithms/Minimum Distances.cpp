#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, t;
    cin>>n;

    int min = n, isEqual=0;

    int a[n];

    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }

    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            if(a[i]==a[j] && i!=j)
            {
                t = i-j;
                if(t<0)
                    t *= -1;

                if(t<min)    
                    min = t;

                isEqual = 1;    
            }
        }
    }

    if(isEqual == 1)
    cout<<min;
    else
    cout<<"-1";

    return 0;
}