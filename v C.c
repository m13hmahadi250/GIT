#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T);
    while (T--) {
        int chef_dice, chefina_dice;
        scanf("%d %d", &chef_dice, &chefina_dice);

        int sum = chef_dice + chefina_dice;
        if(sum <= 6 ) {
            printf("NO\n");
        }

         else {
            printf("YES\n");
        }
    }

    return 0;
}

