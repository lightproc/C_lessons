#include <stdio.h>

char getNumber (void)
{
	return 65;
}

void main (void)
{
	// printf имеет 2 маркера
	// %d - десятичные числа
	// %с - символьные знаки
	// \r\n - перевод на новую строку Windows
	// \n - перевод на новую строку в Unix

	printf("%c\r\n%d\r\n", getNumber(), getNumber()); // сколько маркеров, столько должно быть аргументов
	printf("%d");
	return;
}