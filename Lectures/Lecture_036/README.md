### Null Character `'\0'` in C++
- `'\0'` means **nothing**. It marks the **end of a C string**.
- A C string is just characters stored in an array.
- When the computer sees `'\0'`, it stops reading the string.

Example:  
```cpp
#include <iostream>
using namespace std;

int main() {
    char word[6] = {'H', 'e', 'l', 'l', 'o', '\0'};
    cout << word; // prints Hello
    cout << "\0"; // prints nothing
}
```

## 🔹 Why Printing `"\0"` Shows Nothing
- When you `cout << "\0";` or `printf("%s", "\0");`, you’re essentially printing the “end” of a string — so nothing appears.
- Think of it like reaching the finish line of a race… there’s simply **no more track** to run on.

---