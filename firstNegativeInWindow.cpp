#include <bits/stdc++.h>
using namespace std;

int main() {
	long long int t;
	cin >> t;
	while (t--) {
		long long int n, k;
		cin >> n >> k;
		long long int arr[n];
		for (long long int i = 0; i < n; i++) {
			cin >> arr[i];
		}
		vector<long long> ans =  printFirstNegativeInteger(arr, n, k);

        for(auto x: ans) cout<<x<<" ";
        cout<<endl;
	}
	return 0;
}


vector<long long> printFirstNegativeInteger(long long int arr[],
                                             long long int N, long long int k) {
        
        long long i = 0, j = 0;
        list<long long> l;
        vector<long long> v;
        while(j<N){
            if(arr[j]<0) l.push_back(arr[j]);
            
            if((j-i+1) < k) j++;
            
            else{
                if(l.size() == 0) v.push_back(0);
                else v.push_back(l.front());
                if(arr[i] == l.front()) l.pop_front();
                i++;
                j++;
            }
        }
        return v;
 }
