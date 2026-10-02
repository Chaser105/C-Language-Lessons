#define _CRT_SECURE_NO_WARNINGS											// Чтобы компиляторне ругался на "strcat";
#include <stdio.h>	
#include <locale.h>
#include <Windows.h>
#include <string.h>														// Подключение библиотеки для пользовании функции "strlen", "strcat", "strcpy";
#include <ctype.h>														// Подключение библиотеки для пользования функции "toupper", "ispunct" и т.п.;
#include <stdlib.h>														// Подключение библиотеки для пользования функцией "atoi", "atof", "atol"; 
#include <stdbool.h>

// #define SIZE 50														// Задание 1;
// #define SIZE 7														// Задание 2;
// #define SIZE 10														// Задание 3;
// #define SIZE 10														// Задание 4;
// #define MAX 6														// Задание 4;
// #define SIZE 10														// Задание 5;
// #define SIZE 20														// Задание 6;
// #define SIZE 12														// Задание 7;
// #define SIZE 20														// Задание 8;
// #define SIZE 40														// Задание 9;
// #define SIZE 50														// Задание 10;
// #define COL 50														// Задание 11;
// #define ROW 10														// Задание 11;
// #define SIZE 10														// Задание 15;

// void all_print(char* mass_1, int size);								// Задание 1;

// void word(char* mass, int size);										// Задание 2;

// void word(char* mass, int size);										// Задание 3;

// void word(char* mass, int size, int max_symbol);						// Задание 4;

// void word(char* mass, int size);										// Задание 5;
// char* find_symbol(char* mass, char symbol);							// Задание 5;

// void word(char* mass, int size);										// Задание 6;
// bool is_within(char symbol, const char* string);						// Задание 6;

// void word(char* mass, int size);										// Задание 7;
// char* maystrncpy(char* mass_1, char* mass_2, int size);				// Задание 7;

// void word(char* mass, int size);										// Задание 8;
// char* find_string(const char mass_1[], const char mass_2[]);			// Задание 8;

// void word(char* mass, int size);										// Задание 9;
// void revers(char* mass);												// Задание 9;

// void word(char* mass, int size);										// Задание 10;
// void delete_space(char* mass);										// Задание 10;

// int word(char mass[][COL], int r);									// Задание 11;
// void read(char* mass[], int r);                                      // Задание 11;
// void sort_ASCII(char* mass[], int r);                                // Задание 11;
// void sort_up(char* mass[], int r);                                   // Задание 11;
// void sort_up_word(char* mass[], int r);                              // Задание 11;
// int get_word_len(char* mass);                                        // Задание 11;

// void word(char* mass, int size);										// Задание 15;
// int func_atoi(char mass[], int size);								// Задание 15;


