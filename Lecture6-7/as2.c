#include<stdio.h>
#include<stdbool.h>

#define SIZE 8 // Matrix Size

int main(){
    //Initialize road_networks
    bool road_networks[SIZE][SIZE] = {
        {1, 1, 0, 0, 0, 1, 0, 0},
        {1, 1, 1, 0, 0, 0, 0, 0},
        {0, 1, 1, 0, 1, 1, 0, 0},
        {0, 0, 0, 1, 1, 0, 0, 0},
        {0, 0, 0, 1, 1, 0, 0, 0},
        {1, 0, 1, 0, 0, 1, 0, 0},
        {1, 0, 0, 1, 0, 0, 1, 0},
        {0, 0, 0, 0, 0, 1, 0, 1}
    };

    // Column Title
    char col[8] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H'};

    for (int i = 0; i < 8; i++){    // Using for loop to print the column array.
        if (i < 2 || i > 3){    // If condition will print column titles without [ ].
            printf("      %c", col[i]);
        }
        else if (i == 2 || i == 3){ //Else if condition will print column titles with [ ].
            printf("    [%c]", col[i]);
        }
    }
        printf("\nA     "); // I separately print row title A before the Matrix.

    // Matrix
    for (int i = 0; i < SIZE; i++){ // Using for loop to print the Matrix. i == row
        for (int j = 0; j < SIZE; j++){ // j == column
            printf("%i      ", road_networks[i][j]);
        }

    // Row Title   
    char row[7] = {'B', 'C', 'D', 'E', 'F', 'G', 'H'};  /* I started the array with 'B' 
                                                        because I already printed out 'A'. */
    if (i < 1 || i > 2){    // If condition will print row titles without [ ].
        printf("\n%c     ", row[i]);
    }
    else if (i == 1 || i == 2){ // Else if condition will print column titles with [ ].
        printf("\n[%c]   ", row[i]);
    }
    }

    // Input Starting Point
    int point;  //  Starting point inputted by the user.
    printf("\nWhich point are you located? 0 - A, 1 - B, 2 - C, 3 - D, 4 - E, 5 - F, 6 - G, 7 - H\n");
    scanf("%d", &point);
    printf("At point: %c\n", col[point]);

    // Points Travelled to Nearest Charge Station
    for (int i = 0; i < SIZE; i++){ // Using for loop to determine the ways for accessible road.
        if (road_networks[i][point] == 1){  // If condition to determine if road_networks[i][point] == 1
            point = i;                      // If true, the road is accessible. i will become the new starting point.
            printf("Now at point: %c\n", col[i]);
        }
        else if (point == 6){   // G is special because in my code, I start from column to row, so
            point = 0;          // a→g = 0 but g → a = 1 since there is a one-way path from point g to point a.
            printf("Now at point: %c\n", col[i]);
        }
        else if (point == 2 || point == 3){ // If starting point is already the charging point, break the loop.
            break;
        }
    }
    
    // Printing Charge Station
    printf("Point: %c arrived to charging station", col[point]);
    
    return 0;
}