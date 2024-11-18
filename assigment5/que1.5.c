#include <stdio.h>
#include <string.h>
#include <ctype.h> 

void display_word(char guessed_word[]) {
    int length = strlen(guessed_word);

    printf("Guess the word: ");
    for (int i = 0; i < length; i++) {
        printf("%c ", guessed_word[i]);
    }
    printf("\n\n");
}

void check_guess(char guess, char word[], char guessed_word[]) {
    int length = strlen(word);
    int found = 0; 

    guess = tolower(guess); 

    for (int i = 0; i < length; i++) {
        if (tolower(word[i]) == guess) { 
            guessed_word[i] = word[i];  
            found = 1;
        }
    }

    if (!found) {
        printf("Incorrect! Try again.\n\n");
    }
}

int main() {
    char word[] = "GODOFWAR";                
    int length = strlen(word);              

    char guessed_word[length + 1];          
    for (int i = 0; i < length; i++) {
        guessed_word[i] = '_';              
    }
    guessed_word[length] = '\0';            

    printf("Welcome to Hangman Game!\n");
    display_word(guessed_word);            
    int chances = 3;                        
    while (chances > 0 && strcmp(word, guessed_word) != 0) {
        char guess;
        printf("Enter a letter: ");
        scanf(" %c", &guess);

        check_guess(guess, word, guessed_word);
        display_word(guessed_word);

        if (strchr(word, guess) == NULL && strchr(word, toupper(guess)) == NULL) {
            chances--;
            printf("You have %d chances left.\n\n", chances);
        }
    }

    if (strcmp(word, guessed_word) == 0) {
        printf("Congratulations! You guessed the word: %s\n", word);
    } else {
        printf("Out of chances! The word was: %s\n", word);
    }

    return 0;
}