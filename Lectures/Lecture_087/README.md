# Link List in C++

**Q(asked in class):** :  What is the Space complexity of [Merge K sorted linked lists](https://www.geeksforgeeks.org/problems/merge-k-sorted-linked-lists/1) by using mergesort algorithm?

**Ans.** We are not creating any external linked list, but the recursion uses the stack. Since the list is divided in half at each step, the maximum stack size will be `O(log k)`. Therefore, **S.C = O(log k)**.

#  Linked List Problems
| Problems                                                                                                                                                                           |                                                              Solution                                                               |    Source    |
| :--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------- | :--------------------------------------------------------------------------------------------------------------------------------: | :----------: |
| [Flattening a Linked List](https://www.geeksforgeeks.org/problems/flattening-a-linked-list/1) | [Solution](https://github.com/ArhanBytes/Rohit-Negi-CPP-DSA-Course/blob/main/Lectures/Lecture_087/Lecture_Code/flatting_a_linked_list.cpp) |     GFG     |
| [Merge K sorted linked lists Variation 1](https://www.geeksforgeeks.org/problems/merge-k-sorted-linked-lists/1) | [Solution](https://github.com/ArhanBytes/Rohit-Negi-CPP-DSA-Course/blob/main/Lectures/Lecture_087/Lecture_Code/merge_k_sorted_linked_list.cpp) |     GFG     |
| [Merge K sorted linked lists through Merge Sort](https://www.geeksforgeeks.org/problems/merge-k-sorted-linked-lists/1) | [Solution](https://github.com/ArhanBytes/Rohit-Negi-CPP-DSA-Course/blob/main/Lectures/Lecture_087/Lecture_Code/merge_k_sorted_linked_list_v2.cpp) |     GFG     |
| [Merge Sort for Singly Linked List](https://www.geeksforgeeks.org/problems/sort-a-linked-list/1) | [Solution](https://github.com/ArhanBytes/Rohit-Negi-CPP-DSA-Course/blob/main/Lectures/Lecture_087/Homework/merge_sort_for_singly_linked_list.cpp) |     GFG     |
| [Merge Sort on Doubly Linked List](https://www.geeksforgeeks.org/problems/merge-sort-on-doubly-linked-list/1) | [Solution](https://github.com/ArhanBytes/Rohit-Negi-CPP-DSA-Course/blob/main/Lectures/Lecture_087/Homework/merge_sort_for_doubly_linked_list.cpp) |     GFG     |