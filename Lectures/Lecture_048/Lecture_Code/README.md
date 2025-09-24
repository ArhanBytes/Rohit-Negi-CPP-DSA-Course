# C++ Guess the Output

## Problem 1

```cpp
int main()
{
    char c[] = "GATE2024";
    char *p = c;
    cout << p + p[3] - p[1];
}
````

**Output:**

```
2024
```

---

## Problem 2

```cpp
void second(int* p1, int* p2)
{
    p1 = p2;
    *p1 = 2;
}

int main()
{
    int i = 0, j  = 1;
    second(&i, &j);
    cout << i << j;
}
```

**Output:**

```
02
```

---

## Problem 3

```cpp
int* ptr;
int x = 0;
ptr = &x;
int y = *ptr;
*ptr = 1;
cout << x << y;
```

**Output:**

```
10
```

---

## Problem 4

```cpp
int a = 5, b = 10;
int& name = a;
int* ptr = &a;
(*ptr)++;
ptr = &b;
*ptr = *ptr + 5;
name += 5;
cout << a << b;
```

**Output:**

```
11 15
```

---

## Problem 5

```cpp
int four(int x, int* py, int** ppz)
{
    int y, z;
    **ppz += 1; z = **ppz;
    *py += 2; y = *py;
    x += 3;
    return x + y + z;
}

int main()
{
    int c, *b, **a;
    c = 4, b = &c, a = &b;
    cout << four(c, b, a);
}
```

**Output:**

```
19
```

---

## Problem 6

```cpp
void five(char* str1, char* str2)
{
    while (*str1 = *str2)
        str1++, str2++;
}

int main()
{
    char first[] = "Mohit";
    char second[] = "Rohan";
    five(first, second);
    cout << first;
}
```

**Output:**

```
Rohan
```

---

