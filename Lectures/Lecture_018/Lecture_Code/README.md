## Time and Space Complexity 
**Q)** What is time Complexity?

**Ans)** It is the total time taken by an algorithm to run - as a fn of length of the input.

**Q)** What is Space Complexity ?

**Ans)** It is the amount of space taken by an algorithm - as a fn of length of i/p.

## Time Complexity (Worst to Best)

- O(N!)
- O(2^N)
- O(N^3)
- O(N^2)
- O(N*logn)
- O(N)
- O((n)^1/2)
- O(logn)
- O(1)

### Find the Time Complexity :
**Q1)** 
```bash
  for(int i=1;i<=n;i++) 
       cout<<"Coder Army";
```

**Ans)** O(n) , Ω(n) , Θ(n).

**Q2)** 
```bash
  for(int i=0;i<=n;i++){
    if(arr[i] == x){
        cout<<"Got it";
        break;
    }
  }
```
**Ans)** O(n) , Ω(1) , Θ(n).


**Q3)**
```bash
  for(int i=1;i<10;i++)
    cout<<"Chamka";
```
**Ans)** O(1) , Ω(1) , Θ(1).

**Q4)** 
```bash
      cout<<n*((n+1)/2);
```
**Ans)** O(1) , Ω(1) , Θ(1).

**Q5)**
```bash
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n; j++)
            cout << "Chamka";
    }
```
**Ans)**  O(n^2) , Ω(n^2) , Θ(n^2).

**Q6)** 
```bash
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= i; j++)
            cout << "Chamka";
    }
```
**Ans)** 


**Q7)** 
```bash
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= i * i; j++)
            cout << "Chamka";
    }

```
**Ans)** O(n^3) , Ω(n^3) , Θ(n^3).

**Q8)** 
```bash
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= m; j++)
            cout << "Chamka";
    }
```
**Ans)** O(n*m) , Ω(n*m) , Θ(n*m).

**Q9)** 
```bash
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= i * i; j++)
        {
            for (k = 1; k = n / 2; k++)
                cout << "Chamka";
        }
    }
```
**Ans)** O(n^4) , Ω(n^4) , Θ(n^4).

**Q10)** 
```bash
    for (i = 1; i <= n; i = i * 2)
    {
        cout << "Chamka";
    }
```
**Ans)** O(log2n) , Ω(log2n) , Θ(log2n).

**Q11)** 
```bash
    for (i = n / 2; i <= n; i++)
    {
        for (j = 1; j <= n / 2; j++)
        {
            for (k = 1; k = n; k++)
                cout << "Chamka";
        }
    }
```
**Ans)** O(n^3) , Ω(n^3) , Θ(n^3).

**Q12)** 
```bash
    for (i = n / 2; i <= n; i++)
    {
        for (j = 1; j <= n / 2; j = j * 2)
        {
            for (k = 1; k = n; k = k * 2)
                cout << "Chamka";
        }
    }
```
**Ans)**  O(n(log2n)^2) , Ω(n(log2n)^2) , Θ(n(log2n)^2).

**Q13)** 
```bash
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n; j = j + i)
            cout << "Chamka";
    }
```
**Ans)** O(n*loge(n)) , Ω(n*loge(n)) , Θ(n*loge(n)).

