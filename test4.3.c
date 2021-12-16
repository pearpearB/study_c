#include <unistd.h>
#include <stdlib.h>

char *ret;
int len;
void print_str(char* str)
{
	int len = 0;

	while (str[len] != '\0') {
	len++;
	}	

	str[len+1] = '\n';
	write(1, str, len+2);
}

char *to_uppercase(char *src)
{
	int i = 0;
	
	ret = malloc(sizeof(char)*(len +1));
	
	while( src[i] != '\0' ) {
		if ( src[i] >= 'a' && src[i] <= 'z')
		{	
			ret[i] = src[i] - 'a' + 'A';
		}
		else
		{
			ret[i] = src[i];
		}		
	i++;
	}
	
	return (ret);

}

int main(void)
{
	print_str(to_uppercase("simple STR"));
	print_str(to_uppercase("i HatE SuMmer..."));
	print_str(to_uppercase("me 2"));
	free(ret);
}
