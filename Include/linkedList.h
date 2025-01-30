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

// Create a new node
Node *createNode(Parcel data);

// Add a new node at the end of the list
Node *append(Node *head, Parcel data);
// print list content
void printList(Node *head);
// Calculate the volume of a parcel
float volume(Parcel parcel);

// Print the volume of each parcel
void printVolume(Node *head);

// Sort the list by volume
Node *sortList(Node *head);

#endif //PRATIQUEDS_LINKEDLIST_H

