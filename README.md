# CPP-18-STACK-USING-ARRAY

## Aim

To implement a stack data structure using arrays in C++ and perform basic operations such as push, pop, peek, and display.

## Objectives

To understand the concept of stack as a linear data structure.

To learn how to use arrays and classes in C++ for implementing abstract data types.

To practice error handling for stack overflow and underflow conditions.

To develop logic-building skills by writing step-by-step algorithms.

To understand how LIFO (Last In, First Out) principle is applied in real-world computing.

## Theory

### What is a Stack?

A stack is a type of linear data structure that stores elements in an ordered manner, but follows the rule of Last In, First Out (LIFO).

Last In, First Out (LIFO): The element inserted most recently is the first one to be removed.

You can imagine a stack like a pile of books: you can only take the top book out, and if you want to insert a new book, it goes on the top.

### Basic Stack Operations

Push: Insert an element into the stack.

Pop: Remove the element from the top of the stack.

Peek/Top: Retrieve (but do not remove) the element at the top of the stack.

Display: Show all elements currently present in the stack.

###  Real-Life Examples of Stack

Undo/Redo in text editors.

Backtracking in puzzles (e.g., maze solving).

Function calls in programming (call stack).

Browser history (Back button works like a stack).

### Overflow and Underflow

Overflow: Happens when the stack is full and we try to insert (push) another element.

Underflow: Happens when the stack is empty and we try to remove (pop) or peek.

### Comparison Table (Array vs Linked List implementation of Stack)
| Feature             | Array-based Stack (used here)      | Linked-list-based Stack                  |
| ------------------- | ---------------------------------- | ---------------------------------------- |
| Memory Allocation   | Fixed size (predefined `MAX_SIZE`) | Dynamic (grows/shrinks as needed)        |
| Speed of Operations | Fast (direct indexing)             | Slightly slower (pointer management)     |
| Memory Usage        | May waste space if not fully used  | Uses exact memory but extra for pointers |
| Implementation      | Simple and easy                    | More complex                             |

## Algorithm

## Stack Function:

### Algorithm for push()

Increment the value of top by 1.

Assign the value 77 to array[top].

Return the newly inserted element.

### Algorithm for the Main Program

Initialize an integer array array[5] to represent the stack.

Initialize top = -1 to indicate the stack is empty.

Use a for loop to repeat 5 times:

Call the push(array, &top) function.

Print the element just inserted.

End the program.

## Stack Class:

### Algorithm for pushElement(num)

Check if topIndex == MAX_SIZE - 1.

If yes, print “STACK OVERFLOW”.

Else, increase topIndex by 1.

Insert num at arr[topIndex].

### Algorithm for popElement()

Check if topIndex == -1.

If yes, print “STACK UNDERFLOW” and return error code.

Else, return arr[topIndex] and decrease topIndex by 1.

### Algorithm for peekTop()

If topIndex == -1, print “STACK UNDERFLOW” and return error code.

Else, return arr[topIndex].

### Algorithm for displayStack()

If topIndex == -1, print “STACK UNDERFLOW”.

Else, print all elements from index 0 to topIndex.

## Program Description

### Stack Function:

The program uses an integer array array[5] to represent the stack.

The variable top keeps track of the topmost element index of the stack. Initially, it is -1, meaning the stack is empty.

The push() function inserts the value 77 into the stack at the position indicated by top.

The main function calls push() 5 times to fill the stack and prints all elements of the stack.

The program uses pass-by-reference (&top) so that changes to top inside the function affect the main function.

### Stak Class:

### Private data:

arr[MAX_SIZE] → Array to store stack elements.

topIndex → Keeps track of the top element.

### Public functions:

pushElement(int num) → To insert element.

popElement() → To remove top element.

peekTop() → To check top element.

displayStack() → To display all elements.

### The main() function:

Creates a stack object.

Pushes elements into the stack.

Pops one element and prints it.

Peeks the current top element.

Displays the final stack contents.

## Concepts Used

Class and Object → To encapsulate stack operations.

Array → To store stack elements in sequential memory.

Encapsulation → Data (array) is hidden, accessed only via methods.

Conditionals (if-else) → To check overflow and underflow.

Loop (for loop) → To display all stack elements.

Macros (#define) → For constants like MAX_SIZE and ERROR_CODE.

## Conclusion

The stack has been successfully implemented using arrays in C++.

The program also highlighted the difference between array-based and linked-list-based implementations.

This project improves understanding of data structures, OOP concepts, and error handling in C++.

The stack remains one of the most fundamental concepts in computer science and is used in compilers, operating systems, and problem solving.
