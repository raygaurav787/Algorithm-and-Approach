 void reorderList(ListNode* head) {
       stack<ListNode*>st;
       ListNode* current=head;
       int length=0;
       while(current!=nullptr){
            st.push(current);
            current=current->next;
            length++;
       }
       current=head;
       int i=0;
       while(i<length/2){
        ListNode* temp=current->next;
        current->next=st.top();
        st.top()->next=temp;
        st.pop();
        i++;
        current=temp;
       }
       current->next=nullptr;
    }
};

