#include <stdio.h>

int JaduMetrix(int matrix[100][100], int N, int i, int j) {
    if (i == N){
        return 1; 
    }

    if (j == N) {
        return JaduMetrix(matrix, N, i + 1, 0);  
    }

    if ((i == j || i + j == N - 1)) {
        if (matrix[i][j] != 1) {
            return 0;
        }
    } else {
        if (matrix[i][j] != 0) {
            return 0;
        }
    }

    return JaduMetrix(matrix, N, i, j + 1);
}

int main() {
    int N, M;
    scanf("%d %d", &N, &M);

    if (N != M) {
        printf("NO\n");
        return 0;
    }

    int matrix[100][100];

    for (int i = 0; i < N; i++){
        for (int j = 0; j < M; j++){
            scanf("%d", &matrix[i][j]);
        }
    }

    if (JaduMetrix(matrix, N, 0, 0)){
        printf("YES\n");
    } else {
        printf("NO\n");
    }

    return 0;
}
