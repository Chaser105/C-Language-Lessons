#include <stdio.h>
#include <locale.h>
#include <windows.h>
#include <stdlib.h>									// Для прототипа функции exit();
#include <string.h>
#include "File input-output exercise.h"

// #define BUFSIZE	256								// К 1, 2, 3, 7, 8, 10 заданию;
// #define ARSIZE	1000							// К 5 заданию;
// #define LEN		100								// К 6 заданию;
// #define MAX		41								// К 9 заданию;
// #define ROWS		20								// К 12 заданию;
// #define COLS		30								// К 12 заданию;

int main(int argc, char* argv[])
{
	setlocale(LC_ALL, "Russian");
	setlocale(LC_NUMERIC, "C");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);


	// Задание 1:
/*	FILE* fp;
	char name[BUFSIZE] = { 0 };
	int ch, count = 0;
	while (1)						// Бесконечный цикл: крутимся, пока не скажем break;
	{
		puts("Введите имя файла.");
		fgets(name, BUFSIZE, stdin);
		s_gets(name);
		if (name[0] == '\0')
		{
			break;					// Просто выходим из цикла, если нажали только Enter;
		}
		if ((fopen_s(&fp, name, "r")) != 0)
		{
			fprintf(stderr, "Не удалось открыть файл %s \n", name);
			exit(EXIT_FAILURE);
		}
		while ((ch = getc(fp)) != EOF)
		{
			putc(ch, stdout);
			count++;
		}
		if (ferror(fp))
			fprintf(stderr, "Ошибка файла %s.", name);
		if ((fclose(fp)) != 0)
			fprintf(stderr, "Ошибка закрытия файла %s. \n", name);
	}
	printf("\n\nВ файле %s %d символов. \n", name, count);
	printf("Программа завершена. \n");
*/



// Задание 2:
/*	FILE* faim, * fsource;
	char text[BUFSIZE];
	size_t byte_reads;
	if (argc != 3)
	{
		fprintf(stderr, "Использовать программу %s: <исходный файл> <целевой файл>. \n", argv[0]);
		exit(EXIT_FAILURE);
	}
	if ((fopen_s(&fsource, argv[1], "rb")) != 0)
	{
		fprintf(stderr, "Невозможно открыть файл %s. \n", argv[1]);
		exit(EXIT_FAILURE);
	}
	if ((fopen_s(&faim, argv[2], "wb")) != 0)
	{
		fprintf(stderr, "Невозможно открыть файл %s. \n", argv[2]);
		exit(EXIT_FAILURE);
	}
	while ((byte_reads = fread(text, sizeof(char), BUFSIZE, fsource)) > 0)
		fwrite(text, sizeof(char), byte_reads, faim);
	if (ferror(fsource))
		fprintf(stderr, "Ошибка чтения файла %s. \n", argv[1]);
	if (ferror(faim))
		fprintf(stderr, "Ошибка записи файла %s. \n", argv[2]);
	if (fclose(fsource) != 0)
		fprintf(stderr, "Ошибка файла %s. \n", argv[1]);
	if (fclose(faim) != 0)
		fprintf(stderr, "Ошибка файла %s. \n", argv[2]);
*/



	// Задание 3:
/*	char text_s[BUFSIZE], text_a[BUFSIZE];
	size_t byte_reads;
	int ch;
	while (1)
	{
		FILE* fsource = NULL, * faim = NULL;
		// 1. ЦИКЛ ДЛЯ ИСХОДНОГО ФАЙЛА
		// Крутится, пока файл НЕ открыт (fsource == NULL)
		while (fsource == NULL)
		{
			puts("Введите имя исходного файла (для выхода пустую строку): ");
			if ((fgets(text_s, sizeof(text_s), stdin) == NULL) || text_s[0] == '\n')
			{
				puts("Выход из программы.");
				return 0;
			}
			s_gets(text_s);
			if ((fopen_s(&fsource, text_s, "rb")) != 0)
				fprintf(stderr, "Невозможнно открыть файл %s. Повторите ввод. \n", text_s);
		}
		// 2. ЦИКЛ ДЛЯ ЦЕЛЕВОГО ФАЙЛА
		// Крутится, пока второй файл НЕ открыт (faim == NULL)
		while (faim == NULL)
		{
			puts("Введите имя целевого файла (для выхода пустую строку): ");
			if ((fgets(text_a, sizeof(text_a), stdin)) == NULL || text_a[0] == '\n')
			{
				fclose(fsource);
				puts("Выход из программы.");
				return 0;
			}
			s_gets(text_a);
			if ((fopen_s(&faim, text_a, "wb")) != 0)
				fprintf(stderr, "Невозможнно открыть файл %s. Повторите ввод. \n", text_a);
		}
		// 3. БЛОК ОБРАБОТКИ ДАННЫХ (посимвольный)
		// Сюда программа дойдет, только если оба файла успешно открылись
		if (fsource != NULL && faim != NULL)
		{
			puts("Файлы готовы. Начинаем обработку данных...");
			while ((ch = getc(fsource)) != EOF)
				putc(toupper(ch), faim);
			// Проверка ошибок после копирования
			if (ferror(fsource))
				fprintf(stderr, "Ошибка чтения файла %s. \n", text_s);
			if (ferror(faim))
				fprintf(stderr, "Ошибка записи файла %s. \n", text_a);
			puts("Файл успешно обработан и сохранен!\n");
		}
		// 4. ОБЯЗАТЕЛЬНОЕ ЗАКРЫТИЕ ПОТОКОВ (освобождаем файлы для следующего круга)
		if(fsource != NULL)
			if (fclose(fsource) != 0)
				fprintf(stderr, "Ошибка при закрытии файла %s. \n", text_s);
		if(faim != NULL)
			if (fclose(faim) != 0)
				fprintf(stderr, "Ошибка при закрытии файла %s. \n", text_a);
	}
	puts("Программа завершена.");
*/


	// Задание 4:
