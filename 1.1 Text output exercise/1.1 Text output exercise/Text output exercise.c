#include <stdio.h>
#include <locale.h>							// Для отображения сообщений на русском языке;

void attention(void);
void normal(void);

void br(void);
void ic(void);

void danger(void);

void count(void);
void two(void);

int main(void)
{
	setlocale(LC_ALL, "RUS");				// Упражнение 1 (строки 21...25);
	printf("Василий Пупкин \n");
	printf("Василий \n");
	printf("Пупкин \n");
	printf("Василий Пупкин \n\n");

	printf("Высилий, г. С-Петербург, ул. Красивых Молдавских патизан 54,кв. 47 \n\n");		// Упражнение 2;

	int age = 36;							// Упражнение 3 (строки 25...28);
	int days = age * 365;

	printf("%d лет, %d примерно прожито дней. \n\n", age, days);

	attention();							// Упражнение 4 (строки 30...33 и 68...76);
	attention();
	attention();
	normal();

	br();									// Упражнение 5 (строки 35...42 и 78...86);
	printf(", ");
	ic();
	printf("\n");
	ic();
	printf(", \n");
	br();
	printf("\n\n");

	int number = 10;						// Упражнение 6 (строки 44...46);

	printf("Дано число %d, удвоенное число будет равно %d, число в квадрате равняется %d. \n\n", number, number * 2, number * number);

	danger();								// Упражнение 7 (строки 48...59 и 88...91);
	printf(" ");
	danger();
	printf(" ");
	danger();
	printf(" \n");
	danger();
	printf(" ");
	danger();
	printf(" \n");
	danger();
	printf(" \n\n");

	printf("начинаем: \n");					// Упражнение 8 (строки 61...63 и 93...103);
	count();
	printf("end!\n\n");

	return 0;
}

void attention(void)										// Упражнение 4 (строки 30...33 и 68...76);
{
	printf("Перегрузка в системе электроснабжения. \n");
}

void normal(void)
{
	printf("Все системы в норме. \n\n");
}

void br(void)
{
	printf("Бразилия, Россия");								// Упражнение 5 (строки 35...42 и 78...86);
}

void ic(void)
{
	printf("Индия, Китай");
}

void danger(void)
{
	printf("Danger!!!");
}

void count(void)											// Упражнение 8 (строки 61...63 и 93...103);
{
	printf("one\n");
	two();
	printf("three\n");
}

void two(void)
{
	printf("two\n");
}
