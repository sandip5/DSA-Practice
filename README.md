Day - 1
1. Find the Kth largest and Kth smallest number in an array
2. Sort the array of 0s, 1s, and 2s
3. Move all the negative elements to one side of the array [Incomplete]
4. Find the Union and Intersection of the two sorted arrays
5. Subarray with given Sum [Untouched]

Day - 2
1. Power function
Implement pow(X, N), which calculates x raised to the power N i.e. (X^N). Try using a recursive approach
Input:
2
2.10 3
2.00 -2

Output:
9.26
0.25

Explanation: 2^(-2) = 1/2^2 = 1/4 = 0.25

2. Factorial - Recursion
Find factorial of a given number N.

3. Tower of Hanoi
The Tower of Hanoi is a mathematical puzzle where we have 3 rods and N disks. The puzzle starts with all the disks in ascending order of size on the first row. The objective of the puzzle is to move the entire stack to another rod, obeying the following simple rules:

1. Only one disk can be moved at a time.
2. Each move consists of taking the upper disk from one of the stacks and placing it on top of another stack or on an empty rod.
3. No larger disk may be placed on top of a smaller disk.

Input

2

Output

1:A->B

2:A->C

1:B->C

Day 3

1. Given an array of integers. Find the Inversion Count in the array.  

Input: N = 5, arr[] = {2, 4, 1, 3, 5}
Output: 3
Explanation: The sequence 2, 4, 1, 3, 5  
has three inversions (2, 1), (4, 1), (4, 3).

2. Given an array, rotate the array by one position in clock-wise direction.

Input:
N = 5
A[] = {1, 2, 3, 4, 5}
Output:
5 1 2 3 4

  

3. Given an array Arr[] of N integers. Find the contiguous sub-array(containing at least one number) which has the maximum sum and return its sum.

Input:
N = 5
Arr[] = {1,2,3,-2,5}
Output:
9
Explanation:
Max subarray sum is 9
of elements (1, 2, 3, -2, 5) which 
is a contiguous subarray.

Day 4

1. Given N coordinates on a two dimensional plane. Find the area of the smallest rectangle such that all the points can lie inside or on the rectangle boundary.
Note - the sides of rectangle should be parallel to x and y axis. [ Untouched ]
Sample Input
2
0 0
1 1

Sample Output
1

Explanation: required rectangle has corners at (0, 0) (0, 1) (1, 1) (1, 0)

2. You have N coins with either an integer (between 0-9) written on one side and an english letter (a- z) written on the other side.

The following statement must be true for all coins:
If the coin has a vowel on one side, then it must have an even integer on other side.

For example coin having 'b' and '3' is valid (since 'b' is not a vowel, other side can be anything), coin having 'a' and '4' is valid, but coin having 'a' and '5' is invalid.

Now you're given just one side of each coin, find the minimum number of coins you need to flip to check the authenticity of the statement.

Sample Input
ee

Sample Output
2

Explanation: You need to flip both the coins to make sure an even integer is there on the other side of coin.

Sample Input
0ay1

Sample Output
2

3. Given an array of N elements where each element is either 1 or 0. You have to divide the array into maximum number of subarrays such that each element of the array is in exactly one subarray such that each subarray has equal number of 1's and 0's. [Incomplete]

Sample input 1
4
1 0 1 0

Sample output 1
2

Sample input 2
4
1 1 0 0

Sample output 2
1

4. Given a string of length N, count the number of vowels present at even places.

Sample Input:-
12
newtonschool

Sample Output:-
2

Sample Input:-
5
basid

Sample Output:-
2
