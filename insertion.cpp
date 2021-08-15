#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node *next;
};
void printList(Node* n)
{
    while (n != NULL) {
        cout << n->data << " ";
        n = n->next;
    }
}
/*void insertion(Node*n,int key){
    Node *q = new Node();
    q->data = key;
    q->next = n;
    n = q;
    

}*/
    


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
    printList(head);
   
    int key;
    cout<<"enter the key";
    cin>>key;
   /* insertion(head,key);*/
    Node *q = new Node();
    q->data = key;
    q->next = head;
    head = q;
    cout<<endl;
    printList(head);
   

    
    return 0;
}