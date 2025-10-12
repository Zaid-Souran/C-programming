#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int getcomputerChoice();
int getuserChoice();
void checkWinner(int userChoice, int computerChoice);

int main(){

    //ROCK PAPER SCISSORS//

    srand(time(NULL));

    printf("*** ROCK PAPER SCISSORS ***\n");

    int userChoice = getuserChoice();
    int computerChoice = getcomputerChoice();

    switch(userChoice){
        case 1:
            printf("You chose ROCK\n");
            break;
        case 2:
            printf("You chose PAPER\n");
            break;
        case 3:
            printf("You chose SCISSORS\n");
            break;
    }

    switch(computerChoice){
        case 1:
            printf("computer chose ROCK\n");
            break;
        case 2:
            printf("computer chose PAPER\n");
            break;
        case 3:
            printf("computer chose SCISSORS\n");
            break;
    }

    checkWinner(userChoice, computerChoice);

    return 0;
}

int getcomputerChoice(){
    return (rand() % 3) + 1;
}
int getuserChoice(){

    int choice = 0;

    do{
        printf("Choose an option\n");
        printf("1. ROCK\n");
        printf("2. PAPER\n");
        printf("3. SCISSORS\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
    }while(choice < 1 || choice > 3);

    return choice;
}
void checkWinner(int userChoice, int computerChoice){

    if(userChoice == computerChoice){
        printf("it's a TIE!");
    }
    else if((userChoice == 1 && computerChoice == 3) ||
            (userChoice == 2 && computerChoice == 1) ||
            (userChoice == 3 && computerChoice == 2)){
        printf("You WIN!");
    }
    else{
        printf("You LOSE\n");
    }

}








