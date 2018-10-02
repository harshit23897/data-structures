#include "ll.h"
#include<stdio.h>
#include<stdlib.h>
// Driver program to run the BST
int main()
{
    nodeLL* ll=NULL;
    nodeLL* ll1=NULL;
    char data[1000];
    int nodeLimit,loopIterator;
    printf("Enter the root node value to create a linked list instance\n");
    scanf("%s",data);
    // Create an instance of linked list
    ll=insertNodeAtEndLL(ll, &data, sizeof(data));
    printf("How many more nodes you want to enter in linked list?\n");
    scanf("%d",&nodeLimit);
    for(loopIterator=0;loopIterator<nodeLimit;loopIterator++){
        scanf("%s",data);
        // Push more data to binary search tree
        ll=insertNodeAtEndLL(ll,&data,sizeof(data));
    }
    /* Write Code here to test the various funtions for BST */
    printf("Linked list traversal:ll\n");
    displayCharLL(ll);
    printf("\n");
    int arr[] = {1, 2, 3, 4, 5, 6};
    for(int index = 0; index < sizeof(arr) / sizeof(int); ++index) {
      ll1 = insertNodeAtBegLL(ll1, &arr[index], sizeof(arr[index]));
    }
    printf("Linked list traversal:ll1\n");
    displayIntLL(ll1);
    printf("\nDelete first node from each\n");
    ll=deleteNodeAtBegLL(ll);
    ll1=deleteNodeAtBegLL(ll1);
    printf("Linked list traversal:ll\n");
    displayCharLL(ll);
    printf("\n");
    printf("Linked list traversal:ll1\n");
    displayIntLL(ll1);
    printf("\n");
    /*                                                      */
    return 0;
}
