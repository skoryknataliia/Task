#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

int main() {

    char *WORDS[] = { "day", "night", "year" };
    int count = sizeof(WORDS) / sizeof(WORDS[0]);


    srand(time(NULL));


    int randomIndex = rand() % count;
    char *selectedWord = WORDS[randomIndex];
    int wordLength = strlen(selectedWord);


    char hideWord[wordLength + 1];
    for (int i = 0; i < wordLength; i++) {
        hideWord[i] = '*';
    }
    hideWord[wordLength] = '\0'; 


    int attempts = 3;
    char letter;
    int position;


    while (attempts > 0) {
        printf("Hidden word: %s\n", hideWord);
        printf("Input letter: ");
        scanf(" %c", &letter);

        printf("Input position (0 to %d): ", wordLength - 1);
        scanf("%d", &position);


        if (position < 0 || position >= wordLength) {
            printf("Invalid position! Try again.\n");
            continue;
        }


        if (selectedWord[position] == letter) {
            hideWord[position] = letter;
            printf("Correct!\n");
        } else {
            attempts--;
            printf("Incorrect! Attempts left: %d\n", attempts);
        }

        if (strcmp(selectedWord, hideWord) == 0) {
            printf("Congratulations, you guessed the word: %s\n", selectedWord);
            break;
        }


        if (attempts == 0) {
            printf("Sorry, you lost. The word was: %s\n", selectedWord);
        }
    }

    return 0;
}
