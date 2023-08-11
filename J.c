#include<stdio.h>
int main()
{
    int a, b, c, d;
    scanf("%d%d", &a, &b);

    c = a % b;
    d = b % a;
    if( (c == 0)|| ( d == 0)){
        printf("Multiples\n");
    }

    else {
        printf("No Multiples\n");
    }
    return 0;

}




