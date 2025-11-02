
# OOP

**Q(asked in class):** Why is the size of an empty class 1 byte in C++ ?

**Ans:** The C++ standard does not allow objects (and classes thereof) of size 0, since that would make it possible for two distinct objects to have the same memory address. That's why even empty classes must have a size of (at least) 1.

The C++ standard also states that no object shall have the same memory address as another object. There are several good reasons for this.

- To guarantee that `new` will always return a pointer to a distinct memory address.
- To avoid some divisions by zero. For instance, pointer arithmetics (many of which done automatically by the compiler) involve dividing by `sizeof(T)`.