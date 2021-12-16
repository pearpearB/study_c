#include <unistd.h>
#include <stdlib.h>

void simple_putnbr(unsigned int num)
{
        int count = 0;
        unsigned int nuum = num;

        while( nuum != 0 ){
        nuum /= 10;
        count++;
        }
    //printf("%d\n", count);
        int len = count;
        char *tmp;
        tmp = malloc(sizeof(char)*(count+1));
    //printf("%d\n", num);
        
	tmp[count+1] = '\n';
	if( num == 0 )
        {
                tmp[len] = '0';
    //printf("haha\n");//
        }
        else
        {
    //printf("hoho\n");//
            while( num != 0){

                tmp[len-1] = (num % 10) +48;
                num /= 10;
                len--;
            }
        }

    write(1, tmp, count+2);
    free(tmp);
}

int main(void)
{
        simple_putnbr(0);
        simple_putnbr(4321);
        simple_putnbr(70000);
        return (0);
}

