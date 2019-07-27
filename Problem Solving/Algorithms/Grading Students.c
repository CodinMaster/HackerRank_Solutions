#include <assert.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void gradeRound(int grade, int* rounded, int i)
{
    int diff=0;
    if(grade>=38)
    {
        diff = grade%10;
        if(diff>5)
            diff = 10-diff;
        else
            diff = 5-diff;

        if(diff<3)        
            grade += diff;
    }
    *(rounded+i) = grade;
}
int main()
{
    int n;
    scanf("%d",&n);
    int* grades = (int*)malloc(n*sizeof(int));
    int* rounded = (int*)malloc(n*sizeof(int));

    for(int i=0; i<n; i++)
    {
        scanf("%d",&grades[i]);
        gradeRound(grades[i],rounded,i);
    }

    for(int i=0; i<n; i++)
        printf("%d\n",*(rounded + i));

    return 0;
}