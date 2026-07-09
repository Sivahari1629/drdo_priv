class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int,int>map;
        map[0]=1;
        int count=0;
        int Prefixsum=0;
        for(int i=0;i<nums.size();i++)
        {
            Prefixsum+=nums[i];
            count+=map[Prefixsum-k];
            map[Prefixsum]++;

        }
        return count;
    }
};