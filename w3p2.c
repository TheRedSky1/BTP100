/*/////////////////////////////////////////////////////////////////////////
                          Workshop - #3 (P2)
Full Name  : Jason Zabawskyj

Authenticity Declaration:
I declare this submission is the result of my own work and has not been
shared with any other student or 3rd party content provider. This submitted
piece of work is entirely of my own creation.
/////////////////////////////////////////////////////////////////////////*/

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
    // You will need this when converting from grams to pounds (lbs)
    const double GRAMS_IN_LBS = 453.5924;

    char c_type1, c_type2, c_type3;
    int c_weight1,c_weight2, c_weight3;
    char c_cream1, c_cream2, c_cream3;

    char p_1, p_2;
    int p_3;

    printf("Take a Break - Coffee Shop");
    printf("\n==========================");
    
    printf("\n");
    
    printf("\nEnter the coffee product information being sold today...");

    printf("\n");
    
    printf("\nCOFFEE-1...");
    printf("\nType ([L]ight,[M]edium,[R]ich): ");
    scanf(" %c", &c_type1);
    printf("Bag weight (g): ");
    scanf(" %d", &c_weight1);
    printf("Best served with cream ([Y]es,[N]o): ");
    scanf(" %c", &c_cream1);
    

    printf("\nCOFFEE-2...");
    printf("\nType ([L]ight,[M]edium,[R]ich): ");
    scanf(" %c", &c_type2);
    printf("Bag weight (g): ");
    scanf(" %d", &c_weight2);
    printf("Best served with cream ([Y]es,[N]o): ");
    scanf(" %c", &c_cream2); 
    
    
    printf("\nCOFFEE-3...");
    printf("\nType ([L]ight,[M]edium,[R]ich): ");
    scanf(" %c", &c_type3);
    printf("Bag weight (g): ");
    scanf(" %d", &c_weight3);
    printf("Best served with cream ([Y]es,[N]o): ");
    scanf(" %c", &c_cream3);


    printf("\n---+------------------------+---------------+-------+");
    printf("\n   |    Coffee              |   Packaged    | Best  |");
    printf("\n   |     Type               |  Bag Weight   | Served|");
    printf("\n   +------------------------+---------------+ With  |");
    printf("\nID | Light | Medium | Rich  |  (G) | Lbs    | Cream |");
    printf("\n---+------------------------+---------------+-------|");
    printf("\n 1 |   %d   |   %d    |   %d   | %4d | %6.3lf |   %d   |", (c_type1 | 32) == 'l', (c_type1 | 32) == 'm', (c_type1 | 32) == 'r', c_weight1, c_weight1/GRAMS_IN_LBS, (c_cream1 | 32) == 'y');
    printf("\n 2 |   %d   |   %d    |   %d   | %4d | %6.3lf |   %d   |", (c_type2 | 32) == 'l', (c_type2 | 32) == 'm', (c_type2 | 32) == 'r', c_weight2, c_weight2/GRAMS_IN_LBS, (c_cream2 | 32) == 'y');
    printf("\n 3 |   %d   |   %d    |   %d   | %4d | %6.3lf |   %d   |", (c_type3 | 32) == 'l', (c_type3 | 32) == 'm', (c_type3 | 32) == 'r', c_weight3, c_weight3/GRAMS_IN_LBS, (c_cream3 | 32) == 'y');

    printf("\n");

    printf("\nEnter how you like your coffee...");

    printf("\n");

    printf("\nCoffee strength ([L]ight, [M]edium, [R]ich): ");
    scanf(" %c", &p_1);
    printf("Do you like your coffee with cream ([Y]es,[N]o): ");
    scanf(" %c", &p_2);
    printf("Typical number of daily servings: ");
    scanf(" %d", &p_3);
    printf("\n");
    printf("The below table shows how your preferences align to the available products:");
    printf("\n");
    printf("\n--------------------+-------------+-------+");
    printf("\n  |     Coffee      |  Packaged   | With  |");
    printf("\nID|      Type       | Bag Weight  | Cream |");
    printf("\n--+-----------------+-------------+-------+");
    printf("\n 1|       %d         |      %d      |   %d   |", (c_type1 | 32) == (p_1 | 32), (( 1 <= p_3 && p_3 <= 4) && c_weight1 == 250) || ((5 <= p_3 && p_3 <= 9) && c_weight1 == 500) || ((p_3 >= 10) && c_weight1 == 1000), (c_cream1 | 32) == (p_2 | 32));
    printf("\n 2|       %d         |      %d      |   %d   |", (c_type2 | 32) == (p_1 | 32), (( 1 <= p_3 && p_3 <= 4) && c_weight2 == 250) || ((5 <= p_3 && p_3 <= 9) && c_weight2 == 500) || ((p_3 >= 10) && c_weight2 == 1000), (c_cream2 | 32) == (p_2 | 32));
    printf("\n 3|       %d         |      %d      |   %d   |", (c_type3 | 32) == (p_1 | 32), (( 1 <= p_3 && p_3 <= 4) && c_weight3 == 250) || ((5 <= p_3 && p_3 <= 9) && c_weight3 == 500) || ((p_3 >= 10) && c_weight3 == 1000), (c_cream3 | 32) == (p_2 | 32));
    

    printf("\n");

    printf("\nEnter how you like your coffee...");

    printf("\n");

    printf("\nCoffee strength ([L]ight, [M]edium, [R]ich): ");
    scanf(" %c", &p_1);
    printf("Do you like your coffee with cream ([Y]es,[N]o): ");
    scanf(" %c", &p_2);
    printf("Typical number of daily servings: ");
    scanf(" %d", &p_3);
    printf("\n");
    printf("The below table shows how your preferences align to the available products:");
    printf("\n");
    printf("\n--------------------+-------------+-------+");
    printf("\n  |     Coffee      |  Packaged   | With  |");
    printf("\nID|      Type       | Bag Weight  | Cream |");
    printf("\n--+-----------------+-------------+-------+");
    printf("\n 1|       %d         |      %d      |   %d   |", (c_type1 | 32) == (p_1 | 32), (( 1 <= p_3 && p_3 <= 4) && c_weight1 == 250) || ((5 <= p_3 && p_3 <= 9) && c_weight1 == 500) || ((p_3 >= 10) && c_weight1 == 1000), (c_cream1 | 32) == (p_2 | 32));
    printf("\n 2|       %d         |      %d      |   %d   |", (c_type2 | 32) == (p_1 | 32), (( 1 <= p_3 && p_3 <= 4) && c_weight2 == 250) || ((5 <= p_3 && p_3 <= 9) && c_weight2 == 500) || ((p_3 >= 10) && c_weight2 == 1000), (c_cream2 | 32) == (p_2 | 32));
    printf("\n 3|       %d         |      %d      |   %d   |", (c_type3 | 32) == (p_1 | 32), (( 1 <= p_3 && p_3 <= 4) && c_weight3 == 250) || ((5 <= p_3 && p_3 <= 9) && c_weight3 == 500) || ((p_3 >= 10) && c_weight3 == 1000), (c_cream3 | 32) == (p_2 | 32));
    printf("\n");
    printf("\nHope you found a product that suits your likes!");
    printf("\n");


    return 0;


}
/*

Provided formatting parts for printf statements:

As described in step-7
======================
printf(" 1 |   %d   |   %d    |   %d   | %4d | %6.3lf |   %d   |\n",

As described in step-10
=======================
printf(" 1|       %d         |      %d      |   %d   |\n",

*/
