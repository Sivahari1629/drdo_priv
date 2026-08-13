class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int n=(nums1.size()+nums2.size());
          int n1=(n-1)/2;
        int n2=n/2;
        
        int i=0;
        int j=0;
        int count=0;
        int ind1=-1;
        int ind2=-1;
        while(i<nums1.size()&&j<nums2.size())
        {
            if(nums1[i]<nums2[j])
            {
               if(count==n1)
               {
                ind1=nums1[i];
               } 

                 if(count==n2)
               {
                ind2=nums1[i];
               }
               count++;
               i++;

            }
            else{
                 if(count==n1)
               {
                ind1=nums2[j];
               } 

                 if(count==n2)
               {
                ind2=nums2[j];
               }
               count++;
                j++;
            }
           
        }

        while(i<nums1.size())
        {
            if(count==n1)
            {
                ind1=nums1[i];
            }

            if(count==n2)
            {
                ind2=nums1[i];
            }
            count++;
            i++;
        }

           while(j<nums2.size())
        {
            if(count==n1)
            {
                ind1=nums2[j];
            }

            if(count==n2)
            {
                ind2=nums2[j];
            }
            count++;
            j++;
        }

        if(n%2==1)
        {
            return (double)ind1;
        }


        return ((double)ind1 + (double)ind2) /2.0;
    }
};