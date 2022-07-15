#include<stdio.h>
#include<math.h>
void main() {
    int x,y,x1,y1,r;
    float d;
    printf("x,y is center and r is raduis and x1 and y1 are points\n");
    printf("Enter x,y,r,x1,y1: ");
    scanf("%d%d%d%d%d",&x,&y,&r,&x1,&y1);
    d=sqrt((x-x1)*(x-x1)+(y-y1)*(y-y1));
    if(d>r) {
        printf("Outside of Circle");
    } else if(d==r) {
        printf("On the circle");
    } else {
        printf("Inside the circle");
    }
}


