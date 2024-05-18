#Find Peak Element
Problem Link
https://www.geeksforgeeks.org/problems/find-the-highest-number2259/1
class Solution {
public:
    int findPeakElement(vector<int>& a) 
    {
        // 1 Approach O(n)
        // int maxi=INT_MIN;
        // for(auto x:a)
        // {
        //     maxi=max(x,maxi);
        // }
        // return maxi;
        
        
        // 2 Approach O(logn)
        int low=0;
        int high=a.size()-1;
        while(low<high)
        {
            int mid=low+ (high-low)/2;
            if(a[mid]<a[mid+1])
            low=mid+1;
            else if(a[mid]>a[mid+1] && a[mid-1]<a[mid])
            return a[mid];
            else
            high=mid-1;
            
            
        }
        return a[low];
        
    }
};