int main(void)															// "int main(int argc, char* argv[])" для работы в командной строке;
{
	setlocale(LC_ALL, "RUS");
	setlocale(LC_NUMERIC, "C");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

/*
	SetConsoleCP(65001);												// Для задания 16;
	SetConsoleOutputCP(65001);
	setlocale(LC_ALL, "ru_RU.UTF-8");									// Настраиваем локаль на русский язык в UTF-8;
*/

	// Задание 1:
/*	char text[SIZE];
	puts("Введите текст (после завершения ввода или выхода из программы введите ввод:");
	all_print(text, SIZE);
	puts(text);
	puts("Программа завершена.");
*/


// Задание 2:
/*	char text[SIZE];
	char* spt = text;
	puts("Введите текс (для завершения ввода введите любой пробельный символ или для выхода нажмите ввод):");
	word(text, SIZE);
	puts(text);
	puts("Программа завершена.");
*/


// Задание 3:
/*	char text[SIZE];
	char* spt = text;
	puts("Введите текс (для завершения ввода введите любой пробельный символ или для выхода нажмите ввод):");
	word(text, SIZE);
	puts(text);
	puts("Программа завершена.");
*/


// Задание 4:
/*	char text[SIZE];
	const char* spt = text;
	puts("Введите текс (для завершения ввода введите любой пробельный символ или для выхода нажмите ввод):");
	word(text, SIZE, MAX);
	puts(text);
	puts("Программа завершена.");
*/


// Задание 5:
/*	char text[SIZE];
	char ch;
	char* adres;
	puts("Введите текс и букву, которую будем искать:");
	word(text, SIZE);
	scanf_s("%c", &ch, 1);
	printf("Слово %s. Ищем адрес буквы %c. \n", text, ch);
	adres = find_symbol(text, ch);
	printf("Буква расположена по адресу %p. \n", adres);
*/


// Задание 6:
/*	char text[SIZE];
	char ch;
	bool result;
	puts("Введите текс и букву, которую будем искать:");
	word(text, SIZE);
	scanf_s("%c", &ch, 1);
	result = is_within(ch, text);
	if (result == true)
		puts("Есть такой символ в этой строке.");
	else
		puts("Такого символа в строке нет.");
*/



	// Задание 7:
/*	char source[SIZE];
	char target[SIZE];
	puts("Введите текст:");
	word(source, SIZE);
	maystrncpy(target, source, SIZE);
	puts(target);
	puts("Программа завершена");
*/


	// Задание 8:
/*	char text_1[SIZE];
	char text_2[SIZE];
	char* spt = text_2;
	puts("Введите текст:");
	word(text_1, SIZE);
	word(text_2, SIZE);
	spt = find_string(text_1, text_2);
	if (spt)
	{
		printf("Строка успешно найдена!\n");
		printf("Остаток текста начиная с совпадения: %s\n", spt); 
	}
	else
		printf("Порядок символов строки %s массива text_2 не совпадает со строкой %s массива text_1. \n", text_2, text_1);
*/


	// Задание 9:
/*	char text[SIZE];
	puts("Введите словосочетание (для выхода нажмите q):");
	word(text, SIZE);
	while (text[0] != 'q' || text[1] != '\0')						// Выход из программы в будет если 1 символ "q", второй "\n", который преобразуется в "\0" в функции "word".
	{																// В результате выход будет строго только по одной букве "q";
		revers(text);
		puts(text);
		word(text, SIZE);
	}
	puts("Программа завершена.");
*/



	// Задание 10:
/*	char text[SIZE];
	puts("Ведите текст (для выхода нажмите ввод):");
	word(text, SIZE);
	while (text[0] != '\0')
	{
		delete_space(text);
		puts(text);
		word(text, SIZE);
	}
	puts("Программа завершена.");
*/


	// Задание 11:
	   // Задание 11:
/*    char text[ROW][COL] = {0};
	char* ptstr[ROW];
	int choice = 0;
	int choose, vol;
	for (int i = 0; i < ROW; i++)
		ptstr[i] = text[i];
	puts("Напишите текст до 10 строк:");
	vol = word(text, ROW);
	printf("Выберете операцию над строками: \nМеню: \n");
	printf("1). Исходный список строк; \n2). Строки соглано последовательности сопоставления ASCII; \n"
		"3). В порядке возрастания длины; \n4). Возрастиние длины первого слова в строке; \n"
		"5). Выход из программы. \n");
	while (choice != 5)
	{
		for (int i = 0; i < vol; i++)
			ptstr[i] = text[i];
		choose = scanf_s("%d", &choice);

		if ((choice < 0 || choice > 5) || (choose == 0))
		{
			puts("Ошибка! Нужно ввести значения от 1 до 5.");
			choice = 0;
		}
		while ((getchar()) != '\n')
			continue;

		switch (choice)
		{
			case 1:
				read(ptstr, vol);
				break;
			case 2:
				sort_ASCII(ptstr, vol);
				read(ptstr, vol);
				break;
			case 3:
				sort_up(ptstr, vol);
				read(ptstr, vol);
				break;
			case 4:
				sort_up_word(ptstr, vol);
				read(ptstr, vol);
				break;
			case 5:
				continue;
		}
	}
	puts("Программа завершена.");
*/



// Задание 12:
/*	int ch;
	int	words = 0, sym_up = 0, sym_low = 0, punct = 0, digit = 0;
	bool count = 1;
	puts("Введите текст:");
	while ((ch = getchar()) != EOF)
	{
		if (isspace(ch))						// Когда будет введен пробельный символ или их енсколько подряд, всегда будет отработывать условие "if", "else" будет пропускаться.
			count = 1;							// Когда пойдет уже следующя буква на следующем круге, условие "if" пропустится, выполнится проверка в ветке "else", где увеличится счетчик слов.
		else                                    // Обнулится флаг и при следующей уже букве увеличение счетчика пропустится;
		{
			if (count == 1)
			{
				words++;
				count = 0;
			}
		}

		if (isupper(ch))
			sym_up++;
		if (islower(ch))
			sym_low++;
		if (ispunct(ch))
			punct++;
		if (isdigit(ch))
			digit++;
	}
	printf("%d слов; \n", words);
	printf("%d заглавных букв; \n", sym_up);
	printf("%d строчных букв; \n", sym_low);
	printf("%d знака(ов) препинания; \n", punct);
	printf("%d цифр; \n", digit);
	printf("Программа завершена.");
*/


	// Задание 13:
/*	int count = 0;
	puts("Введите текст:");
		for (count = argc - 1; count > 0; count--)			// Аргумент "argc" это количество введенных слов. "argc - 1" потому что индексация идет с "0";
			printf("%s ", argv[count]);						// Аргумент "argv" это адрес одного слова в массиве;
		putchar('\n');
	puts("Программа завершена");
*/


	// Задание 14:
/*	double vol, result = 1.0;
	int degree;
	if (argc != 3)											// Имя программы + 2 числа = должно быть ровно 3 аргумента, если больше или меньше аргументов, програма выведет ошибку;
	{
		puts("Ошибка! Вы забыли ввести число и степень.");
		return 1;											// Завершаем работу программы с кодом ошибки. "return 1" или другое значение отличное от "0" означает ошибку;
	}
	vol = atof(argv[1]);									// Функция "atof" для первода строки (текста) в нецелочисленные значения;
	degree = atoi(argv[2]);									// Функция "atoi" для первода строки (текста) в целочисленные значения;
	for (int i = 0; i < degree; i++)
		result *= vol;
	printf("%lf ", result);
*/


	// Задание 15:
/*	char symbol[SIZE];
	int result;
	printf("Введите строку из цифр: ");
	word(symbol, SIZE);
	result = func_atoi(symbol, SIZE);
	printf("Число %d. \n", result);
	printf("Программа завершена.\n");
*/


	//Задание 16:
/*	int ch;
	if (argc > 1)														// Защита от дурака: если ключ ввели, но он не совпадает ни с одним из трех правильных;
	{
		if (strcmp(argv[1], "-p") != 0 &&
			strcmp(argv[1], "-u") != 0 &&
			strcmp(argv[1], "-l") != 0)
		{
			puts("Ошибка! Неверный ключ. Используйте: -p, -u или -l.");
			return 1;													// Завершаем программу с кодом ошибки;
		}
	}
	while ((ch = getchar()) != EOF)
	{
		if (argc == 1 || (strcmp(argv[1], "-p") == 0))
			putchar(ch);
		else if (strcmp(argv[1], "-u") == 0)
			putchar(toupper(ch));
		else if (strcmp(argv[1], "-l") == 0)
			putchar(tolower(ch));
	}
*/

/* =======================================================================================
?? ШПАРГАЛКА: КАК РАБОТАЮТ argc И argv В ЯЗЫКЕ C
=======================================================================================
Когда программа запускается через командную строку (терминал), операционная система
передает внутрь любые введенные слова, числа или ключи управления (например: program.exe -u 2.5).
Чтобы их прочитать, функция main должна быть объявлена строго с параметрами:

int main(int argc, char *argv[])

---------------------------------------------------------------------------------------
1. ЧТО ТАКОЕ argc (Argument Count)?
---------------------------------------------------------------------------------------
* Тип данных: int (обычное целое число).
* Суть: Это счетчик КОЛИЧЕСТВА СЛОВ, введенных в командной строке при запуске.
* Главный подвох: ОС считает абсолютно все слова через пробел, ВКЛЮЧАЯ само имя
	 запускаемой программы. Поэтому argc ВСЕГДА равен минимум единице (имя файла).

Примеры подсчета argc:
- Ввели: "Recursion.exe"        -> argc = 1 (только имя программы)
- Ввели: "Recursion.exe -u"     -> argc = 2 (имя программы + 1 ключ)
- Ввели: "Recursion.exe 2.5 8"  -> argc = 3 (имя программы + 2 числа)

---------------------------------------------------------------------------------------
2. ЧТО ТАКОЕ argv (Argument Vector)?
---------------------------------------------------------------------------------------
* Тип данных: char *argv[] (массив указателей на строки / массив слов).
* Суть: Это готовый массив, в ячейках которого лежат сами введенные слова (как текст).
* Главный подвох: Индексация ячеек всегда начинается с НУЛЯ (0).

Если запустить программу командой: "Recursion.exe -u 2.5" (при этом argc = 3):
- argv[0] — всегда хранит строку с именем самой программы ("Recursion.exe").
- argv[1] — хранит строку с первым аргументом ("-u").
- argv[2] — хранит строку со вторым аргументом ("2.5").
- argv[3] — равен NULL (пустота, маркер конца массива).

---------------------------------------------------------------------------------------
3. МАТЕМАТИЧЕСКОЕ ПРАВИЛО: "argc - 1"
---------------------------------------------------------------------------------------
* Индекс самого последнего переданного слова — это всегда [argc - 1].
* Пример: Если argc = 3, то последнее слово лежит в argv[3 - 1], то есть в argv[2].
* Опасность: Попытка прочитать argv[argc] (в данном случае argv[3]) — это обращение
	 к пустой памяти (NULL), что вызовет экстренное падение программы (Segmentation fault).

---------------------------------------------------------------------------------------
4. ЗОЛОТЫЕ ПРАВИЛА БЕЗОПАСНОСТИ ПРИ РАБОТЕ С КОМАНДНОЙ СТРОКОЙ
---------------------------------------------------------------------------------------

Правило А: Защита от пустой памяти (Вылета)
Прежде чем читать любой элемент массива argv (начиная с argv[1] и далее), программа
ОБЯЗАНА проверить через "if", передал ли их пользователь вообще. Если этого не сделать,
программа намертво упадет при обычном "голом" запуске без ключей.

if (argc < 3)	// Если программе для расчета нужны 2 числа (имя + 2 числа = 3)
{
 puts("Ошибка! Не хватает аргументов.");
 return 1;   // Экстренно закрываем программу, читать argv[1] сейчас НЕЛЬЗЯ!
}

Правило Б: "Ленивые вычисления" (Порядок условий в "if")
Если вы проверяете отсутствие аргументов и сам аргумент в одной строке через оператор
ИЛИ (||), проверка количества argc ОБЯЗАНА стоять на самом первом (ЛЕВОМ) месте!

// ПРАВИЛЬНО И БЕЗОПАСНО:
if (argc == 1 || strcmp(argv[1], "-p") == 0)

*Почему:* Если argc == 1, компьютер увидит, что левая часть верна, и вообще НЕ ПОЙДЕТ
читать правую опасную часть со strcmp(argv[1]...). Программа никогда не вылетит.
Если поменять их местами — программа упадет на strcmp при запуске без ключей.

Правило В: Компьютер не умеет умножать текст
Все аргументы в массиве argv — это ВСЕГДА текст (строки), даже если вы ввели цифры
"2.5" или "8". Чтобы производить с ними математические расчеты, их нужно предварительно
перевести в настоящие числа с помощью функций из библиотеки <stdlib.h>:
- atof(argv[1]) — переводит строку текста в дробное число (double).
- atoi(argv[2]) — переводит строку текста в обычное целое число (int).
======================================================================================= */



	return 0;
}

