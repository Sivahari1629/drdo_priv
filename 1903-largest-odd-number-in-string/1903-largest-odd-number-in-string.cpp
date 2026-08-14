class Solution {
public:
    string largestOddNumber(string s) {
        string ans="";
        int ind=-1;
      for(int i=0;i<s.size();i++)
      {
        int x=s[i]-'0';
        if(x%2!=0)
        {
            ind=i;

        }
      }
      if(ind==-1)
      {
        return ans;
      }

      for(int i=0;i<=ind;i++)
      {
        ans+=s[i];
      }
        
        
    return ans;
    } 
   
};