#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node *next;
};


Node* linearsearch(Node*n,int key){
    while(n != NULL){
        if(key == n->data){
            return n;
        }
        n = n->next;
    }
    return NULL;

}

int main(){
    Node *head = NULL;
    Node *first = NULL;
    Node *second = NULL;
    Node *third = NULL;
     // allocate 3 nodes in the heap
    head = new Node();
    second = new Node();
    first = new Node();
    third = new Node();
    head->data = 1; // assign data in first node
    head->next = first; // Link first node with
    // the second node
 // assign data to second node
    first->data = 10;
 
    // Link second node with the third node
    first->next = second;

 
    second->data = 3; // assign data to third node
    second->next = third;
    third->data = 7; // assign data to third node
    third->next = NULL;
    
   
    int key;
    cout<<"enter the key";
    cin>>key;
    

    cout<<linearsearch(head,key);
 
    
    return 0;
}