/*
void all_print(char* mass_1, int size)								// Задание 1;
{
	char* pt = mass_1;
	int count = 0;
	while (count < size - 1 && (*pt = getchar()) != '\n' && *pt != '\0' && *pt != EOF)
	{
		count++;
		pt++;
	}
	*pt = '\0';
}
*/


/*
void word(char* mass, int size)										// Задание 2;
{
	char* pt = mass;
	int count;														// Функция "fgets" после себя оставляет символ новой строки, следом символ конец строки;
	fgets(mass, SIZE, stdin);
	for (count = 0; count < size - 1; count++, pt++)
	{
		if (isspace(*pt))
			break;
	}
	*pt = '\0';
	if (strchr(mass, '\n') == NULL)									// Функция "(strchr(mass, '\n') == NULL)" ищет символ новой строки, когда было введено слово.
	{																// Если в массиве есть этот символ, операторы под "if" пропускаются, если нет запускается чиста буфера "stdin";
		int ch;
		while ((ch = getchar()) != '\n' && ch != EOF)
			continue;
	}
}
*/

// Еще вариант для задания 2:
/*
void word(char* mass, int size)
{
	fgets(mass, size, stdin);												// Функция "fgets" запишет только 6 символов и 7 символ это "\0", если не раньше, в зависимости от длины слова;

	if (strchr(mass, '\n') == NULL)											// УМНЫЙ ТРЮК: Очищаем буфер СРАЗУ, пока строка еще целая. // Функция "(strchr(mass, '\n') == NULL)" ищет символ новой строки, когда было введено слово.
	{																		// Если в массиве есть этот символ, операторы под "if" пропускаются, если нет запускается чиста буфера "stdin";
		int ch;
		while ((ch = getchar()) != '\n' && ch != EOF)
			continue;
	}

	for (int i = 0; mass[i] != '\0'; i++)									// А теперь просто находим первый пробел и «обрезаем» строку по нему;
	{
		if (isspace(mass[i]))
		{
			mass[i] = '\0';													// Наткнулись на пробел или "\n" -> превращаем его в конец строки;
			break;															// Работа завершена, выходим;
		}
	}
}
*/

