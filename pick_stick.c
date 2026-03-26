#include <stdio.h>

int main()
{
    int player, computer, sticks = 21;

    printf("----Welcome to the game----\n");
    printf("        STICK PICK \n");
    printf("RULES - \n");
    printf(" There are 21 sticks \n You have to pick between 1-4 sticks \n ");
    printf("Whoever picks the last stick looses \n");

    while ( sticks > 0)
    {
        printf("\nPick between 1-4 sticks -->  ");
        scanf("%d", &player);

        if (player == 0 || player > 4)
        {
            printf("---INVALID MOVE---\n");
            printf("    Try Again \n");
        }

        else
        {
            sticks -= player;
            printf("Total sticks left --> %d \n", sticks);

            if (sticks <= 0)
            {
                printf(" YOU LOOSE \n");
                printf("Try again \n");

                return 0 ;
            }

            computer = 5 - player;
            sticks -= computer;
            printf("Computer pick %d sticks \n", computer);
            printf("Total sticks left --> %d \n", sticks);
        }
    }
}