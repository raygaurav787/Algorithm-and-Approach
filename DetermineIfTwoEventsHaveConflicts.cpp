class Solution {
public:
    bool haveConflict(vector<string>& event1, vector<string>& event2) {
   return event1[1]>=event2[0] && event2[1]>=event1[0];    
    }
};
// their should be 2 things 
// first being that the ending of the 
second should happen after starting of 
the first.
// second would be that we starting of
the second should be before ending
of the second
