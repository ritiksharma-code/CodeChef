#include <stdio.h>

// Function to count subarrays with odd bitwise OR
void count_odd_bitwise_OR_subarrays(int T, int test_cases[][2][100005]) {
    for (int t = 0; t < T; t++) {
        int N = test_cases[t][0][0];
        int K = test_cases[t][0][1];
        int array[N];

        for (int i = 0; i < N; i++) {
            array[i] = test_cases[t][1][i];
        }

        int count_odd = 0;

        for (int i = 0; i <= N - K; i++) {
            int bitwise_or = 0;

            for (int j = i; j < i + K; j++) {
                bitwise_or |= array[j];
            }

            if (bitwise_or % 2 != 0) {
                count_odd++;
            }
        }

        printf("%d\n", count_odd);
    }
}

int main() {
    // Sample Input
    int test_cases[2][2][100005] = {
        {{5, 2}, {5, 7, 13, 4, 6}},
        {{4, 3}, {2, 6, 7, 4}}
    };
    int T = 2;

    count_odd_bitwise_OR_subarrays(T, test_cases);

    return 0;
}
