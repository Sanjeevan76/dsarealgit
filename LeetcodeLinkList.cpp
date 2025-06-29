#include <iostream>
using namespace std;

class MyLinkedList {
public:
    // Node structure
    struct Node {
        int val;
        Node* next;
        Node(int x) : val(x), next(nullptr) {}
    };

    Node* head;

    // Constructor
    MyLinkedList() {
        head = nullptr;
    }

    // Get value at index
    int get(int index) {
        Node* curr = head;
        int i = 0;
        while (curr) {
            if (i == index) return curr->val;
            curr = curr->next;
            i++;
        }
        return -1; // index out of bounds
    }

    // Add at head
    void addAtHead(int val) {
        Node* newNode = new Node(val);
        newNode->next = head;
        head = newNode;
    }

    // Add at tail
    void addAtTail(int val) {
        Node* newNode = new Node(val);
        if (!head) {
            head = newNode;
            return;
        }
        Node* curr = head;
        while (curr->next) {
            curr = curr->next;
        }
        curr->next = newNode;
    }

    // Add at index
    void addAtIndex(int index, int val) {
        if (index == 0) {
            addAtHead(val);
            return;
        }

        Node* curr = head;
        int i = 0;
        while (curr && i < index - 1) {
            curr = curr->next;
            i++;
        }

        if (!curr) return; // index out of bounds

        Node* newNode = new Node(val);
        newNode->next = curr->next;
        curr->next = newNode;
    }

    // Delete at index
    void deleteAtIndex(int index) {
        if (!head) return;

        if (index == 0) {
            Node* temp = head;
            head = head->next;
            delete temp;
            return;
        }

        Node* curr = head;
        int i = 0;
        while (curr->next && i < index - 1) {
            curr = curr->next;
            i++;
        }

        if (!curr->next) return; // index out of bounds

        Node* temp = curr->next;
        curr->next = curr->next->next;
        delete temp;
    }

    // Utility: Print the list
    void printList() {
        Node* curr = head;
        while (curr) {
            cout << curr->val << " ";
            curr = curr->next;
        }
        cout << endl;
    }
};

// Driver code
int main() {
    MyLinkedList list;

    list.addAtHead(10);        // 10
    list.addAtTail(20);        // 10 -> 20
    list.addAtIndex(1, 15);    // 10 -> 15 -> 20
    list.printList();          // Output: 10 15 20

    cout << "Value at index 1: " << list.get(1) << endl; // Output: 15

    list.deleteAtIndex(1);     // 10 -> 20
    list.printList();          // Output: 10 20

    list.deleteAtIndex(0);     // 20
    list.printList();          // Output: 20

    list.deleteAtIndex(0);     // empty
    list.printList();          // Output: (empty)

    return 0;
}
