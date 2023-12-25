#include <bits/stdc++.h>
using namespace std;

void reverseDLL(Node* &head, Node* &tail) {
    Node* curr = head;

    while(curr != NULL) {
        Node* temp = curr->prev;
        curr->prev = curr->next;
        curr = curr->next;
        if(curr == NULL) {
            tail->next = temp;
        } else {
            curr->prev->next = temp;
        }
    }

    curr = head;
    head = tail;
    tail = curr;
}

