#include <iostream>
#include <unordered_map>
using namespace std;

// T.C --> O(m + n+ p)
// S.C --> O(m + n+ p)

class Node
{
    
public:
    int data;
    Node* next;
    
    Node(int data):data(data),next(nullptr)
    {
        //cout << "ctor" << endl;
    }
    
    ~Node()
    {
        //cout << "dtor" << endl;
    }
    
};

//insert at end
Node* push(Node* head, int data)
{
    Node* temp = head;
    while(temp->next != NULL)
    {
        temp = temp->next;
    }
    
    Node* newNode = new Node(data);
    temp->next = newNode;
    
    return head;
}

void commonElements(Node* head1,Node* head2, Node* head3)
{
    unordered_map<int,int> hm;
    
    //cout << head2->data << endl;
    while(head1 != NULL)
    {
        hm[head1->data] = 1;
        head1 = head1->next;
    }
    
    while(head2 != NULL)
    {
        if(hm.find(head2->data) != hm.end())
        {
             hm[head2->data] = 2;   
        }
        head2 = head2->next;
    }
    
    while(head3 != NULL)
    {
        if(hm.find(head3->data) != hm.end())
        {
            if(hm[head3->data] = 2)
            {
                hm[head3->data] =3;
            }
                
        }
        head3 = head3->next;
    }
     
    for(auto itr : hm)
    {
        if(itr.second == 3)
        {
            cout << (itr.first) << " ";
        }
    }
    cout << endl;

}

int main()
{
    Node* head1 = new Node(10);
    head1 = push(head1,15);
    head1 = push(head1,5);
    head1 = push(head1,20);

    Node* head2 =  new Node(8);
    head2 = push(head2,15);
    head2 = push(head2,20);
    head2 = push(head2,10);
    
    Node* head3 =  new Node(20);
    head3 = push(head3,15);
    head3 = push(head3,2);
    head3 = push(head3,10);
    
    commonElements(head1,head2,head3);
    
    delete head1;
    delete head2;
    delete head3;
    return 0;
}