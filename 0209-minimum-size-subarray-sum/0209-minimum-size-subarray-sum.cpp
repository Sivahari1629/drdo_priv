class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int mins=nums.size();
        int curr_sum=0;
        int l=0;
        int r=0;
        int freq=0;
        for(int i=0;i<nums.size();i++)
        {
            curr_sum+=nums[r];
            while(curr_sum>=target)
            {
            mins=min(mins,r-l+1);
            freq++;
            
            curr_sum-=nums[l];
            l++;

            }
            r++;

        }
        if(freq==0)
        {
            return 0;
        }

        return mins;

        
    }
};