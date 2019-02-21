#include <bits/stdc++.h>

using namespace std;

int main()
{  
    int l, r, max;
    cin>>l>>r;

    max=l^r;
    for(int i=l; i<=r; i++)
    {
        for(int j=l; j<=r; j++)
        {
            //cout<<"i xor j: "<<(i^j)<<"\n";
            if((i^j) > max)
                max = i^j;
            //cout<<"max: "<<max<<"\n";
        }
    }

    cout<<max;

    return 0;
}