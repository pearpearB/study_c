#define _CRT_SECURE_NO_WARNINGS  
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int filecopy(const char* aa, const char* bb);

int main(){

	int cc = filecopy("gummy_bear.txt", "gummy_bear_copy.txt");

	if ( cc == 0 )
	{
		printf("완료\n");
	}

	return 0;

}

int filecopy(const char* aa, const char* bb) {

	char *buf;
        int size;       
	
	FILE *fp = fopen(aa, "rb");
        FILE *fpp = fopen(bb, "wb");

	fseek(fp, 0, SEEK_END);
	size = ftell(fp);

	buf = malloc(size + 1);
	memset(buf, 0, size + 1);	//메모리 초기화 

	fseek(fp, 0, SEEK_SET);

	while( fgets(buf, size, fp) != NULL) {
	
		//fputs(buf, fpp);
		fwrite(buf, size, sizeof(size), fpp);
	
	}

	fclose(fp);
	fclose(fpp);
	free(buf);

	return 0;


}
