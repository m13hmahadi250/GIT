#include <stdio.h>
#include <string.h>

void concatenate_characters_twice(char *S) {
    int N = strlen(S);
    char result[2 * N + 1]; // +1 for the null terminator '\0'
    int index = 0;

    for (int i = 0; i < N; i++) {
        result[index++] = S[i];
        result[index++] = S[i];
    }

    result[index] = '\0';
    printf("%s\n", result);
}

int main() {
    char S[] = "beginner";
    concatenate_characters_twice(S);
    return 0;
}

