/*
#include <stdio.h>
int main() {
int mA, mB, pA, pB, A, B;
scanf(“%d%d%d%d”, &mA, &pA, &mB, &pB);
A = mA + pA;
B = mB + pB;
if (A > B) printf (“A\n”);
else if (A < B) printf(“B\n”);
else {
if (A > B) printf (“A\n”);
else if (mA < mB) printf (“B\n”);
else printf (“BOTH\n”);
}
return 0;
} */
#include<stdio.h>
int main()
{

    int ma, mb, pa, pb, A, B;
    scanf("%d%d%d%d", &ma, &mb, &pa, &pb);

    A = ma + pa;
    B = mb + pb;

    if( (ma > mb) && ( pa > pb)) {
        printf("BOTH\n");

    }

    if( A > B ){
        printf("A\n");
    }
    else if( A < B ){
        printf("B\n");
    }
    else if( ma < mb){
        printf("B\n");
    }

    return 0;
}
