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

void insertNodeAtEnd(int x){
    node* nd= newNode(x);
    node* current = head;

    if (head == NULL){
        head = nd;
    }
    else{
        while(current->next != NULL){
            current = current->next;
        }
        current -> next = nd;
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
void insertAtPosition(int x, int pos){
    if (pos == 1){
        insertNodeAtStart(x);
    }
    else{
        node* current = head;
        int c = 2;
        while(c<pos){
            current = current->next;
            c++;
        }
        if(current->next == NULL){
            insertNodeAtEnd(x);
        }
        else{
            node* node2=newNode(x);
            node2->next= current->next;
            current->next = node2;
        }
    } 
}

int main(){
    // display();
    // insertNodeAtEnd(1);
    // display();
    // insertNodeAtEnd(2);
    // insertNodeAtEnd(3);
    // insertNodeAtEnd(4);
    // display();
    int choice, data, position;

    while(1){
        cout<<"****************Linked List************************"<<endl;
        cout<<"1. Exit"<<endl;
        cout<<"2. Display"<<endl;
        cout<<"3. Insert at end:"<<endl;
        cout<<"4. Insert at start:"<<endl;
        cout<<"5.Insert at a position:"<<endl;
        cout<<"Enter Choice: ";

        cin>>choice;
        switch(choice){
            case 1: exit(0);
                    break;
            case 2: display();
                    break;
            
            case 3: cout<<"Enter Data: ";
                    cin>>data;
                    insertNodeAtEnd(data);
                    break;
            case 4: cout<<"Enter Data: ";
                    cin>>data;
                    insertNodeAtStart(data);
                    break;
            case 5: cout<<"Enter Data: ";
                    cin>>data;
                    cout<<"Enter Position:";
                    cin>>position;
                    insertAtPosition(data,position);
                    break;
            
            default: cout<<"Wrong Choice."<<endl;
        }
    }

    return 0;

}