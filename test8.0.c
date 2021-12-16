#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct s_phinebook {
	char* name;
	int age;
}t_phonebook;

int main()
{
	t_phonebook p1;
	char name[] = "42seoul";
	p1.name = malloc(sizeof(char)*(strlen(name)+1));

	strcpy(p1.name, name);
	p1.age = 42;

	printf("이름: %s\n", p1.name);
	printf("나이: %d\n", p1.age);

	free(p1.name);
	return 0;
}
