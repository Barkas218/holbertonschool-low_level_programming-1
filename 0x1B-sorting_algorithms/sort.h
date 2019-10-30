#ifndef INC_0X1B_SORTING_AGORITHMS_SORT_H
#define INC_0X1B_SORTING_AGORITHMS_SORT_H

#include <stdio.h>
#include <stdlib.h>

/* Structures */

/**
 * struct listint_s - Doubly linked list node
 *
 * @n: Integer stored in the node
 * @prev: Pointer to the previous element of the list
 * @next: Pointer to the next element of the list
 */
typedef struct listint_s
{
	const int n;
	struct listint_s *prev;
	struct listint_s *next;
} listint_t;

/* Functions */

void bubble_sort(int *array, size_t size);
void insertion_sort_list(listint_t **list);
void selection_sort(int *array, size_t size);
void quick_sort(int *array, size_t size);
void print_array(const int *array, size_t size);
void print_list(const listint_t *list);
void quick_sort_lomuto(int *array, int lo, int hi, size_t size);
int partition_lomuto(int *array, int lo, int hi, size_t size);
void swap(listint_t *left, listint_t *node_2, listint_t **list);
void counting_sort(int *array, size_t size);
void algorithm_counting_sort(int *array, int size, int max);
void radix_sort(int *array, size_t size);
int get_digits_number(int n);
void algorithm_radix_sort(int *array, int *buckets, int size, int max_digits);
int _pow_recursion(int x, int y);



#endif /*INC_0X1B_SORTING_AGORITHMS_SORT_H*/
