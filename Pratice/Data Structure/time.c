#include<stdio.h>

typedef struct time {
int h,m,s;
} t;

t read(t s) {
scanf("%d %d %d",&s.h,&s.m,&s.s);
return s;
}

int sec(int h, int m, int s) {
    return (h*3600+m*60+s);

}

t hms(int to, t s) {
    s.h=to/3600;
    s.m=(to-s.h*3600)/60;
    s.s=to-(s.h*3600+s.m*60);
    return s;
}

main() {
t t1,t2,t3;
t1=read(t1);
t2=read(t2);
t3=hms(sec(t1.h,t1.m,t1.s)+sec(t2.h,t2.m,t2.s),t3);
printf("%d %d %d",t3.h,t3.m,t3.s);
}
