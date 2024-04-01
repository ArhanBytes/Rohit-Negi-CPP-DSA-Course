## Homework Questions: 
### Find the Time Complexity :
**Q1)** 
```bash
  for(int i=1;i<=n*n;i++) 
       cout<<"Coder Army";
```

**Ans)** O(n^2) , Ω(n^2) , Θ(n^2).

**Q2)** 
```bash
  for(int i=1;i<=n*n;i=i+2) 
       cout<<"Coder Army";
```
**Ans)** O(n^2) , Ω(n^2) , Θ(n^2).


**Q3)**
```bash
  for(int i=1;i<=n;i++) 
      for(int j=1;j<=n;j=j+5)
      cout<<"Coder Army";
```
**Ans)** O(n^2) , Ω(n^2) , Θ(n^2).

**Q4)** 
```bash
  for(int i=1;i<=n;i++) 
      for(int j=i;j<=n;j=j++)
      cout<<"Coder Army";
```
**Ans)** O(n^2) , Ω(n^2) , Θ(n^2).

**Q5)**
```bash
  for(int i=1;i<=n;i++) 
      for(int j=1;j<=n;j=j*4)
      cout<<"Coder Army";
```
**Ans)** O(n*log4 n) , Ω(n) , Θ(n*log4 n).

**Q6)** 
```bash
  for(int i=1;i<=n;i=i*2) 
      for(int j=1;j<=i;j=j++)
      cout<<"Coder Army";
```
**Ans)** Pending.


**Q7)** 
```bash
  for(int i=1;i<=n;i++) 
      for(int j=1;j<=n;j=j++)
      for(int k=1;k<=n;k=k*3)
      cout<<"Coder Army";

```
**Ans)** O(n^2 * log3 n) , Ω(n^2 * log3 n) , Θ(n^2 * log3 n).

**Q8)** 
```bash
  for(int i=1;i<=n;i++) 
      for(int j=1;j<=n;j=j++)
      for(int k=1;k<=n;k++)
      cout<<"Coder Army";

```
**Ans)** O(n^3) , Ω(n^3) , Θ(n^3).