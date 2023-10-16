#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

typedef struct Node{
    int element;
    struct Node *next;
} node;


/* The code without prints:
 node *head = NULL;
    head = (node *) malloc(sizeof(node));

    head->element = 1;
    head->next = NULL;

    node *current = head;

    for(int i = 2; i < 10; i ++){

        node *new_node = (node*) malloc(sizeof(node));
        new_node -> element = i;
        new_node -> next = NULL;

        current-> next = new_node;
        current = new_node;
*/


int main()
{
      node *head = NULL;
    head = (node *) malloc(sizeof(node));
    printf("Initializing <head> and seting it to NULL");
printf("\n");

    head->element = 0;
    printf("The 'element' member of <head> is 0\n");
printf("\n");
    head->next = NULL;
    printf("the 'next' member of <head> is pointing to nothing now\n");
printf("\n");
    printf("The <head> node contains now: <'%d' '%p'>", head->element,head->next, "\n");
    printf("\n");
    node *current = head;
    printf("Initializing <current> and assigning <head> values\n");
printf("\n");
    printf("The <current> node contains now: <'%d' '%p'>", current->element, current->next,"\n");
    printf("\n");
    printf("\n");
    printf("Beggining loop for creating new nodes \n");
printf("\n");
    for(int i = 1; i < 10; i ++){
        printf("Initializing a new node <new_node>\n");
printf("\n");
        node *new_node = (node*) malloc(sizeof(node));
        printf("It contains now this: <'%d' '%p'>", new_node->element, new_node->next, "\n");
printf("\n");
        new_node -> element = i;
        printf("Seting the member 'element' of <new_node> to i(%d)\n",i);
printf("\n");
        new_node -> next = NULL;
        printf("Seting the member 'next' of <new_node> to point to nothing\n");
printf("\n");
        printf("\n");

        current-> next = new_node;
        printf("Assigning the member 'next' of <current> to be <new_code>, meaning it points to it.\n");
printf("\n");
        printf("What <current> looks like now: <'%d' '%p'>", current->element, current->next, "\n");
printf("\n");
        current = new_node;
        printf("Assigning the whole <current> to have the values of <new_code>\n");
printf("\n");
        printf("<new_node>: <'%d' '%p'>", new_node->element, new_node->next, "\n");
printf("\n");
        printf("What <current> looks now: <'%d' '%p'>", current->element, current->next, "\n");
printf("\n");
}
getch();
    return 0;
}
