<center> <h1>0x1E. C - Search Algorithms</h1> </center>

This repository contains my code solutions for tasks concerning various search algorithms implemented in C, and text files containing the time and space complexity for each in Big O notation.

The notation used is as shown:

O(1)
O(n)
O(n!)
n*m -> O(nm)
n square -> O(n^2)
sqrt n -> O(sqrt(n))
log(n) -> O(log(n))
n * log(n) -> O(nlog(n))

Tasks:

<h2>0. Linear search</h2>
Write a function that searches for a value in an array of integers using the Linear search algorithm:

Prototype : int linear_search(int *array, size_t size, int value);
Where array is a pointer to the first element of the array to search in
size is the number of elements in array
And value is the value to search for
Your function must return the first index where value is located
If value is not present in array or if array is NULL, your function must return -1
Every time you compare a value in the array to the value you are searching, you have to print this value.

<h3>File: [0-linear.c]()</h3>