/*	FILE* fsource;
	int i, ch;
	if (argc < 2)
	{
		fprintf(stderr, "Использовать программу %s <исходный файл> \n", argv[0]);
		exit(EXIT_FAILURE);
	}

	for (i = 1; i < argc; i++)								// Цикл отрытия исходных файлов, для чтения с последующим выводом на экран;
	{
		if ((fopen_s(&fsource, argv[i], "rb")) != 0)
		{
			fprintf(stderr, "Не удается открыть файл %s. \n", argv[i]);
		}
		else
		{
			while ((ch = getc(fsource)) != EOF)
				putc(ch, stdout);
			if (ferror(fsource))
				fprintf_s(stderr, "Ошибка чтения файла %s \n", argv[i]);
			if((fclose(fsource)) != 0)
				fprintf_s(stderr, "Ошибка закрытия файла %s \n", argv[i]);
		}
	}
	puts("Чтение файла(ов) завершено. \n");
*/


	// Задача 5:
/*	double numbers[ARSIZE];										// Массив куда запишутся данные для файла;
	double value;
	int i;
	long pos;
	FILE* iofile;												// Создание указателя на тип струкутуры FILE, который указывает на файл;
	if (argc < 2)
	{
		fprintf(stderr, "Использовать программу %s <имя_файла> \n", argv[0]);
		exit(EXIT_FAILURE);
	}
	for (i = 0; i < ARSIZE; i++)								// Создание набора значений double;
		numbers[i] = 100.0 * i + 1.0 / (i + 1);					// Произвольная формула для случайных знаений;
	if ((fopen_s(&iofile, argv[1], "wb")) != 0)					// Запись в файл значений в двоичном формате. Открытие файла file типа структуры FILE в режиме записи в файл в двоичном формате, если в файле были какие то значения они стираются полностью. 
	{															// В случе успешного открытия функция вернет 0;
		fprintf(stderr, "Не удается открыть файл %s для вывода. \n", argv[1]);	// Вывод сообщения на монитор об ошибке файла. Данное сообщение в файл не запишется;
		exit(EXIT_FAILURE);													// Аварийоное завершение работы программы;
	}
	fwrite(numbers, sizeof(double), ARSIZE, iofile);			// Запись занчений 1000 пакетов по 8 байт в файл numbers, на который указывает указатель iofile;	
	fclose(iofile);												// Закрытие файла назначения, происходит запись оставшихся байтов в файл и освобождение буфера системных ресурсов (дескриптор файла) в операционной системе;
	if ((fopen_s(&iofile, argv[1], "rb")) != 0)					// Чтение значений в двоичном формате. Открытие файла file типа структуры FILE в режиме чтения с файла в двоичном формате. В случе успешного открытия функция вернет 0;
	{
		fprintf(stderr, "Не удается открыть файл %s для произвольного доступа. \n", argv[1]);	// Вывод сообщения на монитор об ошибке файла. Данное сообщение в файл не запишется;
		exit(EXIT_FAILURE);																		// Аварийоное завершение работы программы;
	}
	printf("Введите индекс в диапазоне 0-%d. \n", ARSIZE - 1);	// Чтение избранных элементов из файла. -1 т.к. отсчет элементов по индексу от 0 до 999, т.е. 1000 элементов;
	while (scanf_s("%d", &i) == 1 && i >= 0 && i < ARSIZE)		// Ввод значения (индекса). Вводимое значение должно быть равно или больше 0 и меньше размера массива (1000), иначе программа завершится;
	{
		pos = (long)i * sizeof(double);							// Вычисления шага в файле для вычисления позиции нужного значения;
		fseek(iofile, pos, SEEK_SET);							// Указатель iofile указывает на файл на диске, 3 аргумент говорит компилятору отсчитать количество байт, указанных во втором аргументе от начала файла;
		fread(&value, sizeof(double), 1, iofile);				// Происходит запись найденного элемента в переменную value;
		printf("По этому индексу находится значение %f. \n", value);
		printf("Введите следующий индекс (или значение за пределами диапазона для завершения): \n");
	}
	fclose(iofile);												// Закрытие файла, освобождение системных ресурсов;
	puts("Программа завершена");
*/


	// Задание 6:												
