#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>
#include <ctype.h>
#include "Function.h"

char* s_gets(char* mass, int size)
{
	char* ret_val;									// Указатель на адрес начала массива;
	char* find;										// Указатель на адрес символа;
	ret_val = fgets(mass, size, stdin);				// Если ввели текст, то указателю запишется адрес текста;
	if (ret_val)									// Если есть адрес, то истина. Если текст не вводили, то ложь;
	{
		find = strchr(mass, '\n');					// Когда функция strchr найдет символ новой строки, то запишется адрес этого символа в указатель, где находится этот символ.
		if (find)									// Если размер массива вмещает все символы включая символ новой строки, то функция strchr найдет символ новой строки.								 
			*find = '\0';							// При разименовании указателя будет символ новой строки, который нашла функция strchr. Далее по указателю присвоится символ конца строки;
		else
			while ((getchar()) != '\n')				// Очистка буфера от лишних символов;
				continue;
	}
	return ret_val;									// Функция возвращает адрес начала строки (текста);
}


// Задание 1:
/*
int calculate(int i, const struct month arr[])
{
	int sum = 0;
	for(int j = 0; j <= i; j++)
	{
		sum += arr[j].day;
	}
	return sum;
}
*/

// Задание 2:
/*
struct calendar enter_data(struct calendar data)
{
	char text_data[30];
	int status;
	while (1)
	{
		puts("Введите дату в формате д м г (для выхода нажмите ввод):");
		if(s_gets(text_data, 30) == NULL)
			continue;
		status = sscanf_s(text_data, "%d %s %d", &data.day, data.month, LEN, &data.year);
		if(status == EOF)
			return data;
		else if(status < 3)
		{
			puts("Введите дату корректно.");
			continue;
		}
		else
			return data;
	}	
}

void ToLower(struct calendar* name_struct)
{
	int count = 0;
	while (name_struct->month[count] != '\0')
	{
		name_struct->month[count] = (char)tolower((unsigned char)name_struct->month[count]);
		count++;
	}
}

int sum_day(const struct calendar* name_struct_1, struct month* name_struct_2, int count)
{
	int total_day = 0;
	for (int i = 0; i < count; i++)
	{
		total_day += name_struct_2[i].days;
	}
	return total_day + name_struct_1->day;
}
*/




// Задание 3:
/*
int enter_book(struct book* name_library)
{
	int i = 0;
	printf("Введите название книги. \n");
	printf("Нажмите [enter] в начале строки чтобы закончить ввод. \n");
	while (i < MAXBKS && s_gets(name_library[i].title, MAXTITL) != NULL
		&& name_library[i].title[0] != '\0')
	{
		printf("Теперь введите ФИО автора. \n");
		s_gets(name_library[i].author, MAXAUTL);
		printf("Теперь введите цену. \n");
		scanf_s("%f", &name_library[i].value);
		while (getchar() != '\n')
			continue;
		i++;
		if (i < MAXBKS)
			printf("Введите название следующей книги. \n");
	}
	return i;
}

void print_library(const struct book* name_library, int n)
{
	if (n > 0)
	{
		int index;
		const struct book* spt[MAXBKS];
		const struct book* temp;
		printf("Каталог ваших книг по порядку ввода: \n");
		for (index = 0; index < n; index++)
			printf("%s авторства %s: $%.2f. \n", name_library[index].title, name_library[index].author, name_library[index].value);

		printf("Вывод списка книг по алфавиту: \n");
		for (index = 0; index < n; index++)
		{
			spt[index] = &name_library[index];						// Копирование адреса структуры в массиве в указатель массива структуры (копия);
		}
		for (int i = 0; i < n - 1; i++)
		{
			for (int j = i + 1; j < n; j++)
			{
				if (strcmp(spt[i]->title, spt[j]->title) > 0)		// Если символ по таблице ASCII стоит раньше, функция вернет результат меньще 0, если позже больше 0 (1 аргумент - 2 аргумент).
				{													// Если функция видит, что первые символы одинаковы, продалжает сверять следующие символы;
					temp = spt[i];									// Далее обмен местами адресов структур. Сами структуры в массиве не меняются местами;
					spt[i] = spt[j];
					spt[j] = temp;
				}
			}
		}
		for (int i = 0; i < n; i++)
			printf("%s авторства %s %f \n", spt[i]->title, spt[i]->author, spt[i]->value);

		printf("Вывод списка книг по возрастанию цены: \n");
		for (int i = 0; i < n - 1; i++)
		{
			for (int j = i + 1; j < n; j++)
			{
				if (spt[i]->value > spt[j]->value)		
				{													
					temp = spt[i];									
					spt[i] = spt[j];
					spt[j] = temp;
				}
			}
		}
		for (int i = 0; i < n; i++)
			printf("%s авторства %s %f \n", spt[i]->title, spt[i]->author, spt[i]->value);

	}
	else
		printf("Вообще нет книг? Плохо. \n");
}
*/

