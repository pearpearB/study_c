#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct s_phinebook {
	char* name;
	int age;
}t_phonebook;

t_phonebook set_struct(char *name, int age)
{
	t_phonebook pa;
	pa.name = name;
	pa.age = age;

	int len =0;
	while(name[len] != 0){
	len++;
	}
	pa.name = malloc(sizeof(char)*len+1);
	strcpy(pa.name,name);	
	free(pa.name);
	return (pa);
}

/*
int main(void)
{
	t_phonebook pb;

	pb = set_struct("name", 42);
	printf("pb.name: %s\npb.age: %d", pb.name, pb.age);	
}	*/

int main(void)
{
	t_phonebook *pb_ptr;
	pb_ptr = malloc(sizeof(set_struct));	
	printf("<HINT> struct pointer size: %lu byte\n", sizeof(pb_ptr));
	*pb_ptr = set_struct("name", 42); //8 != 16이기때문에

	free(pb_ptr);
}

