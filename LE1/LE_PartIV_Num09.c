#include <stdio.h>

int main(){
    int row, column = 0;
    int size = 0 ;
    char cont = 'y';
        while(cont == 'y'){ //___a___
            printf("Enter square size: ");
            scanf("%d", &size); //___b___
                for( row = 0 ;row < size ; row++){ //___c___
                    for(column = 0 ;column < size ;column++){ //___d___
                        if ( row==0|| row == size - 1|| column == 0 || column == size - 1){ //___e___ || ___f___|| ___g___|| ___h___
                            printf("*");
                        }else{
                            printf(" ");
                        }
                    }
                    printf("\n");
                }
                printf("Print another square? Enter y or n: ");
                scanf("%s", &cont); //___10___
                if (cont == 'n'){
                    printf("END"); //___11___
                }else if (cont != 'y' || 'n'){ //___12___
                    printf("Not a valid choice. \n");
                    printf("Print another square? Enter y/n: ");
                    scanf("%s", &cont); //___13___
                }
        }
        return 0;
    }
