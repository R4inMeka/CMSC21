#include <stdio.h> //Preprocessor Directive

int main() //Serves as a function.
{
    int i, j; //Declares i and j as integer variables.
    float x, y; //Declares x and y as float variables.

    //Starting from line 9 to 13, specific values were assigned in each variable and data type.
    i = 10;
    j = 20;
    x = 43.2892f;
    y = 5527.0f;

    /*Line 17 is a print function. This print function will print out the values assigned by each variable.
    To print out the values in each variable, %d for integers and %f for float representing its data type
    is called out by placing the variables after the statement to be printed out in order(i, j, x, y).*/
    printf("i = %d, j = %d, x = %f, y = %f\n", i, j, x, y);

    return 0; //Terminates the execution of a function and returns control to the calling function.
}
