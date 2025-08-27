void moveZeroes(vector<int>& nums) {
    int n=nums.size();
    int j=0;
    for(int i=0; i<n ; i++){
    if(nums[i]!=0){
    swap(nums[i],nums[j]);
    j++;
    }
    }
    }
// each and every index j will 
point to the place in the array 
where we can place the non zero 
element 

// So the relative order will be 
preserved and we will get all zeros
at end.
