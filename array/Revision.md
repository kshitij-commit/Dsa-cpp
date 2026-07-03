

*** 04_productOfArray ***

## Minimum Steps to Make Product Equal to One

Pattern:
- Greedy
- Observation

Intuition:
- Convert positives to 1 (minimum cost).
- Convert negatives to -1 (minimum cost).
- Zero can become either 1 or -1 in one operation.
- If the number of negatives is odd:
  - If a zero exists, convert one zero to -1.   // we didnt do anything here 
  - Otherwise, convert one -1 to 1 (cost = 2). 

Time Complexity:
- O(n)

Space Complexity:
- O(1)


*** 05_missingNumber ***

## Missing Number

Pattern:
- Mathematics

Learning:
- Calculate expected sum using n(n+1)/2.
- Subtract array sum to get the missing number.
- Use long long to avoid integer overflow.
- Another optimal solution exists using XOR.

*** 06_find-duplicates***

## Find Duplicate Elements

Pattern:
- Brute Force
- Nested Loops

Learning:
- Compare every element with the remaining elements.
- Store each duplicate only once.
- Before inserting into the answer, check if it is already present.
- Brute force solution works but is not optimal because checking the answer vector increases the complexity.

Complexity:
- Time : O(n³)
- Space : O(n)