#include <stdio.h>

int main() {
    int age = 0;
    printf("How old are you? ");
    scanf("%d", &age);
    printf("Your age is: %d\n", age);

    float pi = 3.14159;
    printf("The value of pi is: %f\n", pi);

    double salary = 50000.75;
    printf("Your salary is: %lf\n", salary);

    char grade = 'A';
    printf("Your grade is: %c\n", grade);

    char name[] = "John";
    printf("Your name is: %s\n", name);

    int isPassed = 1;
    printf("Did you pass the exam? %s\n", isPassed ? "Yes" : "No");

    unsigned int itemCount = 10;
    printf("Number of items: %u\n", itemCount);

    short smallNumber = 100;
    long bigNumber = 1000000L;
    printf("Small number: %hd\n", smallNumber);
    printf("Big number: %ld\n", bigNumber);

    long long veryBigNumber = 10000000000LL;
    printf("Very big number: %lld\n", veryBigNumber);

    return 0;
}
