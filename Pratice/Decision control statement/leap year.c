#include<stdio.h>


int leapYear(int y){
    if(y%4==0&&y%400==0){
        return 1;
    } else if(y%4==0&&y%100!=0) {
        return 1;
    }
    return 0;
}
void main(){
int y;
scanf("%d",&y);

if(leapYear(y)){
    printf("12 09 %d",y);
}
else{
    printf("13 09 %d",y);
}
}
