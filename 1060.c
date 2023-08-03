
#include <stdio.h>
int main()
{
    double n;
    int p = 0, i;
    i = 0;

    while( i < 6)
    {
        scanf("%lf", &n);
        if(n > 0){
        p++ ;
        }
        i++ ;
    }

    printf("%i valores positivos", p);

    return 0;
}

