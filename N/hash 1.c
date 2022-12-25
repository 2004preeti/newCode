#include <stdio.h>
#include <stdlib.h>

struct HashNode {
    int key;
    int value;
};

const int capacity = 20;
int size = 0;

struct HashNode** arr;
struct HashNode* dummy;

// Function to add key value pair
void insert(int key, int V)
{

    struct HashNode* temp
        = (struct HashNode*)malloc(sizeof(struct HashNode));
    temp->key = key;
    temp->value = V;
 int hashIndex = key % capacity;

    // Find next free space
    while (arr[hashIndex] != NULL
           && arr[hashIndex]->key != key
           && arr[hashIndex]->key != -1) {
        hashIndex++;
        hashIndex %= capacity;
    }

    // If new node to be inserted
    // increase the current size
    if (arr[hashIndex] == NULL
        || arr[hashIndex]->key == -1)
        size++;

    arr[hashIndex] = temp;
}

// Function to delete a key value pair
int delete (int key)
{
 int hashIndex = key % capacity;

    // Finding the node with given
    // key
    while (arr[hashIndex] != NULL) {
        // if node found
        if (arr[hashIndex]->key == key) {
            // Insert dummy node here
            // for further use
            arr[hashIndex] = dummy;

            // Reduce size
            size--;

            // Return the value of the key
            return 1;
        }
        hashIndex++;
        hashIndex %= capacity;
    }

    // If not found return null
    return 0;
}
