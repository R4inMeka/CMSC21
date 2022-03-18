#include<stdio.h>

int main(){
    int age, teenager;
    printf("Enter age: ");
    scanf("%d", &age);
    if (age >= 13 && age <= 19){
        teenager = 1;}
    else{
        teenager = 0;}
    printf("%d", teenager);
    return 0;}