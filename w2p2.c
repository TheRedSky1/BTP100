/*/////////////////////////////////////////////////////////////////////////
                          Workshop - #2 (P2)
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
    const double TAX = 0.13;
    const char patSize = 'S', salSize = 'M', tomSize = 'L';
    double smallSize, mediumSize, largeSize, subtotal, taxes, total;

    int patty, tommy, sally;
    double patty_total, patty_subtotal, patty_tax, tommy_total, tommy_subtotal, tommy_tax, sally_total, sally_subtotal, sally_tax;
    

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
    scanf("%d", &patty);

    printf("\n\nTommy's shirt size is 'L'");
    printf("\nNumber of shirts Patty is buying: ");
    scanf("%d", &tommy);

    printf("\n\nSally's shirt size is 'M'");
    printf("\nNumber of shirts Patty is buying: ");
    scanf("%d", &sally);

    printf("\nCustomer Size Price Qty Sub-Total       Tax     Total");
    printf("\n-------- ---- ----- --- --------- --------- ---------\n");

    patty_subtotal =((int)((smallSize * patty)*100+0.5))/100.0;
    patty_tax = ((int)((patty_subtotal * TAX) * 100 + 0.5)) / 100.0;
    patty_total = ((int)((patty_subtotal + patty_tax) * 100 + 0.5)) / 100.0;

    printf("Patty    %-4c %5.2lf %3d %9.4lf %9.4lf %9.4lf\n", patSize, smallSize, patty, patty_subtotal, patty_tax, patty_total);
    
    
    sally_subtotal =((int)((mediumSize * sally)*100+0.5))/100.0;
    sally_tax = ((int)((sally_subtotal * TAX) * 100 + 0.5)) / 100.0;
    sally_total = ((int)((sally_subtotal + sally_tax) * 100 + 0.5)) / 100.0;

    printf("Sally    %-4c %5.2lf %3d %9.4lf %9.4lf %9.4lf\n", salSize, mediumSize, sally, sally_subtotal, sally_tax, sally_total);

    tommy_subtotal =((int)((largeSize * tommy)*100+0.5))/100.0;
    tommy_tax = ((int)((tommy_subtotal * TAX) * 100 + 0.5)) / 100.0;
    tommy_total = ((int)((tommy_subtotal + tommy_tax) * 100 + 0.5)) / 100.0;

    printf("Tommy    %-4c %5.2lf %3d %9.4lf %9.4lf %9.4lf\n", tomSize, largeSize, tommy, tommy_subtotal, tommy_tax, tommy_total);

    taxes = patty_tax + tommy_tax + sally_tax;

    subtotal = patty_subtotal + tommy_subtotal + sally_subtotal;

    total = patty_total + tommy_total + sally_total;


    printf("-------- ---- ----- --- --------- --------- ---------");
    printf("\n                        %9.4lf %9.4lf %9.4lf", subtotal, taxes, total);

    printf("\n\nDaily retail sales represented by coins");
    printf("\n======================================\n");

    int toonies, loonies, quarters, dimes, nickles, pennies;
    
    float remainder = subtotal;
    
    printf("\nSales EXCLUDING tax");
    printf("\nCoin     Qty   Balance");
    printf("\n-------- --- ---------");
    printf("\n             %9.4lf",remainder);

    toonies = ((int) (remainder/ 2.0 + 0.5) );
    remainder =  ((int) (remainder * 100 + 0.5) % 200 )/  100.00;
    
    printf("\nToonies  %3d %9.4lf", toonies, remainder);
    
    loonies = ((int) (remainder/ 1.0 + 0.5) );
    remainder =  ((int) (remainder * 100 + 0.5) % 100 )/  100.00;
    
    printf("\nLoonies  %3d %9.4lf", loonies, remainder);
    
    quarters = ((int) (remainder/ 0.25+ 0.5) );
    remainder =  ((int) (remainder * 100 + 0.5) % 25 )/  100.00;
    
    printf("\nQuarters %3d %9.4lf", quarters, remainder);
    
    dimes = ((int) (remainder/ 0.10+ 0.5) );
    remainder =  ((int) (remainder * 100 + 0.5) % 10 )/  100.00;
    
    printf("\nDimes    %3d %9.4lf", dimes, remainder);
    
    nickles = ((int) (remainder/ 0.05 + 0.5) );
    remainder =  ((int) (remainder * 100 + 0.5) % 5 )/  100.00;
    
    printf("\nNickels  %3d %9.4lf", nickles, remainder);
    
    pennies = ((int) (remainder/ 0.01+ 0.5) );
    remainder =  ((int) (remainder * 100 + 0.5) % 1 )/  100.00;
    
    printf("\nPennies  %3d %9.4lf", pennies, remainder);

    double average = subtotal / (sally + tommy + patty);
    
    printf("\n\nAverage cost/shirt: %9.4lf", average);

    remainder = total;
    
    printf("\n\nSales EXCLUDING tax");
    printf("\nCoin     Qty   Balance");
    printf("\n-------- --- ---------");
    printf("\n             %9.4lf",remainder);

    toonies = ((int) (remainder/ 200+ 0.5) );
    remainder =  ((int) (remainder * 100 + 0.5) % 200 )/  100.00;
    
    printf("\nToonies  %3d %9.4lf", toonies, remainder);
    
    loonies = ((int) (remainder/ 100+ 0.5) );
    remainder =  ((int) (remainder * 100 + 0.5) % 100 )/  100.00;
    
    printf("\nLoonies  %3d %9.4lf", loonies, remainder);
    
    quarters = ((int) (remainder/ 0.25+ 0.5) );
    remainder =  ((int) (remainder * 100 + 0.5) % 25 )/  100.00;
    
    printf("\nQuarters %3d %9.4lf", quarters, remainder);
    
    dimes = ((int) (remainder/ 0.10+ 0.5) );
    remainder =  ((int) (remainder * 100 + 0.5) % 10 )/  100.00;
    
    printf("\nDimes    %3d %9.4lf", dimes, remainder);
    
    nickles = ((int) (remainder/ 0.05+ 0.5) );
    remainder =  ((int) (remainder * 100 + 0.5) % 5 )/  100.00;
    
    printf("\nNickels  %3d %9.4lf", nickles, remainder);
    
    pennies = ((int) (remainder/ 0.01+ 0.5) );
    remainder =  ((int) (remainder * 100 + 0.5) % 1 )/  100.00;
    
    printf("\nPennies  %3d %9.4lf", pennies, remainder);

    average = total / (sally + tommy + patty);
    
    printf("\n\nAverage cost/shirt: %9.4lf", average);



    return 0;
}
