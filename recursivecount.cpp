#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node *next;
};
int  number_of_nodes(Node* n)
{
    if(n == NULL){
        return 0;
    }
    else{
        return number_of_nodes(n->next)+1;
    }

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
    cout<<number_of_nodes(head);
 
    
    return 0;
}