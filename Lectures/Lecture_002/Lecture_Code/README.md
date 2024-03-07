## Lecture Questions:
### Question 1: Sum of two Numbers
#### Flowchart:

![Q1](https://github.com/ArhanBytes/Rohit-Negi-CPP-DSA-Course/blob/main/Lectures/Lecture_002/Lecture_Code/sumOfTwo.PNG)

#### Pseudocode:
- START
- READ a, b
- ans = a+b
- WRITE ans
- END

### Question 2: Average of two Numbers

#### Flowchart:
![Q2](https://github.com/ArhanBytes/Rohit-Negi-CPP-DSA-Course/blob/main/Lectures/Lecture_002/Lecture_Code/avgOfTwo.PNGG)

#### Pseudocode:
- START
- READ a, b
- ans = (a+b)/2
- WRITE ans
- END

### Question 3: Cube of a number

#### Flowchart:
![Q3](https://github.com/ArhanBytes/Rohit-Negi-CPP-DSA-Course/blob/main/Lectures/Lecture_002/Lecture_Code/CubeOfNum.PNG)

#### Pseudocode:
- START
- READ a
- ans =  a * a * a 
- WRITE ans
- END

### Question 4: Is it raining or not
#### Flowchart:
![Q4](https://github.com/ArhanBytes/Rohit-Negi-CPP-DSA-Course/blob/main/Lectures/Lecture_002/Lecture_Code/isRaining.PNG)

#### Pseudocode:
- START
- READ raining
- IF (raining = YES) THEN
  - WRITE "Not going"
- ELSE 
  - WRITE "going"
- END

### Question 5: Even or Odd
#### Flowchart:
![Q5](https://github.com/ArhanBytes/Rohit-Negi-CPP-DSA-Course/blob/main/Lectures/Lecture_002/Lecture_Code/EvenOrOdd.PNG)

#### Pseudocode:
- START
- READ num
- IF (num % 2 == 0) THEN
  - WRITE "EVEN"
- ELSE
  -  WRITE "ODD"
- END

### Question  6: Print number n times.
#### Flowchart:
![Q6](https://github.com/ArhanBytes/Rohit-Negi-CPP-DSA-Course/blob/main/Lectures/Lecture_002/Lecture_Code/printNo_nTimes.PNG)

#### Pseudocode:
- 1: START
- 2: READ num, n
- 3: count=1
- 4: WRITE num
- 5: count= count + 1
- 6: IF (count <= n) Then GOTO line 4
- 7: ELSE GOTO LINE 8
- 8: END

### Question  7: Print n natural numbers
#### Flowchart:
![Q7](https://github.com/ArhanBytes/Rohit-Negi-CPP-DSA-Course/blob/main/Lectures/Lecture_002/Lecture_Code/printN_naturalNos.PNG)

#### Pseudocode:
- 1: START
- 2: READ n
- 3: count=1
- 4: WRITE count
- 5: count= count + 1
- 6: IF (count <= n) Then GOTO line 4
- 7: ELSE GOTO LINE 8
- 8: END

#### Question  8: Sum of n natural numbers
#### Flowchart:
![Q8](https://github.com/ArhanBytes/Rohit-Negi-CPP-DSA-Course/blob/main/Lectures/Lecture_002/Lecture_Code/sumOfN_naturalNos.PNG)

### Pseudocode:
- 1: START
- 2: READ n
- 3: sum = 0
- 4: count=1
- 5: sum = sum + count
- 6: count= count + 1
- 7: IF (count <= n) Then GOTO line 5
- 8: ELSE GOTO LINE 9
- 9: END


### Question  9: Prime or Not Prime
#### Flowchart:
![Q9](https://github.com/ArhanBytes/Rohit-Negi-CPP-DSA-Course/blob/main/Lectures/Lecture_002/Lecture_Code/IsPrime.PNG)

#### Pseudocode:
- START
- READ n
- IF n < 2 THEN
  -  WRITE "Not Prime"
  -  END
- ELSE 
  -  Div = 2
  -  WHILE Div < n DO 
     -   IF n % Div == 0 THEN 
         -   WRITE "Not Prime"
         -   END
     -   ELSE 
         -    Div = Div + 1
  -  END WHILE
  -  WRITE "Prime"
- END 