#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,t;
    cin>>n>>t;

    int width[n];
    int i[t], j[t];

    for(int k=0; k<n; k++)
    {
        cin>>width[k];
    }

    for(int p=0; p<t; p++)
    {
        cin>>i[p]>>j[p];
    }

    int min=0;

    for(int z=0; z<t; z++)
    {
        min=width[i[z]];
        for(int y=i[z]; y<=j[z]; y++)
        {
            if(width[y]<min)
                min = width[y];
        }
        cout<<min<<"\n";
    }

    return 0;
}