/*
void word(char* mass, int size)												// Задание 3:
{
	int ch = ' ', count = 0;
	while (isspace(ch) && ch != EOF)
		ch = getchar();

	while (count < size - 1)												// Переменная "count" не будет в этом коде больше "9";
	{
		if(isspace(ch) || ch == EOF)
		{
			break;
		}
		mass[count] = ch;
		count++;
		ch = getchar();

	}
	mass[count] = '\0';
	if(count == size - 1 && ch != '\n' && ch != EOF)						// Переменная "count" не будет в этом коде больше "9";
	while ((ch = getchar()) != '\n')
		continue;
}
*/

/*
void word(char* mass, int size, int max_symbol)								// Задание 4:
{
	int ch = ' ', count = 0;
	while (isspace(ch) && ch != EOF)
		ch = getchar();
	while (count < max_symbol && count < size - 1)
	{
		if (isspace(ch) || ch == EOF)
			break;
		mass[count] = ch;
		count++;
		ch = getchar();
	}
	mass[count] = '\0';
	if ((count == max_symbol || count == size - 1) && ch != '\n' && ch != EOF)	// "count == size - 1" для того, когда ввели слово, это слово превысило размер массива, если условие "max_symbol > size";
		while ((ch = getchar()) != '\n' && ch != EOF)							// 	"ch != EOF" для случае если считываем файл. Когда считываем файл через программу, в файле нет символа новой строки;
			continue;
}
*/

