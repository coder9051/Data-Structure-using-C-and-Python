# Stack

A stack is a linear data structure that follows the principle of Last In First Out (LIFO). This means the last element inserted inside the stack is removed first.

In stacks, the insertion and deletion of elements happen only at one endpoint of it.

## How to understand stack practically
You can think of the stack data structure as the pile of plates on top of another.

Here, you can:

* Put a new plate on top
* Remove the top plate

And, if you want the plate at the bottom, you must first remove all the plates on top. This is exactly how the stack data structure works.

## Methods to implement Stack in C
* **Statically**: Array implementation of stacks allows the static memory allocation of its data elements. It is important to note that in this method, the stack acquires all the features of an array.
* **Dynamically**: Linked list implementation of stacks follow the dynamic memory allocation of its data elements. It is important to note that in this method, the stack inherits all the characteristics of a linked list in C.

## Stack Overflow and Stack Underflow
* **Stack Overflow** : Here we are talking about the static memory allocation of data elements of a stack. Therefore, if the stack is filled completely, that is, no more elements can be inserted in the stack, then the condition would be called STACK-FULL condition. It is also referred to as stack overflow.

* **Stack Underflow** : In case we wish to display the data elements of the stack or perform the deletion operation, but no elements have been inserted into the stack yet, this condition is called STACK-EMPTY. It is also referred to as stack underflow.

## Operations performed on stack

### Push : Adding an element onto the stack
In a stack, the operation of inserting an element into the stack is referred to as pushing an element in the stack. The elements are inserted into the stack from the top and hence would compel the elements to shift.

Stack is overflown when we try to insert an element into a completely filled stack therefore, our main function must always avoid stack overflow condition.

```c
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
```
### Pop : Deletion of an element from a stack
Deletion of an element from the top of the stack is called pop operation. The value of the variable top will be incremented by 1 whenever an item is deleted from the stack. The top most element of the stack is stored in an another variable and then the top is decremented by 1. the operation returns the deleted value that was stored in another variable as the result.

The underflow condition occurs when we try to delete an element from an already empty stack.

```c
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
```

### Peek or Top : Visiting each element of the stack
Peek operation involves returning the element which is present at the top of the stack without deleting it. Underflow condition can occur if we try to return the top element in an already empty stack.

```c
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
```

### IsEmpty
Returns true if the stack is empty, else false.

```c
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
```

### isFull
Returns true if the stack is full, else false.

```c
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
```

### Display
Displays all the elements if array starting from the last element added to first.

```c
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
```

## Working of Stack
Initially, we set a pointer Peek/Top to keep the track of the topmost item in the stack.

Initialize the stack to -1. Then, we check whether the stack is empty through the comparison of Peek to -1 i.e. Top == -1

As we add the elements to the stack, the position of the Peek element keeps updating every time.

As soon as we pop or delete an item from the set of inputs, the top-most element gets deleted and thus the value of Peek/Top gets reduced.

## Time Complexity Stack
As mentioned above, only a single element can be accessed at a time in Stacks.

While performing push() and pop() operations on the stack, it takes O(1) time.

## Application of Stacks
Although stack is a simple data structure to implement, it is very powerful. The most common uses of a stack are:

* **To reverse a word** - Put all the letters in a stack and pop them out. Because of the LIFO order of stack, you will get the letters in reverse order.
* **In compilers** - Compilers use the stack to calculate the value of expressions like 2 + 4 / 5 * (7 - 9) by converting the expression to prefix or postfix form.
* **In browsers** - The back button in a browser saves all the URLs you have visited previously in a stack. Each time you visit a new page, it is added on top of the stack. When you press the back button, the current URL is removed from the stack, and the previous URL is accessed.

## Conclusion
I have added .c file of complete implementation of stack.
