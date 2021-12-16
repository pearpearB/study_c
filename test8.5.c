#include <stdio.h>

typedef struct  s_phonebook
{
        char *name;
        int age;
        char *number;
}t_phonebook;

int main()
{
        t_phonebook p[5];
    
    char str_na[5][20] = {0,};
    char str_nu[5][12] = {0,};
    
    int i = 0;

        while( i < 5 ){
         
            printf("%d번째 이름을 입력하세요: ", i+1);
            scanf("%s", str_na[i]);
            printf("%d번째 나이를 입력하세요: ", i+1);
            scanf("%d", &p[i].age);
            printf("%d번째 전화번호를 입력하세요: ", i+1);
            scanf("%s", str_nu[i]);

            p[i].name = str_na[i];
            p[i].number = str_nu[i];
        i++;
        }

        printf("첫번째 입력한 정보: %s, %d, %s\n", p[0].name, p[0].age, p[0].number);
        printf("두번째 입력한 정보: %s, %d, %s\n", p[1].name, p[1].age, p[1].number);
        printf("세번째 입력한 정보: %s, %d, %s\n", p[2].name, p[2].age, p[2].number);
        printf("네번째 입력한 정보: %s, %d, %s\n", p[3].name, p[3].age, p[3].number);
        printf("다섯번째 입력한 정보: %s, %d, %s\n", p[4].name, p[4].age, p[4].number);
        return 0;
}
