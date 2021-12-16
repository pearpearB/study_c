#include <stdio.h>
#include <stdlib.h>

typedef struct  s_phonebook
{
        char *name;
        int age;
        char *number;
}t_phonebook;

int main()
{
    t_phonebook *p;
    p = malloc(sizeof(struct s_phonebook));
   
    int i = 0;
    int j = 0;
    int max = i; //실수방지
    char Yes;
    
    while(1){


        printf("전화번호부 사용하기 1. 입력(y) 2. 검색(s) 3. 나가기(e)\n");
        scanf("%c", &Yes);
        
        if(Yes == 'e') break;
    
    switch(Yes)
    {
        case 'y':
            p[i].name = malloc(sizeof(char)*20);
            p[i].number = malloc(sizeof(char)*12);
            printf("%d번째 이름을 입력하세요: ", i+1);
            scanf("%s", p[i].name);
            printf("%d번째 나이를 입력하세요: ", i+1);
            scanf("%d", &p[i].age);
            printf("%d번째 전화번호를 입력하세요: ", i+1);
            scanf("%s", p[i].number);
            i++;
            break;
        
        case 's':
            printf("몇 번째 입력한 정보가 궁금하신가요?");
            scanf("%d", &j);
            printf("%d번째 입력한 이름: %s, 나이: %d, 전화번호: %s\n", j, p[j-1].name, p[j-1].age, p[j-1].number);
            break;

        default:
            printf("다시 입력해주세요.\n");
            break;
    }
        
        getchar();
    }

    while( i < max ){       !
        free(p[i].name);
        free(p[i].number);
        i--;
    }

        free(p);
        return 0;
}

