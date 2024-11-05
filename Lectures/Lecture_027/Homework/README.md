## Homework Questions: 
**Q1:** : Prove that the average time Complexity of Push_back operation in Vector is O(1) time. ?

  **Ans:** When performing `n` `push_back` operations on a vector that doubles its capacity each time it’s full, the average time complexity is **O(1)**. Here’s why:

1. **Doubling Costs**: Each time the vector doubles in capacity, all elements are copied. For `n` elements, the total copies needed due to resizing is:
   1 + 2 + 4 + ... + `n` ≈ `2n`

2. **Total Cost**: The total cost for `n` operations is:
   `n + 2n = 3n`

3. **Average Cost Per Operation**:
   `3n / n = 3`, which simplifies to **O(1)**.

Thus, `push_back` has an amortized time complexity of **O(1)**.

**Q2:** How to find the number of Occurance of an element in a vector. You need to use STL here. [Here](https://github.com/ArhanBytes/Rohit-Negi-CPP-DSA-Course/blob/main/Lectures/Lecture_027/Homework/2.cpp)


**Q3:** How to find maximum and minimum elements from the vector. USE STL here. [Here](https://github.com/ArhanBytes/Rohit-Negi-CPP-DSA-Course/blob/main/Lectures/Lecture_027/Homework/3.cpp)

**Q4:** Find Lower bound and Upper Bound of a given element in a sorted vector. USE STL here to find them. [Here](https://github.com/ArhanBytes/Rohit-Negi-CPP-DSA-Course/blob/main/Lectures/Lecture_027/Homework/4.cpp)

**Q5:** How to pass a vector to a function. Write a small code for it. [Here](https://github.com/ArhanBytes/Rohit-Negi-CPP-DSA-Course/blob/main/Lectures/Lecture_027/Homework/5.cpp)