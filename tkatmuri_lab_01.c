#include<stdio.h>

int main() {
    int givenNumber, isPrime = 1;
    printf("Enter a integer: ");
    scanf("%d", &givenNumber);
    if(givenNumber <2) {
        isPrime = 0;
    }
    else {for(int i = 2; i < givenNumber/2; i++) {
        if(givenNumber % i == 0) {
            isPrime = 0;
            break;
        }
    } }
    if(isPrime == 1) {
        printf("The number %d is Prime\n", givenNumber);
    }
    else {
        printf("The given number % d is not a prime\n", givenNumber);
    }
    return 0;
}