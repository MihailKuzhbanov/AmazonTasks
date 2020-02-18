# AmazonTasks
## Task 0

 This is a demo task.

 Write a function: int solution(vector<int> &A);

that, given an array A of N integers, returns the smallest positive integer (greater than 0) that does not occur in A.
For example, given A = [1, 3, 6, 4, 1, 2], the function should return 5.
Given A = [1, 2, 3], the function should return 4.
Given A = [−1, −3], the function should return 1.
Write an efficient algorithm for the following assumptions:
N is an integer within the range [1..100,000];
each element of array A is an integer within the range [−1,000,000..1,000,000].

## Task 1

Alice and Bob work in a beautiful orchard. There are N apple trees in the orchard. The apple trees are arranged in a row and they are numbered from 1 to N. Alice is planning to collect all the apples from K consecutive trees and Bob is planning to collect all the apples from L consecutive trees. They want to choose two disjoint segments (one consisting of K trees for Alice and the other consisting of L trees for Bob) so not to disturb each other. What is the maximum number of apples that they can collect?

Write a function: int solution(vector<int> &A, int K, int L);

that, given an array A consisting of N integers denoting the number of apples on each apple tree in the row, and integers K and L denoting, respectively, the number of trees that Alice and Bob can choose when collecting, returns the maximum number of apples that can be collected by them, or -1 if there are no such intervals. Since the answer can be very large, provide it modulo 1,000,000,007 (109 + 7).
For example, given A = [6, 1, 4, 6, 3, 2, 7, 41, K = 3, L= 2, your function should return 24, because Allice can choose trees 3 to 5 and collect 4 +6+3 = 13 apples, and Bob can choose trees 7 to 8 and collect 7 +4 = 11 apples.
Thus, they will collect 13 + 11 = 24 apples in total, and that is the maximum number that can be achieved.
Given A = [10, 19, 15], K = 2, L= 2, your function should return -1, because it is not possible for Alice and Bob to choose two disjoint intervals.

Write an efficient algorithm for the following assumptions:
Nis an integer within the range [2.100,000]; K and L are integers within the range [1.N - 1);
each element of array A is an integer within the range [1.1,000,000,000).

##  Task 2

Integer V lies strictly between integers U and W if U< V<W or if U > V> W. O solution.cpp O test-input.txt A non-empty array A consisting of N Integers is given. A pair of indices (P. Q), where 0 SP<Q< N, is said to have adjacent values if no value in the array lies strictly between values A[P] and A[Q).
For example, in array A such that: A[0] A[1] A[2] = 3 A[3] = 7 A[4] = 5 A[S] = 3 A[6] = 11 A[7] = 1 the following pairs of indices have adjacent values:
(0, 7), (1, 5), (2, 5), (3, 6), (1, 2), (1, 7), (2, 7), (4, 5), (1, 4), (2, 4), (3, 4), (5, 7).
For example, indices 4 and 5 have adjacent values because there is no value in array A that lies strictly between A[4] = 5 and A[5] = 3; the only such value could be the number 4, and it is not present in the array.
Given two indices P and Q, their distance is defined as abs(AIP] - A[QI), where abs(X) = X for X2 0, and abs(X) = -X for X< 0. For example, the distance between Indices 4 and 5 is 2 because (A[4- A[5) = (5- 3) = 2.

Write a function: int solution(vector<int> M);

that, given a non-empty array A consisting of N Integers, returms the minimum distance between Indices of this array that have adjacent values.
The function should return -1 If the minimum distance is greater than 100,000,000.
The functlon should return -2 If no adjacent Indices exist.
Test Output For example, given array A such that: A[0] A[1] = A[2] = A[3] = 7 A[4] = 5 A[5] = 3 A[6] = 11 A[7] = 1 the function should return 0 because:
indices 1 and 2 are adjacent, because the array does not contain any value that lles strictly between A[1] =3 and A[2] = 3;
the distance between these Indices is (A[1]- A[21) = (3 - 3) = 0;
no other pair of adjacent indices that has smaller distance exists.

Write an efficient algorithm for the following assumptions:
Nis an integer within the range [1.40,000);
each element of array A is an integer within the range (-2,147,483,648.2,147,483,647].
