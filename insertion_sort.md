## Insertion Sort

Insertion sort works similar to the sorting of playing cards in hands. It is assumed that the first card is already sorted in the card game, and then we select an unsorted card. If the selected unsorted card is greater than the first card, it will be placed at the right side; otherwise, it will be placed at the left side. Similarly, all unsorted cards are taken and put in their exact place.

### Pseudo code:
1. If it is the first element, it is already sorted.
2. Pick next element
3. Compare with all elements in the sorted sublist
4. Shift all the elements in the sorted sub-list that is greater than the value to be sorted
5. Insert the value
6. Repeat until list is sorted

### Insertion Sort Code

```cpp

#include <stdio.h>
int main()
{

    int count, current, i, j, number[100], position, swap;

    printf("Num of elements: ");
    scanf("%d", &count);

    printf("Enter %d numbers: ", count);
    printf("\n");

    for (i = 0; i < count; i++)
        scanf("%d", &number[i]);

    // insertion sort algorithm
    for (i = 1; i < count; i++)
    {
        current = number[i];
        position = i;

        // transverse back the left array until the correct position is found
        for (j = i - 1; j >= 0; j--)
        {
            if (number[j] > current)
            {
                number[j + 1] = number[j];
                position = j;
            }
            else
                break;
        }
        number[position] = current;
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
- Best Case: Ω(n)
- Average Case: θ(n<sup>2</sup>)

### Additional Resources

- [GFG Article](https://www.geeksforgeeks.org/insertion-sort/)
- [Visualization of the algorithm](https://visualgo.net/en/sorting)