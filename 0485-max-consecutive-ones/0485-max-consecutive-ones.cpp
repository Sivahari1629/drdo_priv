class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        if(nums.size()==1&&nums[0]==1)
        {
            return 1;
        }
        else if(nums.size()==1&&nums[0]==0){
            return 0;
        }
        int r=0;
        int l=0;
        int maxi=0;
        while(r!=nums.size())
        {
            if(nums[r]==0)
            {

               
                 l=r+1;
            }
            r++;
            maxi=max(maxi,r-l);
        }
        return maxi;
    }
};