#include <stdio.h>

void algorithm(long long n) {
    while (n != 1){
        printf("%lld ", n);
        if (n % 2 == 0) {
            n /= 2;
        }
        else if (n % 2 == 1){
            n *= 3;
            n += 1;
        }
    }
    printf("1");
}

int main() {
    long long num;
    scanf("%lld", &num);
    if (num >= 1 && num <= 1000000){
        algorithm(num);
    }

}