/*Prints a one month reminder list*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAX_REMIND 50  //set max reminds to 50
#define MSG_LEN 60      //lenght of message to  60

int read_line(char str[], int n);  //declaring a function

int main(void){
    char reminders[MAX_REMIND][MSG_LEN + 3];    //declaring variables
    char day_str[3], msg_str[MSG_LEN + 1];
    char day, i, j, num_remind = 0;

    for(;;){        //this for loop is infinite
        if(num_remind == MAX_REMIND){
            printf("--No space left --\n");
            break;
        }
        printf("Enter day and reminder: ");     //allows the user to input day and reminder
        scanf("%2d", &day); //the day input will be stored in day variable. the 2 between % and d will read the input of user 2 digits only.
        if(day == 0){   //if day is zero, will end the loop.
            break;
        }
        sprintf(day_str, "%2d", day);   //sprintf to convert the day back into string form.
        read_line(msg_str, MSG_LEN);    //to read reminders, it will be read on read_line.

        for(i = 0; i < num_remind; i++){
            if(strcmp(day_str, reminders[j - 1]));  //using strcmp, to do the comparisons in the arrays
        }

        for(j = num_remind; j > i; j--){
            strcpy(reminders[j], reminders[j - 1]); //strcpy to move all strings below that point down one position
        }

        strcpy(reminders[i], day_str);
        strcat(reminders[i], msg_str);  //strcat to append the remjnder to the day. (The day and the reminder
                                                                                    //have been kept separate up to this point.).

        num_remind++;
    }

    printf("\nDay Reminder\n");     //will print the days and reminder inputs of user.
    for(i = 0; i < num_remind; i++){    //loop will stop if i == num_remind, so it will run until all reminders is printed out.
        printf("%s\n", reminders[i]);   //printing the reminders in the array.
    }

    system("PAUSE");
    return 0;
}


int read_line(char str[], int n){   //will read the strings from the input.
    int ch, i = 0;
    while ((ch = getchar()) != '\n'){   //will read the letters
        if(i < n){
            str[i++] = ch; //char will be stored in the incremented array.
        }
    }
    str[i] = '\0';
    return i;
}
