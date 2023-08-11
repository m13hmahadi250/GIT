#include<stdio.h>
int main()
{
    int n, m, i, j, f;

    scanf("%d", &n);

    for(j = 1; j<=n ; j++)
        {
            scanf("%d", &m);
             f = 0;

         for( i = 2; i < m; i++ )
    {
        if( m % i == 0 )
        {
             f++ ;
             break;
        }

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

