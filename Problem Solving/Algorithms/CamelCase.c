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
    char a[100000];
    int n, count=1;
    scanf("%s",a);
    n = strlen(a);

    for(int i=0; i<n; i++)
    {
        if(a[i]>='A' && a[i]<='Z')
        count++;
    }
    printf("%d", count);

    return 0;
}