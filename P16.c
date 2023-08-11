#include<stdio.h>
int main(){

 int n, i;
 scanf("%d", &n);
 i = 1;
 while(1)
    {
    i = n % 10;
    if( i == 4 || i == 7) {

        printf("Goldern Number\n");

    }

    else {
        printf("Not Goldern Number\n");
    }
   n /= 10;
}
 return 0 ;
}
