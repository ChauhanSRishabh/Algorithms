# Algorithms

All you need to know about important algorithms.

## Sorting

### Selection Sort

Given an array of elements that needs to be sorted in ascending order using Selection Sort,find the smallest number in the array and put in the first place, then find the second smallest number and put in the second place, and so on.

**Pass 1**  
Search smallest element from arr[0] to arr[n-1]  
No. of comparisons = (n-1)  
Exchange this element with arr[0]  
arr[0] is sorted

**Pass 2**  
Search the smallest element from arr[1] to arr[n-1]    
No. of comparisons = (n-2)  
Exchange this element with arr[1]  
arr[0] and arr[1] are sorted

**Pass n-1**  
Search smallest element from Index (n-2) to (n-1)  
No.of comparisons = 1  
Exchange with element at Index (n-2)  
arr[0], arr[1],...............arr[n-2] are sorted

All elements except the last one have been put in their proper place. The last element arr[n-1] will definitely be the largest.

**Total Passes = n-1** ; n being the length of array  
**Total Comparisons = n(n-1)/2** ; (n-1) + (n-2) + (n-3) + .............+ 3 + 2 + 1 

**Time Complexity**  
Sorted, Reverse sorted, Random Order Array : **O(n²)**  
No. of comparisons performed are same, whether the input data is sorted, reverse sorted, or in random order.

**Space Complexity** : **O(1)**

**Not a stable sort**

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
- **Data in Random Order** : **O(n²)** ; (n-1) Passes, n(n-1)/2 Comparisons

**Space Complexity** : **O(1)**

**Stable sort**
