#include<stdio.h>

typedef struct dis {
int f,i;
} d;

d read(d s) {
scanf("%d %d",&s.f,&s.i);
return s;
}

int inch(int f, int i) {
    return (f*12+i);
}

d fi(int to, d s) {
    s.f=to/12;
    s.i=(to-s.f*12);
    return s;
}

main() {
d d1,d2,d3;
d1=read(d1);
d2=read(d2);
d3=fi(inch(d1.f,d1.i)+inch(d2.f,d2.i),d3);
printf("%d %d",d3.f,d3.i);
}
