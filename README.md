# Stack
## Stack Specification
### A stack is a data structure which is used to store data in a particular order, stack is a linear data structue which follows a particular order. Ther order may be as LIFO (Last In First Out) or FILO (First In Last Out). 
### operations:

#### Push: Add element to top of stack
#### Pop: Remove element from top of stack
#### Peek: Returns the stack elements
#### IsEmpty: Returns true if stack is empty, else false
#### IsFull: Check if stack is full

## Use of stack
#### Although stack is a simple data structure to implement, it is very powerful. The most common uses of a stack are:

#### To reverse a word - Put all the letters in a stack and pop them out. Because of LIFO order of stack, you will get the letters in reverse order.
#### In compilers - Compilers use stack to calculate the value of expressions like 2+4/5*(7-9) by converting the expression to prefix or postfix form.
#### In browsers - The back button in a browser saves all the urls you have visited previously in a stack. Each time you visit a new page, it is added on top of the stack. When you press the back button, the current URL is removed from the stack and the previous url is accessed.
