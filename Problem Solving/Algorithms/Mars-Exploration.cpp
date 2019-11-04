#include <bits/stdc++.h>

using namespace std;

int main()
{
    int count=0;
    string s;
    cin>>s;

    for(int i=0; i< s.length(); i++)
    {
        if((i%3 == 0 || i%3 == 2) && s[i] != 'S')
            count++;
        else if(i%3 == 1 && s[i] != 'O')
            count++;
        
    }

    cout<<count;

    return 0;
}