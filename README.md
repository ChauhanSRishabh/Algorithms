# Algorithms

All you need to know about important algorithms.

## Sorting

### Concepts

- **Sort Stability** : A sorting algorithm is said to be stable if two objects with equal keys appear in the same order in sorted output as they appear in the input array to be sorted.  
Example: *Bubble sort, Insertion sort, Merge sort*.
<img width="876" alt="Stable vs Unstable sort" src="https://user-images.githubusercontent.com/15028913/176631963-b92bdc18-f7d0-4cee-9688-e7b3aabfe790.png">

- **In place Sort** : An in-place sorting algorithm uses constant space for producing the output (modifies the given array only). It sorts the list only by modifying the order of the elements within the list.  
For example, *Selection, Bubble, Insertion Sort* are in-place sorting algorithms as they do not use any additional space for sorting the list and a typical implementation of *Merge Sort is not in-place*.

----

### Selection Sort

Given an array of elements that needs to be sorted in ascending order using Selection Sort,find the smallest number in the array and put in the first place, then find the second smallest number and put in the second place, and so on.

**Pass 1**  
Search smallest element from arr[0] to arr[n-1]  
*No. of comparisons = (n-1)*  
Exchange this element with arr[0]  
arr[0] is sorted

**Pass 2**  
Search the smallest element from arr[1] to arr[n-1]    
*No. of comparisons = (n-2)*  
Exchange this element with arr[1]  
arr[0] and arr[1] are sorted

**Pass n-1**  
Search smallest element from Index (n-2) to (n-1)  
*No.of comparisons = 1*  
Exchange with element at Index (n-2)  
arr[0], arr[1],...............arr[n-2] are sorted

All elements except the last one have been put in their proper place. The last element arr[n-1] will definitely be the largest.

**Total Passes = n-1** ; n being the length of array  
**Total Comparisons = n(n-1)/2** ; (n-1) + (n-2) + (n-3) + .............+ 3 + 2 + 1 

**Time Complexity**  
Sorted, Reverse sorted, Random Order Array : **O(n²)**  
No. of comparisons performed are same, whether the input data is sorted, reverse sorted, or in random order.

**Space Complexity** : **O(1)**  
**In-place sort**  
**Not a stable sort**. To know why, [click here](https://www.geeksforgeeks.org/stable-selection-sort/#:~:text=Selection%20sort%20works%20by%20finding,is%20what%20makes%20it%20unstable)

----

### Bubble Sort

Think of 2 adjacent elements in the array as 2 bubbles and compare them and swap them accordingly(ascending/descending).

**Pass 1**  
Start with the first 2 elements and go on comparing and swapping(if out of place) till you compare the elements at index (n-2) and (n-1).  
By the end of this pass, you'd have the largest/smallest element at index (n-1).  
*Total Comparisons = (n-1)*.

**Pass 2**  
Checks will be done from Index 0 to (n-2) as (n-1)th element is already in place.  
By the end of this pass, you'd have the 2nd largest/smallest element at index (n-2).  
*Total Comparisons = (n-2)*

**Pass (n-1)**  
All elements from Index (n-1) to Index 1 would be sorted and then the only element left would be the one at Index 0 and that'd be automatically in place.

**Total Passes = n-1** ; n being the length of array  
**Total Comparisons = n(n-1)/2** ; (n-1) + (n-2) + (n-3) + .............+ 3 + 2 + 1

**Time Complexity**  
- **Sorted Array** : **O(n)** ; 1 Pass, (n-1) Comparisons, 0 Swaps  
Only one pass is required, hence only one iteration of the outer for loop. Total comparisons would be (n-1) and since array is sorted, swaps would be 0.
- **Reverse Sorted Array** : **O(n²)** ; (n-1) Passes, n(n-1)/2 Comparisons, Swaps = Comparisons
- **Data in Random Order** : **O(n²)**

**Space Complexity** : **O(1)**  
**In-place sort**  
**Stable sort**

----

### Insertion Sort

Insertion sort is a simple sorting algorithm that works similar to the way you sort playing cards in your hands.  
The array is virtually split into a sorted and an unsorted part. Sorted part contains only the first element of the list and the unsorted part contains the rest of the elements.  
In each pass, values from the unsorted part are picked and placed at the correct position in the sorted part.

**Pass 1**  
Sorted part : arr[0]  
Unsorted part : arr[1] to arr[n-1]  
arr[1] is inserted before or after arr[0]  
Result : arr[0] and arr[1] are sorted

**Pass 2**  
Sorted part : arr[0], arr[1]  
Unsorted part : arr[2] to arr[n-1]  
arr[2] is inserted before arr[0], or in between arr[0] and arr[1] or after arr[1]  
Result : arr[0], arr[1] and arr[2] are sorted

**Pass n-1**  
Sorted part : arr[0] to arr[n-2]  
Unsorted part : arr[n-1]  
arr[n-1] is inserted at it's proper place among arr[0], arr[1],............arr[n-2]  
Result : arr[0], arr[1],........arr[n-1] are sorted

**Time Complexity**  
- **Sorted Array** : **O(n)** ; 1 Pass, (n-1) Comparisons, 0 Swaps  
For each iteration of the outer for loop, arr[i] is always in placeand if it is in place, only 1 comparison occurs for that iteration. Outer loop iterates n-1 times, hence Total comparisons would be (n-1)
- **Reverse Sorted Array** : **O(n²)** ; Worst case; (n-1) Passes, n(n-1)/2 Comparisons
- **Data in Random Order** : **O(n²)**

**IMP** : If n is small, Insertion sort is preferred over Merge sort as the difference between n² and nlogn is very less, for small values of n.

**Space Complexity** : **O(1)**  
**In-place sort**  
**Stable sort**

----

### Merge Sort

