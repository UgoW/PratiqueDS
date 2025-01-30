#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "linkedList.h"

int main(void) {
    Node *head = NULL;


    Parcel parcel1 = {"WILLIAM", 10.0, 5.0, 2.0};
    Parcel parcel2 = {"MAXIME", 15.0, 7.0, 3.0};
    Parcel parcel3 = {"HUGO", 8.0, 4.0, 2.5};



    head = append(head, parcel1);
    head = append(head, parcel2);
    head = append(head, parcel3);

    // [x] Remplir l'inventaire des colis
    printList(head);
    printVolume(head);

    return 0;
}