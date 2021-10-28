## Binary Search

Binary search is the search technique which works efficiently on the sorted lists. Hence, in order to search an element into some list by using binary search technique, we must ensure that the list is sorted.

Binary search follows divide and conquer approach in which, the list is divided into two halves and the item is compared with the middle element of the list. If the match is found then, the location of middle element is returned otherwise, we search into either of the halves depending upon the result produced through the match.


### Binary Search Code

```cpp

int binarySearch(int low,int high,int key)
{
   while(low<=high)
   {
     int mid=(low+high)/2;
     if(a[mid]<key)
     {
         low=mid+1;
     }
     else if(a[mid]>key)
     {
         high=mid-1;
     }
     else                   // a[mid] == key
     {
         return mid;
     }
   }
   return -1;                //key not found
 }

 ```

### Time complexity

O(logN)

### Question

Given a sorted integer array, find the index of a given number's first and last occurrence. If the element is not present in the array report that as well. Solve using Binary Search.

#### Eg Input:
nums = [2, 5, 5, 5, 6, 6, 8, 9, 9, 9]
target = 5

#### Eg Output:
The first occurrence of element 5 is located at index 1
The last occurrence of element 5 is located at index 3




### Additional Resources

- GFG Article: https://www.geeksforgeeks.org/binary-search/
- Practice problems based on binary search: https://www.hackerearth.com/practice/algorithms/searching/binary-search/practice-problems/
- Visiulaization of the algorithm: https://www.cs.usfca.edu/~galles/visualization/Search.html