/*	int ch;
	char book[LEN];													
	while (1)
	{
		FILE* in = NULL, * out = NULL;
		int count = 0;
		puts("Введите имя файла (для выхода нажмите ввод): ");
		if ((fgets(book, sizeof(book), stdin)) == NULL || book[0] == '\n')
		{
			puts("Выход из программы.");
			return 0;
		}
		s_gets(book);
		if ((fopen_s(&in, book, "r")) != 0)								// 1 аргумент - адрес переменной-указателя in к типу структуре FILE, 2 - имя файла, с которым программа будет работать, 3 аргумент - это режим чтения файла. Если удалось прочитать успешо, функция fopen_s даст логический 0,
		{																// в противном случае выдаст 1 или другое значение отличное от 0, т.е. ошибка;
			fprintf(stderr, "Не удаетсяя открыть файл \"%s\"\n", book);
			exit(EXIT_FAILURE);
		}
		if (strlen(book) > LEN - 5)
			book[LEN - 5] = '\0';										// Если размер массива 100, то от 100 вычитает 5, итого 95. На 95 индексе записывается символ конца строки \0. Если имя файла больше 95, то имя обрезается, и чтобы поместился суффикс из 5 символов;
		strcat_s(book, LEN, ".red");									// Функция strcat_s - выполняет добавление текста 3 аргумента в конец массива name размером 2 аргумента;
		if ((fopen_s(&out, book, "w")) != 0)							// 1 аргумент - адрес переменной-указателя out к типу структуре FILE, 2 - имя файла, с которым программа будет работать, 3 аргумент - это режим записи файла. Если удалось прочитать успешо, функция fopen_s даст логический 0,
		{																// в противном случае выдаст 1 или другое значение отличное от 0, т.е. ошибка;
			fprintf(stderr, "Не удается создать выходной файл. \n");
			fclose(in);
			exit(3);
		}
		while ((ch = getc(in)) != EOF)                                  // Функция getc по адресу структуры in достает из файла символ за символом, пока не достигнет конца файла (EOF);
			if (count++ % 3 == 0)										// Счетчик count начинается с 0. Если остаток от деления на 3 равен 0 (шаги 0, 3, 6...), то символ пропускается через фильтр;
				putc(ch, out);											// Функция putc записывает этот символ в файл по адресу структуры out. В итоге запишутся 1-й, 4-й, 7-й символы и т.д;
		if (ferror(out))
			fprintf_s(stderr, "Ошибка записи файла %s \n", book);
		if (fclose(in) != 0 || fclose(out) != 0)                        // Освобождение памяти в куче, выделенной под структуры FILE. Если файлы не закрыть, произойдет утечка памяти (ресурсы останутся заблокированы системой); 
			fprintf(stderr, "Ошибка при закрытии файла. \n");
	}
	puts("Программа завершена.");
*/


	// Задание 7 (а):
/*	char text_1[BUFSIZE], text_2[BUFSIZE];
	char* ptr_1 = NULL, * ptr_2 = NULL;
	while (1)
	{
		FILE* file_1 = NULL, * file_2 = NULL;
		while (file_1 == NULL)
		{
			puts("Введите имя 1 файла (для выхода нажмите ввод): ");
			if (fgets(text_1, sizeof(text_1), stdin) == NULL || text_1[0] == '\n')
			{
				puts("Выход из программы.");
				return 0;
			}
			s_gets(text_1);

			if ((fopen_s(&file_1, text_1, "r")) != 0)
			{
				fprintf(stderr, "Невозможно открыть файл %s. \n", text_1);
				puts("Введите имя файла снова.");
			}
		}
		while (file_2 == NULL)
		{
			puts("Введите имя 2 файла (для выхода нажмите ввод): ");
			if (fgets(text_2, sizeof(text_2), stdin) == NULL || text_2[0] == '\n')
			{
				puts("Выход из программы.");
				fclose(file_1);
				return 0;
			}
			s_gets(text_2);
			if ((fopen_s(&file_2, text_2, "r")) != 0)
			{
				fprintf(stderr, "Невозможно открыть файл %s. \n", text_2);
				puts("Введите имя файла снова.");
			}
		}
		do
		{
			if (!feof(file_1))
			{
				ptr_1 = fgets(text_1, sizeof(text_1), file_1);
				if (ptr_1 != 0)
					fputs(text_1, stdout);
			}
			else
				ptr_1 = 0;
			if (!feof(file_2))
			{
				ptr_2 = fgets(text_2, sizeof(text_2), file_2);
				if (ptr_2 != 0)
					fputs(text_2, stdout);
			}
			else
				ptr_2 = 0;
				
		} while (ptr_1 != NULL || ptr_2 != NULL);
		if (fclose(file_1) != 0 || fclose(file_2) != 0)
			fprintf(stderr, "Ошибка при закрытии файлов. \n");
		puts("\n--- Файлы успешно выведены! ---\n");
	}
*/



	// Задание 7 (б):
