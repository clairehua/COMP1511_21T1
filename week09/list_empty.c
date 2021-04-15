// implements functions in list.h
#include <stdlib.h>
#include <stdio.h>
#include <assert.h>
#include "list.h"

// Append to a linked list
struct node *append(struct node *head, int data) {

    return NULL;  // Replace this
}

// TODO:  Question 7
// Append a linked list to another
struct node *list_append(struct node *list1, struct node *list2) {

    // special case: list1 is empty
    if (list1 == NULL) {
        return list2;
    }

    // make a copy pointer
    struct node *curr = list1;
    
    // get the end of list 1
    while (curr->next != NULL) {
        curr = curr->next;
    }
    
    // now at the end of list 1
    // make end of list 1 = list 2
    curr->next = list2;
    
    return list1;
}

// TODO:  Question 8
// Deletes the last element of a linked list (returns NULL if list empty)
struct node *delete_last(struct node *head) {
    // case 1: empty list
    if (head == NULL) {
        return NULL;
    }
    
    // case 2: single node
    if (head->next == NULL) {
        free(head);
        return NULL;
    }
    
    struct node *curr = head;
    struct node *prev = NULL;
    // loop until ?? end??
    while (curr->next != NULL) {
        prev = curr;
        curr = curr->next;
        
    }
    // at the last node of the list
    
    // delete (free) the last node
    free(curr);
    // make second last node point to NULL
    prev->next = NULL;
    
    // below line is "use after free"
    // prev->next = curr->next;
    
    return head;
}

// TODO:  Question 10
// returns a copy of the linked list
struct node *copy(struct node *head) {
    struct node *curr = head;
    
    // copy the first node to our new list
    
    struct node *new_list = create_node(curr->data);

    struct node *new_curr = new_list;
    curr = curr->next;
    
    while (curr != NULL) {
        new_curr->next = create_node(curr->data);
        curr = curr->next;
        new_curr = new_curr->next;
    }
    
    return new_list;
}

// TODO:  Question 11
// returns 1 if the two lists are identical, otherwise returns 0
int identical(struct node *head1, struct node *head2) {
    struct node *curr1 = head1;
    struct node *curr2 = head2;
    
    // special case: both empty
    if (curr1 == NULL && curr2 == NULL) {
        return 1;
    }
    
    while (curr1 != NULL && curr2 != NULL) {
        if (curr1->data != curr2->data) {
            return 0;
        }
        curr1 = curr1->next;
        curr2 = curr2->next;
    }
    
    if (curr1 != NULL || curr2 != NULL) {
        return 0;
    }
    
    // if we reach here assume true
    return 1;
}

// returns 1 if list is in strictly increasing order, otherwise returns 0
int ordered(struct node *head) {
    return 0;   // replace this
}

// TODO:  Question 12
// given two lists in strictly increasing order,
// return a new linked list (in strictly increasing order) of the elements in 
// both set1 and set2
struct node *set_intersection(struct node *set1, struct node *set2) {
    return NULL;    // replace this
}

// given two linked lists in strictly increasing order,
// return a new linked list (in strictly increasing order) of the elements in 
// either set1 or set2
// no duplicates (only include them once)
struct node *set_union(struct node *set1, struct node *set2) {
    return NULL;    // replace this
}

// =================================

// given an array of integer values for data items
// returns the head of a linked list with these values
// in the order as they appear in the array
// size gives the size of the array
struct node *create_list(int values[], int size) {
    int i = 0;

    if (size <= 0) {
        // empty linked list (or invalid size)
        return NULL;
    }

    struct node *head = NULL;   // head of the linked list
    struct node *tmp = NULL;    // temporary item we're working with
    struct node *curr = NULL;   // current node we're looking at in the linked list

    while (i < size) {
        tmp = create_node(values[i]);

        // link this node onto our list
        if (head == NULL) {
            // this is the first node in the list
            head = tmp;
            curr = head;
        } else {
            // this is not the first node in the list
            // add it to the end, i.e. after curr
            curr->next = tmp;

            // reset curr to point at the new last node
            curr = tmp;
        }
        i = i + 1;
    }

    return head;
}

// creates a struct node with the given data value
// returns a pointer to this node
struct node *create_node(int dat) {
    struct node *new = malloc(sizeof(struct node));
    assert(new != NULL);
    new->data = dat;
    new->next = NULL;

    return new;
}

// prints out the list given the head of a list
void print_list(struct node *head) {
    struct node *curr;
    curr = head;

    while (curr != NULL) {
        printf("[ %d ]-->", curr->data);
        curr = curr->next;
    }
    printf("NULL\n");

}

// frees all the elements in a linked list
void free_list(struct node *head) {
    if (head == NULL) {
        return;
    }
    free_list(head->next);
    free(head);
}

// return the number of items in the linked list
int num_items(struct node *head) {
    struct node *curr = head;
    int count = 0;

    while (curr != NULL) {
        count = count + 1;
        curr = curr->next;
    }

    return count;
}
