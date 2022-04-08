#include<stdio.h>
#include<stdlib.h>
#define Size 10

void Push();
void Pop();
void Peek();
void isEmpty();
void isFull();
void Display();

int Top = -1, array[Size];
int main()
{
    int option;
    while(1)
    {
        printf("\nOperation to be performed by Stack");
        printf("\n1.Push\n2.Pop\n3.Peek or Top\n4.isEmpty\n5.isFull\n6.Display\n7.Exit");
        printf("\n\nEnter the choice (1, 2, 3, 4, 5, 6, 7):");

        scanf("%d",&option);
        
        switch(option)
        {
            case 1: Push();
                    break;
            case 2: Pop();
                    break;
            case 3: Peek();
                    break;
            case 4: isEmpty();
                    break;
            case 5: isFull();
                    break;
            case 6: Display();
                    break;
            case 7: exit(0);
            
            default:
                    printf("\nInvalid Option");
            
        }
    }
}

void Push()
{
    int x;
    if (Top == Size - 1)
    {
        printf("\n Stack Overflow!");
    }
    else
    {
        printf("\nEnter number to be added to array: ");
        scanf("%d",&x);
        printf("%d is added to array", x);
        Top = Top + 1;
        array[Top] = x;
    }
}

void Pop()
{
    if (Top == -1)
    {
        printf("\n Stack Underflow!");
    }
    else
    {
        printf("Element %d is popped", array[Top]);
        Top = Top -1;
    }
}

void Peek()
{
    if (Top == -1)
    {
        printf("Stack Underflow!");
    }
    else
    {
        printf("\nLast Element of array is %d", array[Top]);
    }
    
}

void isEmpty()
{
    if (Top == -1)
    {
        printf("\nArray is Empty!");
    }
    else
    {
        printf("\nArray contains element");
    }
}

void isFull()
{
    if (Top == Size -1)
    {
        printf("\nArray is Full!");
    }
    else
    {
        printf("\nArray is not full elements can be added to array.");
    }
}

void Display()
{
    if (Top == -1)
    {
        printf("\nStack Underflow");
    }
    else
    {
        int i;
        printf("\nElements of array array: ");
        for(i = Top; i >= 0; --i)
        {
            printf("%d ",array[i]);
        }
    }
}
