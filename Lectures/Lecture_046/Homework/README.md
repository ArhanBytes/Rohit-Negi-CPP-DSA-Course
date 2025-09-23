# Pointers

## Homework Questions:

**Q1:** Print the address of the first index of the char array in C++. [Here](https://github.com/ArhanBytes/Rohit-Negi-CPP-DSA-Course/blob/main/Lectures/Lecture_046/Homework/Q1.cpp)

**Q2:** Print the address of the char variable in C++. [Here](https://github.com/ArhanBytes/Rohit-Negi-CPP-DSA-Course/blob/main/Lectures/Lecture_046/Homework/Q2.cpp)

**Q3:** Print the address of String in C++. [Here](https://github.com/ArhanBytes/Rohit-Negi-CPP-DSA-Course/blob/main/Lectures/Lecture_046/Homework/Q3.cpp)

**Q4:** Given an array in C++

```cpp
int arr[5] = {1,2,3,4,5};
```

**What is the difference between `arr` and `&arr`?**

---

### ✅ Explanation

* `arr`

  * When used in most expressions, `arr` **decays into a pointer to its first element**.
  * So `arr` is of type **int**\* (pointer to int).
  * `arr` points to `&arr[0]`.

* `&arr`

  * `&arr` is the **address of the whole array**, not just the first element.
  * Its type is **int (\*)\[5]** (pointer to an array of 5 integers).
  * Even though numerically `arr` and `&arr` give the same address, their **types and how pointer arithmetic works are different**.


####  Example Code [Here](https://github.com/ArhanBytes/Rohit-Negi-CPP-DSA-Course/blob/main/Lectures/Lecture_046/Homework/Q4.cpp)

**Q5:**

```cpp
int arr[5] = {1,2,3,4,5};
```

Create a pointer which will store the address of the last element. Then print all the elements from the last index to 0th index with the help of a pointer. [Here](https://github.com/ArhanBytes/Rohit-Negi-CPP-DSA-Course/blob/main/Lectures/Lecture_046/Homework/Q5.cpp)



## Must Read

### 🔹 1. Integer array vs char array: why the behavior differs

#### Integer array

```cpp
int arr[5] = {1,2,3,4,5};

cout << arr << endl;   // type: int* → prints address of arr[0]
cout << &arr << endl;  // type: int (*)[5] → prints address of whole array
```

* In `cout`, an `int*` is not special. It just prints the pointer value (address).
* `arr` decays to pointer `int*` (first element).
* `&arr` is type `int (*)[5]` (pointer to entire array). Printing it also gives an address.
  ✅ So both show addresses, though they technically are different pointer types.

---

#### Char array

```cpp
char arr[] = "Hello";

cout << arr << endl;   // type: char* → special case!
cout << &arr << endl;  // type: char (*)[6] → also decays to char* when passed
```

* In C++, when `cout` sees a `char*`, it assumes it’s a **C-string**.
* So instead of printing the pointer, it **dereferences until it finds '\0'**.
* That’s why you get `"Hello"` printed instead of an address.

👉 To force printing the actual address:

```cpp
cout << static_cast<void*>(arr) << endl;
cout << static_cast<void*>(&arr[0]) << endl;
```

---

#### Char variable

```cpp
char ch = 'A';
cout << &ch << endl;   // type: char* → again treated as C-string
```

* `&ch` is a `char*` pointing to `'A'`.
* `cout` prints `'A'`, then keeps going until it hits a null terminator (which might be garbage).

👉 Correct way:

```cpp
cout << static_cast<void*>(&ch) << endl;
```

---

### 🔹 2. Why the special treatment?

Because of **C-style strings**.

* Historically, strings in C were just `char*` pointing to a null-terminated array.
* So C++ iostreams still follow that convention: whenever `cout` receives a `char*`, it assumes you want to print a string.

For `int*`, `double*`, etc., there’s no such convention — so it prints addresses.

---

## 🔑 Final Takeaway

* **int array** → `arr` and `&arr` both print addresses.
* **char array/variable** → `cout` treats `char*` as a string, not an address.
* **Solution** → use `static_cast<void*>` (or `(void*)`) to display the raw address.

---