/*	char text_1[BUFSIZE], text_2[BUFSIZE];
	char* ptr_1 = NULL, * ptr_2 = NULL;
	while (1)
	{
		FILE* file_1 = NULL, * file_2 = NULL;
		while (file_1 == NULL)
		{
			puts("Введите имя 1 файла (для выхода нажмите ввод): ");
			if (fgets(text_1, sizeof(text_1), stdin) == NULL || text_1[0] == '\n')
			{
				puts("Выход из программы.");
				return 0;
			}
			s_gets(text_1);

			if ((fopen_s(&file_1, text_1, "r")) != 0)
			{
				fprintf(stderr, "Невозможно открыть файл %s. \n", text_1);
				puts("Введите имя файла снова.");
			}
		}
		while (file_2 == NULL)
		{
			puts("Введите имя 2 файла (для выхода нажмите ввод): ");
			if (fgets(text_2, sizeof(text_2), stdin) == NULL || text_2[0] == '\n')
			{
				puts("Выход из программы.");
				fclose(file_1);
				return 0;
			}
			s_gets(text_2);
			if ((fopen_s(&file_2, text_2, "r")) != 0)
			{
				fprintf(stderr, "Невозможно открыть файл %s. \n", text_2);
				puts("Введите имя файла снова.");
			}
		}
		do
		{
			if (!feof(file_1))
			{
				ptr_1 = fgets(text_1, sizeof(text_1), file_1);
				s_gets(text_1);
				if (ptr_1 != 0)
					fputs(text_1, stdout);
			}
			else
				ptr_1 = 0;
				
			if (!feof(file_2))
			{
				ptr_2 = fgets(text_2, sizeof(text_2), file_2);
				if (ptr_2 != 0)
					fputs(text_2, stdout);
			}
			else
			{
				if (ptr_1 != 0)
					printf("\n");
				ptr_2 = 0;
			}

		} while (ptr_1 != NULL || ptr_2 != NULL);
		if (fclose(file_1) != 0 || fclose(file_2) != 0)
			fprintf(stderr, "Ошибка при закрытии файлов. \n");
		puts("\n--- Файлы успешно выведены! ---\n");
	}
*/



	// Задание 8:
/*	FILE* fsymbol;
	unsigned char target_ch;
	int ch, count = 0;
	if (argc < 2)
	{
		fprintf(stderr, "Использовать программу %s <символ> <файл>", argv[0]);
		exit(EXIT_FAILURE);
	}
	target_ch = argv[1][0];
	if (argc > 2)							// Если аргументов больше 2 (имя программы, символ и хотя бы 1 файл), истина;
	{
		for (int i = 2; i < argc; i++)
		{
			if ((fopen_s(&fsymbol, argv[i], "rb") != 0))
			{
				fprintf(stderr, "Неудается открыть файл %s. \n", argv[i]);
				exit(EXIT_FAILURE);
			}
			while ((ch = fgetc(fsymbol)) != EOF)
			{
				if (ch == target_ch)
					count++;
			}
			if (ferror(fsymbol))
				fprintf(stderr, "Ошибка чтения файла %s. \n", argv[i]);
			if ((fclose(fsymbol)) != 0)
				fprintf(stderr, "Ошибка закрытия файла %s. \n", argv[i]);
		}
	}

	while (1)
	{
		char name[BUFSIZE];
		puts("Введите имя файла (для выхода нажмите ввод): ");
		if ((fgets(name, sizeof(name), stdin)) == NULL || name[0] == '\n')
		{
			puts("Выход из программы. ");
			break;
		}
		s_gets(name);
		if ((fopen_s(&fsymbol, name, "rb")) != 0)
		{
			fprintf(stderr, "Нудается открыть файл %s. \n", name);
			puts("Введите имя файла снова.");
			continue;
		}
		while ((ch = fgetc(fsymbol)) != EOF)
			if (ch == target_ch)
				count++;
		if (ferror(fsymbol))
			fprintf(stderr, "Ошибка чтения файла %s. \n", name);
		if ((fclose(fsymbol)) != 0)
			fprintf(stderr, "Ошибка закрытия файла %s. \n", name);
	}
	printf("Всего символов %c в фалах было надено %d раз. \n", target_ch, count);
	puts("Программа завершена.");
*/


	// Задание 9: 
/*	FILE* fp;
	char words[MAX] = { 0 };
	int count = 0, temp_count;
	if ((fopen_s(&fp, "wordy.txt", "a+")) != 0)			
	{													
		fprintf(stdout, "Неудается открыть файл \"wordy.txt\".\n");	
		exit(EXIT_FAILURE);											
	}
	rewind(fp);
	while ((fscanf_s(fp, "%d %s", &count, words, (unsigned int)MAX) == 2))
	{
		;
	}
		
	temp_count = count;
	puts("Введите слова для добавления в файл; ");
	puts("Для завершения введите символ # в начале строки.");
	while ((fscanf_s(stdin, "%40s", words, (unsigned int)MAX) == 1) && (words[0] != '#'))
		fprintf(fp, "%d %s\n", ++temp_count, words);
	puts("Содержимое файла:");
	rewind(fp);												
	while ((fscanf_s(fp, "%d %s", &temp_count, words, (unsigned int)MAX) == 2))		
		printf("%d %s; \n", temp_count, words);
	puts("Готово!");
	if (ferror(fp))
		fprintf(stderr, "Ошибка чтения файла. \n");
	if (fclose(fp) != 0)								
		fprintf(stderr, "Ошибка при закрытии файла.\n");	
*/


	// Задание 10:
