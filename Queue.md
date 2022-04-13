# Queue

A queue in C is basically a linear data structure to store and manipulate the data elements. It follows the order of First In First Out (FIFO).

In queues, the first element entered into the array is the first element to be removed from the array.

A queue is open at both ends. One end is provided for the insertion of data and the other end for the deletion of data.

## How to understand a queue practically? 

For example, let’s consider the scenario of a bus-ticket booking stall. Here, the fashion of a C programming queue is followed. The tickets are distributed on the first-come-first-serve basis i.e. the first one to enter is the first one to be served with the tickets. This is how a queue works.

## Basic Operations of Queue

A queue is an object (an abstract data structure - ADT) that allows the following operations:

### Front: 
Get the front item from queue.
 
 ```c
 ghjjbffcvgh
 ```
### Rear: 
Get the last item from queue.
 
 ```c
 ddvvbbhugg
 ```
### Enqueue: 
Add an element to the end of the queue. If the queue is full, then it is said to be an Overflow condition.

Check if the queue is already full by comparing rear to max - 1. if so, then return an overflow error.

If the item is to be inserted as the first element in the list, in that case set the value of front and rear to 0 and insert the element at the rear end.

Otherwise keep increasing the value of rear and insert each element one by one having rear as the index.

```c
fgbhhhvv
```

### Dequeue: 
Remove an element from the front of the queue. The items are popped in the same order in which they are pushed. If the queue is empty, then it is said to be an Underflow condition.

If, the value of front is -1 or value of front is greater than rear , write an underflow message and exit.

Otherwise, keep increasing the value of front and return the item stored at the front end of the queue at each time.

```c
rggcccv
```

### IsEmpty/ IsFull: 
Check if the queue is empty or full.

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

## Working of Queue Data Structure

Queue follows the First-In-First-Out pattern. The first element is the first to be pulled out from the list of elements.

- Front and Rear pointers keep the record of the first and last element in the queue.At first, we need to initialize the queue by setting Front = -1 and Rear = -1
- In order to insert the element (enqueue), we need to check whether the queue is already full i.e. check the condition for Overflow. If the queue is not full, we’ll have to increment the value of the Rear index by 1 and place the element at the position of the Rear pointer variable. When we get to insert the first element in the queue, we need to set the value of Front to 0.
- In order to remove the element (dequeue) from the queue, we need to check whether the queue is already empty i.e. check the condition for Underflow. If the queue is not empty, we’ll have to remove and return the element at the position of the Front pointer, and then increment the Front index value by 1. When we get to remove the last element from the queue, we will have to set the values of the Front and Rear index to -1.

## Limitations Of This Implementation

Consider a queue, with size 5. We have entered 5 elements but have later deleted first 2 elements. Now there is a problem. We have free space but, space won’t be used as we can’t traverse again. This problem is solved using the circular queue.

## Complexity Analysis

The complexity of enqueue and dequeue operations in a queue using an array is O(1)

## Applications of Queue
* CPU scheduling, 
* Disk Scheduling
* When data is transferred asynchronously between two processes.The queue is used for synchronization. For example: IO Buffers, pipes, file IO, etcHandling of interrupts in real-time systems.
* Call Center phone systems use Queues to hold people calling them in order.

## Conclusion
The difference between stacks and queues is in removing. In a stack we remove the item the most recently added; in a queue, we remove the item the least recently added.

If the queue has a large number of enqueue and dequeue operations, at some point (in case of linear increment of front and rear indexes) we may not be able to insert elements in the queue even if the queue is empty (this problem is avoided by using circular queue).
