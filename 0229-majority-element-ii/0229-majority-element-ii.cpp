class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        map<int,int>mp;
        vector<int>ans;
        int minimum=(nums.size()/3)+1;
        for(int i=0;i<nums.size();i++)
        {
            mp[nums[i]]++;
            if(mp[nums[i]]==minimum)
            {
                ans.push_back(nums[i]);
            }
            if(ans.size()==2)
            {
                break;
            }
        }
        sort(ans.begin(),ans.end());
        return ans;
        
       

    }
};