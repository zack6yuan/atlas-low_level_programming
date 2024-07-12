# doubly_linked_lists
## Tasks
0. Print list

Write a function that prints all the elements of a list_t list.

Prototype: size_t print_dlistint(const dlistint_t *h);

1. List length

Write a function that returns the number of elements in a linked list_t list.

Prototype: size_t dlistint_len(const dlistint_t *h);

2. Add node

Write a function that adds a new node at the beginning of a list_t list.

Prototype: dlistint_t *add_dnodeint(dlistint_t **head, const int n);

3. Add node at the end

Write a function that adds a new node at the end of a list_t list.

Prototype: dlistint_t *add_dnodeint_end(dlistint_t **head, const int n);

4. Free list

Write a function that frees a list_t list.

Prototype: void free_dlistint(dlistint_t *head);

5. Get node at index

Write a function that returns the nth node of a dlistint_t linked list.

Prototype: dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index);

6. Sum list

Write a function that returns the sum of all the data (n) of a dlistint_t linked list

Prototype: int sum_dlistint(dlistint_t *head);

7. Insert at index

Write a function that inserts a new node at a given position.

Prototype: dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n);

8. Delete at index

Write a function that deletes the node at index index of a dlistint_t linked list.

Prototype: int delete_dnodeint_at_index(dlistint_t **head, unsigned int index);
