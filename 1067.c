#include<stdio.h>
int main(){
    int i, n;
    scanf("%d", &n);
i = 0;
    while(i <= n)
        {

        if(i % 2 != 0){

            printf("%d\n", i);
        }
        i++;
    }

    return 0;

}
