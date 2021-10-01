/*
https://leetcode.com/problems/koko-eating-bananas/
*/


/*

Leetcode - medium level

Trending in interview and coding rounds

Topic - Binary search

Here we will apply binary search in the linear search space for K -> [low,high].

lower bound i.e low will be 1
upper bound high will be max(piles[1....n])


*/




class Solution {
public:

    int hours_required(int no_of_bananas, vector<int> a)
    {
        int total_time = 0;

        for(int i=0; i<a.size(); i++)
            total_time += ceil(a[i]/(double)no_of_bananas);

        return total_time;
    }

    int minEatingSpeed(vector<int>& weights, int H) {
        
        int low=1;
        int high=0;
        
        // to calculate upper bound i.e 'high'

        for(int i=0;i<weights.size();i++)
            high=max(high,weights[i]); 
        
        // start of binary search on 'K'

        while(low<=high)
        {
            int mid = low + (high-low)/2;

            // validity condition
            int time=hours_required(mid,weights); 
            
            if(time>H)              // if the time exceed the given value H ,then K should be increased
                low=mid+1;
            else                    // else K should be decreased
                high=mid-1;
        }

        // returning final answer
        return low;
    }
};