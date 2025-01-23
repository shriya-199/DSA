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

node* head = NULL; // this is a global variable, I used this so i don't have to pass head everywhere


//1->2->3->4->5

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
void insertNodeAtStart(int x){
    node* node1 = newNode(x);
    if(head == NULL){
        head = node1;
    }
    else{
        node1->next = head;
        head = node1;
    }
}
int main(){
    int choice, data;
    while(1){
        cout<<"Enter Choice: ";
        cin>>choice;
        switch(choice){
            case 1: exit(0);
                    break;
            case 2: display();
                    break;
            
            case 3: cout<<"Enter Data: ";
                    cin>>data;
                    insertNodeAtStart(data);
                    break;
            default: cout<<"Wrong Choice."<<endl;
}
    }
}