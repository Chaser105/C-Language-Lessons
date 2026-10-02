#include <stdio.h>
#include <stdlib.h>
#include <string.h>


//	Задание 1, 2, 3, 6, 7, 8:
/*
char* s_gets(char* mass)
{
	char* find;
	int ch;
	find = strchr(mass, '\n');
	if (find)
		*find = '\0';
	else
		while ((ch = getchar()) != '\n' && ch != EOF)
			continue;
	return mass;
}
*/

// Задание 10:
/*
char* s_gets(char* mass, int size)
{
    char* ret_val;
    char* find;

    ret_val = fgets(mass, size, stdin);            // Читаем строку прямо здесь! [1]
    if (ret_val)
    {
        find = strchr(mass, '\n');
            if (find)
                *find = '\0';
            else
                while (getchar() != '\n')
                    continue;
    }
    return ret_val;
}
*/
