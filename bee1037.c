
/*
#include <stdio.h>

int main()
{
 double n;
 scanf("%f", &n);

 if(n < 0 || n > 100){
  printf("Fora de intervalo\n");
 }else{

  if(n >= 0 && n <= 25){

   printf("Intervalo [0,25]\n");
  }
  else if(n > 25 && n <= 50){

   printf("Intervalo (25,50]\n");
  }
  else if(n > 50 && n <= 75){

   printf("Intervalo (50,75]\n");
  }
  else{

   printf("Intervalo (75,100]\n");
  }
 }

 return 0;
}  */

#include<stdio.h>
int main()
{
    int X, Y;
    float price = 0;

    scanf("%d %d", &X, &Y);
    if (X == 1)
    {
        price  = (float) (4.00 * Y);
    }
    else if (X == 2)
    {
        price  = (float) (4.50 * Y);
    }
    else if (X == 3)
    {
        price  = (float) (5.00 * Y);
    }
    else if (X == 4)
    {
        price  = (float) (2.00 * Y);
    }
    else if (X == 5)
    {
        price  = (float) (1.50 * Y);
    }

    printf("Total: R$ %.2f\n",price);

}




