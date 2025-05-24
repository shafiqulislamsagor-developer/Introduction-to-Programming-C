#include <stdio.h>

void printLastRow(int mat[100][100], int N, int M) {
    for (int j = 0; j < M; j++) {
        printf("%d ", mat[N - 1][j]);
    }
    printf("\n");
}

void printLastColumn(int mat[100][100], int N, int M) {
    for (int i = 0; i < N; i++) {
        printf("%d ", mat[i][M - 1]);
    }
    printf("\n");
}

int main() {
    int N, M;
    scanf("%d %d", &N, &M);

    int mat[100][100];

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            scanf("%d", &mat[i][j]);
        }
    }

    printLastRow(mat, N, M);
    printLastColumn(mat, N, M);

    return 0;
}
