// Single Linked List
void deleteValue(Node* &head, int val) {
    Node* temp = head->next;
    Node* prev = head;
    
    if(head->data == val) {
        head = head->next;
        delete prev;
        return;
    }

    while(temp!=NULL) {
        if(temp->data == val) {
            val = INT_MIN;
            break;
        }

        prev = temp;
        temp = temp->next;
    }

    if(prev->next==NULL || val!=INT_MIN) {
        cout << "Value Not Found!" << endl;
        return;
    }
    
    prev->next = temp->next;
    delete temp;
}