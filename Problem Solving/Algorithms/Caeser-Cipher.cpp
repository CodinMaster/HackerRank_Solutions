#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, k;
    char s[n];

    char ans[n];

    cin>>n>>s>>k;

    k = k%26;

    for(int i=0; i < n; i++)
    {
        if(s[i]>= 'a' && s[i]<= 'z')
        {
            if(s[i]+k > 'z')
            {
                ans[i] = (s[i]+k)-'z'+'a'-1;
            }
            else
            {
                ans[i] = s[i]+k;
            }
        }
        else if(s[i]>= 'A' && s[i]<= 'Z')
        {
            if(s[i]+k > 'Z')
            {
                ans[i] = (s[i]+k)-'Z'+'A'-1;
            }
            else
            {
                ans[i] = s[i]+k;
            }
        }
        else
        {
            ans[i] = s[i];
        }
    }

    cout<<ans;

    return 0;
}
