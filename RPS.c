#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(0));
    const char *options[] = {"Rock", "Paper", "Scissors"};
    int player_choice, computer_choice;

    printf("Choose:\n0 - Rock\n1 - Paper\n2 - Scissors\n");
    scanf("%d", &player_choice);

    computer_choice = rand() % 3;

    printf("Computer chose: %s\n", options[computer_choice]);

    if (player_choice == computer_choice) {
        printf("It's a tie!\n");
    } else if ((player_choice == 0 && computer_choice == 2) ||
               (player_choice == 1 && computer_choice == 0) ||
               (player_choice == 2 && computer_choice == 1)) {
        printf("You win!\n");
    } else {
        printf("You lose!\n");
    }

    return 0;
}
