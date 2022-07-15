#include<stdio.h>

typedef struct det {
int yr,rno,nc,dob[3];
char name[50],dep[50],ncr[50][50];
} st;

void read(st t[],int n) {
for(int i=0;i<n;i++) {
    printf("Enter Student %d details in format\n Roll No,Name,Department,No of courses,All courses,Year of Joining, DOB (DD MM YYYY)\n",i+1);
    scanf("%d %s %s %d",&t[i].rno,t[i].name,t[i].dep,&t[i].nc);
    for(int j=0;j<t[i].nc;j++)
        scanf("%s",t[i].ncr[j]);
    scanf("%d %d %d %d",&t[i].yr,&t[i].dob[0],&t[i].dob[1],&t[i].dob[2]);
}
}

void print(st t) {
    printf("\n\nStudent details\nRoll No: %d\nName:%s\nDepartment:%s\nNo of courses:%d\nCourses name:",t.rno,t.name,t.dep,t.nc);
    for(int j=0;j<t.nc;j++)
        printf("%s ",t.ncr[j]);
    printf("\nYear of Joining: %d\n, DOB (DD MM YYYY): %d-%d-%d\n",t.yr,t.dob[0],t.dob[1],t.dob[2]);
}

void print_yr(st t[],int n) {
int yr;
printf("Enter Year:");
scanf("%d",&yr);
for(int i=0;i<n;i++) {
    if(t[i].yr==yr)
    print(t[i]);
}
}

void print_rn(st t[],int n) {
int yr;
printf("Enter Roll No:");
scanf("%d",&yr);
for(int i=0;i<n;i++) {
    if(t[i].rno==yr)
    print(t[i]);
}
}

void print_dep(st t[],int n) {
char a[50];
printf("Enter Department:");
scanf("%s",a);
for(int i=0;i<n;i++) {
    if(strcasecmp(a,t[i].dep)==0)
    print(t[i]);
}
}

void print_name(st t[],int n) {
char a[50];
printf("Enter Name:");
scanf("%s",a);
for(int i=0;i<n;i++) {
    if(strcasecmp(a,t[i].name)==0)
    print(t[i]);
}
}

void print_cr(st t[],int n) {
char a[50];
printf("Enter Course Name:");
scanf("%s",a);
for(int i=0;i<n;i++) {
    for(int j=0;j<t[i].nc;j++) {
    if(strcasecmp(a,t[i].ncr[j])==0)
    print(t[i]);
    }
}
}

void print_ns(st t[],int n) {
char a;
printf("Enter Start Name (Lower case):");
scanf("%*c%c",&a);
for(int i=0;i<n;i++) {
    if(a==t[i].name[0] || (a-32)==t[i].name[0])
    print(t[i]);
}
}

void print_dob(st t[],int n) {
int dd,mm,yy;
printf("Enter DOB (DD MM YYYY):");
scanf("%d %d %d",&dd,&mm,&yy);
for(int i=0;i<n;i++) {
    if(t[i].dob[0]>=dd&&t[i].dob[1]>=mm&&t[i].dob[2]>=yy)
    print(t[i]);
}
}

void main() {
st t[100];
int n;
printf("Enter N:");
scanf("%d",&n);
read(t,n);
for(int i=0;i<n;i++)
    print(t[i]);
print_yr(t,n);
print_rn(t,n);
print_dep(t,n);
print_name(t,n);
print_dob(t,n);
print_cr(t,n);
print_ns(t,n);
}
