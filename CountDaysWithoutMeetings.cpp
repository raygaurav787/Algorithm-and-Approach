class Solution {
public:
    int countDays(int days, vector<vector<int>>& meetings) {
int unvisited=0;
int temp=1;
sort(meetings.begin(), meetings.end());
     
for(auto& q: meetings){
unvisited+=max(0,q[0]-temp);
temp=max(temp,q[1]+1);
if(temp>days) break;
}
return unvisited+max(0,days-temp+1);
    }
};
//This will happen with a similar concept
to merge intervals in it we will first

// make an temp variable which will be 
placed at the end of every interval 
and will be initiated with 1 and so.

// unvisited variable will keep account 
of the portion which is out of that window

// max(temp,q[1]+1) will do merging of 
overlapping intervals and so we can optimise

// o(nlogn) and we will reperat the same
step after loop.
