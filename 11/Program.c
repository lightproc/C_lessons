#include <stdio.h>

// short, short int - тип данных с диапазоном 16 бит - -32 768 ... 32 767
// unsigned short - 0 ... 65 535
// signed short - -32 768 ... 32 767
// integer - целое число
// The 16-bit short int data type can hold integer values
// in the range of -32,768 to 32,767

// маркер %i - integer
// маркер %s - string (строка)
// маркеру можно задавать ширину поля.

// Что такое маркеры???

void main (void)
{
	unsigned short firstValue = 30000;
	unsigned short secondValue = 20000;
	signed short thirdValue = -30000;

	printf("\r\n");

	// сначала шаблон вывода, а потом передаваемые аргументы;
	// сколько маркеров в шаблоне, столько же передаваемых аргументов попорядку.
	// ширину поля можно задать так: %25s - 25 символов для строки
	// по умолчанию выравнивание по правому краю
	// знак '-' устанавливаем выравнивание по левому краю: %-25s
	printf("%-15s  %i \r\n", "First Value:", firstValue);
	printf("%-15s  %i \r\n", "Second Value:", secondValue);
	printf("%-15s %i \r\n", "Third Value:", thirdValue);

	printf("\r\n");

	printf("%15s  %i \r\n", "First Value:", firstValue);
	printf("%15s  %i \r\n", "Second Value:", secondValue);
	printf("%15s %i \r\n", "Third Value:", thirdValue);
	return;
}