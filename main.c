#include <stdio.h>
#include "euler.h"

int main() {
    int sum = sum_of_multiples_of_3_and_5(1000);
    printf("Sum of Multiples of 3 and 5: %d\n", sum); //expected value: 233168
    printf("Largest Palindrome Product: %d\n", largest_palindrome_product()); //906609

    return 0;
}