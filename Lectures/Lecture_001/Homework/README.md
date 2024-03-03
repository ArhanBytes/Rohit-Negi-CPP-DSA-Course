# Introduction To Programming 
### Home work Questions
### Q: Convert Decimal to Binary
**1) 37** 
- 37/2 = 18 remainder 1 (LSB)
- 18/2 = 9 remainder 0
- 9/2 = 4 remainder 1
- 4/2 = 2 remainder 0
- 2/2 = 1 remainder 0
- 1/2 = 0 remainder 1 (MSB)
- So, **37 = 100101**.

**2) 92**
- 92/2 = 46 remainder 0 (LSB)
- 46/2 = 23 remainder 0
- 23/2 = 11 remainder 1
- 11/2 = 5 remainder 1
- 5/2 = 2 remainder 1
- 2/2 = 1 remainder 0
- 1/2 = 0 remainder 1 (MSB)
- So, **92 = 1011100**.

**3) 128**
- 128/2 = 64 remainder 0 (LSB)
- 64/2 = 32 remainder 0
- 32/2 = 16 remainder 0
- 16/2 = 8 remainder 0
- 8/2 = 4 remainder 0
- 4/2 = 2 remainder 0
- 2/2 = 1 remainder 0
- 1/2 = 0 remainder 1 (MSB)
- So, **128 = 10000000**.

**4) 243**

- 243/2 = 121 remainder 1 (LSB)
- 121/2 = 60 remainder 1
- 60/2 = 30 remainder 0
- 30/2 = 15 remainder 0
- 15/2 = 7 remainder 1
- 7/2 = 3 remainder 1
- 3/2 = 1 remainder 1
- 1/2 = 0 remainder 1 (MSB)
- So, **243 = 11110011**.

### Q: Convert Binary to Decimal
**5) 1011**

- 1*(2^3) + 0*(2^2) + 1*(2^1) + 1*(2^0) 
-  8 + 0 + 2 + 1 
-  11
- So, **1011 = 11**.

**6) 111001**

- 1*(2^5) + 1*(2^4) + 1*(2^3) + 0*(2^2) + 0*(2^1) + 1*(2^0) 
- 32 + 16 + 8 + 0 + 0 + 1 
- 57
- So, **111001 = 57**.

**7) 10011011**

- 1*(2^7) + 0*(2^6) + 0*(2^5) + 1*(2^4) + 1*(2^3) + - 0*(2^2) + 1*(2^1) + 1*(2^0) 
- 128 + 0 + 0 + 16 + 8 + 0 + 2 + 1 
- 155
- So, **10011011 = 155**.

**8) 10100100**

- 1*(2^7) + 0*(2^6) + 1*(2^5) + 0*(2^4) + 0*(2^3) + 1*(2^2) + 0*(2^1) + 0*(2^0) 
- 128 + 0 + 32 + 0 + 0 + 4 + 0 + 0 
- 164
- So, **10100100 = 164**.

### Q: Convert Decimal to Octal 

**9) 28**

- 28/8 = 3 remainder 4 (LSB)
- 3/8 = 0 remainder 3 (MSB)
- So, **28 = 34**.

**10) 47**

- 47/8 = 5 remainder 7 (LSB)
- 5/8 = 0 remainder 5 (MSB)
- So, **47 = 57**.

**11) 928**

- 928/8 = 116 remainder 0 (LSB)
- 116/8 = 14 remainder 4
- 14/8 = 1 remainder 6
- 1/8 = 0 remainder 1 (MSB)
- So, **928 = 1640**.

**12) 1243**

- 1243/8 = 155 remainder 3 (LSB)
- 155/8 = 19 remainder 3
- 19/8 = 2 remainder 3
- 2/8 = 0 remainder 2 (MSB)
- So, **1243 = 2333**.

### Q: Convert Octal to Decimal
**13) 41**

- 4*(8^1) + 1*(8^0) 
- 32 + 1
- 33
- So, **41 = 33**.

**14) 207**

- 2*(8^2) + 0*(8^1) + 7*(8^0) 
- 128 + 0 + 7 
- 135
- So, **207 = 135**.

**15) 124**

- 1*(8^2) + 2*(8^1) + 4*(8^0) 
- 64 + 16 + 4 
- 84
- So, 124 in decimal is 84.

**16) 311**

- 3*(8^2) + 1*(8^1) + 1*(8^0) 
- 192 + 8 + 1 
- 201
- So, **311 = 201**.

### Q: Convert Decimal to HexaDecimal
**17) 317**

- 317/16 = 19 remainder 13 (D)
- 19/16 = 1 remainder 3
- 1/16 = 0 remainder 1
- So, **317 = 13D**.

**18) 41**

- 41/16 = 2 remainder 9
- 2/16 = 0 remainder 2
- So, **41 = 29**.

**19) 14**

- 14/16 = 0 remainder 14 (E)
- So, **14 = E**.

**20) 845**

- 845/16 = 52 remainder 13 (D)
- 52/16 = 3 remainder 4
- 3/16 = 0 remainder 3
- So, **845 = 34D**.

### Q: Convert HexaDecimal to Decimal
**21) A11**

- 10*(16^2) + 1*(16^1) + 1*(16^0) 
- 2560 + 16 + 1 
- 2577
- So, **A11 in = 2577**.

**22) 49**

- 4*(16^1) + 9*(16^0) = 64 + 9 
- 73
- So, **49 = 73**.

**23) AE2F**

- 10*(16^3) + 14*(16^2) + 2*(16^1) + 15*(16^0)
- 40960 + 3584 + 32 + 15 
- 44591
- So, **AE2F = 44591**.

**24) D97**

- 13*(16^2) + 9*(16^1) + 7*(16^0) 
- 3328 + 144 + 7
- 3479
- So, **D97 = 3479**.

**Note:** In hexadecimal, 
- 10 = A
- 11 = B
- 12 = C
- 13 = D
- 14 = E
- 15 = F