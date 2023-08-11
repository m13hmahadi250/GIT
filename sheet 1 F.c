#include<stdio.h>
int main()
{
    long long int a, b, sum;
    scanf("%lld%lld", &a, &b);


    sum = (a % 10) + (b % 10);

printf("%lld", sum);
return 0 ;


}
