#include<stdio.h>
#include<string.h>
int main(){
	FILE *fp;
	fp=fopen("sample.txt","w+");
	fprintf(fp,"This is a testfile");
	fclose(fp);
	return 0;
}
