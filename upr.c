#include<stdio.h>
/*
int main()
{
char temp[40] = "ahahah I am gummy";
int i;

while(temp[i] != '\0') {

if (temp[i] >= 'a'&&temp[i] <= 'z')
{
	temp[i] = temp[i] -32;
}
 i++;
}

printf("%s\n", temp);
return 0;
}
*/

char *upr(char *src)
{
	char *p = src;

	while(*p != 0){
		if (*p >= 'a' && *p <= 'z'){
			*p = *p -32;
		}
	p++;
	}
	return src;
}

int main()
{
	char temp[40] = "hahahaha I am Gummy";
	printf("%s", upr(temp));
	return 0;
}
