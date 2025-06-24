int helper(Node* temp){
    if(temp==NULL) return 1;
//base case reached and we add 1 when 
// We are at end
    int carry=helper(temp->next);
    temp->data+=carry;
    if(temp->data<10) return 0;
    temp->data=0;
    return 1;
    }
    
    Node* addOne(Node* head) {
    int carry=helper(head);
    if(carry==1){
    Node* newNode=new Node(1);
    newNode->next=head;
    head=newNode;
    }
    return head;
    }
};
