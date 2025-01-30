//
// Created by Ugo WAREMBOURG on 30/01/2025.
//
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "linkedList.h"

Node *createNode(Parcel data) {
    Node *node = malloc(sizeof(Node));
    node->data = data;
    node->next = NULL;
    return node;
}

Node *append(Node *head, Parcel data) {
    Node *newNode = createNode(data);
    if (head == NULL) {
        return newNode;
    }
    Node *last = head;
    while (last->next != NULL) {
        last = last->next;
    }
    last->next = newNode;
    return head;
}

void insertAfter(Node *prev, Parcel data) {
    if (prev == NULL) {
        printf("[!!!] NULL\n");
        return;
    }
    Node *newNode = createNode(data);
    newNode->next = prev->next;
    prev->next = newNode;
}

void printList(Node *head) {
    Node *current = head;
    while (current != NULL) {
        printf("ID : %s, DIM: %.f x %.f x %.f\n",
               current->data.tracking_number_,
               current->data.width_,
               current->data.height_,
               current->data.depth_);
        current = current->next;
    }
    printf("END\n");
}

float volume(Parcel parcel) {
    return parcel.width_ * parcel.height_ * parcel.depth_;
}

void printVolume(Node *head) {
    Node *current = head;
    while (current != NULL) {
        printf("ID : %s, VOL: %.2f\n",
               current->data.tracking_number_,
               volume(current->data));
        current = current->next;
    }
    printf("\n");
}



