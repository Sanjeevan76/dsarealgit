#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node(int value) {
        data = value;
        next = NULL;
    }
};

// Insert node at the end of the list
void insertAtEnd(Node*& head, int value) {
    Node* newNode = new Node(value);

    if (head == NULL) {
        head = newNode;
        return;
    }

    Node* temp = head;
    while (temp->next != NULL) {
        temp = temp->next;
    }
    temp->next = newNode;
}

// Print the entire list
void printList(Node* head) {
    Node* temp = head;
    while (temp != NULL) {
        cout << temp->data << " -> ";
        temp = temp->next;
    }
    cout << "NULL\n";
}

int main() {
    Node* head = NULL;
    int n, value;

    cout << "Kitne nodes chahiye? ";
    cin >> n;

    for (int i = 0; i < n; i++) {
        cout << "Node " << i + 1 << " ka data daalo: ";
        cin >> value;
        insertAtEnd(head, value);
    }

    cout << "\nFinal Linked List:\n";
    printList(head);

    return 0;
}
