//P12
#include <stdio.h>

int main() {
    int N;

    scanf("%d", &N);

    int i = 0;
    while (N > 1) {
        N /= 2;
        i++;
    }

    printf("%d\n", i);

    return 0;
}

