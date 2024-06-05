#include <stdio.h>
#include <conio.h>
#include <math.h>
int main() {
    while (1) 
    {
        int a;
    float b;
    printf("Enter a number: ");
    scanf("%d", &a);
    b= log(a);
    printf("The logarithmic value of %d is %f", a,b);
    }
    getch();
    return 0;


}