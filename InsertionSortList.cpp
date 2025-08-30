vector<int> arr;
    ListNode* temp = head;
    while (temp != NULL) {
    arr.push_back(temp->val);
    temp = temp->next;
    }
    sort(arr.begin(), arr.end());
    temp = head;
    int i = 0;
    while (temp != NULL) {
    temp->val = arr[i++];
    temp = temp->next;
    }
    return head;    
    }
// convert an linkedlist to an vector 
// and then we will sort the vector 
// using the inbuilt stl sort function 
// and after that we will remake 
//the linked list using the old head.
