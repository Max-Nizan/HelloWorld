// демонстрация типов в си. 
#include <stdio.h>
#include <inttypes.h>
#include <locale.h>

int main(void)
{
	setlocale(LC_ALL, "RU");
	int32_t m32; // 32бит переменная со знаком
	int a = 2147483647;
	m32 = 45933945;
	printf("предположим что m32 int: ");
	printf("m32=%d\n", m32);
	printf("теперь используем макрос: ");
	printf("m32=%" PRId32 "\n", m32);

	//
	printf("Целочисленно переполнение %d +1 %d  +2  %d\n", a, a + 1, a + 2);

    return 0;
}