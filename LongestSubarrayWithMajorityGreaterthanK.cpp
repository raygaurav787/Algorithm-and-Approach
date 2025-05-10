    int longestSubarray(vector<int> &arr, int k) {
        
        unordered_map<int,int>mp;
        mp[0]=-1;
        int ans=0,greaterK=0;
        for(int i=0;i<arr.size();i++){
            if(arr[i]>k)
            greaterK++;
            else
            greaterK--;
            if(greaterK>0)
            ans=i+1;
            else{
                if(mp.find(greaterK)==mp.end())
                mp[greaterK]=i;
                if(mp.find(greaterK-1)!=mp.end())
                ans=max(ans,i-mp[greaterK-1]);
            }
        }
        return ans;
    }
/* So here in his question we will take
a variable called greaterk and will 
maintain its runnning sum and so due to 
it we can keep the track at all the 
position where greaterk is positive 

Second would be that we would store the
first occurrence in the map of the greaterk

And then we would see if we have occurence
of greaterk-1 in map when greaterk<0
if yes then it means that the portion 
between i to mp[greaterk] was +ve.*/
