# Array
An array is simply a number of memory locations, each of which can store an item of data of the same data type and which are all referenced through the same variable name.

Following are the important terms to understand the concept of Array.
* **Element** − Each item stored in an array is called an element.
* **Index** − Each location of an element in an array has a numerical index, which is used to identify the element.

Array may be defined abstractly as finite order set of homogeneous elements. So we can say that there are finite numbers of elements in an array and all the elements are of same data type. Also array elements are ordered i.e. we can access a specific array element by an index.

## Content
* [Why do we need array?](#why-do-we-need-array)
* [How to declare an array?](#how-to-declare-an-array)

## Why do we need array?
In computer programming, the most of the cases requires to store the large number of data of similar type. To store such amount of data, we need to define a large number of variables. It would be very difficult to remember names of all the variables while writing the programs. Instead of naming all the variables with a different name, it is better to define an array and store all the elements into it.

## How to declare an array??
```c
dataType arrayName[arraySize];
```
For example:
```c
int a[5];
```
Here, we declared an array, a, of integer type. And its size is 5. Meaning, it can hold 5 integer values.

It's important to note that the size and type of an array cannot be changed once it is declared.

## How to initialize an array?
