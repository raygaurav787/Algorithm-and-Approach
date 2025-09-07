int countNodesinLoop(struct Node *head)
{
Node *slow=head;
   Node *fast=head;
   while(fast&&fast->next){
       slow=slow->next;
       fast=fast->next->next;
       if(slow==fast){
           fast=fast->next;
           Node *tar=slow;
           int count=1;
           while(fast!=tar){
               fast=fast->next;
               count++;
           }
           return count;
       }
   }
  return 0;
/* In this question their are 3
steps first will be that we will 
find the intersection of fast and 
slow pointer & then we will place
the slow pointer at the starting and 
after that we will iterate & incerement
the count */
