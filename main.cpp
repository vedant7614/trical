#include<stdio.h>
#include<conio.h>

int main()
{
    float l,b,area;
    printf("ENTER THE VALUE OF l");
    scanf("%f",&l);
    printf("ENTER THE VALUE OF b");
    scanf("%f",&b);
    area=.5*b*l;
    printf("area of triangle=%f",area);
    getch();
}