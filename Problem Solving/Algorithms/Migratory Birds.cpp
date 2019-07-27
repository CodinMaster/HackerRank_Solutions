#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[n];

    int freq[5];
    for(int i=0; i<5; i++)
        freq[i]=0;

    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
        freq[arr[i]-1]++;
    }
    int max=0;
    int maxPos;
    for(int i=4; i>=0; i--)
    {
        if(freq[i]>=max)
        {
            max = freq[i];
            maxPos = i;
        }
    }

    cout<<(maxPos+1);
    

    return 0;
}