struct compare{
bool operator()(Node* head1,Node* head2){
return head1->data>head2->data;
}
    
  };
    Node* mergeKLists(vector<Node*>& arr) {
     priority_queue<Node*,vector<Node*>,compare> pq;
     int n=arr.size();
     for(int i=0;i<n;i++){
     if(arr[i]) pq.push(arr[i]);
     }
     if(pq.empty()) return nullptr;
     Node* head=pq.top();
     Node* node=head;
     while(!pq.empty()){
     Node* n=pq.top();
     pq.pop();
     if(n->next) pq.push(n->next);
     node->next=n;
     node=n;
     }
     node->next=NULL;
     return head;
        
    }
/* Here we are using an maxheap 
for which we have written custom 
function in it and so we will now 
write it to have to push all the 
elements initiatlly in it and 


then we will take each and every element
and push the next node if it exists in 
the pq and we will iterate it till the
pq will become empty and so thats how 
we will find the answer*/
