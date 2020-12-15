# Leetcode problem 54: Spiral Matrix

## Efficiency:
![efficiency](/54.%20Spiral%20Matrix/eff.PNG)
* Complexity: O(m*n), where m is the number of rows in the matrix, and n is the number of columns in the matrix

## Problem Description:
Given an m x n matrix, return all elements of the matrix in spiral order.

**Example 1**
![ex1](/54.%20Spiral%20Matrix/ex1.PNG)
```
Input: matrix = [[1,2,3],[4,5,6],[7,8,9]]
Output: [1,2,3,6,9,8,7,4,5]
```

**Example 2**
![ex2](/54.%20Spiral%20Matrix/ex2.PNG)
```
Input: matrix = [[1,2,3,4],[5,6,7,8],[9,10,11,12]]
Output: [1,2,3,4,8,12,11,10,9,5,6,7]
```

**Constraints**
```
m == matrix.length
n == matrix[i].length
1 <= m, n <= 10
-100 <= matrix[i][j] <= 100
```
