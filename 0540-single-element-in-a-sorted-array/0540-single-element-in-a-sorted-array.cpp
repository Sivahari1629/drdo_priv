class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        if(nums.size()==1)
        {
            return nums[0];
        }

        if(nums[0]!=nums[1])
        {
            return nums[0];
        }

        if(nums[nums.size()-1]!=nums[nums.size()-2])
        {
            return nums[nums.size()-1];
        }
    int left=0;
    int right=nums.size()-1;
        while(left<=right)
        {
            int mid=left+(right-left)/2;
            if(nums[mid]!=nums[mid-1]&&nums[mid+1]!=nums[mid])
            {
                return nums[mid];
            }

            if((mid%2==0&&nums[mid]==nums[mid+1])||(mid%2==1&&nums[mid-1]==nums[mid]))
            {
                left=mid+1;
            }
            else{
                right=mid-1;
            }

        }
       return -1;
    }
};