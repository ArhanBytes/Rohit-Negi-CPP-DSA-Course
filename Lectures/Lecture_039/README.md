# Problems
| Problems                                                                                                                                                                           |                                                              Solution                                                               |    Source    |
| :--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------- | :---------------------------------------------------------------------------------------------------------------------------------: | :----------: |
| [2785. Sort Vowels in a String](https://leetcode.com/problems/sort-vowels-in-a-string/description/) | [Solution](https://github.com/ArhanBytes/Rohit-Negi-CPP-DSA-Course/blob/main/Lectures/Lecture_039/Lecture_Code/2785.cpp) |     LeetCode      |
| [415. Add Strings](https://leetcode.com/problems/add-strings/description/)                                                             |     [Solution](https://github.com/ArhanBytes/Rohit-Negi-CPP-DSA-Course/blob/main/Lectures/Lecture_039/Lecture_Code/415.cpp)      |   LeetCode   |
| [Case-specific Sorting of Strings](https://www.geeksforgeeks.org/problems/case-specific-sorting-of-strings4845/1?page=2&difficulty)                                                             |     [Solution](https://github.com/ArhanBytes/Rohit-Negi-CPP-DSA-Course/blob/main/Lectures/Lecture_039/Homework/case_specific_sorting_of_string.cpp)      |   GFG   |


---

## 🧩 What “BigInt” Means
- **BigInt** stands for **Big Integer** — a way to store and work with numbers **much larger** than what built‑in types (`int`, `long long`) can hold.
- C++ itself **does not** have a built‑in BigInt type.  
- Instead, you either:
  1. **Write your own BigInt class** (store digits in a string or vector and do math manually), or  
  2. **Use a library** like GMP, Boost.Multiprecision, etc.

---

## 📏 Why We Need It
- Built‑in integer types have **fixed size** (e.g., `long long` is usually 8 bytes, max ~9×10¹⁸).
- If you try to store something bigger, it **overflows** and gives wrong results.
- BigInt can handle **hundreds, thousands, or even millions of digits** — limited only by your computer’s memory.

---

## ⚙️ How It Works
- The number is stored as **digits** (often in reverse order for easier math) inside a `std::string` or `std::vector<int>`.
- Operations like add, subtract, multiply are done **digit by digit**, just like you’d do on paper.
- Example for addition:
  1. Start from the last digit of both numbers.
  2. Add them, keep track of carry.
  3. Move left until all digits are processed.

---

## 🔍 What You Can Do With BigInt
A good BigInt implementation can:
- Add, subtract, multiply, divide big numbers
- Compare them (greater, smaller, equal)
- Find factorials, Fibonacci numbers, powers, etc., for huge values
- Work in cryptography, combinatorics, or scientific calculations

---

## 🆚 BigInt vs Normal Integers
| Feature        | Normal int / long long | BigInt |
|----------------|------------------------|--------|
| Size limit     | Fixed (4–8 bytes)      | Only limited by memory |
| Speed          | Very fast (hardware)   | Slower (software math) |
| Built‑in?      | Yes                    | No (need code or library) |
| Use case       | Everyday numbers       | Extremely large numbers |

