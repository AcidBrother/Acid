#include <stdlib.h>
#include <stdio.h>

int main(void)
{
    int n;
    int t;
    int s;
    unsigned int UnitStateWord;
    printf("Введите код состояния (0 - 3) >");
	scanf("%d",&n);
	printf("Введите признак ошибки (0 - 511) >");
	scanf("%d",&t);
	printf("Введите признак занятости (0 - 31) >");
	scanf("%d",&s);
	UnitStateWord=((int)n&0x3)<<14;
	UnitStateWord|=((int)t&0x1FF)<<5;
	UnitStateWord|=s&0x1F;
	printf("\nСлово состояния устройства = %04x\n",UnitStateWord);
}

\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\

\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\

\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\

\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\

#include <stdlib.h>
#include <stdio.h>

int main(void)
{
    int n;
    int t;
    int s;
    unsigned int UnitStateWord;
    printf("Введите код состояния (0 - 31) >");
	scanf("%x",&UnitStateWord);
	printf("Код состояния			 = %x\n",UnitStateWord);
	n=(UnitStateWord>>14)&0x3;
	t=(UnitStateWord>>5)&0x1FF;
	s=(UnitStateWord)&0x1F;
	printf("Код состояния			 = %d\n",n);
	printf("Код состояния			 = %d\n",t);
	printf("Код состояния			 = %d\n",s);

}
