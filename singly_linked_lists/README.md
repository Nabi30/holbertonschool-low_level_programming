
# <p align="center">C - Singly linked lists</p>



<p align="center">Linked Lists vs Arrays:

Arrays are like apartments in a large building. Each apartment (element) has a specific number (index), and you can quickly find any apartment by its number. However, if you want to add more apartments, you can’t unless there’s empty space next to it. If the building is full, you can’t add more without a lot of work (resizing the array).
Linked Lists are more like a treasure hunt. Each clue (node) leads you to the next one. You can easily add more clues anywhere in the hunt by just changing where the previous clue points. But if you want to find the 10th clue, you have to follow all the clues from the beginning, which takes longer.
When to use them:

Use arrays when you need fast access to elements using indexes, like checking who lives in apartment #204 instantly.
Use linked lists when you need to add or remove elements a lot, like changing the order of clues in a treasure hunt frequently.
Building and Using Linked Lists:

Creating a Node:
Think of a node like a box with two parts: one part holds your treasure (value), and the other part has a map to the next box (pointer to the next node).
Creating the Linked List:
Start with the head, which is the first box in your treasure hunt. It leads to the next box and so on.
The tail is the last box and its map points to “Nowhere” (NULL), indicating the end of the hunt.
Using the Linked List:
To add a box, just change the map in the previous box to point to your new box.
To remove a box, change the map in the box before it to skip over the one you’re removing and point to the next one after it.</p>