/*
// Еще вариант. Сортировка вставками, например для алфавита:
for (int i = 1; i < n; i++)
{
	const struct book* key = spt[i];								// Запоминаем текущую книгу;
	int j = i - 1;

	// Сдвигаем элементы, которые больше, чем key, на одну позицию вперед
	while (j >= 0 && strcmp(spt[j]->title, key->title) > 0)
	{
		spt[j + 1] = spt[j];
		j = j - 1;
	}
	spt[j + 1] = key;												// Ставим книгу на её законное место;
}

// Сортировка выбором, например, для цены:
for (int i = 0; i < n - 1; i++)
{
	int min_index = i;												// Предполагаем, что текущая книга самая дешевая;

	// Ищем, есть ли книга еще дешевле во всем оставшемся списке
	for (int j = i + 1; j < n; j++)
	{
		if (spt[j]->value < spt[min_index]->value)
		{
			min_index = j;											// Запоминаем индекс новой самой дешевой книги;
		}
	}

	// Делаем всего ОДИН обмен для каждой позиции (в отличие от пузырька)
	if (min_index != i)
	{
		temp = spt[i];
		spt[i] = spt[min_index];
		spt[min_index] = temp;
	}
}
*/



// Задание 4:
/*
void print_card(struct num_card author)
{	
	static int i = 1;
	if (author.patronymic[0] != '\0')
		printf("%d). %s, %s %c. -- %d. \n", i++, author.surname, author.name, author.patronymic[0], author.number);
	else
		printf("%d). %s, %s. -- %d. \n", i++, author.surname, author.name, author.number);
}

void print_list(struct num_card* author, int size)
{
	int i = 1;
	for (int count = 0; count < size; count++)
	{
		if (author[count].patronymic[0] != '\0')
			printf("%d). %s, %s %c. -- %d. \n", i++, author[count].surname, author[count].name, author[count].patronymic[0], author[count].number);
		else
			printf("%d). %s, %s. -- %d. \n", i++, author[count].surname, author[count].name, author[count].number);
	}
}
*/




// Задача 5:
/*
void enter_grades(struct student* str_book, int size)
{
	int count = 0;
	char surname[LEN];
	puts("Введите фамилию (для выхода нажмите ввод): ");
	puts("После заполнеия журнала нажмите ввод.");
	while (1)
	{
		bool found = false;
		if ((s_gets(surname, LEN)) == NULL)
		{
			puts("Ошибка.");
			break;
		}
		else if (surname[0] == '\0')
		{
			puts("Ввод закончен.");
			break;
		}
		else
		{
			for (count = 0; count < size; count++)
			{
				if ((strcmp(surname, str_book[count].fio.surname)) == 0)
				{
					for (int s = 0; s < SCORE; s++)
					{
						puts("Введите оценки:");
						if ((scanf_s("%f", &str_book[count].grade[s])) == 1)
							while (getchar() != '\n')
								continue;
					}
					found = true;
					break;
				}
			}
			if (!found)
			{
				puts("\nСтудент в списке не значится. Введите фамилию снова.");
			}
		}
		puts("\nВведите фамилию (для выхода нажмите ввод): ");		
	}
}

/*
void average_grades(float* str_grades, float* str_avr)
{
	*str_avr = 0;
	for (int i = 0; i < CSIZE; i++)
	{
		*str_avr = 0;
		for (int j = 0; j < SCORE; j++)
		{
			*str_avr += *str_grades;
			str_grades++;
		}
		*str_avr /= SCORE;
		str_grades = (float*)((char*) str_avr + sizeof(struct student) - (SCORE * sizeof(float)));
		str_avr = (float*)((char*) str_avr + sizeof(struct student));
	}
}
*/

// Продвинутый вариант:
/*
void calculate_averages(struct student* str_book, int size)
{
	for (int i = 0; i < size; i++) 
	{
		float sum = 0;
		for (int j = 0; j < SCORE; j++) 
		{
			sum += str_book[i].grade[j];									// Компилятор САМ считает сдвиги!
		}
		str_book[i].average = sum / SCORE;
	}
}
*/
/*
========================================================================================
КАК КОМПЬЮТЕР ВЫПОЛНЯЕТ ЭТУ СТРОКУ (ЧИТАЕМ СЛЁВА НАПРАВО ПО ШАГАМ ПРИОРЕТЕТА):
========================================================================================

Шаг 1: [str_avr]
	   Компьютер берет текущий адрес памяти, на который указывает str_avr.
	   Например, сейчас это адрес 0x1000 (где хранится средний балл Пушкина).

Шаг 2: [(char*) str_avr]
	   Компьютер временно меняет "линейку измерения" для этого адреса.
	   Поскольку тип char занимает ровно 1 байт, этот шаг переводит адрес
	   в байтовый режим. Теперь любой сдвиг "+ 1" означает "шагнуть на 1 байт".

Шаг 3: [sizeof(struct student)]
	   Компилятор вычисляет точный размер всей структуры student в байтах
	   (допустим, это число 80).

Шаг 4: [(SCORE * sizeof(float))]
	   Компьютер считает размер трех оценок текущего студента.
	   3 оценки умножить на 4 байта (размер float) = 12 байт.
	   Это те самые 12 байт, на которые указатель str_grades уже ушел вперед
	   внутри маленького цикла, пока суммировал оценки.

Шаг 5: [... + sizeof(struct student) - (SCORE * sizeof(float))]
	   Чистая математика внутри байтовой зоны: к адресу 0x1000 прибавляется 80 байт
	   и вычитается 12 байт. Итоговый чистый сдвиг равен +68 байт.
	   Указатель перелетает через остаток структуры Пушкина, пролетает сквозь
	   имена Достоевского и приземляется ТОЧНО на первую оценку Достоевского.

Шаг 6: [ (float*) ( ... ) ]
	   Байтовый полет окончен, мы стоим в нужной ячейке. Этот внешний оператор
	   возвращает адресу статус числового указателя. Он говорит компилятору:
	   "Всё, теперь с этого нового места снова читай данные как числа float".

Шаг 7: [str_grades = ... ]
	   Знак равенства записывает полученную точную координату в переменную
	   str_grades, чтобы на следующем круге цикла программа читала оценки
	   нового студента.
========================================================================================
*/
/*
void print_book(struct student* str_book)
{
	int count;
	printf("Средняя оценка студентов: \n");
	for (count = 0; count < CSIZE; count++)
	{
		printf("%s %s: \n", str_book[count].fio.surname, str_book[count].fio.name);
		for (int i = 0; i < SCORE; i++)
			printf("%.1f ", str_book[count].grade[i]);
		printf("\nСредняя оценка: %.2f. \n\n", str_book[count].average);
	}		
}

void print_grade(struct student* str_book, int size, int size_score)
{
	puts("Средняя оценка за курсы:");
	for (int i = 0; i < size_score; i++)
	{
		float sum_grade = 0.0f;
		for (int j = 0; j < size; j++)
		{
			sum_grade += str_book[j].grade[i];
		}
		sum_grade /= size;
		printf("%.1f ", sum_grade);
	}

	float sum_grade = 0.0f;
	puts("\n\nОбщая средняя оценка всех студентов:");
	for (int count = 0; count < size; count++)
		sum_grade += str_book[count].average;
	sum_grade /= size;
	printf("%.1f. \n", sum_grade);
}
*/



