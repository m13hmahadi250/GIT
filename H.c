#include<stdio.h>
#include<math.h>

int main()
{
     int a, b;

     scanf("%d %d", &a, &b);

     double div = a / b;

     int x = floor(div);
     int y = ceil(div);
     int z = round(div);

     printf("flood %d / %d = %d\n",a, b, x);
     printf("ceil %d / %d = %d\n",a, b, y);
     printf("round %d / %d = %d\n",a, b, z);
     return 0 ;
}
