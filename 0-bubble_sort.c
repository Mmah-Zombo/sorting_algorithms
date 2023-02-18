#include "sort.h"
#include <stddef.h>

/**
 * bubble_sort - sorts an array of integers in \
 *               order using the Bubble sort algorithm
 * @array - pointer to the array
 * @size - size of the arrray
*/
void bubble_sort(int *array, size_t size)
{
    size_t i = 0, j;
    size_t temp;

    for (; i < size; i++) {

        for (j = 0; j < size - 1; j++) {

            if (array[j] > array[j + 1]) {
                
                temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
                print_array(array, size);
            }
        }
    }

}