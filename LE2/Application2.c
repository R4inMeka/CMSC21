#include<stdio.h>
#include<ctype.h> /* toupper, isalpha */
#include<stdbool.h>

//Functions
void scan_word(int occurences[26]);
bool is_anagram(int occurrences1[26], int occurrences2[26]);

//Global Variables
int i, same = 1, occurences[26] = {0}, occurences1[26], occurences2[26];
char c;

int main(){
	i = 1;	//First iteration/word
	printf("Enter first word: ");
	scan_word(occurences);
	i = 2;	//Second iteration/word
	printf("Enter second word: ");
	scan_word(occurences);

	//If words are anagram.
	if(is_anagram(occurences1, occurences2)){
		printf("The words are anagrams.\n");
		return 0;
	}
	printf("The words are not anagrams.\n");
	return 0;
}


void scan_word(int occurences[26]){
	switch(i){
		//Case 1 is for the first word.
		case 1: while ((c = getchar()) != '\n'){
					if (isalpha(c)){
						occurences1[toupper(c) - 'A']++;
					}
				}
				break;
		//Case 2 is for the second word.
		case 2: while ((c = getchar()) != '\n'){
					if (isalpha(c)){
						occurences2[toupper(c) - 'A']++;
					}
				}
				break;
	}
}

bool is_anagram(int occurrences1[26], int occurrences2[26]){
	//Checks if both words are anagram.
    for (i = 0; i < 26; i++) {
        if(*(occurences1+i) != *(occurrences2+i)){
            return false;
        }
    }
    return true;
}
