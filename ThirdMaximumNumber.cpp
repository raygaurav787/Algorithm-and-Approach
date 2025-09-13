int thirdMax(vector<int>& nums) {
        long int largest = LONG_MIN;
        long int secondLargest = LONG_MIN;
        long int thirdLargest = LONG_MIN;
        for(int i=0; i<nums.size(); ++i) {
            if(nums[i] > largest) {
                thirdLargest = secondLargest;
                secondLargest = largest;
                largest = nums[i];
            }
            else if(nums[i] > secondLargest && nums[i] != largest) {
                thirdLargest = secondLargest;
                secondLargest = nums[i];
            }
            else if(nums[i] > thirdLargest && (nums[i] != secondLargest && nums[i] != largest)) {
                thirdLargest = nums[i];
            }
        }
        if(thirdLargest == LONG_MIN) return largest;
        return thirdLargest;
    }
// Using Simple Inequality and 
// not equal to (Simple Logic)
