#include <stdio.h>

int main(){
    int n, i, j;
    double k;
    scanf("%d", &n);
    for(i=1; i<=n; i++)
    {
        for(j=n; j>=i; j--)
        {
            printf(" ");
        }
        for(k=1.0; k<=i; k+=0.5)
        {
                printf("*");
        }
        printf("\n");
    }

    for(i=2; i<=n; i++)
    {
        for(j=1; j<=i; j++)
        {
            printf(" ");
        }
        for(k=(double)n; k>=i; k-=0.5)
        {
                printf("*");
        }
        printf("\n");
    }

    return 0;
}
