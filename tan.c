#include <stdio.h>
#include <conio.h>
#include <math.h>
int main() {
    float a,b;
    printf("WELCOME! ");
    printf("Enter a number : ");
    scanf("%f", &a);
     b=tan(a);
     printf("The tangent value of %f is %f" , a,b);
    
    getch();
    return 0;
}