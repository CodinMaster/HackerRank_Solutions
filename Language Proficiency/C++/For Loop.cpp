#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    // Complete the code.
    int a,b;
    scanf("%d%d",&a,&b);

    for(int n=a; n<=b; n++)
    {
        if(n==1)
        printf("one");
    if(n==2)
        printf("two");
    if(n==3)
        printf("three");
    if(n==4)
        printf("four");
    if(n==5)
        printf("five");
    if(n==6)
        printf("six");                    
    if(n==7)
        printf("seven");
    if(n==8)
        printf("eight");
    if(n==9)
        printf("nine");
    if(n==0)
        printf("zero"); 
    if(n>9)       
    {
        if(n%2==0)
            printf("even");
        else
            printf("odd");
    }
    printf("\n");
}

    return 0;
}

