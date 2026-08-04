class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int left=0;
        int right=nums.size()-1;
        vector<int>ans;
        int ans1=-1;
        int ans2=-1;
        while(left<=right)
        {
            int mid=left+(right-left)/2;
            if(nums[mid]>=target)
            {
                ans1=mid;
                right=mid-1;
            }else{
                  left=mid+1;
            }
            

           

        }
        if(ans1==-1||nums[ans1]!=target)
        {
            return {-1,-1};
        }
        left=0;
        right=nums.size()-1;
          while(left<=right)
        {
            int mid=left+(right-left)/2;
            if(nums[mid]>target)
            {
                ans2=mid;
                right=mid-1;
            }
            else{
                left=mid+1;
            }
            

           

        }
        if(ans2==-1)
        {
            ans2=nums.size();
        }
        
        
        return {ans1,ans2-1};
    }
};