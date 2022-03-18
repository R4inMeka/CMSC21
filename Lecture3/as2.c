#include<stdio.h>

int main(){
    int number = 0;
    while (number < 10 || number > 99){
        printf("Enter a two-digit number: ");
        scanf("%d", &number);
        if (number < 10 || number > 99){
            printf("[ERROR] Input is out of range.\n\n");
        }}
    int ones, tens;
    ones = number % 10;
    tens = (number / 10) % 10;
    printf("Number entered in words: ");
    
    if (tens == 1){
        switch(ones){
            case 0: printf("ten");
                    return 0;
            case 1: printf("eleven");
                    return 0;
            case 2: printf("twelve");
                    return 0;
            case 3: printf("thirteen");
                    return 0;
            case 4: printf("fourteen");
                    return 0;
            case 5: printf("fifteen");
                    return 0;
            case 6: printf("sixteen");
                    return 0;
            case 7: printf("seventeen");
                    return 0;
            case 8: printf("eighteen");
                    return 0;
            case 9: printf("nineteen");
                    return 0;
        }
    }
    else{
        switch(tens){
            case 2: printf("twenty");
                    break;
            case 3: printf("thirty");
                    break;
            case 4: printf("forty");
                    break;
            case 5: printf("fifty");
                    break;
            case 6: printf("sixty");
                    break;
            case 7: printf("seventy");
                    break;
            case 8: printf("eighty");
                    break;
            case 9: printf("ninety");
                    break;
        }
        switch(ones){
            case 1: printf("-one");
                    break;
            case 2: printf("-two");
                    break;
            case 3: printf("-three");
                    break;
            case 4: printf("-four");
                    break;
            case 5: printf("-five");
                    break;
            case 6: printf("-six");
                    break;
            case 7: printf("-seven");
                    break;
            case 8: printf("-eight");
                    break;
            case 9: printf("-nine");
                    break;
        }
    }
    return 0;
}