/*	FILE* fp;
	char name[BUFSIZE];
	int ch;
	long number;
	while (1)
	{
		puts("Введит имя файла (для выхода нажмите ввод): ");
		s_gets(name, BUFSIZE);
		if (name[0] == '\0')
			break;
		if ((fopen_s(&fp, name, "rb")) != 0)
		{
			fprintf(stderr, "Неудается открыть файл %s. \n", name);
			puts("Повторите снова.");
			continue;
		}

		while (puts("Выберете нужную строку или для чтения другого файла введите любой символ отличный от числа: "),
			(scanf_s("%ld", &number)) == 1 && number >= 0)
		{
			fseek(fp, number, SEEK_SET);
			while((ch = getc(fp)) && ch != '\n' && ch != EOF)
				putc(ch, stdout);
			puts("\n");
			
		}
		while ((getchar()) != '\n')
			continue;
		if (ferror(fp))
			fprintf(stderr, "Ошибка чтения файла. \n");
		if (fclose(fp) != 0)
			fprintf(stderr, "Ошибка при закрытии файла.\n");
		
	}
	puts("Программа завершена.");
*/


	// Еще вариант задания 10:
/*	FILE* fp;
	char name[BUFSIZE];
	long number;
	size_t bytes_read;
	char* ptr;
	while (1)
	{
		puts("Введит имя файла (для выхода нажмите ввод): ");
		s_gets(name, BUFSIZE);
		if (name[0] == '\0')
			break;
		if ((fopen_s(&fp, name, "rb")) != 0)
		{
			fprintf(stderr, "Неудается открыть файл %s. \n", name);
			puts("Повторите снова.");
			continue;
		}
		puts("Выберете нужную строку или для чтения другого файла введите любой символ отличный от числа: ");
		while ((scanf_s("%ld", &number)) == 1 && number >= 0)
		{
			char words[BUFSIZE] = { 0 };
			fseek(fp, number, SEEK_SET);
			bytes_read = fread(words, sizeof(char), BUFSIZE - 1, fp);
			if (bytes_read > 0)
			{
				words[bytes_read] = '\0';
				ptr = strchr(words, '\n');
				if (ptr)
					*ptr = '\0';
				puts(words);
			}	
			puts("Выберете нужную строку или для чтения другого файла введите любой символ отличный от числа: ");
		}
		while ((getchar()) != '\n')
			continue;
		if (ferror(fp))
			fprintf(stderr, "Ошибка чтения файла. \n");
		if (fclose(fp) != 0)
			fprintf(stderr, "Ошибка при закрытии файла.\n");

	}
	puts("Программа завершена.");
*/


	// Еще вариант задания 10:
/*	FILE* fp;
	char name[BUFSIZE];
	int ch;
	long number;
	while (1)
	{
		puts("Введит имя файла (для выхода нажмите ввод): ");
		s_gets(name, BUFSIZE);
		if (name[0] == '\0')
			break;
		if ((fopen_s(&fp, name, "rb")) != 0)
		{
			fprintf(stderr, "Неудается открыть файл %s. \n", name);
			puts("Повторите снова.");
			continue;
		}

		while (puts("Выберете нужную строку или для чтения другого файла введите любой символ отличный от числа: "),
			(scanf_s("%ld", &number)) == 1 && number >= 0)
		{
			char words[BUFSIZE] = { 0 };
			fseek(fp, number, SEEK_SET);
			if (fgets(words, BUFSIZE, fp) != NULL)
				puts(words);
			puts("\n");

		}
		while ((getchar()) != '\n')
			continue;
		if (ferror(fp))
			fprintf(stderr, "Ошибка чтения файла. \n");
		if (fclose(fp) != 0)
			fprintf(stderr, "Ошибка при закрытии файла.\n");

	}
	puts("Программа завершена.");
*/



	// Задание 11:
/*	FILE* ftekst;
	char string[BUFSIZE];
	int count = 0;
	if (argc != 3)
	{
		fprintf(stderr, "Ичпользовать программу %s <имя строки> <файл>. \n", argv[0]);
		exit(EXIT_FAILURE);
	}
	if ((fopen_s(&ftekst, argv[2], "r")) != 0)
	{
		fprintf(stderr, "Неудается открыть файл %s. \n", argv[2]);
		exit(EXIT_FAILURE);
	}
	while ((fgets(string, BUFSIZE, ftekst)) != NULL)
	{
		if ((strstr(string, argv[1])) != NULL)
		{
			fputs(string, stdout);
			count++;
		}
	}
	if (ferror(ftekst))
		fputs( "Ошибка чтения файла.", stderr);
	if (fclose(ftekst) != 0)
		fputs("Ошибка при закрытии файла.", stderr);
	printf("\nСовпало %d раз. \nПрограмма завершена.\n", count);
*/


	// Задача 12:
