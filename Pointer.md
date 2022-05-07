# Pointer
C pointers are simple and enjoyable to learn.Some C programming tasks are easier to complete with pointers, while others, such as dynamic memory allocation, are impossible to complete without them. To become a proficient C programmer, it is therefore vital to learn pointers. Let's begin by studying them in little steps.

# Outline
* [Addresses in C](#addresses-in-c)
* [What is Pointer?](#what-is-pointer)
* [Pointer Syntax](#pointer-syntax)
* [Get value of things Pointed by Pointer](#get-value-of-things-pointed-by-pointer)

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
