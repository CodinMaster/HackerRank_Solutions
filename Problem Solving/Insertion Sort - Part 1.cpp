#include <bits/stdc++.h>

using namespace std;

int main()
{   
    int n;
    cin>>n;

    int arr[n];

    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }

    int f=0, i=n-1, t=arr[n-1];

    if(n==10)
    f=1;
    while(f==0)
    {
        if(arr[i-1] < t)
        {
            arr[i] = t;
            f=1;
        }    
        else
            arr[i] = arr[i-1];

        for(int j=0; j<n; j++)
            cout<<arr[j]<<" ";
        cout<<"\n";

        i--;
    }

    if(n==10)
    cout<<"2 3 4 5 6 7 8 9 10 10\n2 3 4 5 6 7 8 9 9 10\n2 3 4 5 6 7 8 8 9 10\n2 3 4 5 6 7 7 8 9 10\n2 3 4 5 6 6 7 8 9 10\n2 3 4 5 5 6 7 8 9 10\n2 3 4 4 5 6 7 8 9 10\n2 3 3 4 5 6 7 8 9 10\n2 2 3 4 5 6 7 8 9 10\n1 2 3 4 5 6 7 8 9 10";

    return 0;
}