/*	FILE* fd, * fa;
	int pic[ROWS][COLS] = { 0 };
	char art[ROWS][COLS + 1] = { 0 };
	char trans[] = " .':~*=%#@";
	int r, c;
	if (argc != 3)
	{
		fprintf(stderr, "Использовать программу %s <файл> <файл>. \n", argv[0]);
		exit(EXIT_FAILURE);
	}
	if ((fopen_s(&fd, argv[1], "r")) != 0)
	{
		fprintf(stderr, "Невозможно открыть файл %s. \n", argv[1]);
		exit(EXIT_FAILURE);
	}
	if ((fopen_s(&fa, argv[2], "w")) != 0)
	{
		fprintf(stderr, "Невозможно открыть файл %s. \n", argv[2]);
		exit(EXIT_FAILURE);
	}
	puts("Исходные данные.\n");
	for (int r = 0; r < ROWS; r++)
	{
		for (int c = 0; c < COLS; c++)
		{
			fscanf_s(fd, "%d ", &pic[r][c]);
			printf("%d ", pic[r][c]);
		}
		printf("\n");
	}
	puts("\nПреобразованные данные. \n");
	for (r = 0; r < ROWS; r++)
	{
		for (c = 0; c < COLS; c++)
			art[r][c] = trans [pic[r][c]];
		art[r][COLS] = '\0';
		puts(art[r]);
		fputs(art[r], fa);
		fputs("\n", fa);
	}
	if (ferror(fd))
		fputs("Ошибка чтения файла.", stderr);
	if (fclose(fd) != 0)
		fputs("Ошибка при закрытии файла.", stderr);
	if (ferror(fa))
		fputs("Ошибка чтения файла.", stderr);
	if (fclose(fa) != 0)
		fputs("Ошибка при закрытии файла.", stderr);
	puts("\nПрограмма завершена");
*/

/* =========================================================================
   БЛОК ПРЕОБРАЗОВАНИЯ ЦИФР В ASCII-ГРАФИКУ, ВЫВОДА НА ЭКРАН И ЗАПИСИ В ФАЙЛ
   =========================================================================

   1. ВНЕШНИЙ ЦИКЛ (r):
	  Отвечает за вертикальный обход матрицы (строки от 0 до ROWS-1).
	  На каждой итерации полностью готовит, печатает и записывает один ряд.

	for (r = 0; r < ROWS; r++)
	{
		 2. ВНУТРЕННИЙ ЦИКЛ (c):
			  Отвечает за горизонтальный обход текущей строки (столбцы от 0 до COLS-1).

			  Строка преобразования:
			  Берем число из pic[r][c] (например, 5) и используем его как индекс
			  для строки-ключа trans. Символ под этим номером (звездочка '*')
			  записывается в art[r][c]. Это заменяет 10 тяжелых условий if-else.
		
		for (c = 0; c < COLS; c++)
			art[r][c] = trans[pic[r][c]];

		 3. ФОРМИРОВАНИЕ СТРОКИ СИ:
			  Выполняется строго ПОСЛЕ заполнения всех 30 символов ряда.
			  Ставим в 31-ю ячейку (индекс COLS) нулевой флаг '\0'.
			  Это превращает массив символов в официальную строку языка Си,
			  с которой теперь могут работать функции puts и fputs.
		
		art[r][COLS] = '\0';

		 4. ВЫВОД НА ЭКРАН:
			  Выводим всю готовую строку art[r] за один раз через puts.
			  Функция puts автоматически переносит курсор на экране на новую строку.
		
		puts(art[r]);

		 5. ЗАПИСЬ В ФАЙЛ:
			  fputs(art[r], fa) — копирует готовую строку в файл-результат.
			  fputs("\n", fa)    — принудительно переносит строку в самом файле,
								   иначе вся картинка склеится в одну длинную линию.
		
		fputs(art[r], fa);
		fputs("\n", fa);
	}
	 ИТОГ: За 20 полных оборотов цикла ряд за рядом отрисовывается и
			 сохраняется в файл цельная и красивая ASCII-картинка.
*/

/* =========================================================================
	ПОШАГОВЫЙ РАЗБОР СТРОКИ: art[r][c] = trans[ pic[r][c] ];
	=========================================================================

	В этой строке НЕТ "массива в массиве". Скобки [ [ ] ] выполняются по очереди,
	изнутри наружу. Цифра из файла сама работает как индекс для поиска символа.

	ШАГ 1: Компьютер вычисляет внутренние скобки справа от знака равно — pic[r][c].
		   Допустим, в текущей ячейке строки 'r' и столбца 'c' лежит число 5.
		   Выражение pic[r][c] превращается в чистую цифру 5.

	ШАГ 2: Эта цифра подставляется во внешние квадратные скобки: trans[5].
		   Компьютер понимает: "Мне нужно взять 5-й символ из строки trans".

	ШАГ 3: Компьютер идет в строку trans (" .':~*=%#@") и отсчитывает 5-й символ с нуля:
		   trans[0] = ' ' (пробел)
		   trans[1] = '.' (точка)
		   trans[2] = '\'' (апостроф)
		   trans[3] = ':' (двоеточие)
		   trans[4] = '~' (тильда)
		   trans[5] = '*' (звездочка) <-- НАШЛИ!

	ШАГ 4: Вся правая часть уравнения превращается в один готовый символ '*'.
		   Происходит обычное присваивание: art[r][c] = '*';
		   Звездочка записывается на склад символов под теми же координатами r и c.

	ИТОГ: Этот трюк называется "прямая адресация". Он заменяет 10 тяжелых проверок
		  if-else и заставляет процессор работать со скоростью мысли.
*/



	// Задание 13:
