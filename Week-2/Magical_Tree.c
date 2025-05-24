#include <stdio.h>

// একটি লাইন প্রিন্ট করে: spaces এবং তারপর dots
void print_line(int spaces, int dots) {
    for (int i = 0; i < spaces; i++) {
        printf(" ");
    }
    for (int i = 0; i < dots; i++) {
        printf(".");
    }
    printf("\n");
}

// উপরের অংশ (তীরের মাথা)
void print_arrow_head(int N) {
    for (int i = 1; i <= 2 * N - 1; i += 2) {
        int spaces = N - (i / 2) - 1;
        print_line(spaces, i);
    }
}

// নিচের লম্বা অংশ (গুঁড়ি)
void print_arrow_stick(int N) {
    for (int i = 0; i < N; i++) {
        int spaces = N - 1;
        print_line(spaces, 1);
    }
}

int main() {
    int N;
    scanf("%d", &N);

    print_arrow_head(N);
    print_arrow_stick(N);

    return 0;
}
