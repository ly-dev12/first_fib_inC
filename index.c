#include <stdio.h>

int fib(int a){
    if (a  <= 1) {
        return 1;
    };

    return fib(a - 1) + fib(a - 2);
}

int main() {
    int num;
    num = fib(5);
    printf("%d", num);
}