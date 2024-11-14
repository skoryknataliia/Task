#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

int main() {

//створюємо масив із словами
    char *WORDS[] = { "day", "night", "year" };
    int count = sizeof(WORDS) / sizeof(WORDS[0]);

    // ініціалізуємо генератор випадкового числа
    srand(time(NULL));

    
    int randomIndex = rand() % count;
    char *selectedWord = WORDS[randomIndex];
    int wordLength = strlen(selectedWord);


    char hideWord[wordLength + 1];
    for (int i = 0; i < wordLength; i++) {
        hideWord[i] = '*';
    }


    int attempts = 3;
    char letter;
    int position;


    while (attempts > 0) {
        printf("Input letter: ");
        scanf(" %c", &letter);
        
        printf("Input position: ");
        scanf("%d", &position);

        if (selectedWord[position] == letter) {
            hideWord[position] = letter;
            printf("Correct!\n");
        } else {
            attempts--;
            printf("Incorrect! Attempts left: %d\n", attempts);
        }

        printf("Current word: %s\n", hideWord);

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
