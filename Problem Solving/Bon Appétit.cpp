#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,k, bActual=0;

    cin>>n>>k;

    int bill[n];

    for(int i=0; i<n; i++)
    {
        cin>>bill[i];

        if(i!=k)
            bActual += bill[i];
    }

    bActual /= 2;

    int bCharged;
    cin>>bCharged;

    if(bCharged == bActual)
        cout<<"Bon Appetit";
    else
        cout<<(bCharged - bActual);    

    return 0;
}