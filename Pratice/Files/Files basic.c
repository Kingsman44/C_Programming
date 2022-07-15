#include<stdio.h>

void main() {
FILE *fp,*f;
fp=fopen("tp.txt","w");

putc('A',fp);
fclose(fp);
}
