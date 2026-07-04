class Solution {
public:
    void rotate(vector<int>& nums, int k) {
       
            vector<int>temp=nums;
            int n=temp.size();
         k=k%nums.size();
            for(int i=0;i<temp.size();i++)
            {
                nums[i]=temp[(i-k+n)%n];
                
            }
        
    }
};