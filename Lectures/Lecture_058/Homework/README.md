

# 🧠 Time and Space Complexity in Recursion


## 1. Factorial

```cpp
int fact(int n) {
   if (n <= 1)
       return 1;
   return n * fact(n - 1);
}
```

- **Time Complexity**: O(n)
- **Space Complexity**: O(n)

---

## 2. Power Function

```cpp
int power(int base, int exponent) {
   if (exponent == 0)
       return 1;
   return base * power(base, exponent - 1);
}
```

- **Time Complexity**: O(exponent)
- **Space Complexity**: O(exponent)

---

## 3. Palindrome Check

```cpp
bool isPalindrome(string str, int start, int end) {
   if (start >= end)
       return true;
   return (str[start] == str[end]) && isPalindrome(str, start + 1, end - 1);
}
```

- **Time Complexity**: O(n), where *n* is `str.size()`
- **Space Complexity**: O(n^2)

---

## 4. Reverse String

```cpp
void reverseString(string& str, int start, int end) {
   if (start < end) {
       swap(str[start], str[end]);
       reverseString(str, start + 1, end - 1);
   }
}
```

- **Time Complexity**: O(n)
- **Space Complexity**: O(n)

---

## 5. Even Check

```cpp
bool isEven(int n) {
   if (n == 0)
       return true;
   return !isEven(n - 1);
}
```

- **Time Complexity**: O(n)
- **Space Complexity**: O(n)

---
