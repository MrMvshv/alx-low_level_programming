<center> <h1>0x1E. C - Search Algorithms</h1> </center>

This repository contains my code solutions for tasks concerning various search algorithms implemented in C, and text files containing the time and space complexity for each in Big O notation.

The notation used is as shown:
<ul>
<li>O(1)</li>
<li>O(n)</li>
<li>O(n!)</li>
<li>n*m -> O(nm)</li>
<li>n square -> O(n^2)</li>
<li>sqrt n -> O(sqrt(n))</li>
<li>log(n) -> O(log(n))</li>
<li>n * log(n) -> O(nlog(n))</li>
</ul>

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

File: [0-linear.c](https://github.com/MrMvshv/alx-low_level_programming/blob/main/0x1E-search_algorithms/0-linear.c)

<h2>1. Binary search</h2>
Write a function that searches for a value in a sorted array of integers using the Binary search algorithm

Prototype : int binary_search(int *array, size_t size, int value);
Where array is a pointer to the first element of the array to search in
size is the number of elements in array
And value is the value to search for
Your function must return the index where value is located
You can assume that array will be sorted in ascending order
You can assume that value won’t appear more than once in array
If value is not present in array or if array is NULL, your function must return -1
You must print the array being searched every time it changes. (e.g. at the beginning and when you search a subarray)

File: [1-binary.c](https://github.com/MrMvshv/alx-low_level_programming/blob/main/0x1E-search_algorithms/1-binary.c)


<h2>2. Big O #0</h2>
What is the time complexity (worst case) of a linear search in an array of size n?

File: [2-0](https://github.com/MrMvshv/alx-low_level_programming/blob/main/0x1E-search_algorithms/2-0)


<h2>3. Big O #1</h2>
What is the space complexity (worst case) of an iterative linear search algorithm in an array of size n?

File: [3-0](https://github.com/MrMvshv/alx-low_level_programming/blob/main/0x1E-search_algorithms/3-0)


<h2>4. Big O #2</h2>
What is the time complexity (worst case) of a binary search in an array of size n?

File: [4-0](https://github.com/MrMvshv/alx-low_level_programming/blob/main/0x1E-search_algorithms/4-0)


<h2>5. Big O #3</h2>
What is the space complexity (worst case) of a binary search in an array of size n?

File: [5-0](https://github.com/MrMvshv/alx-low_level_programming/blob/main/0x1E-search_algorithms/5-0)


<h2>6. Big O #4</h2>

What is the space complexity of this function / algorithm?

int **allocate_map(int n, int m)
{
     int **map;

     map = malloc(sizeof(int *) * n);
     for (size_t i = 0; i < n; i++)
     {
          map[i] = malloc(sizeof(int) * m);
     }
     return (map);
}

File: [6-0](https://github.com/MrMvshv/alx-low_level_programming/blob/main/0x1E-search_algorithms/6-0)
