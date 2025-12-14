#include <stdio.h>

void print_fibonacci() {
    int fib[7];
    fib[0] = 0;
    fib[1] = 1;
    
    for (int i = 2; i < 7; i++) {
        fib[i] = fib[i - 1] + fib[i - 2];
    }
    
    for (int i = 0; i < 7; i++) {
        printf("%d\n", fib[i]);
    }
}