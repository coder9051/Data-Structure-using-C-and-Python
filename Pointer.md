# Pointer
C pointers are simple and enjoyable to learn.Some C programming tasks are easier to complete with pointers, while others, such as dynamic memory allocation, are impossible to complete without them. To become a proficient C programmer, it is therefore vital to learn pointers. Let's begin by studying them in little steps.

# Outline
* [Addresses in C](#addresses-in-c)
* [What is Pointer?](#what-is-pointer)
* [Pointer Syntax](#pointer-syntax)
* [Get value of things Pointed by Pointers](#get-value-of-things-pointed-by-pointers)
* [Changing value Pointed by Pointers](#changing-value-pointed-by-pointers)
* [Some special Pounters](#some-special-pointers)
   - [Wild Pointer](#wild-pointer)
   - [Null Pointer](#null-pointer)
   - [Void Pointer](#void-pointer)

## Addresses in C
Before we get to the definition of pointers, let us understand what happens when we write the following code:
```c
int var = 5;
```

A block of memory is reserved by the compiler to hold an int value. The name of this block is var and the value stored in this block is 5.

Now, to remember the block, it is assigned with an address or a location number (say, 24650).

The value of the location number is not important for us, as it is a random value. But, we can access this address using the & (ampersand) or address of operator.

```c
printf("The address of var = %d.",&var);
 /* prints "The address of digit = 24650. *
```
## What is Pointer?
Pointers (pointer variables) are special variables that are used to store addresses rather than values.

This variable can be of type int, char, array, function, or any other pointer. The size of the pointer depends on the architecture. However, in 32-bit architecture the size of a pointer is 2 byte.

## Pointer Syntax
Here is how we can declare pointers.
```c
int* p;
```
Here, we have declared a pointer p of int type.

You can also declare pointers in these ways.
```c
int *p1; int * p2; 
```
Let's take another example of declaring pointers.
```c
int* p1, p2;
```
Here, we have declared a pointer p1 and a normal variable p2.

## Get Value of things Pointed by Pointers
To get the value of the thing pointed by the pointers, we use the * operator. For example:
```c
int* pc, c; 
c = 5; 
pc = &c; 
printf("%d", *pc); // Output: 5
```
Here, the address of c is assigned to the pc pointer. To get the value stored in that address, we used *pc.

*Note: In the above example, pc is a pointer, not * pc. You cannot and should not do something like * pc = &c;*

*By the way, * is called the dereference operator (when working with pointers). It operates on a pointer and gives the value stored in that pointer.*

# Changing Value Pointed by Pointers
Let's take an example.
```c
int* pc, c; 
c = 5; 
pc = &c; 
c = 1; 
printf("%d", c); // Output: 1 
printf("%d", *pc); // Ouptut: 1
```
We have assigned the address of c to the pc pointer.

Then, we changed the value of c to 1. Since pc and the address of c is the same, *pc gives us 1.

Let's take another example.
```c
int* pc, c; 
c = 5; 
pc = &c; 
*pc = 1; 
printf("%d", *pc); // Ouptut: 1
printf("%d", c); // Output: 1 
```
We have assigned the address of c to the pc pointer.

Then, we changed *pc to 1 using *pc = 1;. Since pc and the address of c is the same, c will be equal to 1.

## Some special Pointers
### Wild Pointer
```c
char *alphabetAddress; /* uninitialised or wild pointer */ 
char alphabet = "a"; 
alphabetAddress = &alphabet; /* now, not a wild pointer */
```
When we defined our character pointer alphabetAddress, we did not initialize it.

Such pointers are known as wild pointers. They store a garbage value (that is, memory address) of a byte that we don't know is reserved or not (remember int digit = 42;, we reserved a memory address when we declared it).

Suppose we dereference a wild pointer and assign a value to the memory address it is pointing at. This will lead to unexpected behaviour since we will write data at a  memory block that may be free or reserved

### NULL Pointer
To make sure that we do not have a wild pointer, we can initialize a pointer with a NULL value, making it a null pointer.
```c
char *alphabetAddress = NULL /* Null pointer */ 
```
A null pointer points at nothing, or at a memory address that users can not access.

### Void Pointer
A void pointer can be used to point at a variable of any data type. It can be reused to point at any data type we want to. It is declared like this:
```c
void *pointerVariableName = NULL; 
```
Since they are very general in nature, they are also known as generic pointers.

With their flexibility, void pointers also bring some constraints. Void pointers cannot be dereferenced as any other pointer. Appropriate typecasting is necessary.
