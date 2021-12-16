#include <unistd.h>

void print_str(char* str)
{
	int len;
	
	while (str[len] != '\0') {
	len++;
	}	
	
	write(1, str, len+1);
}

int main(void)
{
	char *str1;
	char *str2;

	str1 = "Hello, this is great string!\n";
	str2 = "Me too!\n";
	print_str(str1);
	print_str(str2);
}
