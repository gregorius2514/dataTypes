#include<stdio.h>
#include<stdlib.h>

struct linkedList {
    int value;
    struct linkedList * next;
};

struct linkedList * createListWithValue(int valueOfElement) {
    struct linkedList *current = malloc(sizeof(struct linkedList));
    current->value = valueOfElement;
    current->next = NULL;

    return current;
}

struct linkedList * appendElementToList(struct linkedList * head, int valueOfElement) {
    struct linkedList * current = malloc(sizeof(struct linkedList));
    current->value = valueOfElement;
    current->next = NULL;

    head->next = current;

    return head;
}

void printList(struct linkedList * pointerToList) {
    struct linkedList * current= pointerToList;

    while (current != NULL) {
        printf("linkedList \nvalue:%d \nnext element address:%p \n", current->value, current->next);
        current = current->next;
    }
}

int main() {
    struct linkedList * list = createListWithValue(10);

    list = appendElementToList(list, 11);
    list = appendElementToList(list, 12);
    list = appendElementToList(list, 13);
    list = appendElementToList(list, 14);
    list = appendElementToList(list, 15);
    list = appendElementToList(list, 16);
    list = appendElementToList(list, 17);

    printList(list);
    return 0;
}


