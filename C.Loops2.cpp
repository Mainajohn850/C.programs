//loops
#include <stdio.h>

int main() {
    int number;
    printf("Enter number of terms: ");
    scanf("%d", &number);


    for (i = 1; i <= number; i++) {
        printf("Number is: %d and cube of the %d is: %d\n", i, i, i*i*i);
    }
   return 0;
}