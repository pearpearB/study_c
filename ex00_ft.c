#include <unistd.h>

int main()
{
	int i = '9';

	while(i >= '0')
	{
		write(1, &i, sizeof(int));
		i--;
	}

	write(1, "\n", 1);

	return 0;
}
