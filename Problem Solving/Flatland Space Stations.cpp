#include<bits/stdc++.h>
using namespace std;
int main()
{
    int m,n;
    cin>>n>>m;
    int a[m],c[n];
    for(int i=0;i<m;i++)
    {
        cin>>a[i];
        for(int j=0;j<n;j++)
        {
            int k=j-a[i];
            if(k<0)
            {k= -1*k;}
            if(i==0 || k<c[j])
            {
                c[j]=k;
            }
        }
    }
    sort(c,c+n);
    cout<<c[n-1];
    return 0;
}