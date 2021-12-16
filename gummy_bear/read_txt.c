#define _CRT_SECURE_NO_WARNINGS  
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	char *buf;
	int size;

	FILE *fp = fopen("gummy_bear.txt", "r");

	fseek(fp, 0, SEEK_END);
	size = ftell(fp);

	buf = malloc(size + 1);
	memset(buf, 0, size + 1);	//메모리 초기화 

	fseek(fp, 0, SEEK_SET);

	while( !feof(fp)) {
	
		fread(buf, size + 1, 1, fp); //!1 이거하면 왜 2번 말하는 것인가
		//fgets(buf, size, fp);  //!2 이거는 마지막 소리 한번 더 지르는 것인가.
		printf("%s\n", buf);
	
	}

	fclose(fp);
	free(buf);

	return 0;


}