/*	FILE* fd, * fa;
	char trans[] = " .':~*=%#@";
	int r, c;
	if (argc != 3)
	{
		fprintf(stderr, "Использовать программу %s <файл> <файл>. \n", argv[0]);
		exit(EXIT_FAILURE);
	}
	if ((fopen_s(&fd, argv[1], "r")) != 0)
	{
		fprintf(stderr, "Невозможно открыть файл %s. \n", argv[1]);
		exit(EXIT_FAILURE);
	}
	if ((fopen_s(&fa, argv[2], "w")) != 0)
	{
		fprintf(stderr, "Невозможно открыть файл %s. \n", argv[2]);
		fclose(fd);
		exit(EXIT_FAILURE);
	}
	int** pic = (int**)calloc(ROWS, sizeof(int*));
	if (pic == NULL)
	{
		puts("Не удалось создать массив.");
		return 0;
	}
	puts("Исходные данные.\n");
	for (r = 0; r < ROWS; r++)
	{
		pic[r] = (int*)calloc(COLS, sizeof(int));
		if (pic[r] == NULL)
		{
			puts("Не удалось создать массив.");
			return 0;
		}
		for (c = 0; c < COLS; c++)
		{
			fscanf_s(fd, "%d ", &pic[r][c]);
			printf("%d ", pic[r][c]);
		}
		printf("\n");
	}
	puts("\nПреобразованные данные. \n");
	char** art = (char**)calloc(ROWS, sizeof(char*));
	if (art == NULL)
	{
		puts("Не удалось создать массив.");
		return 0;
	}
	for (r = 0; r < ROWS; r++)
	{
		art[r] = (char*)calloc((COLS + 1), sizeof(char));
		if (art[r] == NULL)
		{
			puts("Не удалось создать массив.");
			return 0;
		}
		for (c = 0; c < COLS; c++)
			art[r][c] = trans[pic[r][c]];
		art[r][COLS] = '\0';
		puts(art[r]);						// Функция выводит на экран текущую строку под номером r;
		fputs(art[r], fa);					// Запись в файл текущей строки;
		fputs("\n", fa);
	}
	for (r = 0; r < ROWS; r++)
	{
		free(pic[r]);						// Удаляем выделенную память под числа строки r;
		free(art[r]);						// Удаляем выделенную память под символы строки r;
	}
	free(pic);
	free(art);
	if (ferror(fd))
	fputs("Ошибка чтения файла.", stderr);
	if (fclose(fd) != 0)
	fputs("Ошибка при закрытии файла.", stderr);
	if (ferror(fa))
	fputs("Ошибка записи в выходной файл.", stderr);
	if (fclose(fa) != 0)
	fputs("Ошибка при закрытии файла.", stderr);a
	puts("\nПрограмма завершена"); 
*/

/*	 =========================================================================
		 ПОДРОБНЫЙ КОНСПЕКТ: КАК РАБОТАЕТ ДВУМЕРНЫЙ ДИНАМИЧЕСКИЙ МАССИВ В СИ
	 =========================================================================
	
	 ПОЧЕМУ МЫ ПИШЕМ int** pic?
	 В языке Си нет честных динамических двумерных массивов.
	 Мы создаем "массив массивов".
	 Представь это как комод: pic — это сам комод (базовый массив).
	 Внутри него лежат ящики (строки), а внутри каждого ящика — вещи (числа/столбцы).
	
	 =========================================================================

	 ШАГ 1: Создаем сам "комод" (массив указателей)
	 Мы говорим: "Выдели память под ROWS штук ящиков. Но пока не делай сами ящики,
	 просто подготовь ROWS мест (адресов) под них".
	 sizeof(int*) означает, что мы резервируем место под АДРЕСА будущих строк.
	int** pic = (int**)calloc(ROWS, sizeof(int*));

	 ШАГ 2: Проверяем, существует ли "комод"
	 Если Windows/Linux не смогли дать память, в pic запишется NULL (пустота).
	if(pic == NULL)
	{
		puts("Системе не хватило памяти, чтобы создать основу массива.");
		return 0; // Завершаем программу, дальше делать нечего
	}

	puts("Исходные данные.\n");

	 ШАГ 3: Запускаем цикл, чтобы создать каждый "ящик" (строку) по отдельности
	for (r = 0; r < ROWS; r++)
	{
		 ШАГ 4: Выделяем память под СТОЛБЦЫ для ТЕКУЩЕЙ строки под номером [r]
		 Мы берем r-ое место в нашем комоде (pic[r]) и создаем там реальный ящик,
		 в котором будет храниться ровно COLS целых чисел (типа int).
		 calloc не просто выделяет память, он сразу заполняет её нулями!
		pic[r] = (int*)calloc(COLS, sizeof(int));

		 ШАГ 5: Проверяем, создался ли этот конкретный "ящик" (строка)
		 Мы проверяем pic[r] (конкретную строку), а не весь pic!
		if (pic[r] == NULL)
		{
			puts("Ошибка: не удалось выделить память под одну из строк.");
			return 0;
		}

		 ШАГ 6: Внутренний цикл — заполняем созданный "ящик" вещами (числами)
		 Раз память под текущую строку pic[r] успешно создана, мы можем
		 поочередно перебрать все столбцы (от 0 до COLS - 1) в этой строке.
		for (c = 0; c < COLS; c++)
		{
			 fscanf_s лезет в файл fd, находит там число и кладет его в
			 строку r, в столбец c. Значок '&' нужен, чтобы указать точный адрес ячейки.
			fscanf_s(fd, "%d ", &pic[r][c]);

			 Печатаем это число на экран, чтобы увидеть, что всё прочиталось правильно
			printf("%d ", pic[r][c]);
		}

		 Как только заполнили ВСЕ столбцы в строке 'r', делаем перенос строки на экране,
		 чтобы следующая строка чисел напечаталась с новой строчки.
		printf("\n");
} 
*/


	// Задание 14:
