#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
    Node* prev;

    Node(int d){
        data = d;
        next = NULL;
        prev = NULL;
    }
};

Node* insertHead(Node* &head, int d){
    Node* temp = new Node(d);
    head->prev = temp;
    temp->next = head;
    head = temp;
    return head;
}

Node* insertTail(Node* &tail, int d){
    Node* temp = new Node(d);
    tail->next = temp;
    temp->prev = tail;
    tail = temp;
    return tail;
}

Node* insertPosition(Node* &head, int pos, int d){
    Node* temp = new Node(d);
    if(head==NULL){
        head = temp;
        return head;
    }
    if(pos == 1){
        insertHead(head, d);
        return head;
    }
    Node* curr = head;
    int i=1;
    while(i < pos-1 && curr->next!= NULL){
        curr = curr->next; 
        i++;
    }
    if(curr->next==NULL){
        insertTail(curr, d);
    }
    temp->next = curr->next;
    curr->next->prev = temp;
    curr->next = temp;
    temp->prev = curr; 
    return head;
}
void display(Node* head){
    while(head!=NULL){
        cout<<head->data<<" ";
        head = head->next;
    }
    cout<<endl;
}

int countHead(Node* head){
    int count = 0;
    while(head!=NULL){
        head = head->next;
        count++;
    }
    return count;
}

int main(){
    Node* node = new Node(10);
    Node* head = node;
    Node* tail = node;
    display(head);
    insertHead(head, 20);
    display(head);
    insertTail(tail, 30);
    display(head);
    insertPosition(head, 3, 40);
    display(head);
    cout<<"Node Count: "<<countHead(head)<<endl;

}