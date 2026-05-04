#include <bits/stdc++.h>
using namespace std;

// Definition of Node
struct Node {
    int data;
    Node* next;

    Node(int val) {
        data = val;
        next = NULL;
    }
};

// Function to insert at beginning
Node* insertAtBeginning(Node* head, int x) {
    Node* newNode = new Node(x); // Step 1
    newNode->next = head;        // Step 2
    return newNode;              // Step 3 (new head)
}

// Helper to print list
void printList(Node* head) {
    while (head != NULL) {
        cout << head->data;
        if (head->next) cout << " -> ";
        head = head->next;
    }
    cout << endl;
}

int main() {
    // Creating sample list: 2 -> 10
    Node* head = new Node(2);
    head->next = new Node(10);

    int x = 1;

    head = insertAtBeginning(head, x);

    printList(head);

    return 0;
}