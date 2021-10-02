#include <bits/stdc++.h>
using namespace std;


void ApTriplets(int arr[], int n)
{
	for (int i = 1; i < n - 1; i++)
	{
		for (int j = i - 1, k = i + 1; j >= 0 && k < n;)
		{

			if (arr[j] + arr[k] == 2 * arr[i])
			{
				cout <<"These are the AP Triplets: "<< arr[j] << " " << arr[i]	<< " " << arr[k] << endl;
				k++;
				j--;
			}

			else if (arr[j] + arr[k] < 2 * arr[i])
				k++;		
			else
				j--;		
		}
	}
}


int main()
{
  int n;
  cout<< "Number of elements you want to enter";
  cin >> n;
  cout<<"Enter array elements";
  int arr[];
  for(int i=0;i<n;i++)
  {
    cin >> arr[i];
  }
	ApTriplets(arr, n);
	return 0;
}
