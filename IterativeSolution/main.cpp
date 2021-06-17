#include <stdio.h>

int fibonacci(int n) {
    int fi = 0, second = 1;

    for (int i = 0; i < n; i++) {
        int swap = fi;
        fi = second;
        second += swap;
    }

    return fi;
}


int main() {
    printf("%d", fibonacci(0));
    printf("%d", fibonacci(1));
    printf("%d", fibonacci(2));
    printf("%d", fibonacci(3));
    printf("%d", fibonacci(4));

    return 0;
}