/*
void word(char* mass, int size)												// Задание 5:
{
	int i;
	fgets(mass, size, stdin);
	for (i = 0; i < size; i++)
	{
		if (mass[i] == '\n')
			mass[i] = '\0';
	}
}

char* find_symbol(char* mass, char symbol)
{
	for (int count = 0; mass[count] != '\0'; count++)
	{
		if(mass[count] == symbol)
			return &mass[count];
	}
	return NULL;
}
*/

/*
void word(char* mass, int size)												// Задание 6;
{
	int i;
	fgets(mass, size, stdin);
	for (i = 0; i < size; i++)
	{
		if (mass[i] == '\n')
			mass[i] = '\0';
	}
}

bool is_within(char symbol, const char* string)
{
	int count;
	for (count = 0; string[count] != '\0'; count++)
	{
		if (string[count] == symbol)
			return true;
	}
	return false;
}
*/

/*
void word(char* mass, int size)												// Задание 7;
{
	int i;
	fgets(mass, size, stdin);
	for (i = 0; i < size; i++)
	{
		if (mass[i] == '\n')
			*(mass + i) = '\0';
	}
}

char* maystrncpy(char* mass_1, char* mass_2, int size)
{
	int i;
	for (i = 0; i < size && mass_2[i] != '\0'; i++)
		*(mass_1 + i) = *(mass_2 + i);
	while (i < size)
	{
		*(mass_1 + i) = '\0';
		i++;
	}
	return mass_1;
}
*/

