void deleteValue(Node* &head, Node* &tail, int val) {
    Node* temp = head;
    
    if(head->data == val) {
        head = head->next;
        delete temp;

        if(head != NULL) {
            head->prev = NULL;
        } else {
            tail = NULL;
        }

        return;
    }

    while(temp!=NULL) {
        if(temp->data == val) {
            val = INT_MIN;
            break;
        }

        temp = temp->next;
    }

    if(temp==NULL || val!=INT_MIN) {
        cout << "Value Not Found!" << endl;
        return;
    }
    
    temp->prev->next = temp->next;

    if(temp == tail) {
        tail = tail->prev;
    } else {
        temp->next->prev = temp->prev;
    }

    delete temp;
}