class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
       if(nums.size()==1){
        return nums.size();
       }
        vector<int>temp;
        for(int i=0;i<nums.size()-1;i++)
        {
            if(nums[i]!=nums[(i+1)])
            {
                temp.push_back(nums[i]);
            }
        }
        temp.push_back(nums[nums.size()-1]);
        
        nums=temp;
        return nums.size();
    }
};