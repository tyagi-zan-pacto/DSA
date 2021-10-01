#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while (t--) {
		int n, k;
		cin >> n >> k;
		int arr[n];
		for (int i = 0; i < n; i++) {
			cin >> arr[i];
		}
		vector<int> ans = max_of_subarrays(arr, n, k);

        for(auto x: ans) cout<<x<<" ";
        cout<<endl;
	}
	return 0;
}

    vector <int> max_of_subarrays(int *arr, int n, int k)
    {
        vector <int> ans;
        list <int> l;
        int i=0, j=0;
        
        //If K > length of the array, return single element which is the max of the array.

        // if(k>n) {
        //     ans.push_back(*max_element(arr.begin(),arr.end()));
        //     return ans;
        // }
        
        //sliding window.
        
        while(j<n){
            
            while(l.size() > 0 && l.back()<arr[j]){
                l.pop_back();
            }
            l.push_back(arr[j]);
            
            if(j-i+1 < k) j++;
            
            else if(((j-i)+1) == k){
                ans.push_back(l.front());
                
                if(arr[i] == l.front()) l.pop_front();
                
                i++;
                j++;
            }
            
        }
        return ans;
    }
