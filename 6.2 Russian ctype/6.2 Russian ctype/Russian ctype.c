#include <stdio.h>
#include <ctype.h>			// Подключение библиотек для вывода символьных значений;
#include <locale.h>
#include <Windows.h>

int main(void)
{
	setlocale(LC_ALL, "RUS");
	setlocale(LC_NUMERIC, "C");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	char ch;

	printf("Дайте мне букву алфавита, и я укажу вам ");
	printf("название животного, \nначинающееся с этой буквы. \n");
	printf("Введите букву или #  для завершения. \n");
	while ((ch = getchar()) != '#')
	{
		if ('\n' == ch)
			continue;
		if (islower((unsigned char)ch))		// Только строчные буквы. Для кириллицы необходимо прописать "if (islower((unsigned char)ch))";
			switch (ch)
			{
			case 'а':
				printf("архар, дикий горный азиатский баран. \n");
				break;
			case 'б':
				printf("бабирусса, дикая малайская свинья. \n");
				break;
			case 'к':
				printf("коати, носуха обыкновенная. \n");
				break;
			case 'в':
				printf("выхухоль, водоплавающее существо. \n");
				break;
			case 'е':
				printf("ехидна, игольчатый муравей. \n");
				break;
			case 'р':
				printf("рыболов, светло-коричневая куница. \n");
				break;
			default:
				printf("Вопрос озадачил! \n");
			}
		else
			printf("Распознаются только строчные буквы. \n");
		while (getchar() != '\n')
			continue;
		printf("Введите следующую букву или # для завершения. \n");
	}
	printf("До свиданья.\n");
}

// "if (islower((unsigned char)ch))" данная контрукция работает с isalpha, isdigit, isalnum, islower, isupper, isspace, isblank, isgraph, isprint, iscntrl, ispunct, isxdigit, tolower, toupper;