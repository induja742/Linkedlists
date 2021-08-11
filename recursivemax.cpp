#include<iostream>
#include<climits>
#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node *next;
};
int maximum(Node* n)
{   int x =0;
    if(n == NULL){
        return INT_MIN;
    }
    else{
        x = maximum(n->next);
        if(x>n->data){
            return x;
        }
        else{
            return n->data;
        }

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
    first->data = 10;
 
    // Link second node with the third node
    first->next = second;

 
    second->data = 3; // assign data to third node
    second->next = NULL;
    cout<<maximum(head);
 
    
    return 0;
}