#include <bits/stdc++.h>

using namespace std;

int isBNum(int n, int k)
{
    int rev=0, t=n, yes=0, diff;

    while(n>0)
    {
        rev = rev*10 + n%10;
        n /= 10;
    }

    diff = t-rev;

    if(diff<0)
        rev *= -1;

    if(diff%k == 0)    
        yes = 1;

    return yes;
}

int main()
{
    int count=0, i, j, k;

    cin>>i>>j>>k;

    for(int z=i; z<=j; z++)
    {
        if(isBNum(z,k))
            count++;
    }
    cout<<count;

    return 0;
}