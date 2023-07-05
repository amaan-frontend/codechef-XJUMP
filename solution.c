#include <stdio.h>

int main() {
    int T; // Number of test cases
    scanf("%d", &T);

    while (T--) {
        int X, Y; // Number of stairs Chef wants to reach and number of stairs he can climb in one move
        scanf("%d %d", &X, &Y);

        int moves = X / Y; // Divide the number of stairs by the number of stairs climbed in one move
        int remaining = X % Y; // Calculate the remaining stairs

        if (remaining != 0) {
            moves++; // If there are remaining stairs, Chef needs an additional move
        }

        printf("%d\n", moves);
    }

    return 0;
}
