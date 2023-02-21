/**
 * insertion_sort_list - Sorts a doubly linked list of integers
 *                       in ascending order using Insertion sort algorithm
 *
 * @list: Double pointer to the head of the list
 */
void insertion_sort_list(listint_t **list)
{
    listint_t *current, *sorted, *tmp;

    if (list == NULL || *list == NULL || (*list)->next == NULL)
        return;

    sorted = (*list)->next;
    while (sorted != NULL)
    {
        current = sorted;
        sorted = sorted->next;
        while (current->prev != NULL && current->n < current->prev->n)
        {
            tmp = current->prev;
            current->prev = tmp->prev;
            tmp->next = current->next;
            if (current->next != NULL)
                current->next->prev = tmp;
            current->next = tmp;
            tmp->prev = current;
            if (current->prev == NULL)
                *list = current;
            else
                current->prev->next = current;
            print_list(*list);
        }
    }
}
