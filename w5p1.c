/*/////////////////////////////////////////////////////////////////////////
                          Workshop - #5 (P1)
Full Name  : Jason Zabawskyj

Authenticity Declaration:
I declare this submission is the result of my own work and has not been
shared with any other student or 3rd party content provider. This submitted
piece of work is entirely of my own creation.
/////////////////////////////////////////////////////////////////////////*/

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

#define MIN_YEAR 2012
#define MAX_YEAR 2022

int main(void)
{
    const int jan = 1, dec = 12;
    int year, month;

    printf("General Well-being Log\n");
    printf("======================\n");

    do
    {

        printf("Set the year and month for the well-being log (YYYY MM): ");
        scanf(" %d %d", &year, &month);

        if (year > MAX_YEAR || year < MIN_YEAR)
        {
            printf("   ERROR: The year must be between 2012 and 2022 inclusive\n");
        }

        if (month > dec || month < jan)
        {
            printf("   ERROR: Jan.(1) - Dec.(12)\n");
        }

    } while ((year > MAX_YEAR || year < MIN_YEAR) || (month > dec || month < jan));

    printf("\n*** Log date set! ***\n\n");

    printf("Log starting date: %4d-", year);

    switch (month)
    {
    case 1:
        printf("JAN");
        break;
    case 2:
        printf("FEB");
        break;
    case 3:
        printf("MAR");
        break;
    case 4:
        printf("APR");
        break;
    case 5:
        printf("MAY");
        break;
    case 6:
        printf("JUN");
        break;
    case 7:
        printf("JUL");
        break;
    case 8:
        printf("AUG");
        break;
    case 9:
        printf("SEP");
        break;
    case 10:
        printf("OCT");
        break;
    case 11:
        printf("NOV");
        break;
    case 12:
        printf("DEC");
        break;
    }

    printf("-01\n");

    return 0;
}