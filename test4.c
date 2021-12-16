#include <stdio.h>

int my_strlen(const char* str)
{
	int i = 0;
	while (str[i] != '\0'){
	i++;
	}
	return i;
}

int main()
{
	int strlen;

	strlen = my_strlen("string");

	printf("strlen is %d\n", strlen);
}
