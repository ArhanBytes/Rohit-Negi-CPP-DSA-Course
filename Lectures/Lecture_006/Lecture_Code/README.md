# Solve Pattern Problems (Part 1)

### Pattern 1:
![1](https://github.com/ArhanBytes/Rohit-Negi-CPP-DSA-Course/assets/153920711/1de0d1be-895a-4ebf-ac59-f795a042f578)
### Pattern 2:
![2](https://github.com/ArhanBytes/Rohit-Negi-CPP-DSA-Course/assets/153920711/7b2d1d26-1354-4e26-868a-09fb17bfe395)
### Pattern 3:
![3](https://github.com/ArhanBytes/Rohit-Negi-CPP-DSA-Course/assets/153920711/0f897ab6-c5f0-4ffc-89c9-f1180159a06b)
### Pattern 4:
![4](https://github.com/ArhanBytes/Rohit-Negi-CPP-DSA-Course/assets/153920711/967d629d-4821-4b01-801f-c354685bf59d)
### Pattern 5:
![5](https://github.com/ArhanBytes/Rohit-Negi-CPP-DSA-Course/assets/153920711/642d410a-423b-4d70-b722-c29313834ebe)
### Pattern 6:
![6](https://github.com/ArhanBytes/Rohit-Negi-CPP-DSA-Course/assets/153920711/8264a7f4-6424-418d-afa6-5bd8fa3ef51d)
### Pattern 7:
![7](https://github.com/ArhanBytes/Rohit-Negi-CPP-DSA-Course/assets/153920711/c5264b0c-fd11-460b-82d7-5aed998ebfed)
### Q(asked in class): Why is my C++ code printing ASCII values instead of characters?

Ans: The issue is that the expression `'a' + col - 1` is being evaluated as an integer, not a character. This is because the 'a' character is implicitly converted to its ASCII value (which is an integer) for the arithmetic operation.

```bash
cout << static_cast<char>('a' + col - 1) << " ";
```

- In this modified code, static_cast<char>('a' + col - 1) ensures that the result of the expression is treated as a char, so the corresponding character is printed instead of the ASCII value. This should give you the output you’re expecting.
### Pattern 8:
![8](https://github.com/ArhanBytes/Rohit-Negi-CPP-DSA-Course/assets/153920711/fb98e0b7-707f-4a3e-a8d7-ef760ce00303)

