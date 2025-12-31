# Deque in C++

## 1. What `std::deque` really is

`deque` = **Double Ended Queue**

Its goal:

* Fast **push/pop at front**
* Fast **push/pop at back**
* Random access like an array (`dq[i]`)

A single array **cannot do this efficiently** → inserting at front would be costly.
Got it 😄 — **not beginner**, but still **clear and solid**, like proper CS documentation or interview notes.
Let’s **level it up** and answer **why *this* structure and not others**.

---

## 2. Data structure used by `std::deque`

`std::deque` is implemented using:

* **A dynamically resizable array of pointers** (often called a *map* internally)
* Each pointer refers to a **fixed-size contiguous memory block (array)**

Formally, the structure is:

> **A segmented array (also called a block-based array)**

This is **not**:

* `std::map`
* a linked list
* a single contiguous array

---

## 3. Why ONLY this data structure fits `deque`’s requirements

`deque` has a **unique combination of guarantees**:

| Requirement                  | Must be |
| ---------------------------- | ------- |
| Push/pop at front            | O(1)    |
| Push/pop at back             | O(1)    |
| Random access (`operator[]`) | O(1)    |
| Reasonable memory locality   | Yes     |

No *single* classical data structure satisfies all of these simultaneously.

---

## 4. Why other structures fail

### ❌ Single dynamic array (like `vector`)

* Back insertion: O(1) amortized ✅
* Front insertion: O(n) ❌
* Reallocation invalidates all elements ❌

Fails because **front operations are expensive**.

---

### ❌ Linked list / doubly linked list

* Front/back insertion: O(1) ✅
* Random access: O(n) ❌
* Poor cache performance ❌

Fails because **random access is required by the standard**.

---

### ❌ Tree-based structures

* Insertion: O(log n) ❌
* Random access by index: complex ❌

Fails due to **higher overhead and slower access**.

---

## 5. Why segmented (block-based) array works

The **segmented array** approach combines strengths:

### ✔ Constant-time end operations

* New blocks can be attached at front or back
* No shifting of existing elements

### ✔ Constant-time random access

* Index → block number → offset inside block
* Two simple arithmetic operations

### ✔ Controlled memory growth

* Only new blocks are allocated when needed
* No full reallocation like `vector`

### ✔ Better cache behavior than linked lists

* Each block is contiguous
* Fewer cache misses

---

## 6. Why this structure and not any simpler one

The design is a **deliberate compromise**:

* Better front/back performance than `vector`
* Better random access than `list`
* Less memory fragmentation than node-based structures

This makes the segmented array the **only practical structure** that satisfies all deque guarantees **simultaneously**.

---
- [Deque in C++ STL (GFG)](https://www.geeksforgeeks.org/cpp/deque-cpp-stl/)
- [What really is a deque in STL? (Stackoverflow)](https://stackoverflow.com/questions/6292332/what-really-is-a-deque-in-stl)
  
## Implementation of Dequeue
| Problems                                                                                            |                                                                  Solution                                                                  | Source |
| :-------------------------------------------------------------------------------------------------- | :----------------------------------------------------------------------------------------------------------------------------------------: | :----: |
| Deque Implementation using Doubly Linked List| [Solution](https://github.com/ArhanBytes/Rohit-Negi-CPP-DSA-Course/blob/main/Lectures/Lecture_099/Lecture_Code/implement_deque_using_doubly_linkedlist.cpp) |  System compiler   |
| Deque Implementation using Circular Array| [Solution](https://github.com/ArhanBytes/Rohit-Negi-CPP-DSA-Course/blob/main/Lectures/Lecture_099/Lecture_Code/implement_deque_using_circular_array.cpp) |  System compiler   |

