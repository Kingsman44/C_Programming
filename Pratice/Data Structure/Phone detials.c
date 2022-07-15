#include<stdio.h>

void display(char a[],int b,int c[],int d,char e[],char f[]) {
    printf("Phone Details: \nName:%s\nRam:%d Gb\nScreen ratio: %d:%d\nBattery capacity: %d mah\ncodename: %s\nProcessor: %s",a,b,c[0],c[1],d,e,f);
}

void main() {
    struct mobile {
        char name[100];
        int ram;
        int size[2];
        int bat;
        char c_name[100];
        char pro[100];
    };
    struct mobile s = {"Redmi Note 4",4,{16,9},4000,"mido","SDM 625"};
    display(s.name,s.ram,s.size,s.bat,s.c_name,s.pro);
}