/*
void word(char* mass, int size)												// Задание 8;
{
	int i;
	fgets(mass, size, stdin);
	for (i = 0; i < size; i++)
	{
		if (mass[i] == '\n')
			mass[i] = '\0';
	}
}

char* find_string(const char mass_1[], const char mass_2[])
{
	const char* pt1;
	const char*	pt2;
	pt1 = mass_1;
	pt2 = mass_2;
	while (*mass_1)
	{
		pt1 = mass_1;
		pt2 = mass_2;
		while (*pt1 == *pt2)
		{
			pt1++;
			pt2++;
			if (*pt2 == '\0')
				return (char*)mass_1;						// Запись (char*) нужна только для того, чтобы убрать слово const на выходе из функции. 
		}													// Команда (char*) принудительно стирает ярлык const прямо перед возвратом. Это просто «затычка» для компилятора, чтобы он пропустил код;
		mass_1++;
	}
	return NULL;
}
*/
	
/*
void word(char* mass, int size)											// Задание 9;
{
	int i;
	fgets(mass, size, stdin);
	for (i = 0; i < size; i++)
	{
		if (mass[i] == '\n')
			mass[i] = '\0';
	}
}

void revers(char* mass)
{
	int size_mass = strlen(mass);
	char temp, * pt;

	for (int count = 0; count < size_mass; count++, size_mass--)
	{
		temp = mass[count];
		mass[count] = mass[size_mass - 1];
		mass[size_mass - 1] = temp;
	}
}

	// Еще вариант проверки кода:
	void revers(char* mass)
		{
			int size_mass = strlen(mass);
			char temp, * pt;

			for (int count = 0; count < size_mass / 2; count++)
			{
				temp = mass[count];
				mass[count] = mass[size_mass - 1 - count];
				mass[size_mass - 1 - count] = temp;
			}
		}
*/

/*
void word(char* mass, int size)												// Задание 10;
{
	int i;
	fgets(mass, size, stdin);
	mass[strcspn(mass, "\n")] = '\0';			// Функция "strcspn" переьирает символы массива по порядку и их сравнивает со вторым аргументом. Например, в массиве под индексом "3" стоит такой же символ, что и во втором аргументе,
}												// то функция останавливает свою работу. В результате переписывается символ под "3" индексом на другой символ. Если символ не найден, произойдет перезапись финального символа '\0' поверх самого себя.
												// Функция в любом случае производит перезапись значения, если ничего не надет, перезапишет первый попавшийся символ конца строки;

void delete_space(char* mass)
{
	char temp;
	int size_mass;
	while (*mass)
	{
		if (*mass == ' ')
		{
			for (int i = 0; mass[i] != '\0'; i++)
			{
				mass[i] = mass[i + 1];
			}
		}
		else
			mass++;
	}
}
*/

