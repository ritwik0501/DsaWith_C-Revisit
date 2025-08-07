#include<iostream>
using namespace std;

class Node{
    public :
        int data;
    Node* next;
    Node(int val){
        data=val;
        next=NULL;
    }
};
class List{
    Node* head;
    Node* tail;
    public:
       List(){
         head=tail=NULL;
       }
       void push_front(int val){
        Node* newNode= new Node(val);
        if(head==NULL){
            head=tail=newNode;
            return ;
        }else{
            newNode->next=head;
            head=newNode;
        }
       }

       void push_back(int val){
        Node* newnode= new Node(val);
        if(head==NULL){
            head=tail=newnode;
            return ;
        }else{
            tail->next=newnode;
            tail=newnode;
            
        }
    }
        //delete from first position
        void pop_front(){
            if(head==NULL){
                cout<<"Linked List is Empty"<<endl;
               
            }
            Node* temp=head;
            head=temp->next;
            temp->next=NULL;
            delete temp;
        }
       
        //delete from back
        void pop_back(){
            Node* temp=head;
            if(head==NULL){
                cout<<"List is empty"<<endl;
                return ;
            }
            while(temp->next->next!=NULL)
            {
                temp=temp->next;
            }
            temp->next=NULL;
            delete tail;
            tail=temp;

        }

//insert at particular position
void insertLL(int val,int pos){
    if(pos<0){
        return ;
    }
    if(pos==0){
        push_front(val); 
    }
    Node* newNode=new Node(val);
    Node* temp=head;
    for(int i=1;i<pos-1;i++){
        temp=temp->next;
    }
    newNode->next=temp->next;
    temp->next=newNode;


}

int search(int val){
    Node* temp=head;
    int count=1;
    
    while(temp!=NULL){
        if(temp->data==val){
           return count;
        }else{
            temp=temp->next;
            count++;
        } 
    }
    return -1;
}
       void printLL(){
        Node* temp=head;
        if(temp==NULL){
            cout<<"Linked list is empty";
        }
        while(temp!=NULL){
            cout<<temp->data<<" ";
            temp=temp->next;
        }
       }
       
};
int main(){
List ll;
ll.push_front(1);
ll.push_front(2);
ll.push_front(3);
ll.push_back(4);
ll.push_back(45);
cout<<ll.search(2)<<endl;
// ll.insertLL(0,0);
// ll.pop_front();
ll.printLL();
}