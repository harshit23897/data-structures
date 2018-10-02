#include "ll.h"
#include<stdio.h>
#include<stdlib.h>
#include<string.h> // For strcmp
// Driver program to run the BST
int main()
{
    nodeLL *ll = NULL;
    while(1) {
        char s[100];
        printf("\nPlease enter choices: \n1. Insert node at beginning. \n2. Insert node at end. \n3. Delete node from beginning. \n4. Display. \n5. Exit. \n\n");
        scanf("%s", s);

        // If user chooses Exit, then terminate while loop.
        if(strcmp(s, "1") == 0) {
          char data[100];
          printf("Please enter value: ");
          scanf("%s", data);
          ll = insertNodeAtBegLL(ll, &data, sizeof(data));
        }
        else if(strcmp(s, "2") == 0) {
          char data[100];
          printf("Please enter value: ");
          scanf("%s", data);
          ll = insertNodeAtEndLL(ll, &data, sizeof(data));
        }
        else if(strcmp(s, "3") == 0) {
          ll = deleteNodeAtBegLL(ll);
        }
        else if(strcmp(s, "4") == 0) {
          printf("------------------------------\n");
          displayCharLL(ll);
          printf("\n------------------------------\n");
        }
        else if(strcmp(s, "5") == 0) {
          break;
        }
        else {
          printf("Please enter correct choice.\n");
        }
    }
    return 0;
}
