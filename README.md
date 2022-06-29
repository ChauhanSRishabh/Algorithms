# Algorithms

All you need to know about important algorithms.

## Sorting

### Bubble Sort

Think of 2 adjacent elements in the array as 2 bubbles and compare them and swap them accordingly(ascending/descending). Start with the first 2 and go on compring till you compare the elements at index (n-2) and (n-1). By the end of this pass, you'd have the largest/smallest element at index (n-1). *No. of checks done = (n-1)*. This would be **Pass 1**.  
For **Pass 2**, checks will be done from Index 0 to (n-2) as (n-1)the element is already in place. By the end of this pass, you'd have the 2nd largest/smallest element at index (n-2). *No. of checks done = (n-2)*  
Proceed accordingly and by Pass (n-1), all elements from Index (n-1) to Index 1 would be sorted and then the only element left would be the one at Index 0 and that'd be automatically in place.

Total Passes = n-1 ; n being the length of array
Total checks for each Pass, p = (n-p)