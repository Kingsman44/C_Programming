#include<stdio.h>

main()
{
    int d, s, t, i;
    for(i=1;i<=3;i++)
    {
        printf("Enter the distance at which apple %i falls\n", i);
        scanf("%d", &d);
        apple(d);
    }
    for(i=1;i<=3;i++)
    {
        printf("Enter the distance at which orange %i falls\n", i);
        scanf("%d", &d);
        d = -d;
        orange(d);
    }

}

void apple(int d)
{
    int s, t;
    printf("Enter the starting and end distance of house\n");
    scanf("%d%d", &s, &t);
    if(d>=s && d<=t)
    {
        printf("The apple falls in the range of house\n");
    }
    else
    {
        printf("The apple doesnt fall in the range of house\n");
    }
}

void orange(int d)
{
    int s, t;
    printf("Enter the starting and end distance of house\n");
    scanf("%d%d", &s, &t);
    if(d>=s && d<=t)
    {
        printf("The orange falls in the range of house\n");
    }
    else
    {
        printf("The orange doesnt fall in the range of house\n");
    }
}
