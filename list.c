#include<stdio.h>

struct list {
    int data;
    struct list *next;
};

int main() {
    printf("Start\n");
    struct list *tmpList; // referencja

    insert(&tmpList, 2);
    insert(tmpList, 3);
    insert(tmpList, 4);
    insert(tmpList, 5);

    printList(tmpList);

    printf("End\n");
    return 0;
}

void insert(struct list *lista, int value) {
    if (lista == NULL) {
        lista = malloc(sizeof(struct list));
        lista->data = 1;
        lista->next = NULL;
    } else {

    struct list *tmpList2; // referencja = wskaznik na adres
        tmpList2= malloc(sizeof(struct list));
        tmpList2->data = 2;
        tmpList2->next = lista;
    }

}

void printList(struct list *lista) {
    struct list *tmp = lista;
    while (tmp != NULL) {
        printf("element [%d]\n", tmp->data);
        tmp = tmp->next; 
    }
}
