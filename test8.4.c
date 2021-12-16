#include <stdio.h>

typedef struct	s_phonebook
{
	char *name;
	int age;
	char *number;
}t_phonebook;

int main()
{
	t_phonebook p[5];

	int i = 0;

	while( i < 5 ){

	p[i].name = "42seoul";
	p[i].age = 42; 
	p[i].number = "01055550000";
	i++;	
	}

	printf("%s, %d, %s", p[3].name, p[3].age, p[3].number);
	return 0;
}
