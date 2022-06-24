#include<stdio.h>

void ordenamiento_insercion(int a[],int n){
    int i,j,aux;
    for(i = 1; i < n ; i++){
        j = i;
        aux = a[i];
        while(j > 0 && aux < a[j-1]){
            a[j] = a[j-1];
            j--;
        }
        a[j] = aux;
    }
    printf("\nYa ordené ascendentemente todos los elementos\n");
}

int main(){

    int a[] = {2, 63, 7, 14, 36, 48, 9, 66, 9, 23};

    ordenamiento_insercion(a, 10);

    for(int i = 0; i < 6; i++){
        printf("%i\n", a[i]);
    }

    return 0;
}






























void ordenamiento_insercion(int a[],int n){
    int i,j,aux;
    for(i = 1; i < n ; i++){
        j = i;
        aux = a[i];
        while(j > 0 && aux > a[j-1]){
            a[j] = a[j-1];
            j--;
        }
        a[j] = aux;
    }
    printf("\nYa ordené ascendentemente todos los elementos\n");
}










































/*
/*int main(){
    
    int a[] = {3, 5, 1, 4, 6}; 
    int n = 5;

    int i,j,aux;
    for(i = 1; i < n ; i++){
        j = i;
        aux = a[i];
        while(j > 0 && aux < a[j-1]){
            a[j] = a[j-1];
            j--;
        }
        a[j] = aux;
    }

    return 0;
}

// C program to sort link list
// using insertion sort
#include <stdio.h>
#include <stdlib.h>
 
typedef struct node {
    int data;
    struct node* next;
}node;
 
struct node* head = NULL;
//struct node* sorted = NULL;
 
void push(int val){
    /* allocate node 
    struct node* newnode = (struct node*)malloc(sizeof(struct node));
    newnode->data = val;
    /* link the old list off the new node 
    newnode->next = head;
    /* move the head to point to the new node 
    //head = newnode;
    head = newnode;
}
 
/*
 * function to insert a new_node in a list. Note that
 * this function expects a pointer to head_ref as this
 * can modify the head of the input linked list
 * (similar to push())
 */
/*void sortedInsert(struct node* newnode){
    /// Special case for the head end 
    if (sorted == NULL || sorted->data >= newnode->data) {
        newnode->next = sorted;
        sorted = newnode;
    }
    else {
        struct node* aux = sorted;
        //Locate the node before the point of insertion
        while (aux->next != NULL && aux->next->data < newnode->data) {
            aux = aux->next;
        }
        newnode->next = aux->next;
        aux->next = newnode;
    }
}*/
 
// function to sort a singly linked list
// using insertion sort
/*void insertionsort()
{
 
    struct node* current = head;
 
    // Traverse the given linked list and insert every
    // node to sorted
    while (current != NULL) {
 
        // Store next for next iteration
        struct node* next = current->next;
 
        // insert current in sorted linked list
        sortedInsert(current);
 
        // Update current
        current = next;
    }
    // Update head to point to sorted linked list
    head = sorted;
}
 
//ARGUMENTO??????????????
void insertionsort(){
 
    node* current = head;
    node* sorted = NULL;

    while (current != NULL) {
        node* next = current->next;

        if  (sorted == NULL || sorted->data >= current->data) {
            current->next = sorted;
            sorted = current;
        }
        else {
            node* aux = sorted;
            while (aux->next != NULL && aux->next->data < current->data) {
                aux = aux->next;
            }
            current->next = aux->next;
            aux->next = current;
        }        
        current = next;
    }
    head = sorted;
}


/* Function to print linked list 
void printlist(struct node* head){
    while (head != NULL) {
        printf("%d->", head->data);
        head = head->next;
    }
    printf("NULL");
}

// Driver program to test above functions
int main(){
 
    //node* head = NULL;
    push(5);
    push(20);
    push(4);
    push(3);
    push(30);
 
    printf("Linked List before sorting:\n");
    printlist(head);
    printf("\n");
 
    insertionsort(head);
 
    printf("Linked List after sorting:\n");
    printlist(head);
}

// This code is contributed by Sornodeep Chandra*/