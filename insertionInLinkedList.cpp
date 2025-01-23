#include<iostream>
using namespace std;
struct node{
    int data;
    node* next;
};
node* newNode(int x){
    node* nd = new node();
    nd->data = x;
    nd->next = NULL;
    return nd;
}
node* head = NULL;


void display(){
    if(head == NULL){
        cout<<"Linked list is empty."<<endl;
    }
    else{
        node* current = head;
        while(current != NULL){
            cout<<current->data<<"->";
            current = current->next;
        }
        cout<<endl;
    }

}
void insertAtBeginning(int x){
    node* nde = newNode(x); 
    if (head == NULL){
        head=nde;
    }
    else{
        nde->next = head;
        head = nde;
    }
}

int main(){
    int data, choice;
    while(1){
        cout<<"Enter choice:";
        cin>>choice;
        switch(choice){
        case 1:
            exit(0);
            break;
        case 2:
            display();
            break;
        case 3:
            cout<<"Enter data:";
            cin>>data;
            insertAtBeginning(data);
            break;
        default: 
            cout<<"Invalid";
    }
    }
}