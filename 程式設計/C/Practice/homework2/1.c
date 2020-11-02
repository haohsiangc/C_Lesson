#include <stdio.h>
#include <stdlib.h>
typedef struct listNode {
    char data; // each listNode contains a character
    struct listNode *nextPtr; // pointer to next node
} ListNode;
typedef ListNode *ListNodePtr; // synonym for ListNode*
// prototypes
void insert(ListNodePtr *sPtr, char value);
void printList(ListNodePtr currentPtr);
void reverse(ListNodePtr *sPtr);
void printReverse(ListNodePtr currentPtr);
//main function
int main(void) {
    ListNodePtr startPtr = NULL; // initially there are no nodes
    char item; // char entered by user
    puts("Enter your choice:\n"
         "   1 to insert an element into the list.\n"
         "   2 to print list.\n"
         "   3 to reverse the list.\n"
         "   4 to exit the program\n");
    printf("%s", "? ");

    unsigned int choice; // user's choice
    scanf("%u", &choice);
    while (choice != 4) {
        switch (choice) {
        case 1:
            printf("%s", "Enter a character: ");
            scanf("\n%c", &item);
            insert(&startPtr, item); // insert item in list
            break;
        case 2:
            printList(startPtr);
            break;
        case 3:
            reverse(&startPtr);
            break;
        default:
            puts("Invalid choice.\n");
            puts("Enter your choice:\n"
                 "   1 to insert an element into the list.\n"
                 "   2 to print list.\n"
                 "   3 to reverse the list.\n"
                 "   4 to exit the program\n");
            break;
        } // end switch

        printf("%s", "? ");
        scanf("%u", &choice);
    }

    puts("End of run.");
}
// insert a new value into the list in sorted order
void insert(ListNodePtr *sPtr, char value) {
    ListNodePtr newPtr = malloc(sizeof(ListNode)); // create node

    if (newPtr != NULL) { // is space available
        newPtr->data = value; // place value in node
        newPtr->nextPtr = NULL; // node does not link to another node

        ListNodePtr previousPtr = NULL;
        ListNodePtr currentPtr = *sPtr;

        // loop to find the correct location in the list
        while (currentPtr != NULL && value > currentPtr->data) {
            previousPtr = currentPtr; // walk to ...
            currentPtr = currentPtr->nextPtr; // ... next node
        }

        // insert new node at beginning of list
        if (previousPtr == NULL) {
            newPtr->nextPtr = *sPtr;
            *sPtr = newPtr;
        } else { // insert new node between previousPtr and currentPtr
            previousPtr->nextPtr = newPtr;
            newPtr->nextPtr = currentPtr;
        }
    } else {
        printf("%c not inserted. No memory available.\n", value);
    }
}
// print the list
void printList(ListNodePtr currentPtr) {
    // if list is empty
    if (currentPtr == NULL) {
        puts("List is empty.\n");
    } else {
        puts("The list is:");

        // while not the end of the list
        while (currentPtr != NULL) {
            printf("%c --> ", currentPtr->data);
            currentPtr = currentPtr->nextPtr;
        }

        puts("NULL\n");
    }
}
void reverse(ListNodePtr *sPtr) {
    ListNodePtr previousPtr = NULL;
    ListNodePtr currentPtr = *sPtr;
    ListNodePtr Next = NULL;
    while (currentPtr != NULL) {
        //store current nextPtr
        Next = currentPtr->nextPtr;
        //link  currentPtr->nextPtr to previous node,
        //where reverse actually happen
        currentPtr->nextPtr = previousPtr;
        //move pointer to next node
        previousPtr = currentPtr;
        currentPtr = Next;
    }
    *sPtr = previousPtr;
    printReverse(previousPtr);
}
void printReverse(ListNodePtr currentPtr) {
    printf("NULL");
    while (currentPtr != NULL) {
        printf(" <-- %c", currentPtr->data);
        currentPtr = currentPtr->nextPtr;
    }
    printf("\n");
}