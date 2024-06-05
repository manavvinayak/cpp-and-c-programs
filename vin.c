#include <stdio.h>
#include <conio.h>
#include <math.h>
int main() {
    while (1) {
    float a,b;
printf("Enter a number ");
scanf("%f",&a);
b= cbrt(a);
printf("The cube root of %f is %f", a,b);
getch();
return 0;
    }

}