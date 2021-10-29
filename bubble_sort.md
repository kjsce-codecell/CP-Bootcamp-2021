## Bubble Sort

Bubble sort is a simple sorting algorithm. The algorithm starts at the beginning of the list of values stored in an array. It compares each pair of adjacent elements and swaps them if they are in the unsorted order.


### Pseudo code: 
1. Start with the fist element i.e., index = 0, compare the current element with the next element of the array. 
2.  If the current element is greater than the next element of the array, swap them. 
3. If the current element is less than the next or right side of the element, move to the next element. 
4. Go to Step 1 and repeat until end of the index is reached.

### Bubble Sort Code

```cpp
#include <stdio.h>
#include <stdbool.h>
int main()
{
    int count, temp, i, j, number[100];
    bool swapped;
    printf("Num of elements: ");
    scanf("%d", &count);

    printf("Enter %d numbers: ", count);
    printf("\n");

    for (i = 0; i < count; i++)
        scanf("%d", &number[i]);

    // Bubble sort algorithm
    for (int i = 0; i < count; i++)
    {
        swapped = false;
        for (int j = 0; j < count - i - 1; j++)
        {
            // swap the numbers if the first number is greater than the second number
            if (number[j] > number[j + 1])
            {
                temp = number[j];
                number[j] = number[j + 1];
                number[j + 1] = temp;
                swapped = true;
            }
        }
        // if no elements were swapped during a pass through the array, then the array is sorted
        if (swapped == false)
            break;
    }
    printf("Sorted numbers are: ");
    for (i = 0; i < count; i++)
        printf(" %d", number[i]);

    printf("\n");
    return 0;
}

 ```

### Time complexity

- Worst Case: O(n<sup>2</sup>)
- Best Case: Ω(n)
- Average Case: θ(n<sup>2</sup>)

### Additional Resources

- [GFG Article](https://www.geeksforgeeks.org/bubble-sort/)
- [Visiulaization of the algorithm](https://visualgo.net/en/sorting)