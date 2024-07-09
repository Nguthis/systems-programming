#include<stdio.h>
#include<string.h>
int main(){
        FILE *fr;
        fr=fopen("sample.txt","r");
        fprintf(fr,"This is a testfile");
        fclose(fr);
        return 0;
}
