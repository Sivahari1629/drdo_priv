class Solution {
public:
    int partitions(vector<int>&nums , int maxsum)
    {
        int part=1;
        int currsum=0;
        for( int num : nums)
        {
            if(num+currsum>maxsum)
            {
                part++;
                currsum=num;
            }
            else{
                currsum+=num;
            }
        }
        return part;
    }
    int splitArray(vector<int>& nums, int k) {
        int low=*max_element(nums.begin(),nums.end());
        int high=accumulate(nums.begin(),nums.end(),0);
        
        while(low<=high)
        {
            
            int mid=(low+high)/2;
            int p=partitions(nums,mid);
            
            if(p>k)
            {
                low=mid+1;
            }
            else{
                high=mid-1;
            }
        }
        return low;
    }
};