/*
int word(char mass[][COL], int r)                                            // Задание 11;
{
	int i;
	for (i = 0; i < r; i++)
	{
		if (fgets(mass[i], COL, stdin) == NULL)                              // Проверяем: если "fgets" вернул NULL, значит нажат EOF. Если ввели слово, затем конец файла, сначала в одну строку запишется текст, строка массива недозаполнится.
			break;                                                           // Далее идет переход к следующей итерации и в буфере остется висеть конец файла, код которого "-1". Функция "fgets" (не воспринимает как символ "-1", это служебная команда) распознает этот код и возвращает "0" (NULL), завершая ввод;
		if (mass[i][0] == '\n')                                              // При втором нажатии ввод, ввод текста закончится;
			break;
		mass[i][strcspn(mass[i], "\n")] = '\0';                              // Для двуменрно массива. "mass[i]" это индекс строки;
	}
	return i;
}

void read(char* mass[], int r)
{
	for (int i = 0; i < r; i++)
	{
		if (mass[i][0] == '\0')
			continue;
		puts(mass[i]);                                                       // Т.к. массив двумерный, за раз прочитать все строки нельзя, читать только по строчно,
	}                                                                        // применяя функцию "puts";
}

void sort_ASCII(char* mass[], int r)
{
	char* temp;
	int befor, after;
	for(befor = 0; befor < r - 1; befor++)									 // Оставшуюся строку не имеет смысла сравнивать с другими строками, с ней сравнились уже на последней итерации цикла;
		for (after = befor + 1; after < r; after++)
			if (strcmp(mass[befor], mass[after]) > 0)                        // Первый символ первой строки стравнивается с первым символом второй строки. Если перввый символ стоит выше, чем второй, то произойдет обмен строками;
			{
				temp = mass[befor];
				mass[befor] = mass[after];
				mass[after] = temp;
			}
}

void sort_up(char* mass[], int r)
{
	char* temp;
	int befor, after;
	for(befor = 0; befor < r - 1; befor++)
		for(after = befor + 1; after < r; after++)
			if(strlen(mass[befor]) > strlen(mass[after]))
			{
				temp = mass[befor];
				mass[befor] = mass[after];
				mass[after] = temp;
			}
}

void sort_up_word(char* mass[], int r)
{
	char* temp;
	int befor, after;
	for (befor = 0; befor < r - 1; befor++)
		for (after = befor + 1; after < r; after++)
			if (get_word_len(mass[befor]) > get_word_len(mass[after]))		// Ниже функция для подсчета букв;
			{
				temp = mass[befor];
				mass[befor] = mass[after];
				mass[after] = temp;
			}
}

int get_word_len(char* mass)												// Функция для подсчета букв;
{
	while (*mass != '\0' && isspace((unsigned char)*mass))					// "isspace((unsigned char)mass[i])" если функция увидет пробел вернет "1". Двигаем указатель "mass". Данный цикл вычищает первые пробельные символы;
		mass++;
	int len = 0;															// Счетчик для букв;
	while (mass[len] != '\0' && !isspace((unsigned char)mass[len]))			// Считаем пробелы. "!isspace((unsigned char)mass[i])" если функция увидет пробел вернет "0". Т.е. при букве будет логическая "1";
	{																		// Теперь когда адрес массива сдвинулы вперд с помощью указателя "*mass", т.е. пропустили все пробелы, массив "mass[len]" начнет с буквы;
		len++;
	}
	return len;
}
*/

/*
void word(char* mass, int size)											// Задание 15;
{
	int i;
	fgets(mass, size, stdin);
	for (i = 0; i < size; i++)
		if ((mass[i]) == '\n')
			mass[i] = '\0';
}

int func_atoi(char mass[], int size)
{
	int vol, number = 0;
	int sign = 1;										// Для знака "-";
	int i = 0;
	if (size > 0 && mass[0] == '-')						// Если в массиве первый знак "-", то переменной "sign" присваивается значение "-1".
	{													// И в цикле "for" счетчик начнется с "1", под нулевым индесом будет стоять занк "-";
		sign = -1;
		i = 1;
	}

	for (; i < size && mass[i] != '\0'; i++)
	{
		if (mass[i] >= '0' && mass[i] <= '9')			// Границы диапазона условия. Символы отличные от цифр будут отбрасываться;
		{
			vol = mass[i] - 48;							// "- 48" это код символа "0";
			number = number * 10 + vol;					// Здесь умножаем на 10, потому что если введем "3" цифры, это 3 сотни (300), если "2", это 20.
		}												// Например ввели 345, первое действие заходит цифра "3", при первой итерации будет "0 * 10 + 3 = 3 (итого)".
		else                                            // Следующая итерация, идет "4", переменной "number" присвоено уже "3", "3 * 10 + 4 = 34 (итого)".
			break;										// Далее следующая итерация, идет "5", переменной "number" присвоено уже "34", "34 * 10 + 5 = 345 (итог)";
	}
	return number * sign;
}
*/

