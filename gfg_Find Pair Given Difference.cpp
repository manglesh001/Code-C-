// Find Pair Given Difference
Problem Link
https://www.geeksforgeeks.org/problems/find-pair-given-difference1559/1


class Solution {
  public:
    int findPair(int n, int x, vector<int> &arr) {
    
    // 1 Approach
        // code here
        // for(int i=0;i<n;i++)
        // {
        //     for(int j=0;j<n;j++)
        //     {
        //         if(i!=j)
        //         {
        //             int d=arr[i]-arr[j];
        //             if(d==x)
        //             return 1;
        //         }
        //     }
        // }
        
        // 2 Approach
    //     sort(arr.begin(),arr.end());
        
    //   int i=0;
    //   int j=1;
    //   while(i<n && j<n)
    //   {
    //       int diff=arr[j]-arr[i];
    //       if(diff==x && i!=j)
    //       return 1;
    //       else if(diff<x)
    //       j++;
    //       else
    //       i++;
    //   }
   
   
   // 3 Approach     
unordered_map<int,int> mp;
for(int i=0;i<n;i++)
mp[arr[i]]=i;
for(int i=0;i<n;i++)
{
    int diff=arr[i]+x;
    if((mp.find(diff)!=mp.end()))
    {
        if(mp[diff]!=i)
        return 1;
    }
    
}

      return -1;
    }
};

