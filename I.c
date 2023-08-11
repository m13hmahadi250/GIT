#include<stdio.h>
int main()
{
    int a, b;
    scanf("%d%d", &a, &b);

    if( (a > b) || (a == b)){
        printf("Yes\n");
    }

    if( a < b) {
        printf("No\n");
    }
    return 0;

}




