#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T);

    while (T--) {
        long long int M;
        int A, B, C;
        scanf("%lld %d %d %d", &M, &A, &B, &C);

        long long int mul = A * B * C;

        if (mul == 0) {
            if (M == 0) {
                printf("0\n");
            }
            else {
                printf("-1\n");
            }
        } else {
            if (M % mul == 0) {
                printf("%lld\n", M / mul);
            }
            else {
                printf("-1\n");
            }
        }
    }

    return 0;
}
