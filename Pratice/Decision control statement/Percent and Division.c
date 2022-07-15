#include<stdio.h>
#define MM 100
void main() {
    int m1,m2,m3,m4,m5;
    float per;
    printf("Enter All Subjects Marks:");
    scanf("%d%d%d%d%d",&m1,&m2,&m3,&m4,&m5);
    per=(float) (m1+m2+m3+m4+m5)/5.0*MM/100;
    if(per >= 60) {
        printf("First Division");
    } else if(per >= 50 && per <60) {
        printf("Second Division");
    } else if(per >= 40 && per <50) {
        printf("Third Division");
    } else {
        printf("Fail");
    }
}


