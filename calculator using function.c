#include <stdio.h>
#include <conio.h>
int main() 
  {
    
    add();
    tq();
    evenodd();
    tq();
    multiplication();
    tq();
    square();
    square();
    tq();
    division();
    end();
    
  }
 
  add()
  {
int a,b,c;
 printf("Enter two numbers ");
 scanf("%d%d", &a,&b);
 c=a+b;
 printf("The Addition of two numbers will be %d ", c);
  }
  evenodd()
  {
    int a;
    printf("Enter a number \n");
    scanf("%d", &a);
    if(a%2==0)
    {
      printf("The number is even\n");
    }
    else
    {
      printf("the number is odd\n");
    }
  }
  tq()
  {
    printf("nice\n");
  }
    multiplication()
    {
      int a,b,c;
      printf("Enter two numbers\n");
      scanf("%d%d", &a,&b);
      c=a*b;
      printf("The multiplication of %d and %d will be %d ", a,b,c);
    }
    division()
    {
      
      float a,b,c;
      printf("Enter two numbers ");
      scanf("%f%f", &a,&b);
      c=a/b;
      printf("The division of %f and %f will be %f ", a,b,c);
    }
    square()
    {
      int a;
      float c;
      printf("Enter a number\n");
      scanf("%d", &a);
      c= a*a;
      printf("The square of %d will be %f ", a,c);
    }
      end()
      {
        printf("thanks! end of program!");
      }
    
  
  


    