## Homework Exercise: 
**Q1:** :  Use a quick sort algorithm to sort elements in descending order. [Here](https://github.com/ArhanBytes/Rohit-Negi-CPP-DSA-Course/blob/main/Lectures/Lecture_060/Homework/sort_in_desc.cpp)


### **2️⃣ Stable Algorithm**

A **stable sorting algorithm** keeps the **relative order** of equal elements the same as in the original list.

👉 **Example:**
If we sort by marks, and two students have the same marks, a stable sort will keep them in the same order as before sorting.

| Name  | Marks |
| ----- | ----- |
| Ali   | 90    |
| Sara  | 80    |
| Bilal | 80    |

After sorting (ascending marks):
Stable → Sara still comes before Bilal because she was first among equals.

---

#### **Stability of Algorithms**

| Algorithm          | Stable or Not | Reason                                                         |
| ------------------ | ------------- | -------------------------------------------------------------- |
| **Bubble Sort**    | ✅ Stable      | Swaps only adjacent elements, doesn’t change equal ones’ order |
| **Selection Sort** | ❌ Not stable  | May swap distant elements, changing equal ones’ order          |
| **Insertion Sort** | ✅ Stable      | Inserts equal elements in the same order                       |
| **Merge Sort**     | ✅ Stable      | During merge, it keeps equal elements’ original order          |
| **Quick Sort**     | ❌ Not stable  | Pivot swaps can reorder equal elements                         |

---

### **3️⃣ In-place Algorithm**

An **in-place algorithm** sorts the data **without using extra memory** (uses only a few variables).
→ It rearranges elements **inside the original array**.

---

#### **In-placeness of Algorithms**

| Algorithm          | In-place or Not | Reason                                               |
| ------------------ | --------------- | ---------------------------------------------------- |
| **Bubble Sort**    | ✅ In-place      | Only uses a few temporary variables                  |
| **Selection Sort** | ✅ In-place      | Swaps within the same array                          |
| **Insertion Sort** | ✅ In-place      | Shifts elements inside the same array                |
| **Merge Sort**     | ❌ Not in-place  | Needs extra arrays to merge                          |
| **Quick Sort**     | ✅ In-place      | Uses same array and swaps (but uses recursion stack) |

---

### ✅ **Summary Table**

| Algorithm      | Stable? | In-place? |
| -------------- | ------- | --------- |
| Bubble Sort    | ✅       | ✅         |
| Selection Sort | ❌       | ✅         |
| Insertion Sort | ✅       | ✅         |
| Merge Sort     | ✅       | ❌         |
| Quick Sort     | ❌       | ✅         |

---
