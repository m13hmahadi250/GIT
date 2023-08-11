#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T);
    while (T--) {
        int income, tax_exempt;
        scanf("%d %d", &income, &tax_exempt);

        int difference = income - tax_exempt;
        if (difference <= 0) {
            printf("0\n");
        } else {
            printf("%d\n", difference);
        }
    }

    return 0;
}

