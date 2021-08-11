#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node *next;
};
int sum(Node* n)
{
    int total= 0;
    while(n != NULL){
    total += n->data;
    n = n->next;
    }
    return total;
}
int main(){
    Node *head = NULL;
    Node *first = NULL;
    Node *second = NULL;
     // allocate 3 nodes in the heap
    head = new Node();
    second = new Node();
    first = new Node();
    head->data = 1; // assign data in first node
    head->next = first; // Link first node with
    // the second node
 // assign data to second node
    first->data = 2;
 
    // Link second node with the third node
    first->next = second;

 
    second->data = 3; // assign data to third node
    second->next = NULL;
    cout<<sum(head);
 
    
    return 0;
}