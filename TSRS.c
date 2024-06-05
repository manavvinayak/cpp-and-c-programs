// takes something returns something
#include <stdio.h>
#include <conio.h>
int main()
{
    int x,y,S;
    printf(" Enter two numbers ");
    scanf("%d%d", &x,&y);
    S=add(x,y);
    printf("Sum is %d", S);
    return 0;
}
int add(int a,int b)
{
    int c;
    c=a+b;
    return c;
}
