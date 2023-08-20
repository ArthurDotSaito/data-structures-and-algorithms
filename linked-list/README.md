<h1 align="center">Linked Lists</h1>

Efficient memory and data manipulation is a key task in most applications. The most basic data structure is the array. However, an array is a static data strucuture and may be somewaht limiting in some applications. A second elementary data structure to consider is the linked list which have some advantages over arrays:

- Linked lists can grow and shrink in size during their lifetime. In particular, their maximum size need not be know in advance.
- Provide more flexibiliity in allowing content to be rearranged efficiently (insert, delete, move).

Disvantages:

- Linked lists are more expensive to quick access any arbitrary item in the list;
- Linked lists are not suited for problems involving "find the Kth item" - We have to travel through k links. Or even "Find a item before a give item" - in simple linked lists we have only the link to the next node.

# Basic Operations

- POP - Remove the head element and return the data that was removed
- PUSH - Add a node on the begging of the list
- RESET - Reset the list, often used in start
- CLEAR - Remove all the nodes from a linked list
- EMPTY - Check if the list is empty
- INSERT - Add a node at given position
- REMOVE - Remove a node at given position

# References

- Robert Sedgewick, Algorithms in C, 3rd. ed., vol. 1, Addison Wesley Longman, 1998, p.15-23.
- Knuth, Donald E. ,The Art of computer programming, vol. 1, Addison-Wesley Professional, 1997, p. 254-259.
- T.H. Cormen, C.E. Leiserson, R.L. Rivest, C. Stein, Introduction to Algorithms, 2nd ed., MIT Press & McGraw-Hill, 2001.
