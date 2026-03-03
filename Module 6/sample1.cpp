/******************************************************************************
Linked List
-> data, *next 
*******************************************************************************/
#include <iostream>
using namespace std;

struct node {
    int data;   //store the integer value 
    node *next; //pointer to the next node in the list
};

node *start;    //global var -> first node

//methods
void createList(int d);
void AddBegin(int d);
void display();

int main()
{

    start = NULL; //indicate the list of initially empty 
    int n,m;
    
    cout << "\nHow many node you want: ";
    cin >> n;
    for (int i=0; i<n; i++){
        cout << "Enter the element: ";
        cin >> m;
        createList(m);
    }
    display();
    
    AddBegin(100);
    
    display();
    
    return 0;
}

void createList(int d){
    //note -> data, next
    node *q, *tmp;
    tmp = new node;
    tmp->data = d;
    tmp->next = NULL;
    
    if (start == NULL){
        start = tmp;
    }else {
        //start -> Node 1 -> Node 2 -> NULL 
        q = start;
        while (q->next != NULL)
            q = q->next;
        q->next = tmp;
    }

}
void AddBegin(int d){
    node *tmp;
    tmp = new node;
    tmp ->data = d;
    tmp -> next = start;
    start = tmp;
    
}
void display(){
    node *q;
    if (start == NULL){
        cout << "\nList if empty";
        return;
    }
    q = start;
    cout << "\nList values ";
    while (q != NULL){
        cout << q->data << " ";
        q = q->next;
        
    }
    cout << "\n";
}


