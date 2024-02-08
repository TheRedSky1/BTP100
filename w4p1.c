/*/////////////////////////////////////////////////////////////////////////
                          Workshop - #4 (P1)
Full Name  : Jason Zabawskyj
Section    : NBB

Authenticity Declaration:
I declare this submission is the result of my own work and has not been
shared with any other student or 3rd party content provider. This submitted
piece of work is entirely of my own creation.
/////////////////////////////////////////////////////////////////////////*/

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{

    char modifier;
    int count;
    int i = 0;
    printf("+----------------------+\n");
    printf("Loop application STARTED\n");
    printf("+----------------------+\n\n");

    do
    {

        printf("D = do/while | W = while | F = for | Q = quit\n");
        printf("Enter loop type and the number of times to iterate (Quit=Q0): ");
        scanf(" %c%d", &modifier, &count);
        i = 0;

        switch (modifier)
        {
        case 'D':
            if (3 <= count && count <= 20)
            {

                printf("DO-WHILE: ");

                do
                {
                    printf("D");
                    i++;
                } while (i < count);

                printf("\n\n");
            }
            else
            {
                printf("ERROR: The number of iterations must be between 3-20 inclusive!\n\n");
            }

            break;

        case 'W':
            if (3 <= count && count <= 20)
            {
                printf("WHILE   : ");

                while (i < count)
                {
                    printf("W");
                    i++;
                }

                printf("\n\n");
            }
            else
            {
                printf("ERROR: The number of iterations must be between 3-20 inclusive!\n\n");
            }
            break;

        case 'F':
            if (3 <= count && count <= 20)
            {
                printf("FOR     : ");
                for (i = 0; i < count; i++)
                {
                    printf("F");
                }

                printf("\n\n");
            }
            else
            {
                printf("ERROR: The number of iterations must be between 3-20 inclusive!\n\n");
            }
            break;

        case 'Q':

            if (count != 0)
            {
                printf("ERROR: To quit, the number of iterations should be 0!\n\n");
            }

            break;

        default:
            printf("ERROR: Invalid entered value(s)!\n\n");
        }
    } while (!(modifier == 'Q' && count == 0));

    printf("\n+--------------------+\n");
    printf("Loop application ENDED\n");
    printf("+--------------------+\n\n");

    return 0;
}
