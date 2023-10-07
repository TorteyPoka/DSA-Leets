//simple linked list code
//solved by Sakhawat Hossain Mahin
//ID: 213071026
//CSE 28th Batch
//SMUCT

#include <iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
};

void printList(Node* n){
    while(n!=NULL){
        cout<<n->data<<" ";
        n=n->next;
    }
}

int count(Node* head, int x){
    Node* current = head;
    int count = 0;
    while(current!=NULL){
        if(current->data == x){
            count++;
        }
        current = current->next;
    }
    return count;
}

int main()
{
    Node* head = NULL;
    Node* zero = NULL;
    Node* one = NULL;
    Node* two = NULL;
    Node* three = NULL;
    Node* four = NULL;
    Node* five = NULL;
    Node* six = NULL;
    Node* seven = NULL;
    Node* eight = NULL;
    Node* nine = NULL;
    Node* ten = NULL;
    Node* eleven = NULL;

    zero = new Node();
    one = new Node();
    two = new Node();
    three = new Node();
    four = new Node();
    five = new Node();
    six = new Node();
    seven = new Node();
    eight = new Node();
    nine = new Node();
    ten = new Node();
    eleven = new Node();
    
    head = one;
    one->data = 10;
    one->next = seven;

    seven->data = 5;
    seven->next = three;

    three->data = 12;
    three->next = eleven;

    eleven->data = 8;
    eleven->next = nine;

    nine->data = 22;
    nine->next = NULL;
    
    cout <<"Occured: " <<count(head, 8)<<endl;
    printList(head);
    return 0;
}