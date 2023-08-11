#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T);

    while (T--) {
        int sets;
        scanf("%d", &sets);

        int squats_per_set = 15;
        int total_squats = sets * squats_per_set;
        printf("%d\n", total_squats);
    }

    return 0;
}
