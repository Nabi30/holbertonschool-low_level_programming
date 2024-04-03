
# <p align="center">Structure of a Doubly Linked List</p>



<p align="center">Structure of a Doubly Linked List
A doubly linked list consists of nodes where each node contains:

Data: The value stored in the node.
Next Pointer: A reference to the next node in the list.
Previous Pointer: A reference to the previous node in the list.
The first node’s previous pointer and the last node’s next pointer are typically set to NULL, indicating the ends of the list.

Advantages
Bidirectional Traversal: You can traverse the list in both forward and backward directions.
Ease of Deletion: It’s easier to delete a node without traversing the list because you can access the previous node directly.
Dynamic: Nodes can be easily added or removed without reorganizing the entire data structure.
Disadvantages
Memory Overhead: Each node requires extra memory for one additional pointer (previous pointer).
Complexity: Implementing a doubly linked list is slightly more complex due to the handling of two pointers.
Applications
Web Browsers: For implementing forward and backward navigation.
Undo-Redo Functionality: In text editors and other applications.
LRU Cache: To keep track of recently used items.
Basic Operations
Insertion: Nodes can be added at the beginning, end, or between any two nodes.
Deletion: Nodes can be removed given a reference to them, without needing to traverse from the head.
Traversal: The list can be traversed from the head to the end or vice versa.</p>

# <p>Implementation
Here’s a simple representation of a node in C:</p>

```
typedef struct Node 
{
    int data;
    struct Node* next;
    struct Node* prev;
} Node;

```


