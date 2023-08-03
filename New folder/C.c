#include<stdio.h>
int main(){
    int a, b;

    scanf("%d%d", &a, &b);

    int x = a + b;
    long long int y = (long long int)a * b;
    int z = a - b;

    printf("%d + %d = %d\n", a, b, x);
    printf("%d * %d = %lld\n", a, b, y);
    printf("%d - %d = %d\n", a, b, z);

return 0;
}
