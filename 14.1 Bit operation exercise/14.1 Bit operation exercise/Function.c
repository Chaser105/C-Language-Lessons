#include <stdio.h>
#include <limits.h>
#include <string.h>
#include <locale.h>					// для CHART_BIT количество битов на символ;
#include <stdalign.h>				// Для операции _Alignof и _Alignas;
#include <stdbool.h>

// Задание 1:
/*
int convert_deci(char* two_bit)
{
	int num = 0;
	int bit;
	while (*two_bit != '\0')
	{
		bit = *two_bit - '0';
		num = num * 2 + bit;		// Метод Горнера;
		two_bit++;
	}
	return num;
}
*/

// Задание 2:
/*
char* s_gets(char* mass, int size)
{
	char* ret_val;
	char* find;
	ret_val = fgets(mass, size, stdin);
	if (ret_val)
	{
		find = strchr(mass, '\n');
		if (find)
			*find = '\0';
		else
			while ((getchar()) != '\n')
				continue;
	}
	return ret_val;
}

int  bin_to_int(char* two_bit)
{
	int num = 0;
	int bit;
	while (*two_bit != '\0')
	{
		bit = *two_bit - '0';
		num = num * 2 + bit;			// Метод Горнера;
		two_bit++;
	}
	return num;
}

void print_bits(const char* label, int value, int len)
{
	printf("%-20s", label);				// Выравнивание текста по левому краю;

	for (int i = len - 1; i >= 0; i--)	// Идём строго от старшего бита к младшему, подстраиваясь под длину ввода;
	{
		int bit = (value >> i) & 1;		// Сдвигаем число на i позиций и маской & 1 забираем конкретный бит;
		printf("%d", bit);
	}
	printf("\n");
}
*/

// Задание 3:
/*
int on_bit(int vol)						// Метод Кернигана:
{
	int count = 0;
	while (vol > 0)						// Компьютер значения представляет только в двоичном виде. Если приняли число 12, то это 1100.
	{
		vol = vol & (vol - 1);			// Выглядет таким образом: vol = 1100 & (1100 - 0001), vol = 1100 & 1011, в итоге 1000. Счетчик прибавляет 1.
		count++;						// Далее vol = 1000 & (1000 - 0001), vol = 1000 & 0111, в итоге 0000. Счетчик прибавляет 1, уже будет 2.
	}
	return count;						// Т.к. vol стал равен 0, цикл завершает работу и счетчик возвращает значение 2;
}
*/

// Задание 4:
/*
int find_bit(int n, int p)
{
	return (n >> p) & 1;
}
*/

// Задание 5:
/*
int shift_bit(unsigned int n, unsigned int sh)
{
	if (sh == 0) 
		return n;					// Для случая, если ввели 0 для сдвига;
	return (n << sh) | (n >> (sizeof(unsigned int) * CHAR_BIT - sh));
}
*/

// Еще вариант на проверку если сдвиг будет все 0:
/*
int shift_bit(unsigned int n, unsigned int sh)
{
	unsigned int mask = (sizeof(unsigned int) * CHAR_BIT) - 1;			// Находим маску для сдвига. Будет равна 11111 (31). Если 32 маска теряет смысл;
	unsigned int safe_sh = sh & mask;									// Сохраняем в переменную количество сдвигов, который приняла изначально функция;
	return (n << safe_sh) | (n >> ((mask + 1) - safe_sh));				// Если ввели сдвиг 0, часть (n << safe_sh) - число останется на месте, сдвига нет. (n >> ((mask + 1) - safe_sh) - получаем сдвиг 32, 
																		// но компьютер воспринимает это как 0, в итоге свдига нет. И при операторе | правая и левая часть одинаковы, в результете ничего не поменялось;
}
*/

/*
		Если бы проверки на входе не было, в функцию внедряют маску:
	unsigned int mask = (sizeof(unsigned int) * CHAR_BIT) - 1; // Получаем 31 (в битах 11111)
	unsigned int safe_sh = sh & mask;                          // Срезает всё лишнее

	* Пять единиц на конце маски (11111) без изменений пропускают числа от 0 до 31.
	* Нули впереди маски намертво стирают всё, что больше 31.
	* Сдвиг на 35 работает как стрелка часов: 35 & 31 превращается в 3 (второй круг).
	* Сдвиг на 32 превращается в 0. Правая часть станет (n >> 32).
	  Из-за аппаратной лени процессоры Intel/AMD делают 32 % 32 = 0, превращая команду
	  в (n >> 0). В итоге (n << 0) | (n >> 0) безопасно вернет само число 'n'.
*/

