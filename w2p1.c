/*/////////////////////////////////////////////////////////////////////////
                          Workshop - #2 (P2)
Full Name  : Jason Zabawskyj
Student ID#: 185503216
Email      : jzabawskyj@myseneca.ca
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
    const double TAX = 0.13;
    //const char patSize = 'S', salSize = 'M', tomSize = 'L';
    double smallSize, mediumSize, largeSize, subtotal, taxes, total;
    int userInput;


    printf("Set Shirt Prices\n");
    printf("================");

    printf("\nEnter the price for a SMALL shirt: $");
    scanf("%lf", &smallSize);
    printf("Enter the price for a MEDIUM shirt: $");
    scanf("%lf", &mediumSize);
    printf("Enter the price for a LARGE shirt: $");
    scanf("%lf", &largeSize);


    printf("\nShirt Store Price List");
    printf("\n======================");
    printf("\nSMALL  : $%.2f", smallSize);
    printf("\nMEDIUM : $%.2f", mediumSize);
    printf("\nLARGE  : $%.2f", largeSize);

    printf("\n\nPatty's shirt size is 'S'");
    printf("\nNumber of shirts Patty is buying: ");
    scanf("%d", &userInput);

    subtotal =((int)((smallSize * userInput)*100+0.5))/100.0;
    taxes = ((int)((subtotal * TAX) * 100 + 0.5)) / 100.0;
    total = ((int)((subtotal + taxes) * 100 + 0.5)) / 100.0;

    printf("\nPatty's shopping cart...");
    printf("\nContains : %d shirts", userInput);
    printf("\nSub-total: $%8.4lf", subtotal);
    printf("\nTaxes    : $%8.4lf", taxes);
    printf("\nTotal    : $%8.4lf\n", total);


    return 0;
}