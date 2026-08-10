class Solution {
public:
    bool possible(vector<int>& bloomDay, int& m, int& k,long long& day)
    {
        int count=0;
        int ans=0;
        for(int i=0;i<bloomDay.size();i++)
        {
            if(bloomDay[i]<=day)
            {
                count++;
                if(count==k)
                {
                    ans++;
                    count=0;
                }
            }else{
                    count=0;
                }
        }
        
        return ans>=m;
    }
    int minDays(vector<int>& bloomDay, int m, int k) {
        long long a=m;
        long long b=k;
        long long  x= a*b;
        if(bloomDay.size()<x)
        {
            return -1;
        }
        long long result=0;
        int low=*min_element(bloomDay.begin(),bloomDay.end());
        int high=*max_element(bloomDay.begin(),bloomDay.end());
        while(low<=high)
        {

            long long mid=low+(high-low)/2;
            if(possible(bloomDay,m,k,mid))
            {
                result=mid;
                high=mid-1;
            }
            else{
                low=mid+1;
            }

        }
        return result;

        
    }
};