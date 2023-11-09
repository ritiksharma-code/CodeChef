#include <stdio.h>

int minRoundsToWin(int N, char A[], char B[]) {
    int chef_points = 0;

    for (int i = 0; i < N; i++) {
        if (A[i] == 'R' && B[i] == 'S') {
            chef_points++;
        } else if (A[i] == 'S' && B[i] == 'P') {
            chef_points++;
        } else if (A[i] == 'P' && B[i] == 'R') {
            chef_points++;
        }
    }

    return N - chef_points;  // Minimum rounds Chef should have played differently to win
}

int main() {
    int T;
    scanf("%d", &T);

    while (T--) {
        int N;
        scanf("%d", &N);

        char A[1001], B[1001];
        scanf("%s", A);
        scanf("%s", B);

        int result = minRoundsToWin(N, A, B);
        printf("%d\n", result);
    }

    return 0;
}
