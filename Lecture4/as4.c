#include <stdio.h>

int main(void)
{
    int power, result;
    printf("TABLE OF POWERS OF TWO\n");
    printf(" n        2 to the n\n");
    printf("---     --------------");

    for (power = 0; power < 11; ++power){
        if (power == 0){
            result = 1;}
        else{
            result = result * 2;}
    printf("\n%2d        %5d", power, result);
    }

    return 0;
}