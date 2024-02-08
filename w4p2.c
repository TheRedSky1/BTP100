/*
*****************************************************************************
                          Workshop - #4 (P2)
Full Name  : Jason Zabawskyj
Section    : NBB

Authenticity Declaration:
I declare this submission is the result of my own work and has not been
shared with any other student or 3rd party content provider. This submitted
piece of work is entirely of my own creation.
*****************************************************************************
*/

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
    int apples, oranges, pears, tomatoes, cabbages, user_input;

    do
    {

        printf("Grocery Shopping\n");
        printf("================\n");

        do
        {
            printf("How many APPLES do you need? : ");
            scanf(" %d", &apples);

            if (apples < 0)
            {
                printf("ERROR: Value must be 0 or more.\n");
            }

        } while (apples < 0);

        printf("\n");

        do
        {
            printf("How many ORANGES do you need? : ");
            scanf(" %d", &oranges);

            if (oranges < 0)
            {
                printf("ERROR: Value must be 0 or more.\n");
            }

        } while (oranges < 0);

        printf("\n");

        do
        {
            printf("How many PEARS do you need? : ");
            scanf(" %d", &pears);

            if (pears < 0)
            {
                printf("ERROR: Value must be 0 or more.\n");
            }

        } while (pears < 0);

        printf("\n");

        do
        {
            printf("How many TOMATOES do you need? : ");
            scanf(" %d", &tomatoes);

            if (tomatoes < 0)
            {
                printf("ERROR: Value must be 0 or more.\n");
            }

        } while (tomatoes < 0);

        printf("\n");

        do
        {
            printf("How many CABBAGES do you need? : ");
            scanf(" %d", &cabbages);

            if (cabbages < 0)
            {
                printf("ERROR: Value must be 0 or more.\n");
            }

        } while (cabbages < 0);

        printf("\n");

        printf("--------------------------\n");
        printf("Time to pick the products!\n");
        printf("--------------------------\n\n");

        while (apples > 0)
        {
            printf("Pick some APPLES... how many did you pick? : ");
            scanf(" %d", &user_input);
            if ((user_input <= apples) && user_input > 0)
            {
                apples = apples - user_input;
                if (apples > 0)
                {
                    printf("Looks like we still need some APPLES...\n");
                }
                else if (apples == 0)
                {
                    printf("Great, that's the apples done!\n\n");
                }
            }
            else if (user_input > apples)
            {
                printf("You picked too many... only %d more APPLE(S) are needed.\n", apples);
            }
            else
            {
                printf("ERROR: You must pick at least 1!\n");
            }
        }

        while (oranges > 0)
        {
            printf("Pick some ORANGES... how many did you pick? : ");
            scanf(" %d", &user_input);
            if ((user_input <= oranges) && user_input > 0)
            {
                oranges = oranges - user_input;
                if (oranges > 0)
                {
                    printf("Looks like we still need some ORANGES...\n");
                }
                else if (oranges == 0)
                {
                    printf("Great, that's the oranges done!\n\n");
                }
            }
            else if (user_input > oranges)
            {
                printf("You picked too many... only %d more ORANGE(S) are needed.\n", oranges);
            }
            else
            {
                printf("ERROR: You must pick at least 1!\n");
            }
        }

        while (pears > 0)
        {
            printf("Pick some PEARS... how many did you pick? : ");
            scanf(" %d", &user_input);
            if ((user_input <= pears) && user_input > 0)
            {
                pears = pears - user_input;
                if (pears > 0)
                {
                    printf("Looks like we still need some PEARS...\n");
                }
                else if (pears == 0)
                {
                    printf("Great, that's the pears done!\n\n");
                }
            }
            else if (user_input > pears)
            {
                printf("You picked too many... only %d more PEAR(S) are needed.\n", pears);
            }
            else
            {
                printf("ERROR: You must pick at least 1!\n");
            }
        }

        while (tomatoes > 0)
        {
            printf("Pick some TOMATOES... how many did you pick? : ");
            scanf(" %d", &user_input);
            if ((user_input <= tomatoes) && user_input > 0)
            {
                tomatoes = tomatoes - user_input;
                if (tomatoes > 0)
                {
                    printf("Looks like we still need some TOMATOES...\n");
                }
                else if (tomatoes == 0)
                {
                    printf("Great, that's the tomatoes done!\n\n");
                }
            }
            else if (user_input > tomatoes)
            {
                printf("You picked too many... only %d more TOMATO(ES) are needed.\n", tomatoes);
            }
            else
            {
                printf("ERROR: You must pick at least 1!\n");
            }
        }

        while (cabbages > 0)
        {
            printf("Pick some CABBAGES... how many did you pick? : ");
            scanf(" %d", &user_input);
            if ((user_input <= cabbages) && user_input > 0)
            {
                cabbages = cabbages - user_input;
                if (cabbages > 0)
                {
                    printf("Looks like we still need some CABBAGES...\n");
                }
                else if (cabbages == 0)
                {
                    printf("Great, that's the cabbages done!\n\n");
                }
            }
            else if (user_input > cabbages)
            {
                printf("You picked too many... only %d more CABBAGE(S) are needed.\n", cabbages);
            }
            else
            {
                printf("ERROR: You must pick at least 1!\n");
            }
        }

        printf("All the items are picked!\n\n");

        printf("Do another shopping? (0=NO): ");
        scanf(" %d", &user_input);

        printf("\n");

    } while (user_input != 0);

    printf("Your tasks are done for today - enjoy your free time!\n");

    return 0;
}