/*	FILE* fd, * fa;
	int pic[ROWS][COLS] = { 0 };
	char art[ROWS][COLS + 1] = { 0 };
	char trans[] = " .':~*=%#@";
	int r, c;
	int temp[ROWS][COLS] = { 0 };
	if (argc != 3)
	{
		fprintf(stderr, "Использовать программу %s <файл> <файл>. \n", argv[0]);
		exit(EXIT_FAILURE);
	}
	if ((fopen_s(&fd, argv[1], "r")) != 0)
	{
		fprintf(stderr, "Невозможно открыть файл %s. \n", argv[1]);
		exit(EXIT_FAILURE);
	}
	if ((fopen_s(&fa, argv[2], "w")) != 0)
	{
		fprintf(stderr, "Невозможно открыть файл %s. \n", argv[2]);
		fclose(fd);
		exit(EXIT_FAILURE);
	}
	puts("Исходные данные.\n");
	for (r = 0; r < ROWS; r++)
	{
		for (c = 0; c < COLS; c++)
		{
			fscanf_s(fd, "%d ", &pic[r][c]);
			printf("%d ", pic[r][c]);
		}
		printf("\n");
	}
	for (r = 0; r < ROWS; r++)
	{
		for (c = 0; c < COLS; c++)
		{
			temp[r][c] = pic[r][c];
		}
	}
	for (r = 1; r < ROWS - 1; r++)
	{
		for (c = 1; c < COLS - 1; c++)
		{
			int curr = temp[r][c];
			int up = temp[r - 1][c];
			int down = temp[r + 1][c];
			int left = temp[r][c - 1];
			int right = temp[r][c + 1];
			if (abs(curr - up) > 1 && abs(curr - down) > 1 && abs(curr - left) > 1 && abs(curr - right) > 1)
				pic[r][c] = (int)round((up + down + left + right) / 4.0);
		}
	}


	puts("\nПреобразованные данные. \n");
	for (r = 0; r < ROWS; r++)
	{
		for (c = 0; c < COLS; c++)
			art[r][c] = trans[pic[r][c]];
		art[r][COLS] = '\0';
		puts(art[r]);						// Функция выводит на экран текущую строку под номером r
		fputs(art[r], fa);					// Запись в файл текущей строки;
		fputs("\n", fa);
	}
	if (ferror(fd))
		fputs("Ошибка чтения файла.", stderr);
	if (fclose(fd) != 0)
		fputs("Ошибка при закрытии файла.", stderr);
	if (ferror(fa))
		fputs("Ошибка записи в выходной файл.", stderr);
	if (fclose(fa) != 0)
		fputs("Ошибка при закрытии файла.", stderr);
	puts("\nПрограмма завершена");
*/

	/*======================================================================== =
		ПОДРОБНЫЙ КОНСПЕКТ АЛГОРИТМА СГЛАЖИВАНИЯ ИЗОБРАЖЕНИЯ(ЗАДАНИЕ 14)
		======================================================================== =

		ПОРЯДОК РАБОТЫ И ЛОГИКА :

	1. Копирование матрицы(Первый двойной цикл) :
		Программа полностью переписывает исходные числа из массива 'pic' в
		буферный массив 'temp'.Это необходимо, чтобы при расчете соседей
		для следующих пикселей мы смотрели на оригинальные «чистые» данные,
		а не на уже исправленные нами значения.

		2. Диапазон фильтрации(Второй двойной цикл) :
		Индексы начинаются с 1 и идут до ROWS - 1 / COLS - 1. Мы намеренно
		пропускаем первую и последнюю строку, а также первый и последний
		столбец(«рамку» картинки).У крайних пикселей нет соседей со всех
		четырех сторон, поэтому сглаживать их нельзя.

		3. Извлечение соседей :
	Для каждой ячейки из буфера 'temp' вытаскиваются значения пикселей
		сверху[r - 1][c], снизу[r + 1][c], слева[r][c - 1] и справа[r][c + 1].

		4. Условие Прата(Оператор if) :
		Функция abs() берет модуль разницы(игнорирует минус).Оператор&&
		связывает проверки : пиксель признается дефектом(«шумом») только в
		том случае, если разница между ним и КАЖДЫМ из 4 соседей больше 1.

		5. Расчет и округление :
	Если условие выполнено, значения 4 соседей складываются и делятся на
		дробное число 4.0 (чтобы не потерять точность).Функция round()
		округляет полученный результат до ближайшего целого, и новое значение
		записывается в исходный массив 'pic', заменяя битый пиксель.
		======================================================================== = */

	return 0;
}