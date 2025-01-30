#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "linkedList.h"

float CAMION_VOLUME = 180;

int main(void) {
    Node *head = NULL;

    Parcel parcel1 = {"WILLIAM", 10.0, 5.0, 2.0};
    Parcel parcel2 = {"MAXIME", 15.0, 7.0, 3.0};
    Parcel parcel3 = {"HUGO", 8.0, 4.0, 2.5};

    head = append(head, parcel1);
    head = append(head, parcel2);
    head = append(head, parcel3);

    // Remplir l'inventaire des colis
    printList(head);
    printVolume(head);

    // Générer la liste des colis pour le camion

    printf("VOL CAMION : %.2f\n", CAMION_VOLUME);
    Node *selectedParcels = NULL;
    Node *current = head;
    float currentVolume = 0.0;

    while (current != NULL) {
        float parcelVolume = volume(current->data);
        if (currentVolume + parcelVolume <= CAMION_VOLUME) {
            selectedParcels = append(selectedParcels, current->data);
            currentVolume += parcelVolume;
        }
        current = current->next;
    }
    printf("COLIS POSSIBLE: \n");
    printList(selectedParcels);
    return 0;
}