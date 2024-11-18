#include <stdio.h>

int main() {
    int userChoice, computerChoice;
    
    printf("Welcome to Rock, Paper, Scissors!\n");
    printf("Enter 1 for Rock, 2 for Paper, 3 for Scissors: ");
    scanf("%d", &userChoice);

    
    int randomNum;
    if (randomNum < 33) {
        computerChoice = 1;  // Rock
    } else if (randomNum < 66) {
        computerChoice = 2;  // Paper
    } else {
        computerChoice = 3;  // Scissors
    }

    printf("You chose: %s\n", (userChoice == 1) ? "Rock" : (userChoice == 2) ? "Paper" : "Scissors");
    printf("Computer chose: %s\n", (computerChoice == 1) ? "Rock" : (computerChoice == 2) ? "Paper" : "Scissors");

    if (userChoice == computerChoice) {
        printf("It's a tie!\n");
    } else if ((userChoice == 1 && computerChoice == 3) ||
               (userChoice == 2 && computerChoice == 1) ||
               (userChoice == 3 && computerChoice == 2)) {
        printf("You win!\n");
    } else {
        printf("Computer wins!\n");
    }

    return 0;
}