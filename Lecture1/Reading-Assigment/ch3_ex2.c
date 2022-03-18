#include <stdio.h> //Preprocessor Directive

int main(void) //Serves as a function.
{
    int i; //Declares i as an integer variable.
    float x; //Declares x as a float variable.
    // Assigning values to each variable.
    i = 40;
    x = 839.21f;

    /*%d displays i in minimum amount of space. %5d added 5 spaces since i is only two characters.
    %-5d same as %5d but spaces were added after ward i. %5.3d displays a minimum of 5 characters and
    three digits. Since i is two digits only, it will add a zero before i. The output is the same as %5d
    but zero is added before i.*/
    printf("|%d|%5d|%-5d|%5.3d|\n", i, i, i, i);
    printf("|%10.3f|%10.3e|%-10g|\n", x, x, x);
    /*%10.3f displays 10 characters and with 3 digits after the decimal point. %10.3e displays x in
    exponential form with 10 characters and with three digits after the decimal point, x requires
    nine characters long so one space precedes x. %d-10g displays 10 characters but because of the
    minus sign, it forces x to justify to the left side and add four spaces.*/

    return 0; //Terminates the execution of a function and returns control to the calling function.
}