// Задание 6:
/*
FILE* fp;
void read_file(struct team* str_date, int size)
{
	// Чтение с файла:
	if ((fopen_s(&fp, "softball.txt", "r")) != 0)
	{
		fprintf(stderr, "Не удается открыть файл %s. \n", "softball.txt");
		exit(EXIT_FAILURE);
	}

	// Создание временных переменных для дальнейшей записи в массив структуры:
	int t_num;
	char t_name[LEN] = { 0 };
	char t_surname[LEN] = { 0 };
	int t_pas, t_kick, t_passage, t_run;

	// Заполнение массива струкутры:
	while (fscanf_s(fp, "%d %s %s %d %d %d %d",
							&t_num,
							t_surname, ((unsigned)LEN),
							t_name, ((unsigned)LEN),
							&t_pas, &t_kick, &t_passage, &t_run) == 7)
	{
		// Проверка номера игрока:
		if (str_date[t_num].is_active == 0)						// Если игрок еще не записан, то включается в список массива структур;
		{
			strcpy_s(str_date[t_num].fio.surname, LEN, t_surname);
			strcpy_s(str_date[t_num].fio.name, LEN, t_name);
			str_date[t_num].is_active = 1;

		}
		// Всегда происходит суммирование значений при условии если был в списке и не был:
		str_date[t_num].pas_in += t_pas;
		str_date[t_num].kick += t_kick;
		str_date[t_num].run_succes += t_run;
		str_date[t_num].passage += t_passage;
	}
	if(ferror(fp))
		fputs("Ошибка чтения файла softball.txt", stderr);
	if (fclose(fp) != 0)
		fputs("Не удается закрыть файл softball.txt", stderr);
}

void calc_aver_player(struct team* str_date, int size)
{
	for (int i = 0; i < size; i++)
	{

		if(str_date[i].is_active == 1)
			if (str_date[i].pas_in > 0)
				str_date[i].average = (float)str_date[i].kick / (float)str_date[i].pas_in;
			else
				str_date[i].average = 0.0f;
	}
}

void print_date_player(struct team* str_date, int size)
{
	printf("№ игрока  Фамилия     Имя   Прием мяча  Удары  Проходы  Пробежка  Ср.коэфф. \n");
	for (int i = 0; i < size; i++)
		if (str_date[i].is_active == 1)
			printf("%5d %10s %9s %7d %8d %7d %8d %11.3f \n\n", i, str_date[i].fio.surname, str_date[i].fio.name,
				str_date[i].pas_in, str_date[i].kick, str_date[i].passage, str_date[i].run_succes, str_date[i].average);
}

void print_date_team(struct team* str_date, int size)
{
	int total_pas_in = 0;
	int total_kick = 0;
	int total_passage = 0;
	int total_run_succes = 0;
	float total_average;
	for (int i = 0; i < size; i++)
	{
		if (str_date[i].is_active == 1)
		{
			total_pas_in += str_date[i].pas_in;
			total_kick += str_date[i].kick;
			total_passage += str_date[i].passage;
			total_run_succes += str_date[i].run_succes;
		}
	}
	total_average = (float)total_kick / (float)total_pas_in;
	printf("%25s \n", "Общая статистика:");
	printf("Прием мяча  Удары  Проходы  Пробежка  Ср.коэфф.\n");
	printf("%7d %8d %7d %8d %11.3f\n\n", total_pas_in, total_kick, total_passage, total_run_succes, total_average);
}
*/



