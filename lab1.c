#include <stdio.h>
//#include <conio.h>

int main()
{
    char firm1[9], firm2[9], firm3[9];
    int kolvprod1, kolvprod2, kolvprod3, leng;
    unsigned int yearprod1, yearprod2, yearprod3;
    float rinok1, rinok2, rinok3;
    printf("Введите название фирмы, количество продуктов, годовой объем продажи($) и часть рынка(%) \n");
    scanf("%s %d %u %f",firm1, &kolvprod1, &yearprod1, &rinok1);

    printf("Введите название фирмы, количество продуктов, годовой объем продажи($) и часть рынка(%) \n");
    scanf("%s %d %u %f",firm2, &kolvprod2, &yearprod2, &rinok2);

    printf("Введите название фирмы, количество продуктов, годовой объем продажи($) и часть рынка(%) \n");
    scanf("%s %d %u %f",firm3, &kolvprod3, &yearprod3, &rinok3);





    printf("|--------------------------------------------------------------------------|\n");
    printf("|Фирмы - производители СКБД\t\t\t\t                   |\n");
    printf("|  Фирмы   |Количество. продуктов|Годовой объем продажи ($)|Часть рынка (%)|\n");
    printf("|%10s|%20d|%25u|%10.2f|\n", firm1, kolvprod1, yearprod1, rinok1);
    printf("|%10s|%20d|%25u|%10.2f|\n", firm2, kolvprod2, yearprod2, rinok2);
    printf("|%10s|%20d|%25u|%10.2f|\n", firm3, kolvprod3, yearprod3, rinok3);
    printf("|Примечание: по данным Gartner Group за 1999г\t\t\t\t   |\n");
    printf("|--------------------------------------------------------------------------|\n");


    return 0;
}
