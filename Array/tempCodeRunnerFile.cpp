// #include <iostream>
// using namespace std;

// class Node {
// public:
//     int data;
//     Node* next;

//     Node(int value) {
//         data = value;
//         next = nullptr;
//     }
// };

// class LinkedList {
// private:
//     Node* start;

// public:
//     LinkedList() {
//         start = nullptr;
//     }

//     void create() {
//         int value;
//         cout << "\nEnter the value of new node: ";
//         cin >> value;
//         Node* temp = new Node(value);

//         if (start == nullptr) {
//             start = temp;
//         } else {
//             Node* temp1 = start;
//             while (temp1->next != nullptr) {
//                 temp1 = temp1->next;
//             }
//             temp1->next = temp;
//         }
//         cout << "Node created successfully!" << endl;
//     }

//     void insertAtFirst() {
//         int value;
//         cout << "\nEnter the value of new node for first position: ";
//         cin >> value;
//         Node* temp = new Node(value);
//         temp->next = start;
//         start = temp;
//         cout << "1st node connected successfully..." << endl;
//     }

//     void insertAtLast() {
//         int value;
//         cout << "\nEnter the value for the last position: ";
//         cin >> value;
//         Node* temp = new Node(value);

//         if (start == nullptr) {
//             start = temp;
//         } else {
//             Node* temp1 = start;
//             while (temp1->next != nullptr) {
//                 temp1 = temp1->next;
//             }
//             temp1->next = temp;
//         }
//         cout << "Added to last node successfully!" << endl;
//     }

//     void display() {
//         if (start == nullptr) {
//             cout << "\nList is empty!" << endl;
//         } else {
//             Node* temp = start;
//             cout << "\nCurrent Linked List: ";
//             while (temp != nullptr) {
//                 cout << temp->data << " -> ";
//                 temp = temp->next;
//             }
//             cout << "NULL" << endl;
//         }
//     }
// };

// int main() {
//     LinkedList list;
//     int choice;

//     while (true) {
//         cout << "\n1 -> Create a Node"
//              << "\n2 -> Display the List"
//              << "\n3 -> Insert at First Position"
//              << "\n4 -> Insert at Last Node"
//              << "\n5 -> Exit"
//              << "\nEnter your choice: ";
//         cin >> choice;

//         switch (choice) {
//             case 1:
//                 list.create();
//                 break;
//             case 2:
//                 list.display();
//                 break;

//             case 3:
//                 list.insertAtFirst();
//                 break;
//             case 4:
//                 list.insertAtLast();
//                 break;
//             case 5:
//                 cout << "Exiting program..." << endl;
//                 return 0;
//             default:
//                 cout << "Wrong choice! Try again." << endl;
//         }
//     }
// }







#include<iostream>
using namespace std;


class node{
    public:
    int data;
    node* next;
    node(int value)
    {
        data=value;
        next =nullptr;
    }
};

class nodelist{
    node* start;
    public:
    nodelist(){
    start=nullptr;
    }

    void create(){
        int data;
        cout<<"\n Enter the value of node";
        cin>>data;
        node* temp= new node(data);
        
        if(start==nullptr){
            start=temp;
        }
        else{
            node * temp1;
            temp1=start;
            while(temp1->next!=nullptr){
                temp1=temp1->next;
            }
            temp1->next=temp;
        }
        cout<<"Node created succesfully";
    }

    void create_at_first_pos(){
        int data;
        cout<<"Enter value to create node at first position";
        cin>>data;
        node* temp = new node(data);
        if(start==nullptr){
            start=temp;
        }
        else{
            node* temp1=start;
            start=temp;
            temp->next=temp1;
        }
        cout<<"created at first node";
    }

    void created_at_given_pos(){
        int pos,value;
        cout<<"\nEnter the position where u enter value";
        cin>>pos;
        cout<<"\nEnter value of node";
        cin>>value;
        node* temp1= new node(value);
        node* temp=start;
        
        for(int i =1;i<pos-1;i++)
        {
            temp=temp->next;
        }
        temp1->next=temp->next;
        temp->next=temp1;
    }


    void delete_a_node(){
        int pos;
        cout<<"Enter position u want to delete";
        cin>>pos;
        node* temp=start;
     for(int i=0;i<pos-2;i++){
        temp=temp->next;
     }
     temp->next=temp->next->next;
    }
    void display(){
        node* temp;
        temp=start;
        if(temp->next==nullptr){
            cout<<"No node present";
        }
        else{
            while(temp!=nullptr){
                cout<<temp->data<<"->";
                temp=temp->next;
            }
            cout<<"NULL";
        }
    }

};
int main(){
        nodelist nodes;
        nodes.create();
        nodes.create();
        nodes.create();
        nodes.create();
        nodes.create();
        nodes.display();
        nodes.delete_a_node();
        nodes.display();
    }