// Задание 7:
/*
int read(struct book* str_library, int size)
{
	int count = 0;
	FILE* pbooks;																// Указатель на структуру типа FILE;
	int size_struct = sizeof(struct book);										// Размер всей структуры;
	if ((fopen_s(&pbooks, "book.txt", "r+b")) != 0)
	{
		fputs("Не удается открыть файл \"book.txt\"", stderr);
		exit(EXIT_FAILURE);
	}

	while (count < size && fread(&str_library[count], size_struct, 1, pbooks) != 0)
	{
		str_library[count].flag = 0;
		count++;
	}
	if (ferror(pbooks))
		fputs("Ошибка чтения файла \"book.txt\"", stderr);
	if (fclose(pbooks) != 0)
		fputs("Не удается закрыть файл \"book.txt\"", stderr);
	return count;
}

int choice_menu(void)
{
	int n;
	puts("Выберите режим работы с реестром:");
	printf("1. Чтение;\n2. Добавить книгу;\n3. Редактировать данные книги.\n"
		"4. Удалить книгу.\n5. Сохранить изменения и выйти.\n\n");
	while (1)
	{
		if (scanf_s("%d", &n) == 1 && (n >= 1 && n <= 5))
		{
			switch (n)
			{
				case 1: 
					puts("Чтение.");
					break;
				case 2:
					puts("Добавить книгу.");
					break;
				case 3:
					puts("Редактировать данные книги.");
					break;
				case 4:
					puts("Удалить книгу.");
					break;
				case 5:
					puts("Сохранить изменения и выйти");
					break;
			}
			while (getchar() != '\n')
				continue;
			break;
		}
		else
		{
			puts("Ошибка! Выберете от 1 до 5.");
			while (getchar() != '\n')
				continue;
		}
	}
	return n;
}

void show_library(struct book* str_library, int size_books)
{
	if (size_books == 0)
	{
		printf("Список книг пуст! Нечего показывать.\n\n");
		return;													// Мгновенный выход в меню;
	}
	printf("п/№  Название книги  Автор ФИО  Цена\n");
	for (int i = 0; i < size_books; i++)
	{	
		if(str_library[i].flag == 0 && str_library[i].title[0] != '\0')
			printf("%2d %5s %s %6.2f \n", i + 1, str_library[i].title, str_library[i].author, str_library[i].value);
	}
	if (size_books == 0)
		printf("Список книг пуст!\n");
}

int add_book(struct book* str_library, int size)
{
	int slot = -1;
	int count = 0;

	while (count < MAXBKS)
	{
		if (str_library[count].flag == 1 || str_library[count].title[0] == '\0')
		{
			slot = count;
			break;
		}
		count++;
	}

	if (slot == -1)
	{
		puts("Реестр книг заполнен. Необходимо освободить место.");
		return size;
	}

	puts("Введите название книги автора и цену:");
	s_gets(str_library[slot].title, MAXTITL);
	s_gets(str_library[slot].author, MAXAUTL);
	scanf_s("%f", &str_library[slot].value);
	printf("\n");

	while (getchar() != '\n')
		continue;

	str_library[slot].flag = 0;

	if (slot == size)
		return size + 1;
	else
		return size;
}


void edit_book(struct book* str_library, int size_books)
{
	if (size_books == 0)
	{
		printf("Реестр пуст! Нет книг для редактирования.\n\n");
		return;													// Мгновенный выход, до бесконечного цикла со scanf_s
	}
	// Выбераем какую книгу хотим отредактировать:
	int ID;														// Количество книг в реестре;
	int num;
	puts("Введите номер книги из реестра.");
	while (scanf_s("%d", &ID) == 1)
	{
		if (ID > 0 && ID <= size_books)
			break;
		else
			printf("Ошибка!. Выберите номер из реестра из %d книг.", size_books);
	}
	ID--;											// Сдвигаем номер реестра книг на 1. Если выбрать 1, программа примет за 2, т.к. индекс в массиве начинается с 0;

	puts("Выберите что отредактировать:");
	printf("1. Назавание книги.\n2. ФИО автора.\n3. Цена.\n4. Вернуться в главное меню.\n");
	while (1)
	{
		if (scanf_s("%d", &num) == 1)
		{
			while (getchar() != '\n')
				continue;
			switch (num)
			{
				case 1:
					puts("Назавание книги.");
					s_gets(str_library[ID].title, MAXTITL);
					break;
				case 2:
					puts("ФИО автора.");
					s_gets(str_library[ID].author, MAXAUTL);
					break;
				case 3:
					puts("Цена.");
					if (scanf_s("%f", &str_library[ID].value) == 1)
					{
						while (getchar() != '\n')
							continue;
						break;
					}
					else
					{
						puts("Ошибка! Выберете от 1 до 3.");
						break;
					}
				case 4:
					puts("Вернуться в главное меню.");
					return;		
			}
		}
		else
		{
			puts("Ошибка! Выберете от 1 до 3.");
			while (getchar() != '\n')
				continue;
		}
	}
}

void delite_book(struct book* str_library, int size_books)
{
	if (size_books == 0)
	{
		printf("Реестр пуст! Нет книг для удаления.\n\n");
		return; // Мгновенный выход, спасает от бесконечного цикла
	}
	int ID;
	puts("Выберите книгу на удаление с реестра:");
	while (1)
	{
		if (scanf_s("%d", &ID) == 1)									// Сначала СЛЕПО читаем число;
		{
			if (ID > 0 && ID <= size_books)								// Gроверяем, что число безопасное (внутри диапазона реестра);
			{
				if (str_library[ID - 1].flag == 0)						// Проврка флагов;
				{
					str_library[ID - 1].flag = 1;
					puts("Книга удалена.\n");
					return;
				}
				else
					puts("Книга уже удалена!\n");
			}
			else
				printf("Ошибка! Выберите номер от 1 до %d.\n\n", size_books);
		}
		while (getchar() != '\n')
			continue;
	}
}

void save_library(struct book* str_library, int size_books)
{
	FILE* pbooks;
	if (fopen_s(&pbooks, "book.txt", "wb") != 0)
	{
		fputs("Не удается открыть файл для сохранения.\n", stderr);
		return;
	}
	for (int i = 0; i < size_books; i++)
	{
		if (str_library[i].flag == 0)									// Записываем только существующие книги;
		{
			fwrite(&str_library[i], sizeof(struct book), 1, pbooks);
		}
	}
	if (ferror(pbooks))
		fputs("Ошибка записи в файл \"book.txt\"\n", stderr);
	if (fclose(pbooks) != 0)
		fputs("Не удается закрыть файл \"book.txt\"\n", stderr);
	else
		puts("Изменения успешно сохранены на диск.");
}
*/



