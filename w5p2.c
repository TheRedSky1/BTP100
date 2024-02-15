/*/////////////////////////////////////////////////////////////////////////
                          Workshop - #5 (P2)
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
#define LOG_DAYS 3

int main(void)
{
    const int jan = 1, dec = 12;
    int year, month, day;
    float morning, evening, morning_total = 0, evening_total = 0;

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

    for (day = 1; day <= LOG_DAYS; day++)
    {
        printf("%4d-", year);

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

        printf("-%02d\n", day);


        do
        {
            printf("   Morning rating (0.0-5.0): ");
            scanf("%f", &morning);
            if( morning < 0.0 || morning > 5.0){
                printf("      ERROR: Rating must be between 0.0 and 5.0 inclusive!\n");
            }

        } while (morning < 0.0 || morning > 5.0);
        
        morning_total += morning;

        do
        {
            printf("   Evening rating (0.0-5.0): ");
            scanf("%f", &evening);
            if( evening < 0.0 || evening > 5.0){
                printf("      ERROR: Rating must be between 0.0 and 5.0 inclusive!\n");
            }

        } while (evening < 0.0 || evening > 5.0);

        evening_total += evening;

        printf("\n");
    }


    printf("Summary\n");
    printf("=======\n");
    printf("Morning total rating: %6.3f\n", morning_total);
    printf("Evening total rating: %6.3f\n", evening_total);
    printf("----------------------------\n");
    printf("Overall total rating: %6.3f\n", morning_total + evening_total);
    printf("\n");
    printf("Average morning rating: %4.1f\n", morning_total/LOG_DAYS);
    printf("Average evening rating: %4.1f\n", evening_total/LOG_DAYS);
    printf("----------------------------\n");
    printf("Average overall rating: %4.1f\n", (morning_total/LOG_DAYS + evening_total/LOG_DAYS)/2);
    printf("\n");


    return 0;
}