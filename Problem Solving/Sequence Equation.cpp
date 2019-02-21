#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin>>n;

    int p[n], y[n], tempPos, k=0;

    for(int i=0; i<n; i++)
    {
        cin>>p[i];
    }

    for(int j=1; j<=n; j++)
    {
        for(int i=1; i<=n; i++)
        {
            if(p[i-1] == j)
            {
                tempPos = i;
                break;
            }    
        }

        for(int i=1; i<=n; i++)
        {
            if(p[i-1] == tempPos)
            {
                y[k] = i;
                k++;
            }    
        }
    }

    for(int i=0; i<n; i++)
    {
        cout<<y[i]<<"\n";
        k++;
    }

    return 0;
}