// Задание 8:
/*
void read(struct AirCompany* str_fly, int size_place)
{
	FILE* fbooking;
	int size_struct = sizeof(struct AirCompany);
	if ((fopen_s(&fbooking, "booking.txt", "r+b")) != 0)
	{
		if ((fopen_s(&fbooking, "booking.txt", "w+b")) != 0)
		{
			fputs("Не удается открыть файл \"booking.txt\"", stderr);
			exit(EXIT_FAILURE);
		}
	}
	int count = 0;
	while (count < size_place && fread(&str_fly[count], size_struct, 1, fbooking) != 0)
	{
		str_fly[count].ID = count + 1;
		count++;
	}
	for (count; count < size_place; count++)
			str_fly[count].ID = count + 1;
	if (ferror(fbooking))
		fputs("Ошибка чтения файла \"booking.txt\"", stderr);
	if (fclose(fbooking) != 0)
		fputs("Не удается закрыть файл \"booking.txt\"", stderr);
}

char choice_menu(void)
{
	char seats;
	while (1)
	{
		puts("Выберите пункт меню:");
		printf("a) Количество свободных мест.\nb) Список свободных мест.\n"
			"c) Список забронированных мест.\nd) Забронировать место.\n"
			"e) Снять броню с места.\nf) Выйти из программы.\n\n");
		if (scanf_s(" %c", &seats, 1u) == 1 && (seats >= 'a' && seats <= 'f'))
		{
			switch (seats)
			{
				case 'a':
					puts("Количество свободных мест.");
					break;
				case 'b':
					puts("Список свободных мест.");
					break;
				case 'c':
					puts("Список забронированных мест.");
					break;
				case 'd':
					puts("Забронировать место.");
					break;
				case 'e':
					puts("Снять броню с места");
					break;
				case 'f':
					puts("Выйти из программы");
					break;
			}
			while (getchar() != '\n')
				continue;
			break;
		}
		else
		{
			puts("Ошибка! Выберете от a до f.");
			while (getchar() != '\n')
				continue;
		}
	}
	return seats;
}

void free_place(struct AirCompany* str_fly, int size_place)
{
	int free = 0;
	for (int count = 0; count < size_place; count++)
	{
		if (str_fly[count].flag_book == 0)						// Флаг 0 - свободно;
			free++;
	}
	printf("Свободных мест %d. \n\n", free);
}

void list_free_place(struct AirCompany* str_fly, int size_place)
{
	puts("Свободные места:");
	for (int pl = 0; pl < size_place; pl++)
	{
		if (str_fly[pl].flag_book == 0)
			printf("№%d ", pl + 1);
	}
	printf("\n\n");
}

void booking_place(struct AirCompany* str_fly, int size_place)
{
	struct AirCompany* spt[SIZE];
	struct AirCompany* temp;
	int count = 0;
	for (int i = 0; i < size_place; i++)
	{
		if (str_fly[i].flag_book == 0)									// Флаг 0 - место свободно;
			count++;
	}
	if (count == size_place)
	{
		puts("Все места свободны.");
		return;
	}
	puts("Забронированные места:");
	for (int i = 0; i < size_place; i++)
		spt[i] = &str_fly[i];
	for (int pl_1 = 0; pl_1 < size_place - 1; pl_1++)
	{
		int num = pl_1;
		for (int pl_2 = pl_1 + 1; pl_2 < size_place; pl_2++)
		{
			if (strcmp(spt[pl_2]->surname, spt[num]->surname) < 0)						// spt[pl_1]->surname - 1 буква фамилии, которя срванивается с другими фамилиямию  Если какая-нибудь буква других фамилий раньше стоит,
				num = pl_2;																// переменной num присваивается индекс этой фамилии;
		}
		if (num != pl_1)
		{
			temp = spt[pl_1];
			spt[pl_1] = spt[num];
			spt[num] = temp;
		}
	}
	printf("Место  Фамилия  Имя\n");
	for (int i = 0; i < size_place; i++)
		if (spt[i]->flag_book == 1)
			printf("%3d %8s %8s \n", spt[i]->ID, spt[i]->surname, spt[i]->name);
	printf("\n\n");
}

void booking(struct AirCompany* str_fly, int size_place)
{
	list_free_place(str_fly, size_place);
	int place;
	while (1)
	{
		puts("Выберите место (для выхода нажмите 0): ");
		if (scanf_s("%d", &place) == 1)
		{
			if (place == 0)
			{
				puts("Бронирование отменено.");
				return;
			}	
			if (place > 0 && place <= size_place)			// Проверка на корректный ввод места;
			{
				if (str_fly[place - 1].flag_book == 0)		// Проверка на свободное место;
				{
					str_fly[place - 1].ID = place;
					break;
				}
				else
				{
					puts("Место занято. Выберите другое место.");
				}
			}
			else
			{
				puts("Необхлдимо выбрать от 1 до 12!");
				continue;
			}
		}
		else
		{
			puts("Ошибка! Введите от 1 до 12.");
			while (getchar() != '\n')
				continue;
		}	
	}
	while (getchar() != '\n')								// Очистка символа \n;
		continue;

	if (s_gets(str_fly[place - 1].surname, FIO) != NULL)
	{
		if (str_fly[place - 1].surname[0] == '\0')
		{
			puts("Бронирование отменено.");
			return;
		}
	}
	else
		puts("Не удается забронировать место.");

	if (s_gets(str_fly[place - 1].name, FIO) != NULL)
	{
		if (str_fly[place - 1].name == '\0')
		{
			puts("Бронирование отменено.");
			str_fly[place - 1].surname[0] = '\0';
			return;
		}
	}
	else
		puts("Не удается забронировать место.");

	str_fly[place - 1].flag_book = 1;
	puts("Бронирование завершено.");
}

void booking_cancel(struct AirCompany* str_fly, int size_place)
{
	booking_place(str_fly, size_place);
	int place;
	while (1)
	{
		puts("Выберите место (для выхода нажмите 0): ");
		if (scanf_s("%d", &place) == 1)
		{
			if (place == 0)
			{
				puts("Отмена снятия бронирования.");
				return;
			}
			if (place > 0 && place <= size_place)			// Проверка на корректный ввод места;
			{
				if (str_fly[place - 1].flag_book == 1)		// Проверка на свободное место;
					break;
				else
					puts("Место свободно. Выберите другое место.");
			}
			else
			{
				puts("Необхлдимо выбрать от 1 до 12!");
				continue;
			}
		}
		else
		{
			puts("Ошибка! Введите от 1 до 12.");
			while (getchar() != '\n')
				continue;
		}
	}
	while (getchar() != '\n')								// Очистка символа \n;
		continue;

	str_fly[place - 1].surname[0] = '\0';
	str_fly[place - 1].name[0] = '\0';
	str_fly[place - 1].flag_book = 0;
	puts("Снятие бронирования завершено.");	
}

void exit_programm(struct AirCompany* str_fly, int size_place)
{
	FILE* pbooking;
	if (fopen_s(&pbooking, "booking.txt", "wb") != 0)
	{
		fputs("Не удается открыть файл \"booking.txt\"\n", stderr);
		return;
	}
	if (fwrite(str_fly, sizeof(struct AirCompany), size_place, pbooking) != size_place)
	{
		// Если записалось МЕНЬШЕ, чем 12 элементов, значит что-то пошло не так
		fputs("Ошибка при записи данных в файл \"booking.txt\"\n", stderr);
		if (ferror(pbooking))
			fputs("Ошибка записи в файл \"booking.txt\"\n", stderr);
		if (fclose(pbooking) != 0)															// Часть данных если что запишется;
			fputs("Не удается закрыть файл \"booking.txt\"\n", stderr);
		return; 
	}

	if (ferror(pbooking))
		fputs("Ошибка записи в файл \"booking.txt\"\n", stderr);
	if (fclose(pbooking) != 0)
		fputs("Не удается закрыть файл \"booking.txt\"\n", stderr);
	else
		puts("Изменения успешно сохранены на диск.");
}
*/




