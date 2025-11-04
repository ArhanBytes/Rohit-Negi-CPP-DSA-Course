#  Constructor and Destructor
## Homework Questions: 
**Q1:** What is shallow copy and Deep Copy.
- [Shallow Copy and Deep Copy in C++ by GFG](https://www.geeksforgeeks.org/shallow-copy-and-deep-copy-in-c/)

**Q2:** Why the Destructor of Objects is executed in reverse order.

1. **Stack Unwinding**:
- When an object goes out of scope (e.g., when a function returns or a block ends), the C++ runtime system performs a process called **stack unwinding**.
- During stack unwinding, the destructors of local objects (i.e., objects with automatic storage duration) are called in **reverse order** of their construction.
- This ensures that the most recently constructed objects are destroyed first, followed by their enclosing objects.

2. **Resource Management**:
- Destructors are primarily responsible for releasing resources acquired by an object during its lifetime.
- Consider scenarios where an object holds resources like memory (allocated with `new`), file handles, network connections, or locks.
- If destructors were called in the order of construction, it could lead to resource leaks. For example:
     ```cpp
     class ResourceHolder {
     public:
         ResourceHolder() { /* Acquire resource */ }
         ~ResourceHolder() { /* Release resource */ }
     };

     void someFunction() {
         ResourceHolder res1; // Acquired first
         ResourceHolder res2; // Acquired second
         // ...
     } // Destruction order: res2, res1 (reverse order)
     ```
- If `res2` were destroyed before `res1`, we might leak the resource held by `res1`.

3. **Dependency Management**:
- Objects often have dependencies on other objects within the same scope.
- By calling destructors in reverse order, C++ ensures that dependent objects are still valid when their dependencies are destroyed.
    ```cpp
    Type1 Object1;
    Type2 Object2(Object1);
    ```
- Suppose that Object2 uses some internal resources of Object1 and is valid as long as Object1 is valid. For example, Object2s destructor accesses Object1's internal resource. If it weren't for the guarantee of reverse order of destruction, this would lead to problems.

4. **RAII (Resource Acquisition Is Initialization)**:
- The RAII principle encourages tying resource management (acquisition and release) to object lifetime.
- Constructors acquire resources, and destructors release them.
- By calling destructors in reverse order, C++ adheres to this principle, ensuring proper cleanup.

5. **Nested Scopes and Nested Objects**:
- C++ allows nested scopes (e.g., local blocks within functions).
- Objects created within nested scopes have a well-defined order of construction and destruction.
- The reverse order ensures that innermost objects are destroyed before their enclosing objects.
