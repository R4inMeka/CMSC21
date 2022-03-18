#include <stdio.h>

int main()
{
    int number, remainder, reverse;
    printf("Please enter a 2-digit number: ");
    scanf("%d", &number);

    remainder = number % 10;
    reverse = (remainder * 10) + ((number - remainder) / 10);

    printf("Reverse: %d\n", reverse);
    return 0;
}
