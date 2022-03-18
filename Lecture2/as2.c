#include <stdio.h>

int main()
{
    int number, remainder1, remainder2, reverse;
    printf("Please enter a 3-digit number: ");
    scanf("%d", &number);

    remainder1 = number % 10;
    number /= 10;

    remainder2 = number % 10;
    reverse = (remainder1 * 100) + (remainder2 * 10) + ((number - remainder2) / 10);

    printf("Reverse: %d\n", reverse);
    return 0;
}
