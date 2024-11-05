# Vector in C++

**Q(asked in class):** What is the time complexity of v.clear() ?

- `v.clear()`: Deletes all the elements from the vector and assign an empty vector. Its time complexity is `O(N)` where N is the size of the vector.


**Q(asked in class):** What is the functionality of v.at()

**Syntax:**
`v.at(position)`
- **Parameters:** Position of the element to be fetched.
- **Returns:** Direct reference to the element at the given position.

**Input:**
- v = 1, 2, 3
- v.at(2);
         
**Output:** 3