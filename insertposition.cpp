#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    
    Node (int d){
        data = d;
        next = nullptr;
    }
};

void insertHead(Node* &head, int d){
    Node *temp = new Node(d);
    temp->next = head;
    head = temp;
    return;
}

void insertTail(Node* &tail, int d){
    Node *temp = new Node(d);
    tail->next = temp;
    tail = temp;
    return;
}

void count(Node* curr){
    int total = 0;
    while(curr!= NULL){
        curr= curr->next;
        total++;
    }
    cout<<total<<endl;
} 
void display(Node* curr){
    while(curr!=NULL){
        cout<<curr->data<<" -> ";
        curr = curr->next;
    }
    cout<<"NULL"<<endl;
    return;
}

void insertPosition(Node* &head, int pos, int d){
    Node* temp = new Node(d);
    Node* curr = head;
    int i=1;
    if(pos==1){
        insertHead(curr, d);
        return;
    }
    else{
        while(i<pos-1&&curr->next!=NULL){
            curr = curr->next;
            i++;
        }
        if(curr->next==NULL){
            insertTail(curr,d);
            return;
        }
        temp->next = curr->next;
        curr->next = temp;
    }
    return;

}

int main(){
    int pos;
    cin>>pos;
    Node* node = new Node(10); 
    Node* head = node;
    Node* tail = node;
    display(head);
    insertHead(head,20);
    display(head);
    insertTail(tail,30);
    display(head);
    count(head);
    insertPosition(head, pos, 70);
    display(head);
}