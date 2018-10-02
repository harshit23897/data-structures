#include "ll.h"
#include<stdio.h>
#include<stdlib.h>
// getNode function creates a node for the linked list
nodeLL* getNodeLL(void *data, size_t data_size){
    nodeLL* newNode;
    newNode=(nodeLL*)malloc(sizeof(nodeLL));

    newNode->data = (void *) malloc(data_size);

    for(int i = 0; i < data_size; ++i) {
      *(char *)(newNode->data + i) = *(char *)(data + i);
    }
    newNode->link=NULL;
    return newNode;
}
// insertNodeAtEndLL funtion inserts a node to end of linked list
nodeLL* insertNodeAtEndLL(nodeLL* head, void *data, size_t data_size){
    if(head==NULL){
        head=getNodeLL(data, data_size);
    }
    else{
        head->link=insertNodeAtEndLL(head->link,data,data_size);
    }
    return head;
}
// insertNodeAtBegLL funtion inserts a node to begining og linked list
nodeLL* insertNodeAtBegLL(nodeLL* head, void *data, size_t data_size){
    if(head==NULL){
        head=getNodeLL(data, data_size);
    }
    else{
        nodeLL* newNode=getNodeLL(data, data_size);
        newNode->link=head;
        head=newNode;
    }
    return head;
}
nodeLL* newLL(void *data, size_t data_size){
    nodeLL* newLL=NULL;
    newLL=insertNodeAtEndLL(newLL,data,data_size);
}
nodeLL* deleteNodeAtBegLL(nodeLL* head){
    if(head==NULL) return head;
    nodeLL* begNode=head;
    head=head->link;
    begNode->link=NULL;
    free(begNode);
    return head;
}
void displayIntLL(nodeLL* head){
    nodeLL* traversePtr=head;
    while(traversePtr!=NULL){
        printf("%d ",*(int *)traversePtr->data);
        traversePtr=traversePtr->link;
    }
}

void displayFloatLL(nodeLL* head){
    nodeLL* traversePtr=head;
    while(traversePtr!=NULL){
        printf("%f ",*(float *)traversePtr->data);
        traversePtr=traversePtr->link;
    }
}

void displayCharLL(nodeLL* head){
    nodeLL* traversePtr=head;
    while(traversePtr!=NULL){
        printf("%s ",traversePtr->data);
        traversePtr=traversePtr->link;
    }
}
