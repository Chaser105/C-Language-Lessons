/* #include <stdio.h>

#include "hotel.h"

int menu(void)
{
	int code, status;
	printf("\n%s%s\n", STARS, STARS);
	printf("¬ведите число, соответствующее выбранному отелю: \n");
	printf("1) Fairfields			2) Hotel Olimpic \n");
	printf("3) Chetworthy plaza		4) The Stockton \n");
	printf("5) ¬ыход \n");
	printf("%s%s\n", STARS, STARS);

	while ((status = scanf_s("%d", &code)) != 1 || (code < 1 || code > 5))
	{
		if (status != 1)
			scanf_s("%*s");								// ќтброс нецелочисленного ввода. "*" (звездочка) Ч означает Ђпрочитать, но никуда не сохран€тьї. “о есть функци€ берет данные из буфера и тут же их Ђвыбрасывает в корзинуї, не требу€ от теб€ переменную дл€ записи.
		printf("¬ведите целое число от 1 до 5. \n");	// "s" Ч говорит функции: Ђ—читай строку (последовательность символов) до ближайшего пробела или конца строкиї;
	}
	return code;
}


int getnights(void)
{
	int nights;
	printf("Ќа сколько суток бронируете номер? \n");

	while ((scanf_s("%d", &nights)) != 1)
	{
		scanf_s("%*s");									// ќтброс нецелочисленного ввода. * (звездочка) Ч означает Ђпрочитать, но никуда не сохран€тьї. “о есть функци€ берет данные из буфера и тут же их Ђвыбрасывает в корзинуї, не требу€ от теб€ переменную дл€ записи.
		printf("¬ведите целое число такое как 2. \n");	// "s" Ч говорит функции: Ђ—читай строку (последовательность символов) до ближайшего пробела или конца строкиї;
	}
	return nights;
}

void showprice(double rate, int nights)
{
	int n;
	double total = 0.0;
	double factor = 1.0;

	for (n = 1; n <= nights; n++, factor *= DISCOUNT)
		total += rate * factor;
	printf("ќбща€ стоимость составл€ет $%0.2f. \n", total);
}
*/