#include <stdio.h>
#define SIZE 4
// ubuntu

void showArrayAddresses(float array[])
{
	printf("\n[*] Array Addresses: \n");

	printf("0: %p\n", &array[0]);
	printf("1: %p\n", &array[1]);
	printf("2: %p\n", &array[2]);
	printf("3: %p\n", &array[3]);
	return;
}

int main(void)
{
	float prices[SIZE] = {1000.0, 2000.0, 3000.0, 4000.0};
	
	printf("\n[*] Index Access: \n");
	// prices - имя массива. Имя массива - это его адрес.
	// Получаем доступ к элементу массива по его индексу, который
	// указываем в квадратных скобках.
	printf("0: %.2f\n", prices[0]);
	printf("1: %.2f\n", prices[1]);
	printf("2: %.2f\n", prices[2]);
	printf("3: %.2f\n", prices[3]);

	printf("\n");

	// pointer access - доступ по указателю.
	// указатель *prices имеет адрес нулевого элемента массива
	printf("%.2f\n", *prices);

	// здесь мы обращаемся к нулевому элементу массива и к его значению
	// прибавляем 1, т.к. оператор * имеет больший приоритет.
	printf("%.2f\n", *prices + 1);

	printf("\n[*] Pointer Access: \n");
	/* в данном случае мы обращаемся по адресу к нулевому элементу массива
	и сдвигаемся на размер типа, одну единицу памяти, которая соответствует 
	типу данных массива, т.е. до следующего элемента в массиве. 
	В данном массиве это float. */
	printf("%.2f\n", *(prices + 1));
	printf("%.2f\n", *(prices + 2));

	// size_t - специальный беззнаковый тип, который позволяет, например,
	// вывести значение памяти для какого либо типа:
	size_t floatSize = sizeof(float);
	size_t charSize = sizeof(char);
	size_t intSize = sizeof(int);

	// марке %zu используется, чтобы вывести размер в байтах.
	printf("\nFloat type size: %zu bytes\n", floatSize);
	printf("Char type size: %zu bytes\n", charSize);
	printf("Int type size: %zu bytes\n", intSize);

	// Если мы выводим размер типа, то имя типа указываем в круглых скобках.
	// Если это имя структуры, массива или указателя, то не обязательно
	// указывать круглые скобки.
	printf("\nArray Prices size: %zu bytes\n", sizeof prices);

	showArrayAddresses(prices);

	return 0;
}