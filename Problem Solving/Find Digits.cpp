#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin>>t;

    for(int z=0; z<t; z++)
    {
        int n, count=0, dig, temp;
        cin>>n;
        temp = n;

        while(temp>0)
        {
            dig = temp%10;

            if(dig !=0)
            {
                if(n%dig == 0)
                    count++;
            }

            temp /= 10;
        }
        cout<<count<<"\n";

    }

    return 0;
}