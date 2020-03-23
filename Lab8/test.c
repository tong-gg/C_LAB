#include <stdio.h>
#include <stdlib.h>
typedef struct NODE {
    int value;
    struct NODE *next;
} node;

void printList(node *pList) {
  while (pList != NULL){
    printf("%d ", pList->value);
    pList = pList->next;
  }
}

void insertNode(node **head, int value) {
    node *tmpp = *head, *tmp = *head;
    int count = 0, i;
    node *newnode = (node*)malloc(sizeof(node));
    newnode->value = value;
    while (tmp != NULL) {
        tmp = tmp->next;
        //count += 1;
    }
    /*for (i = 0;i < count - 1;i++) {
        tmpp = tmpp->next;
    }*/

    if (*head == NULL) {
        newnode->next = NULL;
        *head = newnode;
    }
    else if (newnode->value <= (*head)->value) {
        newnode->next = *head;
        *head = newnode;
    }
    else {
        tmpp->next = newnode;
        newnode->next = NULL;
    }
    


}

int main(){
    int i, value;
    node *pList = NULL;
    insertNode(&pList, 3);
    insertNode(&pList, 1);
    insertNode(&pList, 2);
    insertNode(&pList, 5);
    insertNode(&pList, 4);
    insertNode(&pList, 6);
    
        
    printList(pList);
}