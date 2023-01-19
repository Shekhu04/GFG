class Solution{
  public:
    //Function to insert a node at the beginning of the linked list.
    Node *insertAtBegining(Node *head, int x) {
       // Your code here
     
    Node* n = new Node(x);
    if(head==nullptr){
        head=n;
        head->next=nullptr;
    return head;
    }
    n->next = head;
    head = n;
    return head;
    }


    
    
    //Function to insert a node at the end of the linked list.
    Node *insertAtEnd(Node *head, int x)  {
      
         //Your code goes here
                Node *n = new Node(x);
                n->next=nullptr;
        if(head==nullptr)
        return n;
        Node *temp=head;
        while(temp->next!=nullptr){
            temp=temp->next;
        }
        temp->next=n;
        n->next=nullptr;
        return head;
    }
        
};
