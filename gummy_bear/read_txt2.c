
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

	while( fgets(buf, size, fp) != NULL) {
	

		printf("%s\n", buf);
	
	}

	fclose(fp);
	free(buf);

	return 0;


}
