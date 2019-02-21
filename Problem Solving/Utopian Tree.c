#include <assert.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int t, a[10], h[10];

    scanf("%d",&t);

    for(int i=1; i<=t; i++)
    {
        scanf("%d",&a[i]);
        h[i]=1;
    }
    
    for(int i=1; i<=t; i++)
    {
        int p=1;
        while(p <= a[i])
        {
            if(p%2 != 0)
                h[i] *= 2;
            else
                h[i] += 1; 

            p++;       
        }
    }
    for(int i=1; i<=t; i++)
    {
        printf("%d\n",h[i]);
    }
    return 0;
}