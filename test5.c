#include <stdio.h>
#include <stdlib.h>

int my_strlen(const char* str)
{
        int i = 0;
        while (str[i] != '\0'){
        i++;
        }
        return i;
}


char* my_strcpy(const char *str)
{
        char* ret;
        int strlen;

        ret = NULL;
        strlen = my_strlen(str);
        ret = (char *)malloc(sizeof(char) * (strlen + 1));

        int j=0;
        while (str[j] != '\0'){
	ret[j] = str[j];
	j++; 
        }
        return(ret);
}

int main()
{
        char* str_ptr = my_strcpy("Hello");
        printf("str: %s\n", str_ptr);
        free(str_ptr);

}
