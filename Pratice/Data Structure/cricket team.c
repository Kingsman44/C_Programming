#include<stdio.h>

struct cp {
    char name[100];
    int runs;
    char team[100];
    float average;
    int high;
};

struct cp read(struct cp s) {
    printf("Name, Run, Team, Average, Highest");
    scanf("%s",s.name);
    scanf("%d",&s.runs);
    scanf("%s",s.team);
    scanf("%f",&s.average);
    scanf("%d",&s.high);
    return s;
}

void display(char a[],int b,char c[],float d,int e[]) {
    printf("%s %d %s %f %d",a,b,c,d,e);
}

void main() {
    struct cp s1,s;
    s=read(s1);
    display(s.name,s.runs,s.team,s.average,s.high);
}
