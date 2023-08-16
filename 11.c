#include <stdio.h>

int main() {
    int i, n, num, total = 0;

    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        scanf("%d", &num);

        if (num == 3 || num == 5) {
            total++;

        }
    }

    printf("%d\n", total);

    return 0;
}

