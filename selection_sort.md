## Selection Sort

Selection Sort is the most intuitive sorting algorithm. In selection sort, the first smallest element is selected from the unsorted array and placed at the first position. After that second smallest element is selected and placed in the second position. The process continues until the array is entirely sorted.
It improves on the performance of bubble sort by making only one swap for every pass through the list.

### Pseudo code: 
1. Start from the first element (i.e.), index-0, we search the smallest element in the array, and replace it with the element in the first position. 
2. Now we move on to the second element position, and look for smallest element present in the sub-array, from second index to the last index of sub-array.
3. Now replace the second smallest identified in step-2 at the second position in the or original array.
4. Repeat this for all the elements of the array.

### Selection Sort Code

```cpp

#include <stdio.h>
int main()
{

    int count, temp, i, j, number[100], max_position, swap;

    printf("Num of elements: ");
    scanf("%d", &count);

    printf("Enter %d numbers: ", count);
    printf("\n");

    for (i = 0; i < count; i++)
        scanf("%d", &number[i]);

    // Selection Sort algorithm
    for (i = 0; i < (count - 1); i++)
    {
        max_position = i;
        for (j = i + 1; j < count; j++)
        {
            // updating the index of the largest number
            if (number[max_position] > number[j])
                max_position = j;
        }
        if (max_position != i)
        {
            swap = number[i];
            number[i] = number[max_position];
            number[max_position] = swap;
        }
    }
    printf("Sorted numbers are: ");
    for (i = 0; i < count; i++)
        printf("%d ", number[i]);
    printf("\n");
    return 0;
}

```
### Time complexity

- Worst Case: O(n<sup>2</sup>)
- Best Case: Ω(n<sup>2</sup>)
- Average Case: θ(n<sup>2</sup>)


### Additional Resources

- [GFG Article](https://www.geeksforgeeks.org/selection-sort/)
- [Visiulaization of the algorithm](https://visualgo.net/en/sorting)