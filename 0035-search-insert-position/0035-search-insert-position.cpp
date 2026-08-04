class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int ans=0;
        int left=0;
        int right=nums.size()-1;
        while(left<=right)
        {
            int mid=left+(right-left)/2;
            if(nums[mid]==target)
            {
                ans=mid;
            }

            if(nums[mid]<target)
            {
                ans=mid+1;
                left=mid+1;
            }
            else{
                
                right=mid-1;
            }
        }
        return ans;
    }
};