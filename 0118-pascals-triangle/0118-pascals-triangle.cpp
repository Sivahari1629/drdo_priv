class Solution {
public:
vector<int>generaterows(int n)
{
    long long answ=1;
    
    vector<int>ans;
    ans.push_back(1);
    for(int i=1;i<n;i++)
    {
        answ=answ*(n-i);
        answ=answ/i;
        ans.push_back(answ);

    }
    return ans;
}

    vector<vector<int>> generate(int numRows) {
        vector<vector<int>>ans;
    for(int i=1;i<=numRows;i++)
    {
        ans.push_back(generaterows(i));
    }
    return ans;
        
    }
};