#include <stdio.h>

int checkPrime(int n);

int main() {
    int num, i, flag = 0;
    printf("Enter a positive integer: ");
    scanf("%d", &num);
    printf("%d = ", num);
    for(i=2; i<=num/2; i++) {
        if(checkPrime(i)) {
            if(checkPrime(num-i)) {
                printf("%d + %d ", i, num-i);
                flag = 1;
            }
        }
    }
    if(!flag)
        printf("Cannot be expressed as the sum of two prime numbers.");
    return 0;
}

int checkPrime(int n) {
    int i, isPrime = 1;
    for(i=2; i<=n/2; i++) {
        if(n%i == 0) {
            isPrime = 0;
            break;
        }
    }
    return isPrime;
}

