#include <stdio.h>
#include <math.h>

int main(){

    //Declaring variables.
    double x;
    double y = 1.00000;
    double z;
    char cont = 'y';

    while(cont = 'y'){ //Program looper.
            //Input.
        printf("Enter number: ");
        scanf("%lf", &x);

            //for-loop to get the root approximation.
        for(int i=0; i < 100000; i++){ /*i == how many iterations. Since i the condition is i < 100000, it will iterate
                                            99999 times. Update statement is increment to i. */
        z = (y+(fabs(x)/y))/2; //square-root formula. fabs is used here to get the absolute value of x
        y = z;} //storing value of z to y to separate new and old value of y.

        if (x >= 0){ //If the user input is positive or equal to zero.
            printf("Root Approximation: %.5lf\n", z);} //I used %.5lf for tolerance 5 decimals
        else if (x < 0){ //if the user input is negative.
            printf("Root Approximation: %.5lfi\n", z);} /*it will print i at the end of the root as an identifier that it is an
                                                        imaginary number*/

        printf("Continue? Yes = y   No = Enter any value: "); //Exit to while-loop
        scanf("%s", &cont);
        if (cont != 'y')
            return 0;
        printf("\n");}
    return 0;
}
