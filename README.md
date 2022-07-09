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

The Merge Sort algorithm is a sorting algorithm that is considered as an example of the *divide and conquer* strategy.  
In this algorithm, the array is initially divided into two equal halves and then they are combined in a sorted manner. We can think of it as a *recursive algorithm that continuously splits the array in half until it cannot be further divided*. This means that if the array becomes empty or has only one element left, the dividing will stop, i.e. it is the base case to stop the recursion.  
If the array has multiple elements, we split the array into halves and recursively invoke the merge sort on each of the halves. Finally, when both the halves are sorted, the merge operation is applied.  
**Merge operation** is the process of taking two smaller sorted arrays and combining them to eventually make a larger one.

**This is how merge sort proceeds**  
![Merge-Sort-Tutorial](https://user-images.githubusercontent.com/15028913/177096045-a1968eb8-224f-41fb-8548-b11ef2d20dc9.png)

**Time Complexity**  : **O(nlogn)**  
It is the same for all 3 cases (worst, average and best) as merge sort always divides the array into two halves and takes linear time to merge two halves.

**Space Complexity** : **O(n)**  
**Not an in-place sort**  
**Stable sort**

----

### Quick Sort

Like Merge Sort, QuickSort is a *Divide and Conquer* algorithm. It picks an element as pivot and partitions the given array around the picked pivot.

There are different versions of quickSort that pick pivot in different ways:
- Always pick first element as pivot.
- Always pick last element as pivot (implemented below)
- Pick a random element as pivot.
- Pick median as pivot.

The key process in Quick Sort is partition().  
Target of partitions is, given an array and an element x of array as pivot, put x at its correct position in sorted array and put all smaller elements (smaller than x) before x, and put all greater elements (greater than x) after x. All this should be done in linear time.

**Partition Algorithm** : There can be many ways to do partition. It takes last element as pivot, places the pivot element at its correct position in sorted array and places all smaller elements(smaller than pivot) to the left of pivot(before pivot, if array is to be sorted in ascending order) and all greater elements to right of pivot. All this should be done in linear time.

![QuickSort](https://user-images.githubusercontent.com/15028913/177361504-75eabbc8-016c-48fb-8c58-272715784383.png)

**Time Complexity**
- **Worst Case** : **O(n²)**  
The worst case occurs when the partition process always picks greatest or smallest element as pivot. If we consider our implemented partition strategy where last element is picked as pivot, the worst case would occur when the array is already sorted in increasing or decreasing order. Following is recurrence for worst case.  
- **Best Case** : **O(nlogn)**  
The best case occurs when the partition process always picks the middle element as pivot.
- **Average Case** : **O(nlogn)**

**Space Complexity** : **O(n)**  
**In-place sort** : Uses extra space only for storing recursive function calls but not for manipulating the input.  
**Not a stable sort**

**Quick Sort is preferred over Merge Sort for sorting Arrays**  
Quick Sort in its general form is an in-place sort (i.e. it doesn’t require any extra storage) whereas merge sort requires O(n) extra storage, N denoting the array size which may be quite expensive. Allocating and de-allocating the extra space used for merge sort increases the running time of the algorithm. Comparing average complexity we find that both type of sorts have O(nlogn) average complexity but the constants differ. For arrays, merge sort loses due to the use of extra O(n) storage space.

----

## Searching

### Linear Search

Sequential/Linear search is performed in a linear way, i.e., it starts from the beginning of the list and continues till we find the item or the end is reached.

*This search is good for data structures like linked lists, because no random access to elements(for eg, accessing middle element in binary search) is required.*

**Time Complexity** : **O(n)**
- **Best Case** : The best case is when the item is present at the first posiiton and in this case only one comparison is done. **O(1)**
- **Worst Case** : The worst case ocurs when the item is not present in the array and in this case n comparisons are required, **O(n)**, *n being the total no. of array elements*.
- **Average Case** : **O(n)**

----

### Binary Search

The prerequisite for binary search is that the **array should be sorted**.  
Firstly, we compare the item to be searched with the middle element of the array. If it is found there, our search finishes successfully otherwise the array is divided into 2 equal halves, first half contains all elements to the left of the middle element(ones that are smaller than the middle element) and the other half contains all elements to the right of the middle element(ones that are bigger than the middle element).

If the item to be searched is less than the middle element, it is searched in the left half otherwise it is searched int the right half.  
Suppose the item to be searched was smaller than the middle element, now search proceeds in the smaller portion(left of the middle element) of the array(subarray) as mentioned above.

*Binary search is preferred only where the data is static, i.e., very few insertion and deletions are done. This is because whenever an insertion/deletion is done, many elements have to be moved to keep the data in sorted order. It is also not suitable for linked lists as direct/random access to middle element is required*

**Time Complexity** : **O(log n)**
- **Best Case** : The best case is when the item is present in the middle of the array, and in this case the loop is executed only once. **O(1)**
- **Worst Case** : The worst case ocurs when the item is not present in the array. In each iteration, the array is divided into half, so if the size of the array is n, there will be *log n* such divisions. Thus there will be *log n* comaprisons in worst case. **O(log n)**

----