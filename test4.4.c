#include <stdio.h>

int count_digit(unsigned int num)
{
	int count = 0;
        
	if (num == 0){
	        count = 1;
        }
	else
	{
		while (num != 0){
		num /= 10;
		count++;
		}	
	}
	return (count);
}

int main(void)
{
	printf("%d\n", count_digit(0));
	printf("%d\n", count_digit(42));
	printf("%d\n", count_digit(42424242));
	printf("%d\n", count_digit(2147483647)); //INT_MAX
	//count_digit(0003); -> 이런 경우는 고려하지 마세요.
}
