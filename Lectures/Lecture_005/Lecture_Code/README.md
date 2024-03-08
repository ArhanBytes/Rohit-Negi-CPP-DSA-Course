### Q : Why do I get wrong answers when I try to find out the factorial of large numbers, and how can I fix it?

Answer: The issue you’re facing is likely due to the data type you’re using to store the factorial result. If you’re using an integer type that’s too small, it can overflow, which means the value exceeds the maximum limit that can be stored in that data type. When an integer overflows, it wraps around and starts from its minimum value, which can lead to unexpected results like 0.



The solution is to use a data type that can handle larger numbers:

- If you’re calculating factorials of numbers up to 20, you can use long long int in C++.
- If you’re calculating factorials of larger numbers and can tolerate some loss of precision, you can use double.

**long long int:** 
```bash
  long long int fact = 1;
```
- `long long int`: This type can store exact integers up to a certain limit. For factorials, it can accurately calculate the factorial of numbers up to 20. However, it will overflow for factorials of numbers larger than 20.

**double:**
```bash
  double fact = 1;
```
- `double`: This type can represent much larger numbers and won’t overflow until the factorial of 171. However, it may not be able to provide exact integer values for large factorials due to its precision limit.