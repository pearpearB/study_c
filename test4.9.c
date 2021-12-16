#include <stdio.h>

int simple_atoi(char *str)
{
    int len = 0;
    int data = 0;
    int j = 0;
    int ten = 1;
    int i = 0;
    
            while( str[len] != '\0'){
                    len++;
            }
            
            while( j<len-1 ){
                ten = ten*10;
                j++;
            }
            while( i<len ){
                data = data + ((str[i] - '0')*ten);
                ten /= 10;
                i++;
            }


    return data;

}

int main(void)
{

        printf("1: %d\n", simple_atoi("0"));
        printf("2: %d\n", simple_atoi("123"));
        printf("3: %d\n", simple_atoi("6000"));
        printf("4: %d\n", simple_atoi("0025"));

}

