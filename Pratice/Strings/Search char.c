#include<stdio.h>

char change_case(char a);
int search(char word[1000],char a);

void main() {
int k;
char c,word[1000];
printf("Enter word:");
gets(word);
printf("Enter character:");
c=getchar();
k=search(word,c);
k==0?printf("Character doesn't exist"):printf("'%c' is found %d times",c,k);
}

char change_case(char a) {
if(a>='a'&&a<='z') {
    return (a-32);
} else if(a>='A'&&a<='Z') {
    return (a+32);
} else {
    return '#';
}
}

int search(char word[1000],char a) {
int c=0,i=0;
char k=change_case(a);
while(word[i]!='\0') {
    if(word[i]==a||(k!='#'&&k==word[i])) {
        c++;
    }
    i++;
}
return c;
}
