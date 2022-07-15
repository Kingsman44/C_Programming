#include<stdio.h>

void main() {
    char a[101];
    scanf("%s",&a);
    int i=0;
    while(a[i]!='\0') {
        if(a[i]=='A'||a[i]=='O'||a[i]=='Y'||a[i]=='E'||a[i]=='U'||a[i]=='I'||a[i]=='a'||a[i]=='o'||a[i]=='y'||a[i]=='e'||a[i]=='u'||a[i]=='i') {
            i++;
            continue;
        } else if(a[i]>='A'&&a[i]<='Z') {
            printf(".%c",'a'+(a[i]-'A'));
        } else {
            printf(".%c",a[i]);
        }
        i++;
    }
}
