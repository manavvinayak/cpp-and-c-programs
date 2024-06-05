#include <stdio.h>
#include <conio.h>
int main() {
    int i,j,rows,columns;
    while(1) { // starting of while loop
    printf("Enter number of rows \n");
    // giving starting declaration and introduction
    scanf("%d",&rows);
    printf("Enter number of columns \n");
    scanf("%d", &columns);
    for(i=1;i<=rows;i++)
    { // first for loop used for declaring rows input number
        for(j=1;j<=columns;j++)
        { // second for loop used for declaring column input number
            if(j<=columns+1) // using if case for safety of output code
            printf("*");
        
        else
        printf(" "); // else is used to determine stars to be printed with space 
        } // end of second for loop
    
    printf("\n"); // to ensure new star to be printed from next line
    } // end of first for loop
    } // end of while loop
    getch();
return 0;
}