#include <stdio.h> //Preprocessor Directive

int main(void) //Serves as a function.
{
    int num1, denom1, num2, denom2, result_num, result_denom; //Declares the following as integer variables.

    printf("Enter first fraction: "); //This will tell the user what to input.
    scanf("%d/%d", &num1, &denom1); /*scanf function will allow user to input a value. The input values from the
                                      user will be stored in num1 and denom1 because of the ampersand. User must
                                      input a fraction using /, this will separate the numerator and denominator.*/

    printf("Enter second fraction: "); //Same function as above.
    scanf("%d/%d", &num2, &denom2);

    result_num = num1 * denom2 + num2 * denom1; /*In multiplying variables, we use * and to add is +. The result number
                                                  of the equation will be stored in the variable result_num.*/
    result_denom = denom1 * denom2; //same function as above. This time we are multiplyig the denominators.
    printf("The sum is %d/%d\n", result_num, result_denom); //This will print out the sum of the two fractions inputted by the user.

    return 0; //Terminates the execution of a function and returns control to the calling function.
}
