
/*
#include <stdio.h>

int main()
{
 int a, b, c, d;
 scanf("%d %d %d %d", &a, &b, &c, &d);

 if((b > c) && (d > a) && (c + d > a + b) && c > 0 && d > 0 && (a % 2 == 0))
        printf("Valores aceitosn");
 else
        printf("Valores nao aceitosn");

 return 0;
}


*/

#include<stdio.h>

#include<math.h>

int main()

{

    double a,b,c,x,y,z;

    scanf("%lf %lf %lf",&a,&b,&c);

    z=(b*b)-(4*a*c);

    x=(-b+sqrt(z))/(2*a);

    y=(-b-sqrt(z))/(2*a);

    if(a!=0 && z>0)

    {

        printf("x = %.5lf\ny = %.5lf\n",x,y);

    }

    else printf("Impossivel calcular\n");





    return 0;

}
