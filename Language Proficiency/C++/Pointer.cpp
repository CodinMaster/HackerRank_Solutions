#include <stdio.h>

void update(int *a,int *b) {
    // Complete this function
    int x = *a, y = *b, A, B;    

    A = x+y;
    
    if(x>y)
        B = x-y;
    else
        B = y-x;

    *a = A;
    *b = B;        

}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    
    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}

