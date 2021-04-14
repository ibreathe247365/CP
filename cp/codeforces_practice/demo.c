#include <stdio.h>

void main()
{
        double initial_price, discount, tax, initial_price2, discount2, tax2;
        while (0 == 0)
        {
                scanf("%lf %lf %lf", &initial_price, &discount, &tax);
                scanf("%lf %lf %lf", &initial_price2, &discount2, &tax2);
                if (initial_price > 0 && discount >= 0 && discount < 100 && tax > 0 && tax <= 100 && initial_price2 > 0 && discount2 >= 0 && discount2 < 100 && tax2 > 0 && tax2 <= 100)
                        break;
                printf("Invalid Input");
        }
        double final_price, final_price2;
        final_price = initial_price * (100 - discount) * (100 + tax) / 10000;
        final_price2 = initial_price2 * (100 - discount2) * (100 + tax2) / 10000;
        double total = final_price + final_price2;
        printf("%f", total);
}
