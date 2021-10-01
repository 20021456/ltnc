#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int value;
    Node *next;
};

Node *buildList(int n)
{
    Node *head, *tail;
    head = tail = nullptr;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        Node *newNode = new Node;
        newNode->value = x;
        newNode->next = nullptr;
        if (head == nullptr)
        {
            head = tail = newNode;
        }
        else
        {
            tail->next = newNode;
            tail = newNode;
        }
    }
    return head;
}

// void printReverse(Node* head, int k) {
//     Node* curr = head;
//     Node* newNode = new Node;
//     newNode->next = curr;
//     curr-> next = nullptr;
//     head = head->next;
//     while (k-- > 1) {
//         Node* temp = new Node();
//         temp->value = head->value;
//         temp->next = newNode->next;
//         newNode->next = temp;
//         head = head->next;
//     }
//     newNode = newNode->next;
//     while (newNode != nullptr) {
//         cout << newNode->value << " ";
//         newNode = newNode->next;
//     }
// }

void print(Node* head) {
    while (head != nullptr) {
        cout << head->value << " ";
        head = head->next;
    }
}

int main() {
    int n; 
    cin >> n;
    Node* head = buildList(n);
    if (head == NULL) { 
        return NULL;
    }
    Node * curr = head;
    for (int i = 0; i < n/2; ++i) {
        curr = curr -> next;
    }
    while (head -> next != nullptr) {
        Node * p1 = head;
        Node * p2 = head -> next;
        
    }
    system("pause");
}