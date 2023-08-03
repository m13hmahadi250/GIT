#include <stdio.h>
int main()
{
    int x=0,a,b,c,e,d=0;
    a=1;
    while(a<=100)
    {
        scanf("%d", &b);
        x++;
        if(b>d)
        {


            e=x;
            d=b;
        }
        a++;
    }
    printf("%d\n",d);
    printf("%d\n",e);
    return 0;
}
