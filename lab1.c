#include <stdio.h>
//#include <conio.h>

int main()
{
    char firm1[9], firm2[9], firm3[9];
    int kolvprod1, kolvprod2, kolvprod3;
    unsigned int yearprod1, yearprod2, yearprod3;
    float rinok1, rinok2, rinok3;
    printf("Введите название фирмы, количество продуктов, годовой объем продажи($) и часть рынка(%) \n");
    scanf("%s %d",firm1, &kolvprod1);

    printf(firm1);
    printf("\n");



    printf("------------------------------------------------------------------------\n");
    printf("|Фирмы - производители СКБД\t\t\t\t\t\t        |\n");
    printf("|Фирмы\t|Количество. продуктов\t|Годовой объем продажи ($)\t|Часть рынка (%)|\n");
    printf("|Фирма1\t|\t\t|\t\t|\t\t\t\t|\n");
    printf("|Фирма2\t|\t\t|\t\t|\t\t\t\t|\n");
    printf("|Фирма3\t|\t\t|\t\t|\t\t\t\t|\n");
    printf("|Примечание: по данным Gartner Group за 1999г\t\t\t\t|\n");
        printf("------------------------------------------------------------------------\n");


    return 0;
}
