#include <stdio.h>
#include <conio.h>
struct operator { // operator declaration
    char opname;
    int isp;
    int icp;
};
int push (struct operator stak[], int *top, struct operator val,int size);
struct operator pop (struct operator stak[], int *top);
int match(struct operator opTab[8],char element, struct operator *op);
void main()
{
    char infix[20];
    char target[20];
    struct operator stak[20]; // the stack declaration
    int top = -1;
    int res;
    char val;
    int size;
    int pos;
    int i;
    struct operator op, opTemp;
    struct operator opTab[8] = {'(',0,6,')', 0,0,'^',4,5,'*',3,3,'/',3,3,'+',2,2,'-',2,2,';',0,-1};
    printf("\n enter the size of infix expression");
    scanf("%d", &size); size--;
    printf("\n Enter the terms of infix expression one by one");
    for(i=0; i<= size; i++)
    {fflush(stdin);
    scanf("%c", &infix[i]);
    }
    pos = 0;
    for (i=0; i<= size; i++)
    {
        res = match(opTab, infix[i], &op);
        if (res==0)
        {target[pos] = infix[i]};
        pos++;
    }
    else 
    {if (top < 0)
    push (stack, &top, op, size);
    else
    {opTemp.opName='#'; //place any value to opTemp
    if (op.opName == ')')
    {
        while (opTemp.opName != '(' )
        {
            opTemp = pop (stack, &top);
            if (opTemp.opName != '(' )
            { target [pos] = opTemp.opName;
            pos++;
    }
    }
    }
    else 
    {while (stack[top].isp >= op.icp)}
} 