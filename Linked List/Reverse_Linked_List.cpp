#include <bits/stdc++.h>
using namespace std;

//Single Linked List

void reverseLL(Node* &head) {
    Node* prev = NULL;

    while(head != NULL) {
        Node* curr = head;
        head = head->next;
        curr->next = prev;
        prev = curr;
    }

    head = prev;
}

void rec_reverseLL(Node* &head, Node* curr, Node* prev) {
    if(curr == NULL) {
        head = prev;
        return;
    }

    rec_reverseLL(head, curr->next, curr);
    curr->next = prev;
}

Node* rec_reverseLL2(Node* head) {
    if(head == NULL || head->next == NULL) {
        return head;
    }

    Node* curr = rec_reverseLL2(head->next);
    head->next->next = head;
    head->next = NULL;
    return curr;
}
