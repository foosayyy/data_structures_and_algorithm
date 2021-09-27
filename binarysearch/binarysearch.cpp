//time complexity will be O(log n) because we discard half of the element in every iteration


class Solution {
public:
    int search(vector<int>& nums, int target) {
        int start =0;
        int end=nums.size()-1;
        while(start<=end)
        {
            int mid=start+(end-start)/2;                    //end-start/2   this is done to avoid overflow
            
            if(target==nums[mid])                           //compare target with mid element if equal return the index
                return mid;
            
            else if(target<nums[mid])                       //if target is smaller than value at mid we only serach in left side
                end=mid-1;
            else 
                start=mid+1;                                // //if target is greater than value at mid we only serach in right side
        }
        return -1;                    //if element not present return -1;
        
    }
};
