/*/////////////////////////////////////////////////////////////////////////
                          Workshop - #3 (P1)
Full Name  : Jason Zabawskyj  
Student ID#: 185503216
Email      : jzabawskyj@myseneca.ca
Section    : NBB

Authenticity Declaration:
I declare this submission is the result of my own work and has not been
shared with any other student or 3rd party content provider. This submitted
piece of work is entirely of my own creation.
/////////////////////////////////////////////////////////////////////////*/

#include <stdio.h>

int main(void)
{
    // You must use this variable in #3 data analysis section!
    const double testValue = 330.99;

    const int product_1 = 111, product_2 = 222, product_3 = 111;
    const double price_1 = 111.49, price_2 = 222.99, price_3 = 334.49;
    const char tax_1 = 'Y', tax_2 = 'N', tax_3 = 'N';

    double averagePrice = (price_1 + price_2 + price_3)/3;

    printf("Product Information");
    printf("\n==================");
    printf("\nProduct-1 (ID:%d)",product_1);
    printf("\n  Taxed: %c",tax_1);
    printf("\n  Price: $%9.4lf",price_1);

    printf("\n\n");

    printf("\nProduct-2 (ID:%d)",product_2);
    printf("\n  Taxed: %c",tax_2);
    printf("\n  Price: $%9.4lf",price_2);

    printf("\n\n");
    
    printf("\nProduct-3 (ID:%d)",product_3);
    printf("\n  Taxed: %c",tax_3);
    printf("\n  Price: $%9.4lf",price_3);

    printf("\n\n");

    printf("\nThe average of all prices is: $%9.4lf",averagePrice);

    printf("\n\n");

    printf("\nAbout Relationsal and Logical Expressions!");
    printf("\n==========================================");
    printf("\n1. These expressions evaluate to TRUE or FALSE");
    printf("\n2. FALSE: is always represented by integer value 0");
    printf("\n3. TRUE : is represented by any integer value other than 0");

    printf("\n\n");

    printf("\nSome Data Analysis...");
    printf("\n=====================");
    printf("\n1. Is product 1 taxable? -> %d", ('Y' == tax_1));
    printf("\n");
    printf("\n2. Are products 2 and 3 both NOT taxable (N)? -> %d", ('N' == tax_2) || ('N' == tax_3));
    printf("\n");
    printf("\n3. Is product 3 less than testValue ($%5.2lf)? -> %d", testValue, (testValue > price_3));
    printf("\n");
    printf("\n4. Is the price of product 3 more than both product 1 and 2 combined? --> %d", (price_3 > (price_1 + price_2)));
    printf("\n");
    printf("\n5. Is the price of product 1 equal to or more than the price difference of product 3 LESS product 2? -> %d (price difference: $%.2lf)", price_1 >= (price_3 - price_2), (price_3 - price_2));
    printf("\n");
    printf("\n6. Is the price of product 2 equal to or more than the average price? --> %d", (price_2 >= averagePrice));
    printf("\n");
    printf("\n7. Based on product ID, product 1 is unique --> %d", (product_1 != product_2) && (product_1 != product_3));
    printf("\n");
    printf("\n8. Based on product ID, product 2 is unique --> %d", (product_2 != product_1) && (product_2 != product_3));
    printf("\n");
    printf("\n9. Based on product ID, product 3 is unique --> %d", (product_3 != product_1) && (product_3 != product_2));
    printf("\n");


    return 0;
}