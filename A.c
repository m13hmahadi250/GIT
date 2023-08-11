#include <stdio.h>
#include <string.h>

int is_matching_pattern(char *S) {
    char *patterns[] = {"ACE", "BDF", "CEG", "DFA", "EGB", "FAC", "GBD"};
    int num_patterns = sizeof(patterns) / sizeof(patterns[0]);

    for (int i = 0; i < num_patterns; i++) {
        if (strcmp(S, patterns[i]) == 0) {
            return 1;
        }
    }

    return 0;
}

int main() {
    char S[4];

    scanf("%s", S);

    if (strlen(S) != 3) {
        return 1;
    }

    if (is_matching_pattern(S)) {
        printf("Yes\n");
    } else {
        printf("No\n");
    }

    return 0;
}

