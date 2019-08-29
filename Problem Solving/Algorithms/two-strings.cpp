#include <bits/stdc++.h>
#include <string.h>

using namespace std;

int main()
{
    int p;
    cin>>p;
    string s1[p], s2[p];
    int yes[p],as1[p][26],as2[p][26];

    for(int z=0; z<2*p; z++)
        cin>>s1[z]>>s2[z];

    for(int z=0; z<p; z++)
    {
        yes[z]=0;

        for(int i=0; i<26; i++)
        {
            as1[z][i] = 0;
            as2[z][i] = 0;
        }

        for(int i=0; i<s1[z].length(); i++)
        {
            int aval = (int)(s1[z].at(i))-'a';
            as1[z][aval]++;
        }
        for(int i=0; i<s2[z].length(); i++)
        {
            int aval = (int)(s2[z].at(i))-'a';
            as2[z][aval]++;
        }
        for(int i=0; i<26; i++)
        {
            if(as1[z][i] != 0 && as2[z][i] !=0)
            {    
                yes[z]=1;
                break;
            }    
        }
        if(yes[z]==1)
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }    
    return 0;
}
