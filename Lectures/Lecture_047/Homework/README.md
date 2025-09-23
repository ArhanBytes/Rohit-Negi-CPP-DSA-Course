# Pointers

## Homework Questions:

### **Q1. What is `void*`, and what is its use case?**

* A `void*` is a **generic pointer** that can store the address of any data type (`int`, `char`, `float`, array, etc.).
* Since it has no type information, you **cannot dereference it directly**. You must cast it back to the correct type first.

✅ **Use Cases**:

* Writing **generic functions** (before templates were common).
* Example: `malloc()` in C returns `void*` because it doesn’t know what type of data you want to store.
* Useful when you need to pass different types of data through the same interface.

```cpp
int x = 42;
void* ptr = &x;  // can hold int*, char*, etc.
// cout << *ptr; ❌ Not allowed
cout << *(static_cast<int*>(ptr)); // ✅ cast back to int*
```

---

### **Q2. What is `static_cast` in C++?**

* `static_cast` is the **C++ style casting operator**.
* It’s **type-safe** and **explicit**, meaning you must clearly tell the compiler what conversion you want.
* It is used for:

  * Converting between numeric types (`double → int`, `int → float`).
  * Converting between related pointer types (e.g., `int*` → `void*`).

✅ Example:

```cpp
double d = 3.14;
int x = static_cast<int>(d);  // safe, x = 3

int arr[5] = {1,2,3};
void* p = static_cast<void*>(arr); // safe pointer conversion
```

---

### **Q3. Difference between these two lines**

```cpp
const char *str = "Hello, World!";
char *str = "Hello, World!";
```

1. **`const char* str`**

   * Means `str` points to a **string literal** that is **read-only**.
   * You **cannot modify** the characters.
   * ✅ Correct and safe way to store string literals in C++.

   ```cpp
   const char* str = "Hello";
   // str[0] = 'h'; ❌ Error (read-only)
   ```

2. **`char* str`**

   * Means `str` points to a string literal, but without `const`.
   * In modern C++, this is **illegal** (compiles with warning or error) because string literals are **immutable**.
   * Trying to modify it causes **undefined behavior**.

   ```cpp
   char* str = "Hello";
   str[0] = 'h';  // ❌ Undefined behavior (may crash)
   ```


---

**Q4:** Function to calculate length of C-style strin. [Here](https://github.com/ArhanBytes/Rohit-Negi-CPP-DSA-Course/blob/main/Lectures/Lecture_047/Homework/Q4.cpp)

**Q5:** function to check if a C-style string is a palindrome.[Here](https://github.com/ArhanBytes/Rohit-Negi-CPP-DSA-Course/blob/main/Lectures/Lecture_047/Homework/Q5.cpp)
