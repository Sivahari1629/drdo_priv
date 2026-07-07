class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int>a1;
        vector<int>a2;
        if(nums.size()==0)
        {
            return nums;
        }
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]>0)
            {
                a1.push_back(nums[i]);
            }
            else{
                a2.push_back(nums[i]);


            }
        }
        int x=0;
        int y=0;
        vector<int>ans;
        for(int i=0;i<a1.size()+a2.size();i++)
        {
            if(i%2==0)
            {
                ans.push_back(a1[x++]);
            }
            if(i%2==0)
            {
                ans.push_back(a2[y++]);
            }
        }
        return ans;
    }
};