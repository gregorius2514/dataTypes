#include<stdio.h>

int main() {
    int number = 100;
    int *pointerToNumber = &number;

    printf("number value:%d \nnumber address[&number]:%p \npointer addres[pointer]:%p \npointer object address[&pointer]:%p \npointer object value[*pointer]:%d \n", number, &number, pointerToNumber, &pointerToNumber, *pointerToNumber);

    return 0;
}

