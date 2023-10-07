#include<iostream>

using namespace std;

class Node{
public:
    int data;
    Node* next;

    Node(int data)
    {
        this->data = data;
        next = NULL;
    }   
};

class LinkedList
{
public:
    Node* node;
    int data;
    
    LinkedList()
    {
        node = NULL;
    }

    void push(int data)
    {
        Node* temp = new Node(data);
        temp->next = node;
        node = temp;
    }

    void printList()
    {
        Node* temp = node;
        while (temp != NULL)
        {
            cout << temp->data << " ";
            temp = temp->next;
        }
    }

    int count(int x)
    {
        Node* current = node;
        int count = 0;
        while (current != NULL)
        {
            if (current->data == x)
            {
                count++;
            }
            current = current->next;
        }
        return count;
    }
};

int main()
{
    LinkedList l;
    l.push(1);
    l.push(2);
    l.push(3);
    l.push(4);
    l.push(5);
    l.push(6);
    l.push(7);
    l.push(8);
    l.push(9);
   
    l.printList();
    cout << endl;
    cout << l.count(1);
    return 0;
}