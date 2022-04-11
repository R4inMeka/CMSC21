#include <stdio.h>

int main(void)
{
    //a. while loop
    int i = 10;
    while (i < 10){
        printf("%d ", i);
        i++;
    }
    printf("\n"); //No output

    
    //b. for loop
    i = 10;
    for (; i < 10;){
        printf("%d ", i);
        i++;
    }
    printf("\n"); //No output


    //c. do-while loop
    i = 10;
    do{
        printf("%d ", i);
        i++;
    }
    while (i < 10); //Output 10
    //The do-while loop will be executed once even if the condition is false from the start.
    return 0;
}