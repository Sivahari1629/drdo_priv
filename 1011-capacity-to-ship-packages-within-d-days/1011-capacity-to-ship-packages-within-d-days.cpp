class Solution {
public:
    int cap(vector<int>& weights, int& capacity)
    {
       int currentLoad = 0;
       int days=1;

for(int w : weights)
{
    if(currentLoad + w > capacity)
    {
        days++;
        currentLoad = w;
    }
    else
    {
        currentLoad += w;
    }
}
return days;
    }
    int shipWithinDays(vector<int>& weights, int days) {
        int low=*max_element(weights.begin(),weights.end());
        int high=accumulate(weights.begin(),weights.end(),0);
        int fin=0;
        while(low<=high)
        {
            int mid=low+(high-low)/2;
            int d=cap(weights,mid);
            
            if(d<=days)
            {
                fin=mid;
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        

        }
        return fin;
    }
};