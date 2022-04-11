#include <stdio.h>

int main(void)
{
    int i, days, start_day;
    printf("Enter number of days in month: ");
    scanf("%d", &days);
    printf("Enter the starting day of the week (1=Sun, 7=Sat): ");
    scanf("%d", &start_day);
    printf("\n");

    if(days < 32 && days > 27 && start_day < 8 && start_day > 0){
        for (i = 1; i < start_day; i++){
            printf("   ");}
        for (i = 1; i <= days; i++){
            printf("%3d", i);
            if((start_day + i - 1) % 7 == 0){
                printf("\n");}}}
    else{
        printf("[ERROR] Invalid input.");
    }
    return 0;
}