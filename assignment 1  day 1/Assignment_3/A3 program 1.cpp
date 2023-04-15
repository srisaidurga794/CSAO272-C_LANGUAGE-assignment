#include <stdio.h>

int isPrime(int num);

int main() {
    int start, end, i;
    printf("Enter two positive integers: ");
    scanf("%d %d", &start, &end);
    printf("Prime numbers between %d and %d are: ", start, end);
    for(i=start+1; i<end; i++) {
        if(isPrime(i))
            printf("%d ", i);
    }
    return 0;
}

int isPrime(int num) {
    int i;
    for(i=2; i<=num/2; i++) {
        if(num%i == 0)
            return 0;
    }
    return 1;
}

