//
// Created by Ugo WAREMBOURG on 30/01/2025.
//

#ifndef PRATIQUEDS_LINKEDLIST_H
#define PRATIQUEDS_LINKEDLIST_H

typedef struct Parcel {
    char *tracking_number_;
    float width_;
    float height_;
    float depth_;
} Parcel;

typedef struct Node {
    Parcel data;
    struct Node *next; // Pointer to the nexr node
} Node;

Node *createNode(Parcel data);
Node *append(Node *head, Parcel data);
void insertAfter(Node *prev, Parcel data);
void printList(Node *head);
float volume(Parcel parcel);
void printVolume(Node *head);

#endif //PRATIQUEDS_LINKEDLIST_H

