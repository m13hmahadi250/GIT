#include <stdio.h>

int main() {
    int A, B, C;

    scanf("%d %d", &A, &B);

    while (B != 0) {
        C = B;
        B = A % B;
        A = C;
    }

    printf("%d\n", A);

    return 0;
}