// Задача 9:
/*
void read(flyght str_fly, int planes)
{
	FILE* fbooking;
	int size_struct = sizeof(struct Flyght_Schedule);
	if ((fopen_s(&fbooking, "booking.txt", "r+b")) != 0)
	{
		if ((fopen_s(&fbooking, "booking.txt", "w+b")) != 0)
		{
			fputs("Не удается открыть файл \"booking.txt\"", stderr);
			exit(EXIT_FAILURE);
		}
		if (fclose(fbooking) != 0)
			fputs("Не удается закрыть файл \"booking.txt\"", stderr);
		puts("Создан новый пустой файл данных. Загружено стандартное расписание.");
		return;
	}
	int count = 0;
	while (count < planes && fread(&str_fly[count], size_struct, 1, fbooking) != 0)
		count++;
	if (ferror(fbooking))
		fputs("Ошибка чтения файла \"booking.txt\"", stderr);
	if (fclose(fbooking) != 0)
		fputs("Не удается закрыть файл \"booking.txt\"", stderr);
}

int choice_flight(flyght flight_array, int plane)
{
	int num;
	puts("Выберите номер рейса:");
	for (num = 0; num < plane; num++)
	{
		printf("%d %d\n", num + 1, flight_array[num].flyght_id);							// Список рейсов;
	}
	puts("0) Выход из программы");
	while (1)
	{
		if (scanf_s("%d", &num) == 1)
		{
			while (getchar() != '\n')
				continue;
			if (num >= 0 && num <= plane)
			{
				if (num == 0)															// Выход из программы;
				{
					puts("Выход из программы.");
					return -1;
				}	
				printf("Рейс %d \n", flight_array[num - 1].flyght_id);
				return num - 1;
			}
			else
				puts("Ошибка! Необходимо ввести от 0 до 4.");
		}
		else
		{
			puts("Ошибка! Введите корректные цифры.");
			while (getchar() != '\n')
				continue;
		}
	}
}

char choice_menu(int flight_id)
{
	char seats;
	while (1)
	{
		printf("Рейс %d:\n", flight_id);
		puts("Выберите пункт меню:");
		printf("a) Количество свободных мест.\nb) Список свободных мест.\n"
			"c) Список забронированных мест.\nd) Забронировать место.\n"
			"e) Снять броню с места.\nf) Вернуться в основное меню.\n\n");					// Переделать f
		if (scanf_s(" %c", &seats, 1u) == 1 && (seats >= 'a' && seats <= 'f'))
		{
			switch (seats)
			{
			case 'a':
				puts("Количество свободных мест.");
				break;
			case 'b':
				puts("Список свободных мест.");
				break;
			case 'c':
				puts("Список забронированных мест.");
				break;
			case 'd':
				puts("Забронировать место.");
				break;
			case 'e':
				puts("Снять броню с места");
				break;
			case 'f':
				puts("Вернуться в основное меню.");
				break;
			}
			while (getchar() != '\n')
				continue;
			break;
		}
		else
		{
			puts("Ошибка! Выберете от a до f.");
			while (getchar() != '\n')
				continue;
		}
	}
	return seats;
}

void free_place(struct AirCompany* str_fly, int size_place)
{
	int free = 0;
	for (int count = 0; count < size_place; count++)
	{
		if (str_fly[count].flag_book == 0)						// Флаг 0 - свободно;
			free++;
	}
	printf("Свободных мест %d. \n\n", free);
}

void list_free_place(struct AirCompany* str_fly, int size_place)
{
	puts("Свободные места:");
	for (int pl = 0; pl < size_place; pl++)
	{
		if (str_fly[pl].flag_book == 0)
			printf("№%d ", pl + 1);
	}
	printf("\n\n");
}

void booking_place(struct AirCompany* str_fly, int size_place)
{
	struct AirCompany* spt[SIZE];
	struct AirCompany* temp;
	int count = 0;

	// 1. Проверяем, есть ли вообще занятые места
	for (int i = 0; i < size_place; i++)
	{
		if (str_fly[i].flag_book == 0)									// Флаг 0 - место свободно;
			count++;
	}
	if (count == size_place)
	{
		puts("Все места свободны.");
		return;
	}

	puts("Забронированные места:");

	// 2. Заполняем массив указателей для сортировки
	for (int i = 0; i < size_place; i++)
		spt[i] = &str_fly[i];

	// 3. Твоя алфавитная сортировка выбором с проверкой однофамильцев
	for (int pl_1 = 0; pl_1 < size_place - 1; pl_1++)
	{
		int num = pl_1;
		for (int pl_2 = pl_1 + 1; pl_2 < size_place; pl_2++)
		{
			if (strcmp(spt[pl_2]->surname, spt[num]->surname) < 0 ||
				(strcmp(spt[pl_2]->surname, spt[num]->surname) == 0 &&
					strcmp(spt[pl_2]->name, spt[num]->name) < 0))
				num = pl_2;
		}
		if (num != pl_1)
		{
			temp = spt[pl_1];
			spt[pl_1] = spt[num];
			spt[num] = temp;
		}
	}

	printf("Место   Фамилия       Имя     Статус билета\n");
	for (int i = 0; i < size_place; i++)
	{
		if (spt[i]->flag_book == 1)
		{
			// Печатаем номер кресла, фамилию и имя
			printf("%5d %9s %9s    ", spt[i]->ID, spt[i]->surname, spt[i]->name);

			// Проверяем флаг подтверждения из ТЗ задачи №9
			if (spt[i]->flag_confirm == 1)
				puts("[Подтверждено]");
			else
				puts("[Забронировано]");
		}
	}
	printf("\n\n");
}

void booking(struct AirCompany* str_fly, int size_place)
{
	list_free_place(str_fly, size_place);
	int place;
	while (1)
	{
		puts("Выберите место (для выхода нажмите 0): ");
		if (scanf_s("%d", &place) == 1)
		{
			if (place == 0)
			{
				puts("Бронирование отменено.");
				return;
			}
			if (place > 0 && place <= size_place)			// Проверка на корректный ввод места;
			{
				if (str_fly[place - 1].flag_book == '\0')	// Проверка на свободное место;
					break;
				else
				{
					puts("Место занято. Выберите другое место.");
				}
			}
			else
			{
				puts("Необхлдимо выбрать от 1 до 12!");
				continue;
			}
		}
		else
		{
			puts("Ошибка! Введите от 1 до 12.");
			while (getchar() != '\n')
				continue;
		}
	}
	while (getchar() != '\n')								// Очистка символа \n;
		continue;

	if (s_gets(str_fly[place - 1].surname, FIO) != NULL)
	{
		if (str_fly[place - 1].surname[0] == '\0')
		{
			puts("Бронирование отменено.");
			return;
		}
	}
	else
		puts("Не удается забронировать место.");

	if (s_gets(str_fly[place - 1].name, FIO) != NULL)
	{
		if (str_fly[place - 1].name[0] == '\0')
		{
			puts("Бронирование отменено.");
			str_fly[place - 1].surname[0] = '\0';
			return;
		}
	}
	else
		puts("Не удается забронировать место.");

	char ch;
	while(1)
	{
		puts("Желаете подтвердить бронирование места? (Y - да, N - нет)");	// Подтверждение брони;
		if (scanf_s(" %c", &ch, 1u) == 1)
		{
			while (getchar() != '\n')										// 1 символ считается, а еследующие, случайно введенные символы уберет функция, буфер будет пустой;
				continue;
			if (ch == 'y')
			{
				str_fly[place - 1].flag_confirm = 1;
				puts("Место успешно забронировано и подтверждено.");
				break;
			}
			else if (ch == 'n')
			{
				str_fly[place - 1].flag_confirm = 0;
				puts("Место забронировано, статус: ожидает подтверждения.");
				break;
			}
			else
				puts("Ошибка! Введите Y или N.");
		}
		else
		{
			puts("Ошибка! Введите Y или N.");
			while (getchar() != '\n')
				continue;
		}
	}
	str_fly[place - 1].ID = place;
	str_fly[place - 1].flag_book = 1;
}

void booking_cancel(struct AirCompany* str_fly, int size_place)
{
	booking_place(str_fly, size_place);
	int place;
	while (1)
	{
		puts("Выберите место (для выхода нажмите 0): ");
		if (scanf_s("%d", &place) == 1)
		{
			if (place == 0)
			{
				puts("Отмена снятия бронирования.");
				return;
			}
			if (place > 0 && place <= size_place)			// Проверка на корректный ввод места;
			{
				if (str_fly[place - 1].flag_book == 1)		// Проверка на свободное место;
					break;
				else
					puts("Место свободно. Выберите другое место.");
			}
			else
			{
				puts("Необхлдимо выбрать от 1 до 12!");
				continue;
			}
		}
		else
		{
			puts("Ошибка! Введите от 1 до 12.");
			while (getchar() != '\n')
				continue;
		}
	}
	while (getchar() != '\n')								// Очистка символа \n;
		continue;

	str_fly[place - 1].surname[0] = '\0';
	str_fly[place - 1].name[0] = '\0';
	str_fly[place - 1].flag_book = 0;
	str_fly[place - 1].flag_confirm = 0;
	puts("Снятие бронирования завершено.");
}

void exit_flight(flyght str_fly, int planes)
{
	FILE* pbooking;
	if (fopen_s(&pbooking, "booking.txt", "wb") != 0)
	{
		fputs("Не удается открыть файл \"booking.txt\"\n", stderr);
		return;
	}
	if (fwrite(str_fly, sizeof(struct Flyght_Schedule), planes, pbooking) != planes)
	{
		// Если записалось МЕНЬШЕ, чем 12 элементов, значит что-то пошло не так
		fputs("Ошибка при записи данных в файл \"booking.txt\"\n", stderr);
		if (ferror(pbooking))
			fputs("Ошибка записи в файл \"booking.txt\"\n", stderr);
		if (fclose(pbooking) != 0)															// Часть данных если что запишется;
			fputs("Не удается закрыть файл \"booking.txt\"\n", stderr);
		return;
	}

	if (ferror(pbooking))
		fputs("Ошибка записи в файл \"booking.txt\"\n", stderr);
	if (fclose(pbooking) != 0)
		fputs("Не удается закрыть файл \"booking.txt\"\n", stderr);
	else
		puts("Изменения успешно сохранены на диск.");
}
*/



// Задача 11:
/*
void filling(double* mass_source, int size)
{
	for (int i = 0; i < size; i++)
		mass_source[i] = i + 1;
}

void transform(const double* source, double* target, int size, Funct_Math func)	// Создание функции, которая принимает 4 аргумента, 4 аргумент Funct_Math - псевдоним, который может принимать функцию конструктивом как double square(double x).
																				// Смотря что передали в функции main. При вызове функции transform(), подставляется функция, например square()
																				// Funct_Math func - указатель на типовую функцию;
{
	for (int i = 0; i < size; i++)
		target[i] = func(source[i]);											// При каждой итерации вызывается функция func(), которая принимает элемент массива source[i], данная функция имеет тип "double (*Funct_Math)(double)", вместо *Funct_Math подставляется func().
																				// Эта функция возвращает значение типа double и присваивает это значение элементу массива target[i];
}

double square(double x)
{
	return (x * x);
}

double triple(double x)
{
	return (x * 3);
}
*/

