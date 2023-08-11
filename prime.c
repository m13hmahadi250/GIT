#include<stdio.h>
int main()
{
    int n, i, f = 0;

    scanf("%d", &n);

    for( i = 2; i < n; i++ )
    {
        if( n % i == 0 )
        {
             f++ ;
             break;
        }

    }

     if(f == 0){
        printf("%d eh primo\n", n);
     }
     else{
        printf("%d nao eh primo\n", n);
     }

     return 0;
}