// Задание 6:
/*
void clear_buf(void)
{
	while (getchar() != '\n')
		continue;
}

int show_menu(void)
{
	char ch;
	while (1)
	{
		puts("Выберете опцию в главном меню (выход з):");
		printf("ш) изменить шрифт  р) изменить размер  в) изменить выравнивание\n"
			"ж) полужирный      к) курсив           п) подчеркнутый\n"
			"з) завершить\n");

		if (scanf_s(" %c", &ch, 1) != 1)
		{
			puts("Ошибка! Выберите опцию из меню снова.");
			clear_buf();
			continue;
		}
		while (getchar() != '\n')
			continue;

		if (strchr("шрвжкпз", ch) != NULL)
		{
			switch (ch)
			{
				case 'ш': return 0;
				case 'р': return 1;
				case 'в': return 2;
				case 'ж': return 3;
				case 'к': return 4;
				case 'п': return 5;
				case 'з': return -1;
			}
		}
		puts("Неверный символ! Выберите опцию из меню снова.");
	}
}

void ID_f(struct props* str_opt)
{
	universal_input_f(str_opt, 0, 255);
}

void size_f(struct props* str_opt)
{
	universal_input_f(str_opt, 1, 127);
}

void algmt_f(struct props* str_opt)
{
	universal_input_f(str_opt, 2, 2);
}

void universal_input_f(struct props* str_opt, int mode, unsigned int max_val)
{
	unsigned int value;
	int res;

	if (mode == 0)
		puts("Выберете стиль шрифта от 0 до 255 (выход нажмите q):");
	else if (mode == 1)
		puts("Выберете размер шрифта от 0 до 127 (выход нажмите q):");
	else if (mode == 2)
		puts("Выберете выравнивание текста от 0 до 2 (выход нажмите q):");

	while (1)
	{
		res = scanf_s(" %u", &value);
		if (res == 1 && getchar() == '\n')
		{
			if (value >= 0 && value <= max_val)
			{
				switch (mode)
				{
					case 0:
						str_opt->ID_font = value & max_val;
						break;
					case 1:
						str_opt->size_font = value & max_val;
						break;
					case 2:
						str_opt->aligment = value & 3;
						break;
				}
				break;
			}
			else
			{
				printf("Ошибка! Введите от 0 до %u\n", max_val);
				continue;
			}
		}
		else
		{
			if (res == 1)
			{
				puts("Ошибка! Введите число БЕЗ лишних символов и пробелов.");
				clear_buf();
				continue;
			}
			char ch = getchar();
			if (ch == 'q')
			{
				if (getchar() == '\n')
					break;
				else
				{
					puts("Ошибка! Для выхода введите только q");
					clear_buf();
					continue;
				}
			}
			else
			{
				printf("Ошибка! Введите корректное значение от 0 до %u.\n", max_val);
				clear_buf();
			}
		}
	}
}

void bold_f(struct props* str_opt)
{
	str_opt->bold ^= 1;
}

void itlc_f(struct props* str_opt)
{
	str_opt->italic ^= 1;
}

void under_f(struct props* str_opt)
{
	str_opt->underlining ^= 1;
}
*/

// Задание 7:
/*
void clear_buf(void)
{
	while (getchar() != '\n')
		continue;
}

int show_menu(void)
{
	char ch;
	while (1)
	{
		puts("Выберете опцию в главном меню (выход з):");
		printf("ш) изменить шрифт  р) изменить размер  в) изменить выравнивание\n"
			"ж) полужирный      к) курсив           п) подчеркнутый\n"
			"з) завершить\n");

		if (scanf_s(" %c", &ch, 1) != 1)
		{
			puts("Ошибка! Выберите опцию из меню снова.");
			clear_buf();
			continue;
		}
		while (getchar() != '\n')
			continue;

		if (strchr("шрвжкпз", ch) != NULL)
		{
			switch (ch)
			{
			case 'ш': return 0;
			case 'р': return 1;
			case 'в': return 2;
			case 'ж': return 3;
			case 'к': return 4;
			case 'п': return 5;
			case 'з': return -1;
			}
		}
		puts("Неверный символ! Выберите опцию из меню снова.");
	}
}

void ID_f(unsigned long* num)
{
	universal_input_f(num, 0, 0xFF);
}

void size_f(unsigned long* num)
{
	universal_input_f(num, 1, 0x7F);
}

void algmt_f(unsigned long* num)
{
	universal_input_f(num, 2, 0x02);
}

void universal_input_f(unsigned long* num, int mode, unsigned int max_val)
{
	unsigned long value;
	int res;

	if (mode == 0)
		puts("Выберете стиль шрифта от 0 до 255 (выход нажмите q):");
	else if (mode == 1)
		puts("Выберете размер шрифта от 0 до 127 (выход нажмите q):");
	else if (mode == 2)
		puts("Выберете выравнивание текста от 0 до 2 (выход нажмите q):");

	while (1)
	{
		res = scanf_s(" %lu", &value);
		if (res == 1 && getchar() == '\n')
		{
			if (value >= 0 && value <= max_val)
			{
				switch (mode)
				{
				case 0:
					*num = (*num & ~max_val) | value;
					break;
				case 1:
					*num &= ~(M_SFNT << S_FNT);
					*num |= (value << S_FNT);
					break;
				case 2:
					*num &= ~(M_ALGT << ALGT);
					*num |= (value << ALGT);
					break;
				}
				break;
			}
			else
			{
				printf("Ошибка! Введите от 0 до %u\n", max_val);
				continue;
			}
		}
		else
		{
			if (res == 1)
			{
				puts("Ошибка! Введите число БЕЗ лишних символов и пробелов.");
				clear_buf();
				continue;
			}
			char ch = getchar();
			if (ch == 'q')
			{
				if (getchar() == '\n')
					break;
				else
				{
					puts("Ошибка! Для выхода введите только q");
					clear_buf();
					continue;
				}
			}
			else
			{
				printf("Ошибка! Введите корректное значение от 0 до %u.\n", max_val);
				clear_buf();
			}
		}
	}
}

void bold_f(unsigned long* num)
{
	*num ^= OFF_ON << BLD;
}

void itlc_f(unsigned long* num)
{
	*num ^= OFF_ON << ITLC;
}

void under_f(unsigned long* num)
{
	*num ^= OFF_ON << UNDR;
}
*/

