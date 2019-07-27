#include <bits/stdc++.h>

using namespace std;

int main()
{
    int b,n,m;
    cin>>b>>n>>m;
    int key[n], drive[m];
    for(int i=0; i<n; i++)
    {
        cin>>key[i];
    }
    for(int i=0; i<m; i++)
    {
        cin>>drive[i];
    }

    int temp, max=-1;
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            temp = key[i]+drive[j];
            if(temp<=b && temp>max)
            {
                max = temp;
            }
        }
    }
    cout<<max;

    return 0;
}