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
void insertion(Node*n,int key,int data){
    Node *t = n;
    while(t->next != NULL){
        if(key == t->data){
            Node *q = new Node();
            q->data = data;
            q->next = t->next;
            t->next = q;
        }
        t = t->next;
    }

}

/*void insert(int pos,int key){
    Node *t,*p;
    if (pos ==0){
        t = new Node();
        t->data = key;
        t->next = head;
        head = t;
    }
    else if(pos>0){
        p = head;
        for(int i=0;i<pos-1 &&p!=NULL;i++){
            if(p!=NULL){
                t = new Node();
                t->data = key;
                t->next = p->next;
                p->next = t;
            }

        }
    }
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
    cin>>key;
    int data;
    cin>>data;
   
    

    insertion(head,key,data);
    cout<<endl;
    printList(head);
   

    
    return 0;
}