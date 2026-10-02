void week(void)										// Функция выводит сообщение на монитор о количестве неделей в году;
{
	int s;
	s = 52;

	printf("В году %d недели. \n\n", s);

	return 0;
}

void text(void)										// Функция математической операции по вычислению мощности;
{
	printf("В бытовой розетке 220 В.");
	printf("Чайник мощностью 2 кВт.\n");
	printf("Чему равен ток?. \nЕсли регулятор чайника настроен на пол мощности?.\n");
	printf("Ток равен I = 4,54 A.\nСогласно /n формуле I = W/V. \n");		// Обратная наклонная черта "/" (слеш) выведется на экран, а также символ "n";

	int half_power = 2000/2;
	int voltage = 220;
	int current = half_power / voltage;

	printf("%d / %d = %d. \n\n", half_power, voltage, half_power / voltage);
}

void text_1(void)
{
	int words = 3020;
	int lines = 350;

	printf("Текст содержал %d слов и %d строк. \n\n", words, lines);

	return 0;
}