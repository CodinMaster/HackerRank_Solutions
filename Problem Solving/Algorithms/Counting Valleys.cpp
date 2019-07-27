#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, valleyCount=0;
    cin>>n;
    char s[n+1];

    int distFromSea=0, beforeDistFromSea=0;

    for(int i=0; i<n; i++)
    {
        if(i!=0)
            beforeDistFromSea = distFromSea;

        cin>>s[i];

        if(s[i]=='U')
            distFromSea++;
        else if(s[i]=='D')
            distFromSea--;

        if(beforeDistFromSea == 0 && distFromSea<0)    
            valleyCount++;

    }
    s[n] = '\0';

    cout<<valleyCount;



    return 0;
}

