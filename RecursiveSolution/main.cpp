#include <stdio.h>

int fibonacci(int n) {
    if(0 == n) {
        return 0;
    } else if(1 == n) {
        return 1;
    } else {
        return fibonacci(n-2) + fibonacci(n-1);
    }
}

int main() {
    printf("%d", fibonacci(0));
    printf("%d", fibonacci(1));
    printf("%d", fibonacci(2));
    printf("%d", fibonacci(3));
    printf("%d", fibonacci(4));

    return 0;
}