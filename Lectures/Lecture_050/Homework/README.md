# Homework Questions 



#### **Q1:** Why does `cout << arr` and `cout << arr[0]` show the same address when I create a 2D array like `int arr[3][4]`, but they show different addresses when I create a 2D array using pointers (like `int** arr`)?

### Case 1: Static 2D array (like `int arr[3][4]`)

```cpp
int arr[3][4] = {
    {1, 2, 3, 4}, 
    {5, 6, 7, 8}, 
    {9, 10, 11, 12}
};

cout << arr << endl;
cout << arr[0] << endl;
cout << arr[0][0] << endl;
```

### What’s happening?

1. **`arr`**

   * `arr` is of type `int[3][4]` (array of 3 arrays of 4 ints).
   * In most expressions, it *decays* to `int (*)[4]` (pointer to an array of 4 ints).
   * So `cout << arr` prints the address of the first row (i.e., `&arr[0]`).

2. **`arr[0]`**

   * `arr[0]` is the **first row** → type is `int[4]`.
   * It decays to `int*` (pointer to first element of that row).
   * So `cout << arr[0]` also prints the address of the first element of row 0 (`&arr[0][0]`).

✅ **That’s why `arr` and `arr[0]` print the same value** — they both point to the beginning of the first row.

3. **`arr[0][0]`**

   * This is just the first integer (`1`).
   * So it prints the value, not an address.

---

## Case 2: Dynamically allocated 2D array (using pointers)

Example:

```cpp
int rows = 3, cols = 4;
int **arr = new int*[rows];
for (int i = 0; i < rows; i++) {
    arr[i] = new int[cols];
}
```

### What’s happening?

1. **`arr`**

   * `arr` is a pointer-to-pointer (`int**`).
   * It points to the dynamically created array of row pointers.
   * So `cout << arr` prints the address of that block of row pointers.

2. **`arr[0]`**

   * `arr[0]` is itself a pointer (`int*`) pointing to the first row’s elements.
   * This points to a **different memory block** (where row 0’s integers are stored).
   * So `cout << arr[0]` prints a *different address*.

3. **`arr[0][0]`**

   * Again, that’s just the integer stored in the first row/col.

✅ **That’s why `arr` and `arr[0]` give different addresses** here — one points to the row-pointers table, and the other points to the first row’s actual data.

---

## 🔑 Key Difference

* **Static 2D array (`int arr[3][4]`)** → All rows are stored *contiguously* in one memory block.

  * `arr` = address of first row
  * `arr[0]` = address of first element of first row → same thing in memory

* **Dynamic 2D array (`int**`)** → You first allocate a block of row pointers, then allocate each row separately.

  * `arr` = address of row-pointers block
  * `arr[0]` = address of first row’s data block
  * Different blocks → different addresses

---

#### **Q2:**  How memory is deallocated in case of dynamically created 3D arrays in c++.

```cpp
// RELEASING THE MEMORY
    for (int i = 0; i < L; i++)
    {
        for (int j = 0; j < B; j++)
        {
            delete[] *(*(p + i) + j);
        }
        delete[] *(p + i);
    }
    delete[] p;
```
#### **Q3:**  Dynamically create 4D arrays in C++. [Here](https://github.com/ArhanBytes/Rohit-Negi-CPP-DSA-Course/blob/main/Lectures/Lecture_050/Homework/4D_array_by_pointers.cpp)


