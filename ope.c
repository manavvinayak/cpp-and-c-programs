// stacks are that type of arrangement of array where deletion and addition like operations are performed
// from only one end called top
// there are two operations in it i.e. push and pop
#include<stdio.h>
#include<conio.h>
int push (int stak[], int *top,int val, int size);
int pop(int stak[], int *top);
void display(int stak[], int top);
void main() {
    int stack[30]; // stack declaration
     int top= -1; //  initially the stack is empty
     int val;
     int size;
     int choice;
     int result;
     printf("\n Enter the size of the stack ");
     scanf("%d", &size);
     size--; // for index to be zero


// creating menu
do {
    
    printf("\n Menu - stack operations");
    printf("\n Push 1");
    printf("\n Pop 2");
    printf("\n Display stack 3");
    printf("\n Quit 4");
    printf("\n Enter your choice:");
    scanf("%d", & choice);

    switch (choice)
    {
        // push operation, hum ek ek item add krte jate hai
        case 1: printf("\n Enter the value for push operation");
        scanf("%d", & val);
        result = push (stack, &top, val, size);
        if (result == 0)
            printf("\n The stack is full");
            break;
            case 2: result = pop( stack, &top);
            if (result == 9999)
            printf("\nStack is empty");
            else
            printf("\n The popped value = %d", result );
            break;
            case 3: display(stack, top);
            break;
    }
    printf("\n\n Press any key to continue");
    getch();
}
while (choice != 4); // when the user operation did not come to quit status then the whole process will be go
// on....
}
int push ( int stack[], int *top, int val, int size)
{
    // if the top of stack becomes equal to the size of stack then it means stack is full
    if(*top >= size)
    return 0;
    else
    {
        *top = *top + 1;
        stack[*top]= val;
        return 1; // already defined above that stack is full
    }
}
int pop (int stack[], int *top)
{
    int val;
    if (*top < 0) // top becomes zero
    return 9999; // already defined , stack is empty
    else
    {
        val = stack[*top];
        *top = *top - 1;
        return val;
    }
}
void display(int stack[], int top)
{
    int i;
    printf("\n The contents of stack are: ");
    for(i= top; i >= 0;i--) // from upwards to bottom ,stacks will go on decrementing
    printf("%d", stack[i]);
}
 